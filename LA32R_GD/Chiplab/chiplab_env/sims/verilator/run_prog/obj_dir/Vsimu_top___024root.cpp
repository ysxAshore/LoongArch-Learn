// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "Vsimu_top___024root.h"
#include "Vsimu_top__Syms.h"

#include "verilated_dpi.h"

//==========

void Vsimu_top___024unit____Vdpiimwrap_v_difftest_GRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ gpr_0, QData/*63:0*/ gpr_1, QData/*63:0*/ gpr_2, QData/*63:0*/ gpr_3, QData/*63:0*/ gpr_4, QData/*63:0*/ gpr_5, QData/*63:0*/ gpr_6, QData/*63:0*/ gpr_7, QData/*63:0*/ gpr_8, QData/*63:0*/ gpr_9, QData/*63:0*/ gpr_10, QData/*63:0*/ gpr_11, QData/*63:0*/ gpr_12, QData/*63:0*/ gpr_13, QData/*63:0*/ gpr_14, QData/*63:0*/ gpr_15, QData/*63:0*/ gpr_16, QData/*63:0*/ gpr_17, QData/*63:0*/ gpr_18, QData/*63:0*/ gpr_19, QData/*63:0*/ gpr_20, QData/*63:0*/ gpr_21, QData/*63:0*/ gpr_22, QData/*63:0*/ gpr_23, QData/*63:0*/ gpr_24, QData/*63:0*/ gpr_25, QData/*63:0*/ gpr_26, QData/*63:0*/ gpr_27, QData/*63:0*/ gpr_28, QData/*63:0*/ gpr_29, QData/*63:0*/ gpr_30, QData/*63:0*/ gpr_31);
void Vsimu_top___024unit____Vdpiimwrap_v_difftest_CSRRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ crmd, QData/*63:0*/ prmd, QData/*63:0*/ euen, QData/*63:0*/ ecfg, QData/*63:0*/ estat, QData/*63:0*/ era, QData/*63:0*/ badv, QData/*63:0*/ eentry, QData/*63:0*/ tlbidx, QData/*63:0*/ tlbehi, QData/*63:0*/ tlbelo0, QData/*63:0*/ tlbelo1, QData/*63:0*/ asid, QData/*63:0*/ pgdl, QData/*63:0*/ pgdh, QData/*63:0*/ save0, QData/*63:0*/ save1, QData/*63:0*/ save2, QData/*63:0*/ save3, QData/*63:0*/ tid, QData/*63:0*/ tcfg, QData/*63:0*/ tval, QData/*63:0*/ ticlr, QData/*63:0*/ llbctl, QData/*63:0*/ tlbrentry, QData/*63:0*/ dmw0, QData/*63:0*/ dmw1);
void Vsimu_top___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*0:0*/ valid, CData/*7:0*/ code, QData/*63:0*/ pc, QData/*63:0*/ cycleCnt, QData/*63:0*/ instrCnt);
void Vsimu_top___024unit____Vdpiimwrap_v_difftest_LoadEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*7:0*/ valid, QData/*63:0*/ paddr, QData/*63:0*/ vaddr);
void Vsimu_top___024unit____Vdpiimwrap_v_difftest_StoreEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*7:0*/ valid, QData/*63:0*/ storePAddr, QData/*63:0*/ storeVAddr, QData/*63:0*/ storeData);
void Vsimu_top___024unit____Vdpiimwrap_v_difftest_ExcpEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ excp_valid, CData/*0:0*/ eret, IData/*31:0*/ intrNo, IData/*31:0*/ cause, QData/*63:0*/ exceptionPC, IData/*31:0*/ exceptionInst);
void Vsimu_top___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*0:0*/ valid, QData/*63:0*/ pc, IData/*31:0*/ instr, CData/*0:0*/ skip, CData/*0:0*/ is_TLBFILL, CData/*7:0*/ TLBFILL_index, CData/*0:0*/ is_CNTinst, QData/*63:0*/ timer_64_value, CData/*0:0*/ wen, CData/*7:0*/ wdest, QData/*63:0*/ wdata, CData/*0:0*/ csr_rstat, IData/*31:0*/ csr_data);
extern const VlUnpacked<CData/*6:0*/, 32> Vsimu_top__ConstPool__TABLE_a6bdf142_0;

VL_INLINE_OPT void Vsimu_top___024root___sequent__TOP__12(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___sequent__TOP__12\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx8;
    // Body
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__state_count 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__lfsr__DOT__r_lfsr 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__lfsr__DOT__r_lfsr;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lfsr__DOT__r_lfsr 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lfsr__DOT__r_lfsr;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step1_count 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step0_count 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur 
        = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur 
        = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__key_count 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v1 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__bd_done 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__bd_done;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf__v0 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->aresetn)))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__i = 2U;
    }
    if ((1U & (~ (IData)(vlSelf->aresetn)))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__i = 2U;
    }
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v1 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v4 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v5 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v6 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v7 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v8 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v9 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v10 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v11 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v12 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v13 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v14 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v15 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v16 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v17 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v18 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v19 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v20 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v21 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v22 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v23 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v24 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v25 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v26 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v27 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v28 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v29 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v30 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v31 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v32 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v33 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v34 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v35 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v36 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v37 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v38 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v39 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v40 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v41 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v42 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v43 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v44 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v45 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v46 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v47 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v48 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v49 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v50 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v51 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v52 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v53 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v54 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v55 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v56 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v57 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v58 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v59 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v60 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v61 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v62 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v63 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v64 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v65 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v66 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v67 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v68 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v69 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v70 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v71 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v72 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v73 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v74 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v75 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v76 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v77 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v78 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v79 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v80 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v81 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v82 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v83 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v84 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v85 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v86 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v87 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v88 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v89 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v90 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v91 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v92 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v93 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v94 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v95 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v96 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v97 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v98 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v99 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v100 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v101 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v102 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v103 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v104 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v105 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v106 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v107 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v108 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v109 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v110 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v111 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v112 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v113 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v114 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v115 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v116 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v117 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v118 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v119 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v120 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v121 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v122 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v123 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v124 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v125 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v126 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v127 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v128 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v129 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v130 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v131 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v132 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v133 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v134 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v135 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v136 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v137 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v138 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v139 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v140 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v141 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v142 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v143 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v144 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v145 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v146 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v147 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v148 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v149 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v150 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v151 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v152 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v153 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v154 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v155 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v156 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v157 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v158 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v159 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v160 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v161 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v162 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v163 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v164 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v165 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v166 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v167 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v168 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v169 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v170 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v171 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v172 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v173 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v174 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v175 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v176 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v177 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v178 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v179 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v180 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v181 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v182 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v183 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v184 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v185 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v186 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v187 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v188 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v189 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v190 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v191 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v192 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v193 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v194 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v195 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v196 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v197 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v198 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v199 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v200 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v201 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v202 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v203 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v204 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v205 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v206 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v207 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v208 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v209 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v210 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v211 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v212 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v213 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v214 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v215 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v216 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v217 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v218 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v219 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v220 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v221 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v222 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v223 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel_r_valid 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel_r_valid;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid 
        = vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid 
        = vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr7 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr7;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr5 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr5;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr4 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr4;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr3 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr3;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr2 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr2;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr1 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr1;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr6 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr6;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr0 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr0;
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_GRegState_TOP____024unit(0U, 0ULL, (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [1U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [2U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [3U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [4U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [5U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [6U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [7U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [8U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [9U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0xaU])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0xbU])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0xcU])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0xdU])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0xeU])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0xfU])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x10U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x11U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x12U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x13U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x14U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x15U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x16U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x17U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x18U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x19U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x1aU])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x1bU])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x1cU])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x1dU])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x1eU])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x1fU])));
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_CSRRegState_TOP____024unit(0U, (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd)), 0ULL, (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ecfg)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save1)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save2)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save3)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cpuid)), (QData)((IData)(
                                                                                ((0xfffffffeU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit)))), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1)));
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(0U, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__trap), 
                                                                          (7U 
                                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__trap_code)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_pc)), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cycleCnt, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__instrCnt);
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_LoadEvent_TOP____024unit(0U, 0U, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst_ld_en), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_paddr)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_vaddr)));
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_StoreEvent_TOP____024unit(0U, 0U, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst_st_en), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_paddr)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_vaddr)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_data)));
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_ExcpEvent_TOP____024unit(0U, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_excp_flush), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ertn, 
                                                                          (0x7ffU 
                                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                                                                              >> 2U)), (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_ecode), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_pc)), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst);
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_valid) {
        Vsimu_top___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(0U, 0U, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_valid), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_pc)), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst, 0U, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_tlbfill_en), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_rand_index, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_cnt_inst), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_timer_64, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wen), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdest, (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdata)), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_rstat_en, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_data);
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_ena) {
        if ((1U & (~ (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_wea))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_addr];
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_ena) {
        if ((1U & (~ (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_wea))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_addr];
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_ena) {
        if ((1U & (~ (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_wea))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_addr];
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_ena) {
        if ((1U & (~ (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_wea))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_addr];
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_ena) {
        if ((1U & (~ (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_wea))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_addr];
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_ena) {
        if ((1U & (~ (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_wea))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_addr];
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_ena) {
        if ((1U & (~ (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_wea))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_addr];
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_ena) {
        if ((1U & (~ (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_wea))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_addr];
        }
    }
    if ((1U & (~ (IData)(vlSelf->aresetn)))) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_in = 0U;
    }
    if (vlSelf->aresetn) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count 
            = (0xfffffU & ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count));
        vlSelf->num_csn = ((0x80000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                            ? ((0x40000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                ? ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                    ? 0xfeU : 0xfdU)
                                : ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                    ? 0xfbU : 0xf7U))
                            : ((0x40000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                ? ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                    ? 0xefU : 0xdfU)
                                : ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                    ? 0xbfU : 0x7fU)));
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count = 0U;
        vlSelf->num_csn = 0xffU;
    }
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__state_count 
        = ((1U & ((~ (IData)(vlSelf->aresetn)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count) 
                                                  >> 3U)))
            ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
        [vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag))))) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ACK = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = 0U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = 1U;
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = 1U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid 
                = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value) 
                            >> 2U));
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable) 
                    & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b) 
                            - (IData)(1U)));
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b = 0x9fU;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition));
    if (vlSelf->aresetn) {
        if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
              >> 0xfU) & (2U == (0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                            >> 1U))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_euen 
                = ((0xfffffffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_euen) 
                   | (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U] 
                            >> 1U)));
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_euen = 0U;
    }
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2;
    if (vlSelf->aresetn) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__lfsr__DOT__r_lfsr 
            = ((0xfeU & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__lfsr__DOT__r_lfsr)) 
               | (1U & VL_REDXOR_32((0xacU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__lfsr__DOT__r_lfsr)))));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__lfsr__DOT__r_lfsr 
            = ((1U & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__lfsr__DOT__r_lfsr)) 
               | (0xfeU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__lfsr__DOT__r_lfsr) 
                           << 1U)));
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__lfsr__DOT__r_lfsr = 0x59U;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_int 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE) 
                                       & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                          >> 0xdU)));
    if (vlSelf->aresetn) {
        if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop)) 
             | (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value;
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable) 
                    & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t 
                = (0x3ffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t) 
                             - (IData)(1U)));
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t = 0x27fU;
    }
    if (vlSelf->aresetn) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lfsr__DOT__r_lfsr 
            = ((0xfcU & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lfsr__DOT__r_lfsr)) 
               | ((2U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lfsr__DOT__r_lfsr) 
                          << 1U) ^ (0x3ffffffeU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lfsr__DOT__r_lfsr) 
                                                   >> 2U)))) 
                  | (1U & VL_REDXOR_32((0xa0U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lfsr__DOT__r_lfsr))))));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lfsr__DOT__r_lfsr 
            = ((0xf3U & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lfsr__DOT__r_lfsr)) 
               | ((8U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lfsr__DOT__r_lfsr) 
                         << 1U)) | (4U & (VL_REDXOR_32(
                                                       (6U 
                                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lfsr__DOT__r_lfsr))) 
                                          << 2U))));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lfsr__DOT__r_lfsr 
            = ((0xfU & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lfsr__DOT__r_lfsr)) 
               | (0xf0U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lfsr__DOT__r_lfsr) 
                           << 1U)));
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lfsr__DOT__r_lfsr = 0x59U;
    }
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read)
                                        ? 0U : (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int) 
                                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d)))
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier)))));
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int) 
                                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d)))
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd) 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
                                                    >> 2U)))));
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read)
                                        ? 0U : (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int) 
                                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d)))
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd) 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
                                                    >> 3U)))));
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd 
        = ((IData)(vlSelf->aresetn) & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read))
                                        ? 0U : (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int) 
                                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d)))
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier)))));
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready))) {
            vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable = 0U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) {
            vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable = 1U;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable = 0U;
    }
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step1_count 
        = ((1U & ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag))))
            ? 0U : (0xfffffU & ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count)));
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step0_count 
        = ((1U & ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag))))
            ? 0U : (0xfffffU & ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count)));
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)))) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur = 0U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur)));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)))) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur = 0U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur)));
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad 
        = (1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0)));
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__key_count 
        = ((1U & ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_flag))))
            ? 0U : (0xfffffU & ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r) 
                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r 
        = (1U & ((~ (IData)(vlSelf->aresetn)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6) 
                                                     & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d)))))));
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r 
        = (1U & ((~ (IData)(vlSelf->aresetn)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5) 
                                                     & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d)))))));
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd 
        = ((IData)(vlSelf->aresetn) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) 
                                        | ((1U == (1U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read))) 
                                           & (2U == 
                                              (0xfU 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir)))))
                                        ? 0U : (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int) 
                                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d)))
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd) 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
                                                    >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : (1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                                       >> 2U) 
                                                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d)))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : (1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r) 
                                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d)))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : (1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                                       >> 1U) 
                                                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d)))))));
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid = 0U;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_ena) {
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_addr;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_addr;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_addr;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_addr;
            }
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_ena) {
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_addr;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_addr;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_addr;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_addr;
            }
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_ena) {
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_addr;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_addr;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_addr;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_addr;
            }
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_ena) {
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_addr;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_addr;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_addr;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_addr;
            }
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_ena) {
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_addr;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_addr;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_addr;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_addr;
            }
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_ena) {
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_addr;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_addr;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_addr;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_addr;
            }
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_ena) {
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_addr;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_addr;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_addr;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_addr;
            }
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_ena) {
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_addr;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_addr;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_addr;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_addr;
            }
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_ena) {
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3_addr;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3_addr;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3_addr;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3_addr;
            }
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_ena) {
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2_addr;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2_addr;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2_addr;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2_addr;
            }
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_ena) {
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1_addr;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1_addr;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1_addr;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1_addr;
            }
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_ena) {
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0_addr;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0_addr;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0_addr;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0_addr;
            }
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_ena) {
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_addr;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_addr;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_addr;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_addr;
            }
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_ena) {
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2_addr;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2_addr;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2_addr;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2_addr;
            }
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_ena) {
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1_addr;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1_addr;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1_addr;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1_addr;
            }
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_ena) {
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0_addr;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0_addr;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0_addr;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0_addr;
            }
        }
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0 = 0U;
    }
    if (vlSelf->aresetn) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1 
            = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11))
                ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai
                : (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT) 
                    << 0x10U) | (0xffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)));
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1 
            = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9))
                ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai
                : (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT) 
                    << 0x10U) | (0xffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)));
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1 = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid 
                = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid = 0U;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid 
                = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid = 0U;
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast 
            = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast 
            = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid 
                = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid 
                = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid = 0U;
    }
    if (vlSelf->aresetn) {
        if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr)));
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr = 0U;
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready))) {
            vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable = 0U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__m0_awvalid) {
            vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable = 1U;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable = 0U;
    }
    if (vlSelf->aresetn) {
        if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr)));
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr = 0U;
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready))) {
            vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable = 0U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__m0_arvalid) {
            vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable = 1U;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable = 0U;
    }
    if (vlSelf->aresetn) {
        if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
             & ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid)) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready)) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wlast)))) {
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr)));
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number 
        = ((IData)(vlSelf->aresetn) ? (3U & ((0x800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                              ? ((0x400U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                  ? 
                                                 ((0x200U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                   ? 0U
                                                   : 
                                                  ((0x100U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                    ? 
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0x12U)
                                                    : 
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0x11U)))
                                                  : 
                                                 ((0x200U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                   ? 
                                                  ((0x100U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                    ? 
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0x10U)
                                                    : 
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0xfU))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                    ? 
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0xeU)
                                                    : 0U)))
                                              : ((0x400U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                  ? 
                                                 ((0x200U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                   ? 
                                                  ((0x100U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                    ? 
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0x15U)
                                                    : 
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0x14U))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                    ? 
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0x13U)
                                                    : 
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0x13U)))
                                                  : 
                                                 ((0x200U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                   ? 
                                                  ((0x100U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                    ? 
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0x13U)
                                                    : 
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0x12U))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                    ? 
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0x11U)
                                                    : 
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0x10U))))))
            : 0U);
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)))) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 
                = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 
                = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr));
        }
    } else {
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v1 = 1U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst 
            = (3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                             >> 0xbU)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst 
            = (3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                             >> 0xbU)));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag))))) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x55U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = 0ULL;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
        if ((1U & (~ (IData)(vlSelf->aresetn)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->aresetn)))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM = 0ULL;
        }
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM = 0x14U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM = 4U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD = 0x12345678U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM = 4U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
    } else if ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
        if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
            } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x1bU;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x1bU;
                    }
                } else if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x1aU;
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x1bU;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x1aU;
                }
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
            } else if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) 
                      & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) 
                     & (0x60U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x17U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x18U;
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) 
                            & (0xd0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                        = (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                           - (IData)(1U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x18U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) 
                             & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) 
                            & (0x70U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x18U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) 
                            & (0x15U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)))) {
                    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status)) 
                               & ((0U == vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM) 
                                  | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL)))))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = 0ULL;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL = 0U;
                    } else if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status)) 
                                & (0U != vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x800U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                ? ((0x3ff0003fffULL 
                                    & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                   | ((QData)((IData)(
                                                      (0x3fffU 
                                                       & ((IData)(1U) 
                                                          + (IData)(
                                                                    (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                     >> 0xeU)))))) 
                                      << 0xeU)) : (
                                                   (((1U 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                          >> 8U))) 
                                                     | (2U 
                                                        == 
                                                        (0xfU 
                                                         & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                            >> 8U)))) 
                                                    | (3U 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                           >> 8U))))
                                                    ? 
                                                   ((0x30003fffffULL 
                                                     & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                    | ((QData)((IData)(
                                                                       (0x3fffU 
                                                                        & ((IData)(1U) 
                                                                           + (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x16U)))))) 
                                                       << 0x16U))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                         >> 8U)))
                                                     ? 
                                                    ((0x3c003fffffULL 
                                                      & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                     | ((QData)((IData)(
                                                                        (0xfffU 
                                                                         & ((IData)(1U) 
                                                                            + (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x16U)))))) 
                                                        << 0x16U))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                          >> 8U)))
                                                      ? 
                                                     ((0x3c00ffffffULL 
                                                       & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                      | ((QData)((IData)(
                                                                         (0x3ffU 
                                                                          & ((IData)(1U) 
                                                                             + (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x18U)))))) 
                                                         << 0x18U))
                                                      : 
                                                     ((0x3001ffffffULL 
                                                       & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                      | ((QData)((IData)(
                                                                         (0x7ffU 
                                                                          & ((IData)(1U) 
                                                                             + (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x19U)))))) 
                                                         << 0x19U))))));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x18U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x60U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x19U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                    }
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                }
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x18U;
            }
        } else if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                    if (((0xaU != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                         & (0x60U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0xaU;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x17U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                            = (((((9U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 8U))) 
                                  | (0xaU == (0xfU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                 >> 8U)))) 
                                 | (0xbU == (0xfU & 
                                             (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                              >> 8U)))) 
                                | (0U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 8U))))
                                ? 2U : 3U);
                    } else if (((1U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                                & (0x60U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x17U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0xd0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                    } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                                & (0xd0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                            = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY)
                                ? 0x17U : 0x18U);
                    }
                } else if ((0x15U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x16U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                }
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                     >= (0xffU & ((IData)(1U) + ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                                 - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)))))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                } else if (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                            & (1U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status = 0U;
                } else if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                    }
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x15U;
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                }
            } else if (((0xaU != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x90U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0xaU;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x14U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM 
                    = (7U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                             >> 0xcU));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT = 1U;
            } else if ((0x70U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                         > (0xffU & (((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)) 
                                     - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                        - (IData)(1U)));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x14U;
                    } else if ((1U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                        - (IData)(1U)));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x14U;
                    } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM 
                            = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM) 
                                     - (IData)(1U)));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x14U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                        if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xffffffffff00ULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        } else if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xffffffff00ffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        } else if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xffffff00ffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        } else if ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xffff00ffffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        } else if ((5U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xff00ffffffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        } else if ((6U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xffffffffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        }
                    }
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x14U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                }
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x16U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x14U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
            }
        } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
            } else if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x12U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x11U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x12U;
            }
        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                 != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT))) {
                if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE)) 
                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 1U;
                } else if ((((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))) 
                              & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) 
                             & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) 
                            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                               < (0x3fffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT) 
                                             - (IData)(4U)))))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 1U;
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai;
                }
                if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                      > (0xffU & ((IData)(1U) + ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                                 - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) 
                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT)))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else if (((1U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer 
                        = (3U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                    if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                            = ((4U <= vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                   - (IData)(4U)) : 0U);
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count 
                            = (0x3fffU & ((4U == vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT)
                                           : ((IData)(4U) 
                                              + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count))));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
                    }
                }
            } else if (((1U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x80U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x11U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x10U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                    = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY)
                        ? 0x11U : 0x12U);
            } else if (((0x12U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x11U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x70U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x11U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            } else if ((0x15U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
                if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status)) 
                     & (0U == vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x13U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                }
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
            }
        } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                    & (0x80U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x10U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x80U;
        } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x10U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 2U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                = ((((9U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                     >> 8U))) | (0xaU 
                                                 == 
                                                 (0xfU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                     >> 8U)))) 
                    | (0xbU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                        >> 8U)))) ? 3U
                    : ((((0U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                         >> 8U))) | 
                         (0xcU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                           >> 8U)))) 
                        | (0xdU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                            >> 8U))))
                        ? 4U : 5U));
        } else if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x11U;
            if ((0x800U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                if ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    if ((1U & (~ (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                  >> 9U)))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = (0x3fffffff00ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3f800000ffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0x7fffffU 
                                                   & ((IData)(
                                                              (0x200U 
                                                               == 
                                                               (0x300U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                  >> 8U)))
                                                       : 
                                                      ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                        ? (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U))
                                                        : 
                                                       ((IData)(1U) 
                                                        + (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U)))))))) 
                                  << 8U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                            = (0x3fffU & ((1U & ((0x300U 
                                                  == 
                                                  (0x300U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x10U) 
                                                    - 
                                                    (0xfU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x10U) 
                                                   - 
                                                   (0xfU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x100U) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x100U) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    }
                } else if ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = (0x3fffffff00ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3f800000ffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0x7fffffU 
                                               & ((IData)(
                                                          (0x200U 
                                                           == 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                   ? 
                                                  ((IData)(2U) 
                                                   + (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                              >> 8U)))
                                                   : 
                                                  ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                    ? (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                               >> 8U))
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                               >> 8U)))))))) 
                              << 8U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                        = (0x3fffU & ((1U & ((0x300U 
                                              == (0x300U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((IData)(0x100U) 
                                              - (0xffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((IData)(0x100U) 
                                              - (0xffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x10U) 
                                                  - 
                                                  (0xfU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x10U) 
                                                  - 
                                                  (0xfU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                } else if ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = (0x3fffffff00ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3f800000ffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0x7fffffU 
                                               & ((IData)(
                                                          (0x200U 
                                                           == 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                   ? 
                                                  ((IData)(2U) 
                                                   + (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                              >> 8U)))
                                                   : 
                                                  ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                    ? (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                               >> 8U))
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                               >> 8U)))))))) 
                              << 8U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                        = (0x3fffU & ((1U & ((0x300U 
                                              == (0x300U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((IData)(0x100U) 
                                              - (0xffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((IData)(0x100U) 
                                              - (0xffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x10U) 
                                                  - 
                                                  (0xfU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x10U) 
                                                  - 
                                                  (0xfU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                }
            } else if ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                if ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3fffffc000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | (IData)((IData)(((IData)(
                                                      (0x200U 
                                                       == 
                                                       (0x300U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                              << 0xdU))));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0xfffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                             >> 0x10U)))))) 
                              << 0x10U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                        = (0x3fffU & ((IData)((0x300U 
                                               == (0x300U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                } else if ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3fffffc000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | (IData)((IData)(((IData)(
                                                      (0x200U 
                                                       == 
                                                       (0x300U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                              << 0xdU))));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0xfffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                             >> 0x10U)))))) 
                              << 0x10U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                        = (0x3fffU & ((IData)((0x300U 
                                               == (0x300U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3fffffe000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | (IData)((IData)(((IData)(
                                                      (0x200U 
                                                       == 
                                                       (0x300U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                              << 0xcU))));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0xfffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                             >> 0x10U)))))) 
                              << 0x10U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                        = (0x3fffU & ((IData)((0x300U 
                                               == (0x300U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x1fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x1fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xfffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xfffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                }
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                    = ((0x3ffffff000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                       | (IData)((IData)(((IData)((0x200U 
                                                   == 
                                                   (0x300U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                          << 0xbU))));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                    = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                       | ((QData)((IData)((0xfffffU 
                                           & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                         >> 0x10U)))))) 
                          << 0x10U));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                    = (0x3fffU & ((IData)((0x300U == 
                                           (0x300U 
                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                   ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                       > ((0x3fffU 
                                           & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                              >> 0x10U)) 
                                          - (0xfffU 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                       ? ((0x3fffU 
                                           & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                              >> 0x10U)) 
                                          - (0xfffU 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                       : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                   : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x7ffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x7ffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
            }
        }
    } else if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
        if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
        } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
            } else if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT))) {
                if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                     > (0xffU & ((IData)(1U) + ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                                - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)))))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            > (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                        - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            >= (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                             < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)) 
                            & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                        = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT) 
                                 - (IData)(1U)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(2U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                }
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0xaU;
            }
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
        }
    } else if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
        if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                    if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                          != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT)) 
                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_)))) {
                        if ((1U & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE)) 
                                    | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                                         & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) 
                                        & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) 
                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                                          < (0x3fffU 
                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT) 
                                                - (IData)(4U)))))) 
                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 1U;
                        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ))) {
                            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                                 == (0x3fffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT) 
                                                - (IData)(1U))))) {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count 
                                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT;
                            }
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 1U;
                        }
                        if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                              > (0xffU & ((IData)(1U) 
                                          + ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                             - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) 
                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT)))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                            - (IData)(1U)));
                        } else if (((1U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                                       & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ))))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                            - (IData)(1U)));
                        } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer)));
                            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                                 != (0x3fffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT) 
                                                - (IData)(1U))))) {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count 
                                    = (0x3fffU & ((IData)(1U) 
                                                  + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count)));
                            }
                            if ((0U != vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)) {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                    = (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                       - (IData)(1U));
                            }
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                            if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD 
                                    = (0xffffff00U 
                                       & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD);
                            } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD 
                                    = (0xffff00ffU 
                                       & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD);
                            } else if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD 
                                    = (0xff00ffffU 
                                       & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD);
                            } else if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD 
                                    = (0xffffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD);
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
                            }
                        }
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                        if ((0U == vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                        } else {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 1U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                        }
                    }
                } else if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE)) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 1U;
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                }
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 7U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                if ((0x800U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    if ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                        if ((1U & (~ (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                      >> 9U)))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                = (0x3fffffff00ULL 
                                   & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                = ((0x3f800000ffULL 
                                    & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                   | ((QData)((IData)(
                                                      (0x7fffffU 
                                                       & ((IData)(
                                                                  (0x200U 
                                                                   == 
                                                                   (0x300U 
                                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                           ? 
                                                          ((IData)(2U) 
                                                           + (IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                      >> 8U)))
                                                           : 
                                                          ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                            ? (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                       >> 8U))
                                                            : 
                                                           ((IData)(1U) 
                                                            + (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                       >> 8U)))))))) 
                                      << 8U));
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                                = (0x3fffU & ((1U & 
                                               ((0x300U 
                                                 == 
                                                 (0x300U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x100U) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x100U) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                                   ? 
                                                  ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                    > 
                                                    ((IData)(0x10U) 
                                                     - 
                                                     (0xfU 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                    ? 
                                                   ((IData)(0x10U) 
                                                    - 
                                                    (0xfU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                    : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                   : 
                                                  ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                    > 
                                                    ((IData)(0x100U) 
                                                     - 
                                                     (0xffU 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                    ? 
                                                   ((IData)(0x100U) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                    : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                        }
                    } else if ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = (0x3fffffff00ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3f800000ffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0x7fffffU 
                                                   & ((IData)(
                                                              (0x200U 
                                                               == 
                                                               (0x300U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                  >> 8U)))
                                                       : 
                                                      ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                        ? (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U))
                                                        : 
                                                       ((IData)(1U) 
                                                        + (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U)))))))) 
                                  << 8U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                            = (0x3fffU & ((1U & ((0x300U 
                                                  == 
                                                  (0x300U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x10U) 
                                                    - 
                                                    (0xfU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x10U) 
                                                   - 
                                                   (0xfU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x100U) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x100U) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    } else if ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = (0x3fffffff00ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3f800000ffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0x7fffffU 
                                                   & ((IData)(
                                                              (0x200U 
                                                               == 
                                                               (0x300U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                  >> 8U)))
                                                       : 
                                                      ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                        ? (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U))
                                                        : 
                                                       ((IData)(1U) 
                                                        + (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U)))))))) 
                                  << 8U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                            = (0x3fffU & ((1U & ((0x300U 
                                                  == 
                                                  (0x300U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x10U) 
                                                    - 
                                                    (0xfU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x10U) 
                                                   - 
                                                   (0xfU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x100U) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x100U) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    }
                } else if ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    if ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3fffffc000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | (IData)((IData)(((IData)(
                                                          (0x200U 
                                                           == 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                                  << 0xdU))));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0xfffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                 >> 0x10U)))))) 
                                  << 0x10U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                            = (0x3fffU & ((IData)((0x300U 
                                                   == 
                                                   (0x300U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((0x200U 
                                               & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0x1fffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0x1fffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    } else if ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3fffffc000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | (IData)((IData)(((IData)(
                                                          (0x200U 
                                                           == 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                                  << 0xdU))));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0xfffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                 >> 0x10U)))))) 
                                  << 0x10U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                            = (0x3fffU & ((IData)((0x300U 
                                                   == 
                                                   (0x300U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((0x200U 
                                               & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0x1fffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0x1fffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3fffffe000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | (IData)((IData)(((IData)(
                                                          (0x200U 
                                                           == 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                                  << 0xcU))));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0xfffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                 >> 0x10U)))))) 
                                  << 0x10U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                            = (0x3fffU & ((IData)((0x300U 
                                                   == 
                                                   (0x300U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((0x200U 
                                               & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0xfffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    }
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3ffffff000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | (IData)((IData)(((IData)(
                                                      (0x200U 
                                                       == 
                                                       (0x300U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                              << 0xbU))));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0xfffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                             >> 0x10U)))))) 
                              << 0x10U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                        = (0x3fffU & ((IData)((0x300U 
                                               == (0x300U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0xfffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0xfffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x7ffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x7ffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                }
            }
        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY)
                    ? 6U : 4U);
        }
    } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
        if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                  & (0x30U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                 | ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                       >> 0xbU)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                    = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY)
                        ? 3U : 4U);
            } else if (((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x30U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 3U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x30U;
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 3U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 2U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                    = ((((9U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                         >> 8U))) | 
                         (0xaU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                           >> 8U)))) 
                        | (0xbU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                            >> 8U))))
                        ? 3U : ((((0U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 8U))) 
                                  | (0xcU == (0xfU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                 >> 8U)))) 
                                 | (0xdU == (0xfU & 
                                             (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                              >> 8U))))
                                 ? 4U : 5U));
            }
        } else if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT))) {
            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                 > (0xffU & ((IData)(1U) + ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                            - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                - (IData)(1U)));
            } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                        > (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                    - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                - (IData)(1U)));
            } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                        >= (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                - (IData)(1U)));
            } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                         < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)) 
                        & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                - (IData)(1U)));
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                    = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT) 
                             - (IData)(1U)));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(2U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            }
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 2U;
        }
    } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
             == (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            - (IData)(1U)));
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                    == ((0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)) 
                        - (IData)(1U)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            - (IData)(1U)));
        } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                     < (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing))) 
                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                       > (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            - (IData)(1U)));
        } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                     <= (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)) 
                    & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            - (IData)(1U)));
        } else if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 1U;
            if (((0U != (6U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                 & (((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)) 
                     | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                    | (0x50U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                    = ((2U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                        ? 3U : 0x10U);
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            } else if (((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                         >> 2U) & (0x80U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x10U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            } else if ((0x60U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x17U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            } else if ((0x70U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            } else if ((0x90U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x14U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            } else if ((0xffU == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x1aU;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
            }
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 1U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 1U;
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM 
            = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                        >> 8U));
        if ((1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) {
            if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            }
            if ((0U == vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num;
            }
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
            if (((((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                      >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE))) 
                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                      >> 0xbU)) & ((~ (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                       >> 8U)) | ((
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                    >> 8U) 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                              >> 8U))) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)))) 
                 & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                    >> 9U))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x50U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
            } else if ((((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                            >> 1U) & (IData)((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                              >> 8U))) 
                          & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                             >> 0xbU)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half 
                    = (IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)));
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
            } else if (((((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                             >> 2U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE))) 
                          & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                             >> 0xbU)) & ((~ (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                              >> 8U)) 
                                          | (((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                               >> 8U) 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                         >> 8U))) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)))) 
                        & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                           >> 9U))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x50U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
            } else if ((((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                            >> 2U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE))) 
                         & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                            >> 0xbU)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                 >> 8U)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half 
                    = (IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)));
            } else if ((((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                            >> 2U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE))) 
                         & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                            >> 0xbU)) & (~ (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                    >> 8U))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 2U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x80U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 3U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x60U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL 
                    = (1U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                             >> 4U));
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 5U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x90U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 6U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0xffU;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 7U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            } else if ((((((((((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)) 
                               | (0x70U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                              | (0x80U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                             | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                            | (0x50U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                           | (0x60U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                          | (0x90U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                         | (0xffU == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x55U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO 
                    = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)) 
                             & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command));
                if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                }
            }
        } else {
            if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            }
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x55U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
            if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)))) {
                if ((1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num;
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = 0x3fffffffffULL;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = 0U;
                }
            }
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO 
                = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)) 
                         & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command));
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_arsize;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize 
            = (7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                             >> 8U)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_arsize;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize 
            = (7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                             >> 8U)));
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (4U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol 
                = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai) 
                         >> 6U));
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol = 0U;
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (4U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared 
                = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai) 
                         >> 7U));
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen 
            = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen));
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen 
            = (0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                               >> 4U)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen 
            = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen));
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen 
            = (0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                               >> 4U)));
    }
    if (vlSelf->aresetn) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr 
            = ((0xf0U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset)
                   ? 0U : (0xfU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr) 
                                   | (((8U & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                  << 1U)) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  (0x7fffffffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              ((~ (0x3fffffffU 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                      >> 1U))) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ 
                                                   (0x1fffffffU 
                                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                       >> 2U))))))) 
                                      ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals))))));
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr 
            = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr)) 
               | ((0x80U & (((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                              ? ((0xcU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                          << 2U)) | 
                                 ((2U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                         >> 1U)) | 
                                  (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                         >> 3U)))) : 
                             ((8U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                     << 1U)) | ((4U 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                    << 1U)) 
                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                   << 1U)))) 
                            << 7U)) | ((0x40U & (((0x10U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                                   ? 
                                                  ((0xcU 
                                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                            >> 3U))))
                                                   : 
                                                  ((8U 
                                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                       << 1U)) 
                                                   | ((4U 
                                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                          << 1U)) 
                                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                         << 1U)))) 
                                                 << 5U)) 
                                       | ((0x20U & 
                                           (((0x10U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
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
                                            << 3U)) 
                                          | (0x10U 
                                             & (((0x10U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                                  ? 
                                                 ((0xcU 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                         >> 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                           >> 3U))))
                                                  : 
                                                 ((8U 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                      << 1U)) 
                                                  | ((4U 
                                                      & ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                         << 1U)) 
                                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                        << 1U)))) 
                                                << 1U))))));
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                        >> 3U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push));
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_bvalid) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_bready))) {
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel 
                = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_araddr;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
            = (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                       >> 0xdU));
    } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) 
                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last)))) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
            = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_next;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = 0U;
        } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
                     & (0U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
                    & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = 1U;
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = 0U;
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (2U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            if ((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr 
                    = (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai) 
                             >> 6U));
            }
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr = 3U;
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (1U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            if ((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier 
                    = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai));
            }
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier;
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier = 0U;
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset) 
             | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun = 0U;
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) 
                    & (0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count)))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun = 1U;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r 
        = ((IData)(vlSelf->aresetn) & (((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)) 
                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset))
                                        ? 0U : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r) 
                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d))))));
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_bvalid) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_bready))))) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog = 0U;
    } else if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
                & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid)))) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog = 1U;
    }
    if (vlSelf->aresetn) {
        if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
             & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid)))) {
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg 
                = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r) 
                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d))))));
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant 
        = ((IData)(vlSelf->aresetn) & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma)))) 
                                       & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu))) 
                                          | ((~ (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma)) 
                                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))) 
                                             & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma)) 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant))))));
    if (vlSelf->aresetn) {
        if ((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc) 
                   | (~ (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc)))))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc 
                = (0xffffU & ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                               - (IData)(1U)) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_toggle)));
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next;
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc 
                = (0xffffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc) 
                              - (IData)(1U)));
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt = 0U;
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt 
                = (0xffU & ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))
                             ? ((IData)(0x16U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value))
                             : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value)));
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
                    & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt) 
                            - (IData)(1U)));
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt = 0U;
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__idle) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__has_int)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__idle_lock = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__has_int) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__idle_lock = 0U;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__idle_lock = 0U;
    }
    if (vlSelf->aresetn) {
        if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
              & (1U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg))) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg))) {
            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count) 
                 == (0x7fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg) 
                              >> 1U)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count)));
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = 1U;
            } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count) 
                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = 0U;
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count)));
            }
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = 0U;
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = 0U;
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_reflush)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__inst_sram_rdata_r_valid = 0U;
    } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_valid) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_data_ok)) 
                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_allowin)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__inst_sram_rdata_r_valid = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_allowin) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__inst_sram_rdata_r_valid = 0U;
    }
    if (vlSelf->aresetn) {
        if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_valid) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_reflush)) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_ready_go)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__excp_reg = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_data_ok) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__excp_reg = 0U;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__excp_reg = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count = 0U;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
        } else if ((2U == (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop)))) {
            if ((0x10U > (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)));
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 
                    = (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop)))) {
            if ((0U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count 
                    = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count) 
                                - (IData)(1U)));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 1U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            }
        } else if ((3U == (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 
                = (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in));
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count = 0U;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 1U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_reflush)))) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__bd_done = 0U;
    } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__br_taken) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__bd_done))) 
                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_valid) 
                   ^ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__preIF_ready_go) 
                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_allowin))))) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__bd_done = 1U;
    } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__bd_done) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__preIF_ready_go)) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_allowin))) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__bd_done = 0U;
    }
    if ((1U & (~ ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_reflush))))) {
        if ((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_to_if_bus 
                       >> 0x20U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_allowin)) 
             & (~ (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__preIF_ready_go) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_valid)) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_allowin))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__id_to_if_bus_r 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_to_if_bus;
        }
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_reflush)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__id_to_if_bus_r_valid = 0U;
    } else if ((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_to_if_bus 
                          >> 0x20U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_allowin)) 
                & (~ (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__preIF_ready_go) 
                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_valid)) 
                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_allowin))))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__id_to_if_bus_r_valid = 1U;
    } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__bd_done) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__preIF_ready_go)) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_allowin))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__id_to_if_bus_r_valid = 0U;
    }
    if (vlSelf->aresetn) {
        if ((1U & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid)) 
                    & (0ULL != (0x1fULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_if_bus))) 
                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__preIF_ready_go))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_if_bus;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid = 1U;
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__preIF_ready_go))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid = 0U;
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid = 0U;
    }
    if ((0x20U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf__v0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U];
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf__v0 
            = (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U]);
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_valid) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[0U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_bus[0U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[1U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_bus[1U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[2U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_bus[2U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[3U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_bus[3U];
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_valid 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_valid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64 
        = ((IData)(vlSelf->aresetn) ? (1ULL + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64)
            : 0ULL);
    if (vlSelf->aresetn) {
        if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
              >> 0xfU) & (0x43U == (0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                               >> 1U))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cntc 
                = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                    << 0x1fU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U] 
                                 >> 1U));
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cntc = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__read_respond_state) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__read_respond_state) {
                if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_rvalid))) {
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__read_respond_state = 0U;
                }
            }
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_rvalid) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_rready))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__read_respond_state = 1U;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__read_respond_state = 0U;
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tcfg_wen) 
             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U] 
                >> 1U))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval 
                = (0xfffffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                   << 0x1fU) | (0x7ffffffcU 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U] 
                                                   >> 1U))));
        } else if ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg 
                    & (0xffffffffU != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval 
                = (((0U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval) 
                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg 
                       >> 1U)) ? (0xfffffffcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg)
                    : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval 
                       - (IData)(1U)));
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval = 0xffffffffU;
    }
    if ((1U & (~ (IData)(vlSelf->aresetn)))) {
        vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay 
            = (0xffU == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random));
        vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay 
            = (0xffU == (0xffU & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid 
            = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid 
            = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_ena) {
        if ((1U & (~ (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3_wea))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3_addr];
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_ena) {
        if ((1U & (~ (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2_wea))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2_addr];
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_ena) {
        if ((1U & (~ (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1_wea))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1_addr];
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_ena) {
        if ((1U & (~ (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0_wea))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0_addr];
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_ena) {
        if ((1U & (~ (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_wea))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_addr];
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_ena) {
        if ((1U & (~ (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2_wea))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2_addr];
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_ena) {
        if ((1U & (~ (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1_wea))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1_addr];
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_ena) {
        if ((1U & (~ (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0_wea))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0_addr];
        }
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rready))) {
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel 
                = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid = 1U;
        } else if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready))) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid = 0U;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid = 1U;
        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready))) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid = 0U;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid = 0U;
    }
    if ((0x40000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U])) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1__v0 
            = (1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U]);
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1__v0 
            = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                        >> 0x19U));
    }
    if ((0x40000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U])) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1__v0 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                     >> 1U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1__v0 
            = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                        >> 0x19U));
    }
    if ((0x40000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U])) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1__v0 
            = (0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                           >> 6U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1__v0 
            = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                        >> 0x19U));
    }
    if ((0x40000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U])) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0__v0 
            = (0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[1U]);
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0__v0 
            = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                        >> 0x19U));
    }
    if ((0x40000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U])) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0__v0 
            = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
               >> 0x1eU);
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0__v0 
            = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                        >> 0x19U));
    }
    if ((0x40000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U])) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0__v0 
            = (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                     >> 0x1cU));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0__v0 
            = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                        >> 0x19U));
    }
    if ((0x40000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U])) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0__v0 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                     >> 0x1bU));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0__v0 
            = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                        >> 0x19U));
    }
    if ((0x40000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U])) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0__v0 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                     >> 0x1aU));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0__v0 
            = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                        >> 0x19U));
    }
    if ((0x40000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U])) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1__v0 
            = (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                     >> 4U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1__v0 
            = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                        >> 0x19U));
    }
    if ((0x40000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U])) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1__v0 
            = (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                     >> 2U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1__v0 
            = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                        >> 0x19U));
    }
    if (vlSelf->aresetn) {
        if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty)) 
             & ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty)) 
                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid)) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rready)) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast)))) {
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr)));
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr = 0U;
    }
    if ((0x40000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U])) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g__v0 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[1U] 
                     >> 0x14U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g__v0 
            = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                        >> 0x19U));
    }
    if ((0x40000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U])) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid__v0 
            = (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[1U] 
                         >> 0x15U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid__v0 
            = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                        >> 0x19U));
    }
    if ((0x40000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U])) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn__v0 
            = (0x7ffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                           >> 5U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn__v0 
            = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                        >> 0x19U));
    }
    if ((0x40000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U])) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps__v0 
            = (0x3fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                         << 1U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[1U] 
                                   >> 0x1fU)));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps__v0 
            = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                        >> 0x19U));
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)))) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 
                = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 
                = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr));
        }
    } else {
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v1 = 1U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__div_start_handshaked) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_sign;
    }
    if (vlSelf->aresetn) {
        if ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U])) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                = (0xfffffff8U & vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd);
            if ((4U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U])) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                    = (8U | (0xffffffe7U & vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd));
            }
        } else if ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[5U] 
                    >> 0x1fU)) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                = ((0xfffffff8U & vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd) 
                   | (7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd));
            if ((0x3fU == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                                    >> 0x10U)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                    = (0x10U | (0xffffffe7U & vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd));
            }
        } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                = ((0xfffffe00U & vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd) 
                   | (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U] 
                                >> 1U)));
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd = 8U;
    }
    if (((0U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                          >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                         >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v0 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v0 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v1 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [0U])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v2 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [0U]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v3 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                  [0U] == (0x3ffU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                             >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v4 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [0U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [0U] == (0x3ffU 
                                             & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                        >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0U] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0U]) == (0x1ffU 
                                            & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                       >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v5 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [0U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                 [0U] == (0x3ffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0U] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0U]) == (0x1ffU 
                                            & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                       >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v6 = 1U;
        }
    }
    if (((1U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                          >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                         >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v7 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v7 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v8 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [1U])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v9 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [1U]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v10 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [1U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                  [1U] == (0x3ffU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                             >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v11 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [1U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [1U] == (0x3ffU 
                                             & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                        >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [1U] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [1U]) == (0x1ffU 
                                            & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                       >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v12 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [1U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                 [1U] == (0x3ffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [1U] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [1U]) == (0x1ffU 
                                            & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                       >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v13 = 1U;
        }
    }
    if (((2U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                          >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                         >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v14 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v14 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v15 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [2U])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v16 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [2U]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v17 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [2U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                  [2U] == (0x3ffU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                             >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v18 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [2U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [2U] == (0x3ffU 
                                             & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                        >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [2U] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [2U]) == (0x1ffU 
                                            & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                       >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v19 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [2U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                 [2U] == (0x3ffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [2U] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [2U]) == (0x1ffU 
                                            & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                       >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v20 = 1U;
        }
    }
    if (((3U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                          >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                         >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v21 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v21 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v22 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [3U])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v23 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [3U]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v24 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [3U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                  [3U] == (0x3ffU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                             >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v25 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [3U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [3U] == (0x3ffU 
                                             & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                        >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [3U] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [3U]) == (0x1ffU 
                                            & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                       >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v26 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [3U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                 [3U] == (0x3ffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [3U] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [3U]) == (0x1ffU 
                                            & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                       >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v27 = 1U;
        }
    }
    if (((4U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                          >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                         >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v28 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v28 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v29 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [4U])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v30 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [4U]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v31 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [4U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                  [4U] == (0x3ffU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                             >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v32 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [4U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [4U] == (0x3ffU 
                                             & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                        >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [4U] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [4U]) == (0x1ffU 
                                            & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                       >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v33 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [4U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                 [4U] == (0x3ffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [4U] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [4U]) == (0x1ffU 
                                            & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                       >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v34 = 1U;
        }
    }
    if (((5U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                          >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                         >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v35 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v35 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v36 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [5U])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v37 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [5U]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v38 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [5U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                  [5U] == (0x3ffU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                             >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v39 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [5U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [5U] == (0x3ffU 
                                             & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                        >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [5U] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [5U]) == (0x1ffU 
                                            & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                       >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v40 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [5U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                 [5U] == (0x3ffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [5U] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [5U]) == (0x1ffU 
                                            & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                       >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v41 = 1U;
        }
    }
    if (((6U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                          >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                         >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v42 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v42 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v43 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [6U])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v44 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [6U]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v45 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [6U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                  [6U] == (0x3ffU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                             >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v46 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [6U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [6U] == (0x3ffU 
                                             & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                        >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [6U] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [6U]) == (0x1ffU 
                                            & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                       >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v47 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [6U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                 [6U] == (0x3ffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [6U] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [6U]) == (0x1ffU 
                                            & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                       >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v48 = 1U;
        }
    }
    if (((7U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                          >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                         >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v49 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v49 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v50 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [7U])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v51 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [7U]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v52 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [7U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                  [7U] == (0x3ffU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                             >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v53 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [7U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [7U] == (0x3ffU 
                                             & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                        >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [7U] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [7U]) == (0x1ffU 
                                            & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                       >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v54 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [7U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                 [7U] == (0x3ffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [7U] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [7U]) == (0x1ffU 
                                            & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                       >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v55 = 1U;
        }
    }
    if (((8U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                          >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                         >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v56 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v56 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v57 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [8U])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v58 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [8U]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v59 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [8U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                  [8U] == (0x3ffU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                             >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v60 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [8U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [8U] == (0x3ffU 
                                             & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                        >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [8U] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [8U]) == (0x1ffU 
                                            & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                       >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v61 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [8U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                 [8U] == (0x3ffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [8U] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [8U]) == (0x1ffU 
                                            & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                       >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v62 = 1U;
        }
    }
    if (((9U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                          >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                         >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v63 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v63 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v64 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [9U])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v65 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [9U]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v66 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [9U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                  [9U] == (0x3ffU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                             >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v67 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [9U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [9U] == (0x3ffU 
                                             & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                        >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [9U] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [9U]) == (0x1ffU 
                                            & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                       >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v68 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [9U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                 [9U] == (0x3ffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [9U] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [9U]) == (0x1ffU 
                                            & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                       >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v69 = 1U;
        }
    }
    if (((0xaU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                            >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                           >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v70 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v70 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v71 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [0xaU])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v72 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [0xaU]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v73 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0xaU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [0xaU] == (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v74 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [0xaU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                      [0xaU] == (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0xaU] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0xaU]) == (0x1ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v75 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [0xaU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                   [0xaU] == (0x3ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0xaU] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0xaU]) == (0x1ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v76 = 1U;
        }
    }
    if (((0xbU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                            >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                           >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v77 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v77 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v78 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [0xbU])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v79 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [0xbU]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v80 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0xbU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [0xbU] == (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v81 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [0xbU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                      [0xbU] == (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0xbU] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0xbU]) == (0x1ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v82 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [0xbU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                   [0xbU] == (0x3ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0xbU] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0xbU]) == (0x1ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v83 = 1U;
        }
    }
    if (((0xcU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                            >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                           >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v84 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v84 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v85 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [0xcU])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v86 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [0xcU]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v87 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0xcU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [0xcU] == (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v88 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [0xcU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                      [0xcU] == (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0xcU] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0xcU]) == (0x1ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v89 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [0xcU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                   [0xcU] == (0x3ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0xcU] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0xcU]) == (0x1ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v90 = 1U;
        }
    }
    if (((0xdU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                            >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                           >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v91 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v91 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v92 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [0xdU])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v93 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [0xdU]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v94 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0xdU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [0xdU] == (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v95 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [0xdU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                      [0xdU] == (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0xdU] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0xdU]) == (0x1ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v96 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [0xdU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                   [0xdU] == (0x3ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0xdU] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0xdU]) == (0x1ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v97 = 1U;
        }
    }
    if (((0xeU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                            >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                           >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v98 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v98 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v99 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [0xeU])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v100 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [0xeU]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v101 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0xeU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [0xeU] == (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v102 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [0xeU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                      [0xeU] == (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0xeU] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0xeU]) == (0x1ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v103 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [0xeU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                   [0xeU] == (0x3ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0xeU] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0xeU]) == (0x1ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v104 = 1U;
        }
    }
    if (((0xfU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                            >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                           >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v105 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v105 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v106 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [0xfU])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v107 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [0xfU]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v108 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0xfU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [0xfU] == (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v109 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [0xfU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                      [0xfU] == (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0xfU] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0xfU]) == (0x1ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v110 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [0xfU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                   [0xfU] == (0x3ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0xfU] >> 9U)) == 
                        (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                           >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0xfU]) == (0x1ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v111 = 1U;
        }
    }
    if (((0x10U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                             >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                            >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v112 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v112 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v113 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [0x10U])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v114 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [0x10U]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v115 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0x10U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [0x10U] == (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v116 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [0x10U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                       [0x10U] == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x10U] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x10U]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v117 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [0x10U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [0x10U] == (0x3ffU 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                           >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x10U] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x10U]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v118 = 1U;
        }
    }
    if (((0x11U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                             >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                            >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v119 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v119 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v120 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [0x11U])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v121 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [0x11U]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v122 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0x11U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [0x11U] == (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v123 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [0x11U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                       [0x11U] == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x11U] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x11U]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v124 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [0x11U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [0x11U] == (0x3ffU 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                           >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x11U] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x11U]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v125 = 1U;
        }
    }
    if (((0x12U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                             >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                            >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v126 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v126 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v127 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [0x12U])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v128 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [0x12U]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v129 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0x12U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [0x12U] == (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v130 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [0x12U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                       [0x12U] == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x12U] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x12U]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v131 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [0x12U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [0x12U] == (0x3ffU 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                           >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x12U] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x12U]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v132 = 1U;
        }
    }
    if (((0x13U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                             >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                            >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v133 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v133 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v134 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [0x13U])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v135 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [0x13U]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v136 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0x13U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [0x13U] == (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v137 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [0x13U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                       [0x13U] == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x13U] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x13U]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v138 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [0x13U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [0x13U] == (0x3ffU 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                           >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x13U] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x13U]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v139 = 1U;
        }
    }
    if (((0x14U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                             >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                            >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v140 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v140 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v141 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [0x14U])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v142 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [0x14U]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v143 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0x14U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [0x14U] == (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v144 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [0x14U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                       [0x14U] == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x14U] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x14U]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v145 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [0x14U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [0x14U] == (0x3ffU 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                           >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x14U] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x14U]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v146 = 1U;
        }
    }
    if (((0x15U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                             >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                            >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v147 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v147 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v148 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [0x15U])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v149 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [0x15U]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v150 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0x15U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [0x15U] == (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v151 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [0x15U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                       [0x15U] == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x15U] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x15U]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v152 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [0x15U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [0x15U] == (0x3ffU 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                           >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x15U] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x15U]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v153 = 1U;
        }
    }
    if (((0x16U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                             >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                            >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v154 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v154 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v155 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [0x16U])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v156 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [0x16U]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v157 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0x16U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [0x16U] == (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v158 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [0x16U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                       [0x16U] == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x16U] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x16U]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v159 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [0x16U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [0x16U] == (0x3ffU 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                           >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x16U] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x16U]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v160 = 1U;
        }
    }
    if (((0x17U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                             >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                            >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v161 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v161 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v162 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [0x17U])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v163 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [0x17U]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v164 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0x17U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [0x17U] == (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v165 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [0x17U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                       [0x17U] == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x17U] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x17U]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v166 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [0x17U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [0x17U] == (0x3ffU 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                           >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x17U] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x17U]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v167 = 1U;
        }
    }
    if (((0x18U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                             >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                            >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v168 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v168 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v169 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [0x18U])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v170 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [0x18U]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v171 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0x18U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [0x18U] == (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v172 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [0x18U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                       [0x18U] == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x18U] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x18U]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v173 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [0x18U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [0x18U] == (0x3ffU 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                           >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x18U] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x18U]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v174 = 1U;
        }
    }
    if (((0x19U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                             >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                            >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v175 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v175 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v176 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [0x19U])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v177 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [0x19U]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v178 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0x19U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [0x19U] == (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v179 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [0x19U])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                       [0x19U] == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x19U] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x19U]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v180 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [0x19U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [0x19U] == (0x3ffU 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                           >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x19U] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x19U]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v181 = 1U;
        }
    }
    if (((0x1aU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                             >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                            >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v182 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v182 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v183 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [0x1aU])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v184 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [0x1aU]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v185 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0x1aU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [0x1aU] == (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v186 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [0x1aU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                       [0x1aU] == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x1aU] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x1aU]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v187 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [0x1aU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [0x1aU] == (0x3ffU 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                           >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x1aU] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x1aU]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v188 = 1U;
        }
    }
    if (((0x1bU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                             >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                            >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v189 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v189 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v190 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [0x1bU])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v191 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [0x1bU]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v192 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0x1bU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [0x1bU] == (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v193 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [0x1bU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                       [0x1bU] == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x1bU] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x1bU]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v194 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [0x1bU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [0x1bU] == (0x3ffU 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                           >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x1bU] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x1bU]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v195 = 1U;
        }
    }
    if (((0x1cU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                             >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                            >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v196 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v196 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v197 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [0x1cU])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v198 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [0x1cU]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v199 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0x1cU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [0x1cU] == (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v200 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [0x1cU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                       [0x1cU] == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x1cU] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x1cU]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v201 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [0x1cU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [0x1cU] == (0x3ffU 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                           >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x1cU] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x1cU]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v202 = 1U;
        }
    }
    if (((0x1dU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                             >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                            >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v203 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v203 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v204 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [0x1dU])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v205 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [0x1dU]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v206 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0x1dU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [0x1dU] == (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v207 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [0x1dU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                       [0x1dU] == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x1dU] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x1dU]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v208 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [0x1dU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [0x1dU] == (0x3ffU 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                           >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x1dU] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x1dU]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v209 = 1U;
        }
    }
    if (((0x1eU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                             >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                            >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v210 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v210 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v211 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [0x1eU])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v212 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [0x1eU]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v213 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0x1eU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [0x1eU] == (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v214 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [0x1eU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                       [0x1eU] == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x1eU] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x1eU]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v215 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [0x1eU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [0x1eU] == (0x3ffU 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                           >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x1eU] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x1eU]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v216 = 1U;
        }
    }
    if (((0x1fU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                             >> 0x19U))) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                            >> 0x1eU))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v217 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                     >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v217 = 1U;
    } else if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                              >> 5U)))) {
        if (((0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
             | (1U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v218 = 1U;
        } else if (((2U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                    [0x1fU])) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v219 = 1U;
        } else if (((3U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                    & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                       [0x1fU]))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v220 = 1U;
        } else if ((((4U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                     & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0x1fU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [0x1fU] == (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v221 = 1U;
        } else if ((((((5U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                       & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [0x1fU])) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                       [0x1fU] == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 7U))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x1fU] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x1fU]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v222 = 1U;
        } else if (((((6U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))) 
                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                         [0x1fU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                    [0x1fU] == (0x3ffU 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                           >> 7U)))))) 
                     & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0x1fU] >> 9U)) 
                        == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 0x1aU))))) 
                    & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                        [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x1fU]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U))))))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v223 = 1U;
        }
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn)))) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel_r_valid = 0U;
    } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_taken) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_id_valid))) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_ready_go))) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel_r_valid = 1U;
    } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel_r_valid) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_id_valid))) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel_r_valid = 0U;
    }
    if ((IData)((0U != (0xcU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
            = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))
                ? 0ULL : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_iter_end);
    }
    if ((IData)((0U != (0xcU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_d;
    }
    if ((IData)((0U != (0xcU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_num_q 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_num_d;
    }
    if ((IData)((0U != (0x1cU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_d;
    }
    if ((IData)((0U != (0x1cU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_q 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_d;
    }
    if ((IData)((0U != (0xcU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q 
            = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))
                ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_cmp_res))
                    ? 0x10U : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_cmp_res))
                                ? 8U : 4U)) : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__quot_digit_iter_end));
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_too_small_q 
            = (1U & ((1U & (((0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc)) 
                             - (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc))) 
                            >> 5U)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc) 
                                       >> 5U)));
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc_q 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_valid = 0U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_allowin) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_valid 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_to_exe_valid;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_valid = 0U;
    } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel_r_valid)
                 ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel_r)
                 : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_valid = 0U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_allowin) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_valid 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_id_valid;
    }
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_pos_2_q 
            = ((((((((0x14U & (- (IData)((0U == (7U 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                            >> 0x1cU))))))) 
                     | (0x12U & (- (IData)((1U == (7U 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                              >> 0x1cU)))))))) 
                    | (0x11U & (- (IData)((2U == (7U 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                             >> 0x1cU)))))))) 
                   | (0x10U & (- (IData)((3U == (7U 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                            >> 0x1cU)))))))) 
                  | (0xeU & (- (IData)((4U == (7U & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                             >> 0x1cU)))))))) 
                 | (0xcU & (- (IData)((5U == (7U & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                            >> 0x1cU)))))))) 
                | (0xaU & (- (IData)((6U == (7U & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                           >> 0x1cU)))))))) 
               | (0xaU & (- (IData)((7U == (7U & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                          >> 0x1cU))))))));
    }
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_pos_1_q 
            = ((((2U & ((((- (IData)((0U == (7U & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                           >> 0x1cU)))))) 
                          | (- (IData)((1U == (7U & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                             >> 0x1cU))))))) 
                         | (- (IData)((2U == (7U & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                            >> 0x1cU))))))) 
                        | (- (IData)((3U == (7U & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                           >> 0x1cU)))))))) 
                 | (1U & (- (IData)((4U == (7U & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                          >> 0x1cU)))))))) 
                | (1U & (- (IData)((5U == (7U & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                         >> 0x1cU)))))))) 
               | (1U & (- (IData)((6U == (7U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                        >> 0x1cU))))))));
    }
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_neg_0_q 
            = ((((((((2U & (- (IData)((0U == (7U & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                            >> 0x1cU))))))) 
                     | (3U & (- (IData)((1U == (7U 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                           >> 0x1cU)))))))) 
                    | (3U & (- (IData)((2U == (7U & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                             >> 0x1cU)))))))) 
                   | (3U & (- (IData)((3U == (7U & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                            >> 0x1cU)))))))) 
                  | (3U & (- (IData)((4U == (7U & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                           >> 0x1cU)))))))) 
                 | (4U & (- (IData)((5U == (7U & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                          >> 0x1cU)))))))) 
                | (4U & (- (IData)((6U == (7U & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                         >> 0x1cU)))))))) 
               | (4U & (- (IData)((7U == (7U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                        >> 0x1cU))))))));
    }
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_neg_1_q 
            = ((((((((0xdU & (- (IData)((0U == (7U 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                           >> 0x1cU))))))) 
                     | (0xfU & (- (IData)((1U == (7U 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                             >> 0x1cU)))))))) 
                    | (0x10U & (- (IData)((2U == (7U 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                             >> 0x1cU)))))))) 
                   | (0x12U & (- (IData)((3U == (7U 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                            >> 0x1cU)))))))) 
                  | (0x13U & (- (IData)((4U == (7U 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                           >> 0x1cU)))))))) 
                 | (0x14U & (- (IData)((5U == (7U & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                             >> 0x1cU)))))))) 
                | (0x16U & (- (IData)((6U == (7U & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                            >> 0x1cU)))))))) 
               | (0x18U & (- (IData)((7U == (7U & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                           >> 0x1cU))))))));
    }
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__special_divisor_q 
            = ((0U == (7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                     >> 0x1cU)))) | 
               (4U == (7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                     >> 0x1cU)))));
    }
    if ((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__div_start_handshaked) 
               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q) 
                   >> 2U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q) 
                             >> 5U))))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__quot_sign_q 
            = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_sign) 
                  ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_sign)));
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__no_iter_needed_q 
            = ((0x1fU == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc))) 
               & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                          >> 0x1fU)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv_ena) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv_wea) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__mem_reg__v0 
                = ((((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode)) 
                     & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en))
                    ? (1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__output_buffer)
                    : (((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode)) 
                          & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))) 
                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en)) 
                        | ((((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode)) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_hit_r)) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en)) 
                           & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))))
                        ? (0x1ffffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__output_buffer)
                        : (1U | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_tag 
                                 << 1U))));
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv_addra;
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv_ena) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv_wea) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__mem_reg__v0 
                = ((((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode)) 
                     & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en))
                    ? (1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__output_buffer)
                    : (((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode)) 
                          & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))) 
                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en)) 
                        | ((((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode)) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_hit_r)) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en)) 
                           & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))))
                        ? (0x1ffffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__output_buffer)
                        : (1U | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_tag 
                                 << 1U))));
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv_addra;
        }
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__div_finish_ready_i = 0U;
    } else if ((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                       >> 5U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__div_finish_ready_i = 1U;
    } else if ((0x20U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__div_finish_ready_i = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__loadForward 
        = ((IData)(vlSelf->aresetn) & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__loadForward)) 
                                       & (((((((1U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state)) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_op)) 
                                              & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_wr))) 
                                             & ((3U 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset) 
                                                    >> 2U)) 
                                                == 
                                                (3U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr 
                                                    >> 2U)))) 
                                            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index) 
                                               == (0xffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr 
                                                      >> 4U)))) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_tag 
                                              == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr 
                                                  >> 0xcU))) 
                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_hit))));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv_ena) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv_wea) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__mem_reg__v0 
                = ((((0U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                   >> 0x18U))) & (0U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en))
                    ? (1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer)
                    : (((((1U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                        >> 0x18U))) 
                          & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state))) 
                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en)) 
                        | ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_mode)) 
                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_cacop_hit)))
                        ? (0x1ffffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer)
                        : (1U | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_tag 
                                 << 1U))));
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv_addra;
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv_ena) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv_wea) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__mem_reg__v0 
                = ((((0U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                   >> 0x18U))) & (0U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en))
                    ? (1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer)
                    : (((((1U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                        >> 0x18U))) 
                          & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state))) 
                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en)) 
                        | ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_mode)) 
                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_cacop_hit)))
                        ? (0x1ffffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer)
                        : (1U | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_tag 
                                 << 1U))));
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv_addra;
        }
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__loadForward 
        = ((IData)(vlSelf->aresetn) & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__loadForward)) 
                                       & ((((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_op)) 
                                             & ((3U 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_offset) 
                                                    >> 2U)) 
                                                == 
                                                (3U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr 
                                                    >> 2U)))) 
                                            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index) 
                                               == (0xffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr 
                                                      >> 4U)))) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_tag 
                                              == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr 
                                                  >> 0xcU))) 
                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_hit))));
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data 
                = (0xffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata);
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_wdata;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb;
    }
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer 
        = ((IData)(vlSelf->aresetn) ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3)))
                                        ? vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2
                                        : ((IData)(1U) 
                                           + vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer))
            : 0U);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2;
    if (vlSelf->aresetn) {
        if ((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state)) 
              & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid) 
                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last)) 
                 | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__rd_req_buffer)))) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache)))) {
            if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__refill_write_way1)))) {
                if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__refill_write_way0) {
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_D[((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index)))) 
                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_D[
                            ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index) 
                             >> 5U)]) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_op) 
                                         << (0x1fU 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index))));
                }
            }
        } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__write_state) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__wirteBuffer_way) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_D[((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_index) 
                                                                                >> 5U)] 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_D[
                       ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_index) 
                        >> 5U)] | ((IData)(1U) << (0x1fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_index))));
            }
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_D[0U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_D[1U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_D[2U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_D[3U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_D[4U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_D[5U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_D[6U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_D[7U] = 0U;
    }
    if (vlSelf->aresetn) {
        if ((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state)) 
              & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid) 
                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last)) 
                 | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__rd_req_buffer)))) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache)))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__refill_write_way1) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_D[((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index) 
                                                                                >> 5U)] 
                    = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index)))) 
                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_D[
                        ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index) 
                         >> 5U)]) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_op) 
                                     << (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index))));
            }
        } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__write_state) {
            if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__wirteBuffer_way)))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_D[((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_index) 
                                                                                >> 5U)] 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_D[
                       ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_index) 
                        >> 5U)] | ((IData)(1U) << (0x1fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_index))));
            }
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_D[0U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_D[1U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_D[2U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_D[3U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_D[4U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_D[5U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_D[6U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_D[7U] = 0U;
    }
    if (vlSelf->aresetn) {
        if ((1U & (((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid) 
                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last))) 
                   | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__rd_req_buffer))))) {
            if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__refill_write_way1)))) {
                if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__refill_write_way0) {
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_D[((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index)))) 
                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_D[
                            ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index) 
                             >> 5U)]) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_op) 
                                         << (0x1fU 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index))));
                }
            }
        } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__write_state) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__wirteBuffer_way) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_D[((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_index) 
                                                                                >> 5U)] 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_D[
                       ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_index) 
                        >> 5U)] | ((IData)(1U) << (0x1fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_index))));
            }
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_D[0U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_D[1U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_D[2U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_D[3U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_D[4U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_D[5U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_D[6U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_D[7U] = 0U;
    }
    if (vlSelf->aresetn) {
        if ((1U & (((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid) 
                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last))) 
                   | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__rd_req_buffer))))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__refill_write_way1) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_D[((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index) 
                                                                                >> 5U)] 
                    = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index)))) 
                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_D[
                        ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index) 
                         >> 5U)]) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_op) 
                                     << (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index))));
            }
        } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__write_state) {
            if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__wirteBuffer_way)))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_D[((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_index) 
                                                                                >> 5U)] 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_D[
                       ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_index) 
                        >> 5U)] | ((IData)(1U) << (0x1fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_index))));
            }
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_D[0U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_D[1U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_D[2U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_D[3U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_D[4U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_D[5U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_D[6U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_D[7U] = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst 
            = (3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                             >> 0xbU)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst 
            = (3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                             >> 0xbU)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
            = (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                       >> 0xdU));
    } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en) 
                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast)))) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
            = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_next;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_awsize;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize 
            = (7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                             >> 8U)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen 
            = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen));
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen 
            = (0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                               >> 4U)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_awsize;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize 
            = (7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                             >> 8U)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen 
            = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen));
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen 
            = (0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                               >> 4U)));
    }
    if (vlSelf->aresetn) {
        if (((((((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                 >> 2U) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid))) 
               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd))) 
              & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                = (0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr);
            vlSelf->simu_top__DOT__soc__DOT__apb_s_awready = 1U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 1U;
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size 
                = vlSelf->simu_top__DOT__soc__DOT__cpu_awsize;
        } else if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) {
            vlSelf->simu_top__DOT__soc__DOT__apb_s_awready = 0U;
            if ((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                        >> 2U) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_wready))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                    = (0xfffffU & (((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb)) 
                                    & (0U == (3U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)))
                                    ? ((IData)(1U) 
                                       + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)
                                    : (((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb)) 
                                        & (0U == (3U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)))
                                        ? ((IData)(2U) 
                                           + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)
                                        : (((8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb)) 
                                            & (0U == 
                                               (3U 
                                                & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)))
                                            ? ((IData)(3U) 
                                               + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)
                                            : (((6U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb)) 
                                                & (0U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)))
                                                ? ((IData)(1U) 
                                                   + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)
                                                : (
                                                   ((0xcU 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb)) 
                                                    & (0U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)))
                                                    ? 
                                                   ((IData)(2U) 
                                                    + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)
                                                    : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr))))));
                vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id = 1U;
                if ((2U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)) {
                    if ((1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb) 
                                     >> 3U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                            = (vlSelf->simu_top__DOT__soc__DOT__cpu_wdata 
                               >> 0x18U);
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                            = (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb) 
                                     >> 2U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                            = (vlSelf->simu_top__DOT__soc__DOT__cpu_wdata 
                               >> 0x10U);
                    }
                } else if ((1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                        = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb) 
                                 >> 1U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                        = (vlSelf->simu_top__DOT__soc__DOT__cpu_wdata 
                           >> 8U);
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                        = vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                        = vlSelf->simu_top__DOT__soc__DOT__cpu_wdata;
                }
            } else if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu)) 
                        & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                    = (0xffU & ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))
                                 ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32
                                 : ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))
                                     ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                        >> 8U) : ((6U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))
                                                   ? 
                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                                   >> 8U)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))
                                                    ? 
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                                    >> 0x10U)
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))
                                                     ? 
                                                    (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                                     >> 0x18U)
                                                     : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32))))));
                if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 0U;
                }
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr 
                    = (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                       >> 8U);
            } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu) 
                        & (0xfU == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb)))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb = 0U;
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32);
                vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr 
                    = (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                       >> 8U);
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                        = (0xfffffU & ((IData)(1U) 
                                       + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                    if ((0U == (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb) 
                                      >> 1U)))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 1U;
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    }
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                        = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                    >> 8U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                        = (0xeU & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb));
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                        = (0xffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32);
                }
                vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
            } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                        = (0xfffffU & ((IData)(1U) 
                                       + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                    if ((0U == (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb) 
                                      >> 2U)))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 1U;
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    }
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                        = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                    >> 0x10U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                        = (0xdU & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb));
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
                vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
            } else if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                        = (0xfffffU & ((IData)(1U) 
                                       + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                    if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 1U;
                    }
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                        = (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                           >> 0x18U);
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                        = (0xbU & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb));
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
                vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
            } else if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                        = (7U & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb));
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
                vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb = 0U;
                vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
                if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                }
            }
        } else if (((((((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                        >> 2U) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_arready))) 
                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid))) 
                     & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))) 
                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
            vlSelf->simu_top__DOT__soc__DOT__apb_s_arready = 1U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = 1U;
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id 
                = vlSelf->simu_top__DOT__soc__DOT__cpu_arid;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size 
                = vlSelf->simu_top__DOT__soc__DOT__cpu_arsize;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                = (0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu_araddr);
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb 
                = (0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu_araddr);
            if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arsize))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = 4U;
            } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arsize))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = 2U;
            } else if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arsize))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = 1U;
            }
        } else if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd) {
            vlSelf->simu_top__DOT__soc__DOT__apb_s_arready = 0U;
            if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu 
                        = (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count));
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                              ? 0U : ((0U != (0x3fU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                 >> 0xeU)))
                                       ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                          >> 8U) : 0U)) 
                            << 8U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count 
                        = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count) 
                                 - (IData)(1U)));
                    vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast 
                        = ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size)) 
                           | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid 
                        = ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size)) 
                           | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd 
                        = (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count));
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
            } else if ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count 
                        = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count) 
                                 - (IData)(1U)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                        = (0xfffffU & ((IData)(1U) 
                                       + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                        = ((0xffffff00U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu));
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
            } else if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count 
                        = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count) 
                                 - (IData)(1U)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                        = (0xfffffU & ((IData)(1U) 
                                       + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                        = ((0xffff00ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu) 
                              << 8U));
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
            } else if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count 
                        = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count) 
                                 - (IData)(1U)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                        = (0xfffffU & ((IData)(1U) 
                                       + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size))) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                            = ((0xff00ffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu) 
                                  << 0x10U));
                    } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size))) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                            = ((0xffffff00U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu));
                    }
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
            } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = 0U;
                    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size))) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                            = ((0xffffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu) 
                                  << 0x18U));
                    } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size))) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                            = ((0xffff00ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu) 
                                  << 8U));
                    } else if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size))) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                            = ((0xffffff00U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu));
                    }
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
            } else {
                vlSelf->simu_top__DOT__soc__DOT__apb_s_arready = 0U;
                vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = 0U;
                }
                if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 0U;
                }
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = 1U;
                if (((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid) 
                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                        >> 2U))) {
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = 0U;
                }
            }
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = 0U;
            vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
            vlSelf->simu_top__DOT__soc__DOT__apb_s_arready = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 = 0U;
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 0U;
            }
            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                    >> 2U))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 = 0U;
                vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast = 0U;
            }
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb = 0U;
        vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size = 0U;
        vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu = 0U;
        vlSelf->simu_top__DOT__soc__DOT__apb_s_awready = 0U;
        vlSelf->simu_top__DOT__soc__DOT__apb_s_arready = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr = 0U;
    }
    __Vtableidx8 = (((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__scan_data) 
                     << 1U) | (IData)(vlSelf->aresetn));
    vlSelf->num_a_g = Vsimu_top__ConstPool__TABLE_a6bdf142_0
        [__Vtableidx8];
    if (vlSelf->aresetn) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr7 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8070U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr7);
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr5 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8050U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr5);
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr4 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8040U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr4);
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr3 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8030U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr3);
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr2 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8020U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr2);
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr1 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8010U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr1);
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr6 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8060U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr6);
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr0 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8000U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr0);
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr7 = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr5 = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr4 = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr3 = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr2 = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr1 = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr6 = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr0 = 0U;
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
            | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid))))) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data 
            = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data 
            = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas;
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
            | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid))))) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data 
            = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data 
            = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_datas;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg 
                = ((0x1fd0U == (0x1fffU & (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                           >> 0x10U)))
                    ? ((0xf030U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr))
                        ? 0x1f78a40U : 0U) : ((0x8000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                               ? ((0x4000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                     ? 
                                                    ((0x800U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                      ? 
                                                     ((0x400U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 
                                                      ((0x200U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 
                                                       ((0x100U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 
                                                        ((0x80U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : 
                                                         ((0x40U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 
                                                          ((0x20U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 0U
                                                            : 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 0U
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor)))))))
                                                           : 
                                                          ((0x20U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__open_trace)))))
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__simu_flag)))))
                                                            : 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data)))))
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__io_simu))))))))
                                                         : 0U)
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((0x400U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((0x200U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((0x100U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((0x80U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 
                                                         ((0x40U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : 
                                                          ((0x20U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 0U
                                                            : 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : 
                                                                ((0x8000U 
                                                                  & ((IData)(vlSelf->__SYM__switch) 
                                                                     << 8U)) 
                                                                 | ((0x2000U 
                                                                     & ((IData)(vlSelf->__SYM__switch) 
                                                                        << 7U)) 
                                                                    | ((0x800U 
                                                                        & ((IData)(vlSelf->__SYM__switch) 
                                                                           << 6U)) 
                                                                       | ((0x200U 
                                                                           & ((IData)(vlSelf->__SYM__switch) 
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
                                                                                << 1U)))))))))))))
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : 
                                                                ((2U 
                                                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)))))))))))
                                                          : 
                                                         ((0x40U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 
                                                          ((0x20U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r)))))
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : (IData)(vlSelf->__SYM__switch))))))
                                                            : 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data))))
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data))))))
                                                           : 
                                                          ((0x20U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data))))
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_data)))))
                                                            : 0U)))))))
                                                     : 
                                                    ((0x800U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                      ? 0U
                                                      : 
                                                     ((0x400U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((0x200U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((0x100U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((0x80U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : 
                                                         ((0x40U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : 
                                                          ((0x20U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 0U
                                                            : 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 0U
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r2)))))))))))))
                                                    : 0U)
                                                   : 
                                                  ((0x2000U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                    ? 0U
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                     ? 0U
                                                     : 
                                                    ((0x800U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                      ? 0U
                                                      : 
                                                     ((0x400U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((0x200U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((0x100U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((0x80U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : 
                                                         ((0x40U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 
                                                          ((0x20U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr7))))
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr6)))))
                                                            : 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr5))))
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr4))))))
                                                           : 
                                                          ((0x20U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr3))))
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr2)))))
                                                            : 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr1))))
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr0)))))))))))))))
                                               : 0U));
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg = 0U;
    }
}
