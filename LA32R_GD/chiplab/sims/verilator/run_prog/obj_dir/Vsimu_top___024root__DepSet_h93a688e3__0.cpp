// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsimu_top___024root.h"

VL_INLINE_OPT void Vsimu_top___024root___combo__TOP__0(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->NAND_top__DOT__NAND_IORDY_post_i = ((0xeU 
                                                 & (IData)(vlSelf->NAND_top__DOT__NAND_IORDY_post_i)) 
                                                | (1U 
                                                   & (IData)(vlSelf->NAND_IORDY_i)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[0U] 
        = vlSelf->ram_rdata;
}

extern const VlUnpacked<CData/*3:0*/, 64> Vsimu_top__ConstPool__TABLE_h74fcbe47_0;
extern const VlUnpacked<CData/*3:0*/, 4> Vsimu_top__ConstPool__TABLE_h96982afa_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vsimu_top__ConstPool__TABLE_h8bd7e1dc_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vsimu_top__ConstPool__TABLE_hc3b7fa0f_0;
extern const VlUnpacked<IData/*31:0*/, 32> Vsimu_top__ConstPool__TABLE_h1da55f25_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vsimu_top__ConstPool__TABLE_hb8238e9e_0;
extern const VlUnpacked<SData/*9:0*/, 256> Vsimu_top__ConstPool__TABLE_hf182b53e_0;
extern const VlUnpacked<CData/*5:0*/, 4096> Vsimu_top__ConstPool__TABLE_h82a1c4d2_0;

VL_INLINE_OPT void Vsimu_top___024root___sequent__TOP__2(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h90ddc2f0__0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c94d657__0;
    CData/*2:0*/ __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__Vfuncout;
    CData/*2:0*/ __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid;
    CData/*2:0*/ __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num;
    CData/*2:0*/ __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__Vfuncout;
    CData/*2:0*/ __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid;
    CData/*2:0*/ __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num;
    SData/*11:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx3;
    CData/*1:0*/ __Vtableidx5;
    CData/*7:0*/ __Vtableidx6;
    SData/*10:0*/ __Vtableidx7;
    CData/*5:0*/ __Vtableidx8;
    CData/*7:0*/ __Vtableidx9;
    VlWide<4>/*127:0*/ __Vtemp_hea665da4__0;
    VlWide<3>/*95:0*/ __Vtemp_h18c1ade6__0;
    VlWide<3>/*95:0*/ __Vtemp_hdcd30b01__0;
    VlWide<4>/*127:0*/ __Vtemp_ha6ef75fe__0;
    VlWide<4>/*127:0*/ __Vtemp_h3bce9da3__0;
    VlWide<4>/*127:0*/ __Vtemp_h9c9a7739__0;
    VlWide<4>/*127:0*/ __Vtemp_h30ec6957__0;
    VlWide<4>/*127:0*/ __Vtemp_hdbeaea70__0;
    VlWide<5>/*159:0*/ __Vtemp_hd47c7449__0;
    VlWide<3>/*95:0*/ __Vtemp_h20b39df6__0;
    VlWide<3>/*95:0*/ __Vtemp_h6e739bde__0;
    VlWide<4>/*127:0*/ __Vtemp_h17b52804__0;
    VlWide<4>/*127:0*/ __Vtemp_ha2e91cf0__0;
    // Body
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__output_buffer;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__output_buffer;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data[2U] 
        = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__output_buffer)) 
                    << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__output_buffer))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data[3U] 
        = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__output_buffer)) 
                     << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__output_buffer))) 
                   >> 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__output_buffer;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__output_buffer;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data[2U] 
        = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__output_buffer)) 
                    << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__output_buffer))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data[3U] 
        = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__output_buffer)) 
                     << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__output_buffer))) 
                   >> 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d 
        = (1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d 
        = (1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0 
        = (1U & ((~ (IData)(vlSelf->aresetn)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)
                                                  ? 
                                                 ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en)) 
                                                  | (IData)(vlSelf->uart_tx))
                                                  : (IData)(vlSelf->uart_rx))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                       >> 2U));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                       >> 1U));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int));
    __Vtableidx8 = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd) 
                     << 5U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd) 
                                << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd) 
                                           << 3U) | 
                                          (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSelf->aresetn))))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir 
        = Vsimu_top__ConstPool__TABLE_h74fcbe47_0[__Vtableidx8];
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast) 
              << 3U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast));
    __Vtableidx5 = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level 
        = Vsimu_top__ConstPool__TABLE_h96982afa_0[__Vtableidx5];
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram
        [(1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr))];
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr) 
           == ((2U & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr) 
                          >> 1U)) << 1U)) | (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc 
        = ((IData)(vlSelf->aresetn) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
                                        & (0U == (7U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                                          >> 7U)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r) 
            << 7U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r) 
                       << 6U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r) 
                                  << 5U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r) 
                                             << 4U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r) 
                                                << 3U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r))))))));
    vlSelf->ram_raddr = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr;
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap 
        = ((0xfffffffcU & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap) 
           | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap 
        = ((3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap) 
           | ((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
              | (0x3cU & ((0xfffffffcU & (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                          & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen)) 
                                             << 2U))) 
                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen) 
                              & ((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                                >> 2U))) 
                             << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelf->debug0_wb_pc = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[1U];
    vlSelf->debug0_wb_rf_wnum = (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[3U]);
    vlSelf->debug0_wb_rf_wdata = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[2U];
    vlSelf->debug0_wb_rf_wen = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[3U] 
                                 >> 5U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_valid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[0U] 
        = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[2U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[1U]))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U] 
        = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[2U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[1U]))) 
                   >> 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U] 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_valid) 
            << 6U) | ((0xffffffe0U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[3U] 
                                      & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_valid) 
                                         << 5U))) | 
                      ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_valid)
                        ? (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[3U])
                        : 0U)));
    if ((1U & (~ (IData)(vlSelf->aresetn)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu_rready = 1U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__simu_flag = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_arid;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_araddr;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid 
            = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas));
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
            = (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                       >> 0xdU));
    } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) 
                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last)))) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
            = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_next;
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid;
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_arid;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid 
            = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_data[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__output_buffer;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_data[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__output_buffer;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_data[2U] 
        = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__output_buffer)) 
                    << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__output_buffer))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_data[3U] 
        = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__output_buffer)) 
                     << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__output_buffer))) 
                   >> 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_data[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__output_buffer;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_data[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__output_buffer;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_data[2U] 
        = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__output_buffer)) 
                    << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__output_buffer))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_data[3U] 
        = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__output_buffer)) 
                     << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__output_buffer))) 
                   >> 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid) 
              << 3U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr) 
           == ((2U & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr) 
                          >> 1U)) << 1U)) | (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram
        [(1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr))];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__para_m_neg_0_trunc_3_4 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_neg_0_q) 
            << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__special_divisor_q));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__para_m_pos_1_trunc_3_4 
        = (0x78U | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_pos_1_q) 
                     << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__special_divisor_q)));
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__div_start_handshaked) 
         | (0U != (0x12U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_d;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_d;
    }
    if ((1U & (~ ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn))))) {
        if (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_taken) 
               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_id_valid))) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_ready_go)) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_allowin))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel_r 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel;
        }
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc;
    }
    vlSelf->confreg_uart_data = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data;
    vlSelf->ram_wdata = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r1;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r1;
    vlSelf->ram_waddr = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr;
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap 
        = ((0xfffffffcU & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap) 
           | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr));
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_wlast;
    }
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap 
        = ((3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap) 
           | ((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
              | (0x3cU & ((0xfffffffcU & (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                          & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen)) 
                                             << 2U))) 
                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen) 
                              & ((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                                >> 2U))) 
                             << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_wready) 
              << 2U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[2U] 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_awready) 
              << 2U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_arready) 
              << 2U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast) 
              << 2U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid) 
              << 2U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[2U] 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[2U] 
        = ((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
            ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32
            : ((1U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                   << 8U) : ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                              ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                 << 0x10U) : ((3U == 
                                               (3U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                               ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                  << 0x18U)
                                               : 0U))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid) 
              << 2U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data;
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas 
            = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid;
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data;
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_datas 
            = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid;
    }
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r2 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r1;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg;
    if (vlSelf->aresetn) {
        if ((0x10U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U])) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid 
                = ((0xfffffc00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                   | (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[3U] 
                                >> 5U)));
        } else if ((IData)((0x8030U == (0xfffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid 
                = ((0xfffffc00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                   | (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U] 
                                >> 1U)));
        }
        if ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[5U] 
             >> 0x1fU)) {
            if ((4U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl)) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl 
                    = (0xfffffffbU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl);
            } else {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit = 0U;
            }
        } else if ((IData)((0x80c0U == (0xfffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl 
                = ((0xfffffffbU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl) 
                   | (4U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U] 
                            >> 1U)));
            if ((4U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U])) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit = 0U;
            }
        } else if ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U])) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit 
                = (1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U]);
        }
        if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__trap)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cycleCnt 
                = (1ULL + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cycleCnt);
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__instrCnt 
                = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__instrCnt 
                   + (QData)((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_valid) 
                                      & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                            >> 0x11U))))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_valid 
                = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_valid) 
                   & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                         >> 0x11U)));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_cnt_inst 
                = (0U != (3U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                 << 1U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                           >> 0x1fU))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_timer_64 
                = (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[4U])) 
                    << 0x22U) | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[3U])) 
                                  << 2U) | ((QData)((IData)(
                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[2U])) 
                                            >> 0x1eU)));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst_ld_en 
                = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
                            >> 0xbU));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_paddr 
                = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
                    << 0x1fU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[0U] 
                                 >> 1U));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_vaddr 
                = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                    << 0x1bU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                 >> 5U));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst_st_en 
                = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
                            >> 3U));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_paddr 
                = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
                    << 0x1fU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[0U] 
                                 >> 1U));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_vaddr 
                = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                    << 0x1bU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                 >> 5U));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_data 
                = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[2U] 
                    << 0xdU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
                                >> 0x13U));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_rstat_en 
                = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
                         >> 2U));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_data 
                = ((1U == (3U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                  << 1U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                            >> 0x1fU))))
                    ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[5U] 
                        << 2U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[4U] 
                                  >> 0x1eU)) : ((2U 
                                                 == 
                                                 (3U 
                                                  & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                      << 1U) 
                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                        >> 0x1fU))))
                                                 ? 
                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[3U] 
                                                  << 2U) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[2U] 
                                                    >> 0x1eU))
                                                 : 
                                                ((3U 
                                                  == 
                                                  (3U 
                                                   & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                       << 1U) 
                                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                         >> 0x1fU))))
                                                  ? 
                                                 ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[4U] 
                                                   << 2U) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[3U] 
                                                     >> 0x1eU))
                                                  : 
                                                 ((0x80000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U])
                                                   ? 
                                                  (1U 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
                                                      >> 1U))
                                                   : 
                                                  ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[6U] 
                                                    << 2U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[5U] 
                                                      >> 0x1eU))))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wen 
                = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_bus[3U] 
                         >> 5U));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdest 
                = (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_bus[3U]);
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdata 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_bus[2U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_pc 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_bus[1U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_bus[0U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_excp_flush 
                = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                    >> 0x11U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ertn 
                = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                    >> 0x10U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_ecode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__code;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_tlbfill_en 
                = (4U == (7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                >> 0x1cU)));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_rand_index 
                = (0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[3U] 
                             << 2U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[2U] 
                                       >> 0x1eU)));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__trap = 0U;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__trap_code 
                = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                   [0xaU]);
        }
        if ((0x80000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count)) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag = 0U;
        } else if ((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r) 
                           & (~ ((IData)(vlSelf->btn_step) 
                                 >> 1U))) | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)) 
                                             & ((IData)(vlSelf->btn_step) 
                                                >> 1U))))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag = 1U;
        }
        if ((0x80000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count)) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag = 0U;
        } else if ((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r) 
                           & (~ (IData)(vlSelf->btn_step))) 
                          | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                             & (IData)(vlSelf->btn_step))))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag = 1U;
        }
        if ((IData)(((vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                      >> 0x13U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count) 
                                   >> 3U)))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_flag = 0U;
        } else if ((((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                     & (~ (IData)((0xfU == (IData)(vlSelf->btn_key_row))))) 
                    | ((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                       & (0xfU == (IData)(vlSelf->btn_key_row))))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_flag = 1U;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid 
            = (0xa0000U | (0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl 
            = (1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cycleCnt = 0ULL;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__instrCnt = 0ULL;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_cnt_inst = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_timer_64 = 0ULL;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst_ld_en = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_paddr = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_vaddr = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst_st_en = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_paddr = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_vaddr = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_data = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_rstat_en = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_data = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wen = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdest = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdata = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_pc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__trap = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__trap_code = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_flag = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__key_count;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out) 
            << 3U) | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
           [vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom]);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c94d657__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | (IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c94d657__0));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c94d657__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c94d657__0) 
              << 1U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c94d657__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c94d657__0) 
              << 2U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c94d657__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c94d657__0) 
              << 3U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c94d657__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c94d657__0) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int 
        = (IData)((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
                    >> 2U) & (0U != (0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr)))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int 
        = (1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
                  >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr) 
                            >> 5U)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_next 
        = ((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
             & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
            | ((- (IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
               & ((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                   >> 2U)) << 2U) | 
                  (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)))) 
           | ((- (IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
              & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap));
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_pop) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid = 0U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_pop) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid = 0U;
        }
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals 
            = (3U | ((8U & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                << 1U)) << 3U)) | (4U 
                                                   & ((~ 
                                                       (0x7fffffffU 
                                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI))) 
                                                      << 2U))));
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (4U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr 
                = (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai));
        }
        if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_pop) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid = 0U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_pop) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid = 0U;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (7U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            if ((0x80U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai;
            }
        }
        if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable) {
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 0U;
                } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 0U;
                    } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in) 
                                | (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b)))) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in 
                            = ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b))
                                ? 4U : (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error))));
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push = 1U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 0U;
                    } else if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error)))) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in 
                            = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift) 
                                << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error) 
                                           << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error)));
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push = 1U;
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 4U;
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else {
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor 
                        = (1U & (VL_REDXOR_8(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift) 
                                 ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 5U;
                }
            } else if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                        if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter))) {
                            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 3U;
                            } else {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 4U;
                                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error = 0U;
                            }
                        } else {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter 
                                = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter) 
                                         - (IData)(1U)));
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 2U;
                        }
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter 
                            = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                    ? 7U : 6U) : ((1U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                   ? 5U
                                                   : 4U));
                        if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 2U;
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift = 0U;
                        } else {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 6U;
                        }
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error 
                        = (1U & ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                  ? ((0x20U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor))
                                  : ((0x20U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                      ? (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity))
                                      : (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor)))));
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 9U;
                } else {
                    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error 
                            = (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in)));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 0xaU;
                    }
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity 
                            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 8U;
                    }
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                } else {
                    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7) {
                        if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift 
                                    = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in) 
                                        << 7U) | (0x7fU 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift) 
                                                     >> 1U)));
                            } else {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift 
                                    = ((0x80U & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in) 
                                           << 6U) | 
                                          (0x3fU & 
                                           ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift) 
                                            >> 1U))));
                            }
                        } else {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift 
                                = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                    ? ((0xc0U & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in) 
                                           << 5U) | 
                                          (0x1fU & 
                                           ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift) 
                                            >> 1U))))
                                    : ((0xe0U & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in) 
                                           << 4U) | 
                                          (0xfU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift) 
                                                   >> 1U)))));
                        }
                    }
                    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 7U;
                    }
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate 
                    = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7)
                        ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in)
                            ? 0U : 6U) : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate));
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
            } else {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in)) 
                     & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b)))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 1U;
                }
            }
        }
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate 
            = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b 
            = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor 
            = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift 
            = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift;
        if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count = 0U;
        } else if ((2U == (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) 
                            << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop)))) {
            if ((0x10U > (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count)));
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) 
                            << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop)))) {
            if ((0U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count 
                    = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count) 
                                - (IData)(1U)));
            }
        } else if ((3U == (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) 
                            << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_allowin) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_valid 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__preIF_to_IF_valid;
        }
        if ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid)) 
              & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__preIF_ready_go))) 
             & (0ULL != (0x1fULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_if_bus)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_if_bus;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid = 1U;
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__preIF_ready_go))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid = 0U;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr = 0U;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate 
            = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b 
            = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor 
            = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift 
            = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_valid = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[1U] 
        = ((IData)((0x21U == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [1U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[2U] 
        = ((IData)((0x22U == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [2U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[3U] 
        = ((IData)((0x23U == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [3U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[4U] 
        = ((IData)((0x24U == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [4U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[5U] 
        = ((IData)((0x25U == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [5U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[6U] 
        = ((IData)((0x26U == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [6U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[7U] 
        = ((IData)((0x27U == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [7U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[8U] 
        = ((IData)((0x28U == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [8U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[9U] 
        = ((IData)((0x29U == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [9U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0xaU] 
        = ((IData)((0x2aU == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [0xaU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0xbU] 
        = ((IData)((0x2bU == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [0xbU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0xcU] 
        = ((IData)((0x2cU == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [0xcU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0xdU] 
        = ((IData)((0x2dU == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [0xdU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0xeU] 
        = ((IData)((0x2eU == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [0xeU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0xfU] 
        = ((IData)((0x2fU == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [0xfU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0x10U] 
        = ((IData)((0x30U == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [0x10U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0x11U] 
        = ((IData)((0x31U == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [0x11U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0x12U] 
        = ((IData)((0x32U == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [0x12U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0x13U] 
        = ((IData)((0x33U == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [0x13U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0x14U] 
        = ((IData)((0x34U == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [0x14U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0x15U] 
        = ((IData)((0x35U == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [0x15U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0x16U] 
        = ((IData)((0x36U == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [0x16U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0x17U] 
        = ((IData)((0x37U == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [0x17U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0x18U] 
        = ((IData)((0x38U == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [0x18U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0x19U] 
        = ((IData)((0x39U == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [0x19U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0x1aU] 
        = ((IData)((0x3aU == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [0x1aU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0x1bU] 
        = ((IData)((0x3bU == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [0x1bU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0x1cU] 
        = ((IData)((0x3cU == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [0x1cU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0x1dU] 
        = ((IData)((0x3dU == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [0x1dU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0x1eU] 
        = ((IData)((0x3eU == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [0x1eU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0x1fU] 
        = ((IData)((0x3fU == (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf
           [0x1fU]);
    vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 0U;
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [0U];
    }
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [1U];
    }
    if (vlSelf->aresetn) {
        vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
            = vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random_next;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
            = ((0xfffffc03U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__uart0_int) 
                  << 3U));
        if (((IData)((0x8088U == (0xfffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U]))) 
             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U] 
                >> 1U))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                = (0xfffff7ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat);
        } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tcfg_wen) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en 
                = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U] 
                         >> 1U));
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en) 
                    & (0U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                = (0x800U | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat);
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en 
                = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg 
                         >> 1U));
        }
        if ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U])) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                = ((0x8000ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat) 
                   | (0x7fff0000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[4U]));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd 
                = ((0xfffffff8U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd) 
                   | (7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd));
        } else {
            if ((IData)((0x800aU == (0xfffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                    = ((0xfffffffcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat) 
                       | (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U] 
                                >> 1U)));
            }
            if ((IData)((0x8002U == (0xfffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd 
                    = ((0xfffffff8U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd) 
                       | (7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U] 
                                >> 1U)));
            }
        }
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en 
            = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval 
            = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval;
    } else {
        vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
            = vlSelf->random_seed;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
            = (0xfffff800U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
            = (0xffff0fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
            = (0x7fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en 
            = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval 
            = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd 
            = (7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd;
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_next 
        = ((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
             & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
            | ((- (IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
               & ((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                   >> 2U)) << 2U) | 
                  (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)))) 
           | ((- (IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
              & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap));
    vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 0U;
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast));
    }
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 1U));
    }
    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [2U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 2U));
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_rid = 0U;
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [0U];
    }
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [1U];
    }
    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [2U];
    }
    if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [3U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 3U));
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [3U];
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_rvalid = 0U;
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid));
    }
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 1U));
    }
    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 2U));
    }
    if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 3U));
    }
    if ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 4U));
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 4U));
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__write_state) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__write_state) {
                if (((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state)) 
                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_hit)) 
                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_op)) 
                     & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache_tlb_excp_cancel_req)))) {
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__write_state = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__wirteBuffer_way 
                        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_hit;
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_index 
                        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index;
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb 
                        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb;
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wdata 
                        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wdata;
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_offset 
                        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset;
                } else {
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__write_state = 0U;
                }
            } else {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__write_state = 0U;
            }
        } else if (((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state)) 
                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_hit)) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_op)) 
                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache_tlb_excp_cancel_req)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__write_state = 1U;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__wirteBuffer_way 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_hit;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_index 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wdata 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wdata;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_offset 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__write_state) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__write_state) {
                if ((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_hit)) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_op))) {
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__write_state = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__wirteBuffer_way 
                        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_hit;
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_index 
                        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index;
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb 
                        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wstrb;
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wdata 
                        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wdata;
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_offset 
                        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_offset;
                } else {
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__write_state = 0U;
                }
            } else {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__write_state = 0U;
            }
        } else if ((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_hit)) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_op))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__write_state = 1U;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__wirteBuffer_way 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_hit;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_index 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wstrb;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wdata 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wdata;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_offset 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_offset;
        }
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__scan_data 
            = (0xfU & ((0x80000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                        ? ((0x40000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                            ? ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                ? vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data
                                : (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data 
                                   >> 4U)) : ((0x20000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                               ? (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data 
                                                  >> 8U)
                                               : (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data 
                                                  >> 0xcU)))
                        : ((0x40000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                            ? ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                ? (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data 
                                   >> 0x10U) : (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data 
                                                >> 0x14U))
                            : ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                ? (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data 
                                   >> 0x18U) : (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data 
                                                >> 0x1cU)))));
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__write_state = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__wirteBuffer_way = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_index = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wdata = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_offset = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__write_state = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__wirteBuffer_way = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_index = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wdata = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_offset = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm = 1U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__scan_data = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count;
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur));
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_allowin) 
         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_mem_valid))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[0U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_mem_bus[0U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_mem_bus[1U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[2U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_mem_bus[2U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_mem_bus[3U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_mem_bus[4U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_mem_bus[5U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_mem_bus[6U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[7U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_mem_bus[7U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_mem_bus[8U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_mem_bus[9U];
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid = 0U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_allowin) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_mem_valid;
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready)) 
           | (8U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready)) 
           | (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready)) 
           | (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready)) 
           | (8U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0x1fU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x1fU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0x1eU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x1eU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0x1dU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x1dU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0x1cU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x1cU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0x1bU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x1bU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0x1aU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x1aU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0x19U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x19U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0x18U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x18U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0x17U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x17U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0x16U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x16U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0x15U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x15U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0x14U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x14U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0x13U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x13U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0x12U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x12U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0x11U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x11U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0x10U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x10U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0xfU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [0xfU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0xeU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [0xeU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0xdU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [0xdU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0xcU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [0xcU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0xbU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [0xbU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0xaU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [0xaU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[9U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [9U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[8U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [8U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[7U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [7U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[6U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [6U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[5U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [5U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[4U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [4U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [3U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[2U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [2U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [1U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o
        [0U];
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random_next 
        = ((0x7ffffeU & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                         << 1U)) | (1U & VL_REDXOR_32(
                                                      (0x420000U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random))));
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar 
        = (1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable)));
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
            = (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_araddr)) 
                << 0xdU) | (QData)((IData)((0x800U 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arsize) 
                                                << 8U) 
                                               | ((0xf0U 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen) 
                                                      << 4U)) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arid)))))));
    }
    __Vtableidx7 = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read) 
                     << 0xaU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd) 
                                  << 9U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read) 
                                             << 8U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) 
                                                << 7U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd) 
                                                                  << 1U) 
                                                                 | (1U 
                                                                    & (~ (IData)(vlSelf->aresetn)))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__uart0_int = Vsimu_top__ConstPool__TABLE_h8bd7e1dc_0
        [__Vtableidx7];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__has_int 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
            >> 2U) & (0U != (0x1fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ecfg 
                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__csa_3_2_x3 
        = (0xfffffffffULL & (((((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q))))) 
                                & ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                   << 4U)) | ((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                                     >> 1U))))) 
                                              & ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                                 << 3U))) 
                              | ((- (QData)((IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                        >> 3U))))) 
                                 & (~ ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                       << 3U)))) | 
                             ((- (QData)((IData)((1U 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                     >> 4U))))) 
                              & (~ ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                    << 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_2_5 
        = (0x7fU & (((((- (IData)((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q)))) 
                       & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                  >> 0x18U))) | ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                                >> 1U)))) 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                                            >> 0x19U)))) 
                     | ((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                          >> 3U)))) 
                        & (~ (IData)(((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                      >> 0x19U))))) 
                    | ((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                         >> 4U)))) 
                       & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                     >> 0x18U))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_3_4 
        = (0x7fU & (((((- (IData)((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q)))) 
                       & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                  >> 0x19U))) | ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                                >> 1U)))) 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                                            >> 0x1aU)))) 
                     | ((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                          >> 3U)))) 
                        & (~ (IData)(((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                      >> 0x1aU))))) 
                    | ((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                         >> 4U)))) 
                       & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                     >> 0x19U))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffff8U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp) 
           | ((4U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                              >> 0x1dU)) << 2U)) | 
              ((2U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                               >> 0x1eU)) << 1U)) | 
               (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                              >> 0x1fU))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffc7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x20U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                 >> 0x1aU)) << 5U)) 
              | ((0x10U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                    >> 0x1bU)) << 4U)) 
                 | (8U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                   >> 0x1cU)) << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffe3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x100U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                  >> 0x17U)) << 8U)) 
              | ((0x80U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                    >> 0x18U)) << 7U)) 
                 | (0x40U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                      >> 0x19U)) << 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffff1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x800U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                  >> 0x14U)) << 0xbU)) 
              | ((0x400U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                     >> 0x15U)) << 0xaU)) 
                 | (0x200U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                       >> 0x16U)) << 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffff8fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x4000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                   >> 0x11U)) << 0xeU)) 
              | ((0x2000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                      >> 0x12U)) << 0xdU)) 
                 | (0x1000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                        >> 0x13U)) 
                               << 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffc7fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x20000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                    >> 0xeU)) << 0x11U)) 
              | ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                       >> 0xfU)) << 0x10U)) 
                 | (0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                        >> 0x10U)) 
                               << 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffe3ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x100000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                     >> 0xbU)) << 0x14U)) 
              | ((0x80000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                       >> 0xcU)) << 0x13U)) 
                 | (0x40000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                         >> 0xdU)) 
                                << 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp 
        = ((0xff1fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x800000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                     >> 8U)) << 0x17U)) 
              | ((0x400000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                        >> 9U)) << 0x16U)) 
                 | (0x200000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                          >> 0xaU)) 
                                 << 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp 
        = ((0xf8ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x4000000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                      >> 5U)) << 0x1aU)) 
              | ((0x2000000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                         >> 6U)) << 0x19U)) 
                 | (0x1000000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                           >> 7U)) 
                                  << 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp 
        = ((0xc7ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x20000000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                       >> 2U)) << 0x1dU)) 
              | ((0x10000000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                          >> 3U)) << 0x1cU)) 
                 | (0x8000000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                           >> 4U)) 
                                  << 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp) 
           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q) 
               << 0x1fU) | (0x40000000U & ((IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                    >> 1U)) 
                                           << 0x1eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffff8U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp) 
           | ((4U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                              >> 0x1dU)) << 2U)) | 
              ((2U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                               >> 0x1eU)) << 1U)) | 
               (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                              >> 0x1fU))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffc7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x20U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                 >> 0x1aU)) << 5U)) 
              | ((0x10U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                    >> 0x1bU)) << 4U)) 
                 | (8U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                   >> 0x1cU)) << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffe3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x100U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                  >> 0x17U)) << 8U)) 
              | ((0x80U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                    >> 0x18U)) << 7U)) 
                 | (0x40U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                      >> 0x19U)) << 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffff1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x800U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                  >> 0x14U)) << 0xbU)) 
              | ((0x400U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                     >> 0x15U)) << 0xaU)) 
                 | (0x200U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                       >> 0x16U)) << 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffff8fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x4000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                   >> 0x11U)) << 0xeU)) 
              | ((0x2000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                      >> 0x12U)) << 0xdU)) 
                 | (0x1000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                        >> 0x13U)) 
                               << 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffc7fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x20000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                    >> 0xeU)) << 0x11U)) 
              | ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                       >> 0xfU)) << 0x10U)) 
                 | (0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                        >> 0x10U)) 
                               << 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffe3ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x100000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                     >> 0xbU)) << 0x14U)) 
              | ((0x80000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                       >> 0xcU)) << 0x13U)) 
                 | (0x40000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                         >> 0xdU)) 
                                << 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp 
        = ((0xff1fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x800000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                     >> 8U)) << 0x17U)) 
              | ((0x400000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                        >> 9U)) << 0x16U)) 
                 | (0x200000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                          >> 0xaU)) 
                                 << 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp 
        = ((0xf8ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x4000000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                      >> 5U)) << 0x1aU)) 
              | ((0x2000000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                         >> 6U)) << 0x19U)) 
                 | (0x1000000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                           >> 7U)) 
                                  << 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp 
        = ((0xc7ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x20000000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                       >> 2U)) << 0x1dU)) 
              | ((0x10000000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                          >> 3U)) << 0x1cU)) 
                 | (0x8000000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                           >> 4U)) 
                                  << 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp) 
           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q) 
               << 0x1fU) | (0x40000000U & ((IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                                    >> 1U)) 
                                           << 0x1eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__lzc_diff_fast 
        = (0x3fU & ((0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q)) 
                    - (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc_q))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__need_corr 
        = (1U & (((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q) 
                      >> 5U)) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__no_iter_needed_q))) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q)
                     ? ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                    >> 0x20U))) & (0U 
                                                   != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q))
                     : (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q 
        = (((IData)(vlSelf->aresetn) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn)))
            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_d)
            : 1U);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r1 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r1 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way0_bank0 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__write_state) 
            & (0U == (0xcU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_offset)))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__wirteBuffer_way)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way0_bank1 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__write_state) 
            & (4U == (0xcU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_offset)))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__wirteBuffer_way)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way0_bank2 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__write_state) 
            & (8U == (0xcU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_offset)))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__wirteBuffer_way)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way0_bank3 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__write_state) 
            & (0xcU == (0xcU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_offset)))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__wirteBuffer_way)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way1_bank0 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__write_state) 
            & (0U == (0xcU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_offset)))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__wirteBuffer_way));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way1_bank1 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__write_state) 
            & (4U == (0xcU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_offset)))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__wirteBuffer_way));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way1_bank2 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__write_state) 
            & (8U == (0xcU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_offset)))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__wirteBuffer_way));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way1_bank3 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__write_state) 
            & (0xcU == (0xcU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_offset)))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__wirteBuffer_way));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank0 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__write_state) 
            & (0U == (0xcU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_offset)))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__wirteBuffer_way)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank1 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__write_state) 
            & (4U == (0xcU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_offset)))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__wirteBuffer_way)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank2 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__write_state) 
            & (8U == (0xcU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_offset)))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__wirteBuffer_way)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank3 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__write_state) 
            & (0xcU == (0xcU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_offset)))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__wirteBuffer_way)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank0 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__write_state) 
            & (0U == (0xcU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_offset)))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__wirteBuffer_way));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank1 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__write_state) 
            & (4U == (0xcU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_offset)))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__wirteBuffer_way));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank2 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__write_state) 
            & (8U == (0xcU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_offset)))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__wirteBuffer_way));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank3 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__write_state) 
            & (0xcU == (0xcU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_offset)))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__wirteBuffer_way));
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid 
                = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid));
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid 
            = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas));
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid 
                = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid) 
              << 3U));
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid 
            = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas));
    }
    if (vlSelf->aresetn) {
        if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r = 0U;
        } else if ((((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state)) 
                     & (7U != (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))) 
                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count) 
                       >> 3U))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r 
                = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data 
                = (0xffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata);
        }
        if (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
             & (0xff40U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor 
                = (1U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata);
        }
        if (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
             & (0xff30U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__open_trace 
                = (0U != vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata);
        }
        if (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
             & (0xff00U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__io_simu 
                = ((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata 
                    << 0x10U) | (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata 
                                 >> 0x10U));
        }
        if (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
             & (0xf040U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data 
                = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata;
        }
        if (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
             & (0xf030U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data 
                = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata;
        }
        if (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
             & (0xf020U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_data 
                = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata;
        }
        if ((0x80000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count)) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r 
                = (1U & ((IData)(vlSelf->btn_step) 
                         >> 1U));
        }
        if ((0x80000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count)) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r 
                = (1U & (IData)(vlSelf->btn_step));
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset) 
             | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun = 0U;
        } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) 
                     & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop))) 
                    & (0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun = 1U;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (2U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            if ((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset 
                    = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai) 
                             >> 2U));
            }
        } else {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset = 0U;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
             & (((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
                 | (1U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))) 
                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
                   & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                         >> 2U)))))) {
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate))) {
                if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate))) {
                    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 0U;
                    } else {
                        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                            if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time 
                                    = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                                             + (1U 
                                                & (~ (IData)(vlSelf->uart_tx)))));
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error 
                                    = (1U & (~ (IData)(vlSelf->uart_tx)));
                                if ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))) {
                                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en = 1U;
                                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 4U;
                                } else {
                                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en = 0U;
                                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 0U;
                                }
                            } else {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
                                    = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter) 
                                                - (IData)(1U)));
                            }
                        } else {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en = 1U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
                                = ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))
                                    ? 0xfU : 0xdU);
                        }
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate))) {
                    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error) 
                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                            != (7U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg)))))) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
                        if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 7U;
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                    = (1U & VL_REDXOR_8(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak));
                            } else {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 6U;
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                    = (1U & VL_REDXOR_32(
                                                         (0x7fU 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak))));
                            }
                        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 5U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x3fU 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak))));
                        } else {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 4U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x1fU 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak))));
                        }
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out 
                            = (0x7fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak) 
                                        >> 1U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out 
                            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak));
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time = 0U;
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop = 1U;
                        if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 7U;
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                    = (1U & VL_REDXOR_8(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out));
                            } else {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 6U;
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                    = (1U & VL_REDXOR_32(
                                                         (0x7fU 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out))));
                            }
                        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 5U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x3fU 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out))));
                        } else {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 4U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x1fU 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out))));
                        }
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out 
                            = (0x7fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out) 
                                        >> 1U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out 
                            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out));
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak 
                            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out;
                    }
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 1U;
                } else {
                    if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en = 0U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 0U;
                        } else {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
                            = ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))
                                ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error)
                                    ? 0x1dU : 0xdU)
                                : ((0U == (4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr)))
                                    ? 0xdU : ((4U == 
                                               (7U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr)))
                                               ? 0x15U
                                               : 0x1dU)));
                    }
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                }
            } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate))) {
                if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate))) {
                    if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate 
                                = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)
                                    ? 6U : 4U);
                        } else {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out;
                } else {
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out;
                    if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                            if ((0U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter))) {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter 
                                    = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter) 
                                             - (IData)(1U)));
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out 
                                    = ((0x40U & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out)) 
                                       | (0x3fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out) 
                                                   >> 1U)));
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out 
                                    = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out));
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 2U;
                            } else if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out 
                                    = (1U & ((0x10U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                              ? ((~ 
                                                  ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                                                   >> 5U)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor))
                                              : (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                                                  >> 5U) 
                                                 | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor)))));
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 3U;
                            } else {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 4U;
                            }
                        } else {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                }
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
                if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 2U;
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
                            = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter) 
                                        - (IData)(1U)));
                    }
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0xfU;
                }
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 0U;
            } else if ((1U & ((~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count)))) 
                              & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                                   == (7U & ((IData)(1U) 
                                             + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg)))) 
                                  | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error))) 
                                 | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error = 0U;
            } else {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 5U;
            }
        } else {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tcfg_wen) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg 
                = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                    << 0x1fU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U] 
                                 >> 1U));
        }
        if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state))) {
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state = 0U;
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state = 0U;
            } else if ((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last)) 
                              | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__rd_req_buffer))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state = 0U;
            } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_retNum 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_retNum)));
            }
        } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state))) {
                if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__wr_req) {
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__wr_req = 0U;
                }
                if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_req)) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__rd_requst_can_receive))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state = 4U;
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_retNum = 0U;
                }
            } else {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__wr_req 
                    = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__replace_d) 
                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__replace_way)
                            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer
                            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer)) 
                       & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache)));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state = 3U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_replaceWay 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__replace_way;
            }
        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state))) {
            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_req) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_hit))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state = 1U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache 
                    = (1U & ((~ (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__crmd_da) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__crmd_pg)))
                                  ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U]
                                  : ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select))
                                      ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select))
                                          ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                             >> 2U)
                                          : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                             >> 1U))
                                      : (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                 >> 7U))))) 
                             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en))));
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_size = 2U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_op = 0U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr 
                                >> 4U));
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_tag 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr 
                       >> 0xcU);
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_offset 
                    = (0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr);
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wstrb = 0U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wdata = 0U;
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state 
                    = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache_tlb_excp_cancel_req)
                        ? 0U : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_hit)
                                 ? 0U : 2U));
            }
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_req) 
                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state = 1U;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache 
                = (1U & (~ (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__crmd_da) 
                             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__crmd_pg)))
                             ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U]
                             : ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select))
                                 ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select))
                                     ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                        >> 2U) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                                  >> 1U))
                                 : (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                            >> 7U))))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_size = 2U;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_op = 0U;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index 
                = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr 
                            >> 4U));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_tag 
                = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr 
                   >> 0xcU);
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_offset 
                = (0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr);
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wstrb = 0U;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wdata = 0U;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_en 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_mode 
                = (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                         >> 0x18U));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_tag 
                = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr 
                   >> 0xcU);
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_index 
                = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr 
                            >> 4U));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_offset 
                = (0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr);
        }
        if (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
             & (0xf050U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data 
                = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor = 1U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__open_trace = 1U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__io_simu = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_data = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r = 1U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r = 1U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg 
            = (0xfffffffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__wr_req = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_op = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_tag = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_offset = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wstrb = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wdata = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_size = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_en = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_mode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_tag = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_index = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_offset = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_replaceWay = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
            = (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                       >> 0xdU));
    } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en) 
                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast)))) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
            = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_next;
    }
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r1 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer;
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap 
        = ((0xfffffffcU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap) 
           | (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap 
        = ((3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap) 
           | ((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr) 
              | (0x3cU & ((0xfffffffcU & (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                          & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen)) 
                                             << 2U))) 
                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen) 
                              & ((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                                >> 2U))) 
                             << 2U)))));
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
            = (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_araddr)) 
                << 0xdU) | (QData)((IData)((0x800U 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arsize) 
                                                << 8U) 
                                               | ((0xf0U 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen) 
                                                      << 4U)) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arid)))))));
    }
    vlSelf->num_monitor = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor;
    vlSelf->open_trace = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__open_trace;
    vlSelf->led_rg1 = (3U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data);
    vlSelf->led_rg0 = (3U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data);
    vlSelf->led = (0xffffU & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_data);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step1_count;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step0_count;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0x1fU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [0x1fU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0x1eU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [0x1eU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0x1dU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [0x1dU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0x1cU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [0x1cU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0x1bU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [0x1bU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0x1aU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [0x1aU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0x19U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [0x19U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0x18U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [0x18U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0x17U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [0x17U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0x16U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [0x16U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0x15U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [0x15U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0x14U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [0x14U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0x13U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [0x13U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0x12U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [0x12U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0x11U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [0x11U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0x10U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [0x10U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0xfU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [0xfU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0xeU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [0xeU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0xdU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [0xdU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0xcU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [0xcU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0xbU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [0xbU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0xaU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [0xaU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[9U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [9U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[8U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [8U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[7U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [7U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[6U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [6U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[5U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [5U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[4U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [4U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [3U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[2U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [2U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [1U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff
        [0U];
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_iter_end 
        = ((0xffffffff8ULL & (((0xffffffff8ULL & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q) 
                                                  << 3U)) 
                               | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                   << 3U) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__csa_3_2_x3 
                                             << 1U))) 
                              | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                  << 3U) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__csa_3_2_x3 
                                            << 1U)))) 
           | (QData)((IData)((0U != (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__u_sign_coder__DOT__sign 
        = ((8U & (((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                              >> 0x1aU)) + (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                    >> 0x1aU))) 
                    + (0x40U | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_pos_2_q) 
                                << 1U))) + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_2_5)) 
                  >> 3U)) | ((4U & (((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                >> 0x1bU)) 
                                       + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                  >> 0x1bU))) 
                                      + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__para_m_pos_1_trunc_3_4)) 
                                     + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_3_4)) 
                                    >> 4U)) | ((2U 
                                                & (((((IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                               >> 0x1bU)) 
                                                      + (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                                 >> 0x1bU))) 
                                                     + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__para_m_neg_0_trunc_3_4)) 
                                                    + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_3_4)) 
                                                   >> 5U)) 
                                               | (1U 
                                                  & (((((IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                                 >> 0x1aU)) 
                                                        + (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                                   >> 0x1aU))) 
                                                       + 
                                                       ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_neg_1_q) 
                                                        << 1U)) 
                                                      + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_2_5)) 
                                                     >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0xffe007ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (0xfffff800U & ((((4U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp)
                                ? 2U : 3U) << 0x10U) 
                             | (((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0U : 1U) << 0xbU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0x801fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (0xffe00000U & ((((0x40U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp)
                                ? 6U : 7U) << 0x1aU) 
                             | (((0x10U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp)
                                  ? 4U : 5U) << 0x15U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0x7fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (((0x100U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp)
                ? 8U : 9U) << 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0xfffffe00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (0x7fffffffU & ((0x7ffffff0U & (((0x400U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0xaU
                                               : 0xbU) 
                                             << 4U)) 
                             | (((0x100U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp)
                                  ? 8U : 9U) >> 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0xfff801ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (0xfffffe00U & ((((0x4000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp)
                                ? 0xeU : 0xfU) << 0xeU) 
                             | (((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0xcU : 0xdU) << 9U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0xe007ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (0xfff80000U & ((((0x40000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp)
                                ? 0x12U : 0x13U) << 0x18U) 
                             | (((0x10000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x10U : 0x11U) 
                                << 0x13U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0x1fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (((0x100000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp)
                ? 0x14U : 0x15U) << 0x1dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xffffff80U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | (0x1fffffffU & ((0x1ffffffcU & (((0x400000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x16U
                                               : 0x17U) 
                                             << 2U)) 
                             | (((0x100000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x14U : 0x15U) 
                                >> 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xfffe007fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | (0xffffff80U & ((((0x4000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp)
                                ? 0x1aU : 0x1bU) << 0xcU) 
                             | (((0x1000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x18U : 0x19U) 
                                << 7U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xf801ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | (0xfffe0000U & ((((0x40000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp)
                                ? 0x1eU : 0x1fU) << 0x16U) 
                             | (((0x10000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1cU : 0x1dU) 
                                << 0x11U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffe7fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__sel_nodes) 
           | (((IData)((0U != (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp))) 
               << 0x10U) | ((IData)((0U != (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp))) 
                            << 0xfU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfff9ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__sel_nodes) 
           | (((IData)((0U != (0xc0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp))) 
               << 0x12U) | ((IData)((0U != (0x30U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp))) 
                            << 0x11U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffe7ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__sel_nodes) 
           | (((IData)((0U != (0xc00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp))) 
               << 0x14U) | ((IData)((0U != (0x300U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp))) 
                            << 0x13U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xff9fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__sel_nodes) 
           | (((IData)((0U != (0xc000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp))) 
               << 0x16U) | ((IData)((0U != (0x3000U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp))) 
                            << 0x15U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfe7fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__sel_nodes) 
           | (((IData)((0U != (0xc0000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp))) 
               << 0x18U) | ((IData)((0U != (0x30000U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp))) 
                            << 0x17U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xf9ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__sel_nodes) 
           | (((IData)((0U != (0xc00000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp))) 
               << 0x1aU) | ((IData)((0U != (0x300000U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp))) 
                            << 0x19U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xe7ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__sel_nodes) 
           | (((IData)((0U != (0xc000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp))) 
               << 0x1cU) | ((IData)((0U != (0x3000000U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp))) 
                            << 0x1bU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x9fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__sel_nodes) 
           | (((IData)((0U != (0xc0000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp))) 
               << 0x1eU) | ((IData)((0U != (0x30000000U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp))) 
                            << 0x1dU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0xffe007ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (0xfffff800U & ((((4U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp)
                                ? 2U : 3U) << 0x10U) 
                             | (((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0U : 1U) << 0xbU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0x801fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (0xffe00000U & ((((0x40U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp)
                                ? 6U : 7U) << 0x1aU) 
                             | (((0x10U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp)
                                  ? 4U : 5U) << 0x15U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((0x7fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes[2U]) 
           | (((0x100U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp)
                ? 8U : 9U) << 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0xfffffe00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (0x7fffffffU & ((0x7ffffff0U & (((0x400U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0xaU
                                               : 0xbU) 
                                             << 4U)) 
                             | (((0x100U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp)
                                  ? 8U : 9U) >> 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0xfff801ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (0xfffffe00U & ((((0x4000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp)
                                ? 0xeU : 0xfU) << 0xeU) 
                             | (((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0xcU : 0xdU) << 9U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0xe007ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (0xfff80000U & ((((0x40000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp)
                                ? 0x12U : 0x13U) << 0x18U) 
                             | (((0x10000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x10U : 0x11U) 
                                << 0x13U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((0x1fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes[3U]) 
           | (((0x100000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp)
                ? 0x14U : 0x15U) << 0x1dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xffffff80U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | (0x1fffffffU & ((0x1ffffffcU & (((0x400000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x16U
                                               : 0x17U) 
                                             << 2U)) 
                             | (((0x100000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x14U : 0x15U) 
                                >> 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xfffe007fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | (0xffffff80U & ((((0x4000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp)
                                ? 0x1aU : 0x1bU) << 0xcU) 
                             | (((0x1000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x18U : 0x19U) 
                                << 7U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xf801ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | (0xfffe0000U & ((((0x40000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp)
                                ? 0x1eU : 0x1fU) << 0x16U) 
                             | (((0x10000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1cU : 0x1dU) 
                                << 0x11U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfffe7fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__sel_nodes) 
           | (((IData)((0U != (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp))) 
               << 0x10U) | ((IData)((0U != (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp))) 
                            << 0xfU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfff9ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__sel_nodes) 
           | (((IData)((0U != (0xc0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp))) 
               << 0x12U) | ((IData)((0U != (0x30U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp))) 
                            << 0x11U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xffe7ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__sel_nodes) 
           | (((IData)((0U != (0xc00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp))) 
               << 0x14U) | ((IData)((0U != (0x300U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp))) 
                            << 0x13U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xff9fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__sel_nodes) 
           | (((IData)((0U != (0xc000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp))) 
               << 0x16U) | ((IData)((0U != (0x3000U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp))) 
                            << 0x15U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xfe7fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__sel_nodes) 
           | (((IData)((0U != (0xc0000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp))) 
               << 0x18U) | ((IData)((0U != (0x30000U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp))) 
                            << 0x17U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xf9ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__sel_nodes) 
           | (((IData)((0U != (0xc00000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp))) 
               << 0x1aU) | ((IData)((0U != (0x300000U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp))) 
                            << 0x19U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xe7ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__sel_nodes) 
           | (((IData)((0U != (0xc000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp))) 
               << 0x1cU) | ((IData)((0U != (0x3000000U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp))) 
                            << 0x1bU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x9fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__sel_nodes) 
           | (((IData)((0U != (0xc0000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp))) 
               << 0x1eU) | ((IData)((0U != (0x30000000U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp))) 
                            << 0x1dU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_normal_init_value 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__lzc_diff_fast))
            ? (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q))
            : ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q)) 
               << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_shifted_rem 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__need_corr)
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache_tlb_excp_cancel_req 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_tlbr) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_ppi)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_pif));
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel;
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid 
        = (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid));
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__Vfuncout 
        = ((1U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
            ? 0U : ((2U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                     ? 1U : ((4U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                              ? 2U : ((3U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                                       ? ((0U != (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num))
                                           ? 0U : 1U)
                                       : ((6U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                                           ? ((1U != (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num))
                                               ? 1U
                                               : 2U)
                                           : ((5U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                                               ? ((2U 
                                                   != (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num))
                                                   ? 2U
                                                   : 0U)
                                               : ((7U 
                                                   == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num))
                                                     ? 2U
                                                     : 0U))
                                                   : 7U)))))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0 
        = __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__Vfuncout;
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel;
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid 
        = (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                 >> 3U));
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__Vfuncout 
        = ((1U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
            ? 3U : ((2U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                     ? 4U : ((4U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                              ? 5U : ((3U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                                       ? ((3U != (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num))
                                           ? 3U : 4U)
                                       : ((6U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                                           ? ((4U != (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num))
                                               ? 4U
                                               : 5U)
                                           : ((5U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                                               ? ((5U 
                                                   != (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num))
                                                   ? 5U
                                                   : 3U)
                                               : ((7U 
                                                   == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                                                   ? 
                                                  ((3U 
                                                    == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num))
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num))
                                                     ? 5U
                                                     : 3U))
                                                   : 7U)))))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1 
        = __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__Vfuncout;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer;
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_pop) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid = 0U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_pop) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid = 0U;
        }
        if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state 
                = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__state_count;
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_next 
        = ((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr) 
            | ((- (IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
               & ((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                   >> 2U)) << 2U) | 
                  (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)))) 
           | ((- (IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__code 
        = ((0x8000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U])
            ? 8U : ((0x4000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U])
                     ? 0x3fU : ((0x2000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U])
                                 ? 3U : ((0x1000U & 
                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U])
                                          ? 7U : ((0x800U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U])
                                                   ? 0xbU
                                                   : 
                                                  ((0x400U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U])
                                                    ? 0xcU
                                                    : 
                                                   ((0x200U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U])
                                                     ? 0xdU
                                                     : 
                                                    ((0x100U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U])
                                                      ? 0xeU
                                                      : 
                                                     ((0x80U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U])
                                                       ? 9U
                                                       : 
                                                      ((0x40U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U])
                                                        ? 0x3fU
                                                        : 
                                                       ((0x20U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U])
                                                         ? 1U
                                                         : 
                                                        ((0x10U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U])
                                                          ? 2U
                                                          : 
                                                         ((8U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U])
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U])
                                                            ? 4U
                                                            : 0U))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__tlbr_wen 
        = ((IData)((0U != (0x4040U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U]))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__refetch 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid) 
           & ((0U != (0x78000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U])) 
              | (((2U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                >> 0x12U))) | (3U == 
                                               (3U 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                   >> 0x12U)))) 
                 & ((((((((((0U == (0x3fffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                                << 0xcU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                  >> 0x14U)))) 
                            | (4U == (0x3fffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                                  << 0xcU) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                    >> 0x14U))))) 
                           | (5U == (0x3fffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                                 << 0xcU) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                   >> 0x14U))))) 
                          | (0x10U == (0x3fffU & ((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                                   << 0xcU) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                     >> 0x14U))))) 
                         | (0x11U == (0x3fffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                                  << 0xcU) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                    >> 0x14U))))) 
                        | (0x12U == (0x3fffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                                 << 0xcU) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                   >> 0x14U))))) 
                       | (0x13U == (0x3fffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                                << 0xcU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                  >> 0x14U))))) 
                      | (0x18U == (0x3fffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                               << 0xcU) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                 >> 0x14U))))) 
                     | (0x19U == (0x3fffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                              << 0xcU) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                >> 0x14U))))) 
                    | (0x1aU == (0x3fffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                             << 0xcU) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                               >> 0x14U))))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7 
        = ((0U != (((((((((((((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0U] | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [1U]) | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [2U]) | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]) | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]) | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [5U]) | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                            [6U]) | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [7U]) | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                          [8U]) | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                         [9U]) | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                        [0xaU]) | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                       [0xbU]) | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                      [0xcU]) | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                     [0xdU]) | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                    [0xeU]) | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0xfU])) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0 
        = ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count) 
              >= (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t))) 
           & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6 
        = (((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count)) 
            & (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt))))) 
           & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__quot_digit_iter_end 
        = ((((0U == (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__u_sign_coder__DOT__sign) 
                           >> 1U))) << 4U) | ((4U == 
                                               (7U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__u_sign_coder__DOT__sign) 
                                                   >> 1U))) 
                                              << 3U)) 
           | (((2U == (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__u_sign_coder__DOT__sign) 
                             >> 1U))) << 2U) | (((6U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__u_sign_coder__DOT__sign))) 
                                                 << 1U) 
                                                | (7U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__u_sign_coder__DOT__sign))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_cmp_res 
        = ((((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_normal_init_value 
                              >> 0x1dU))) >= ((((((4U 
                                                   & (((- (IData)(
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
                                                  | (6U 
                                                     & (- (IData)(
                                                                  (3U 
                                                                   == 
                                                                   (7U 
                                                                    & (IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                               >> 0x1cU)))))))) 
                                                 | (6U 
                                                    & (- (IData)(
                                                                 (4U 
                                                                  == 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                              >> 0x1cU)))))))) 
                                                | (6U 
                                                   & (- (IData)(
                                                                (5U 
                                                                 == 
                                                                 (7U 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                             >> 0x1cU)))))))) 
                                               | (6U 
                                                  & (- (IData)(
                                                               (6U 
                                                                == 
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                            >> 0x1cU)))))))) 
                                              | (8U 
                                                 & (- (IData)(
                                                              (7U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                           >> 0x1cU))))))))) 
            << 1U) | ((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_normal_init_value 
                                       >> 0x1dU))) 
                      >= ((((((((0xcU & (- (IData)(
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                >> 0x1cU))))))) 
                                | (0xeU & (- (IData)(
                                                     (1U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                  >> 0x1cU)))))))) 
                               | (0xfU & (- (IData)(
                                                    (2U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                 >> 0x1cU)))))))) 
                              | (0x10U & (- (IData)(
                                                    (3U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                 >> 0x1cU)))))))) 
                             | (0x12U & (- (IData)(
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                >> 0x1cU)))))))) 
                            | (0x14U & (- (IData)((5U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                               >> 0x1cU)))))))) 
                           | (0x16U & (- (IData)((6U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                              >> 0x1cU)))))))) 
                          | (0x16U & (- (IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                             >> 0x1cU))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_extend_msb 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q) 
             >> 5U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q)) 
           & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_shifted_rem 
                      >> 0x20U)));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv_ena) {
        if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv_wea)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv_addra];
        }
        if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv_wea)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv_addra];
        }
    }
    vlSelf->num_data = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data;
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)));
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
            = (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr)) 
                << 0xdU) | (QData)((IData)((0x801U 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awsize) 
                                                << 8U) 
                                               | (0xf0U 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen) 
                                                     << 4U)))))));
    }
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel 
        = (((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0)) 
            & (7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1)))
            ? 7U : (((7U != (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0)) 
                     & (7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1)))
                     ? (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0)
                     : (((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0)) 
                         & (7U != (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1)))
                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1)
                         : ((2U < (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel))
                             ? (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0)
                             : (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1)))));
    vlSelf->btn_key_col = ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
                            ? 0U : ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                     ? 0xeU : ((2U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                ? 0xdU
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                    ? 0xbU
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                     ? 7U
                                                     : 0U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_if_bus 
        = (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__code)) 
            << 0x25U) | (((QData)((IData)(((IData)(4U) 
                                           + ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                               << 0xdU) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
                                                 >> 0x13U))))) 
                          << 5U) | (QData)((IData)(
                                                   ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid) 
                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[0U]) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__tlbr_wen) 
                                                        << 3U) 
                                                       | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid) 
                                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__refetch)) 
                                                           << 2U) 
                                                          | (3U 
                                                             & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid))) 
                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                                    << 0x10U) 
                                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                                      >> 0x10U)))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn 
        = ((((IData)((0U != (0x30000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U]))) 
             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__refetch)) 
            | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[0U]) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    }
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_num_d 
            = (0xfU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__lzc_diff_fast) 
                        >> 1U) + (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__lzc_diff_fast))));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_data_in 
            = (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_num 
            = (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc_q));
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_num_d 
            = (0xfU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_num_q) 
                       - (IData)(1U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_data_in 
            = (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_shifted_rem);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_num 
            = (0x1fU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_too_small_q) 
                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q) 
                            >> 5U)) ? 0U : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q)));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s0 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_num))
            ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_extend_msb) 
                << 0x1fU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_data_in 
                             >> 1U)) : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_data_in);
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (2U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            if ((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset 
                    = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai) 
                             >> 1U));
            }
        } else {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset = 0U;
        }
        if ((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
                      & (7U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))))) {
            if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg 
                    = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                             >> 4U));
            }
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg 
                = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                         >> 5U));
        }
        if (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin = 1U;
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r 
                = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata;
        } else if (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r2) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin = 0U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_req) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__rd_req_buffer = 1U;
        } else if ((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid)) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__rd_req_buffer = 0U;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg = 4U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__rd_req_buffer = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rid)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state;
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__mem_reg__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__mem_reg__v0;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__mem_reg__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__mem_reg__v0;
    }
    vlSelf->simu_top__DOT__soc__DOT__s0_wready = (1U 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out) 
                                                     | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid))));
    vlSelf->simu_top__DOT__soc__DOT__conf_s_wready 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out) 
                 | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid))));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h90ddc2f0__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | (IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h90ddc2f0__0));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h90ddc2f0__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h90ddc2f0__0) 
              << 1U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h90ddc2f0__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h90ddc2f0__0) 
              << 2U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h90ddc2f0__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h90ddc2f0__0) 
              << 3U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h90ddc2f0__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h90ddc2f0__0) 
              << 4U));
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__read_requst_state) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__read_requst_state) {
                if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arready) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arid))) {
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__read_requst_state = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid = 0U;
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arready) 
                            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arid)))) {
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__read_requst_state = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid = 0U;
                }
            }
        } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_req) {
            if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state))) {
                if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bready))) {
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__read_requst_state = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__cpu_arid = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_addr;
                    vlSelf->simu_top__DOT__soc__DOT__cpu_arsize 
                        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__data_real_rd_size;
                    vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen 
                        = ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))
                            ? 3U : 0U);
                    vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid = 1U;
                }
            } else {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__read_requst_state = 1U;
                vlSelf->simu_top__DOT__soc__DOT__cpu_arid = 1U;
                vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_addr;
                vlSelf->simu_top__DOT__soc__DOT__cpu_arsize 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__data_real_rd_size;
                vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen 
                    = ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))
                        ? 3U : 0U);
                vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid = 1U;
            }
        } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_req) {
            if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state))) {
                if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bready))) {
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__read_requst_state = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__cpu_arid = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_addr;
                    vlSelf->simu_top__DOT__soc__DOT__cpu_arsize 
                        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__inst_real_rd_size;
                    vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen 
                        = ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_type))
                            ? 3U : 0U);
                    vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid = 1U;
                }
            } else {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__read_requst_state = 1U;
                vlSelf->simu_top__DOT__soc__DOT__cpu_arid = 0U;
                vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_addr;
                vlSelf->simu_top__DOT__soc__DOT__cpu_arsize 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__inst_real_rd_size;
                vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen 
                    = ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_type))
                        ? 3U : 0U);
                vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid = 1U;
            }
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__read_requst_state = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_addr 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_tag 
                << 0xcU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index) 
                             << 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_offset)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_type 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_size;
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_addr 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_tag 
                << 0xcU) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index) 
                            << 4U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_type = 4U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_reflush 
        = (IData)((0ULL != (0x1fULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_if_bus)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__refetch 
        = (1U & (IData)((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid)
                           ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r
                           : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_if_bus) 
                         >> 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__excp 
        = (1U & (IData)((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid)
                           ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r
                           : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_if_bus) 
                         >> 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__ertn 
        = (1U & (IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid)
                          ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r
                          : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_if_bus)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__idle 
        = (1U & (IData)((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid)
                           ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r
                           : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_if_bus) 
                         >> 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__tlb_excp 
        = (1U & (IData)((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid)
                           ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r
                           : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_if_bus) 
                         >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable 
        = ((IData)(vlSelf->aresetn) & ((0U != vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s1 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_num))
            ? (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_extend_msb))) 
                << 0x1eU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s0 
                             >> 2U)) : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s0);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r2 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1;
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_wdata;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_wlast;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv_ena 
        = (1U & ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                 | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_ena 
        = (1U & ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                 | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_ena 
        = (1U & ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                 | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_ena 
        = (1U & ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                 | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_ena 
        = (1U & ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                 | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_ena 
        = (1U & ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                 | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_ena 
        = (1U & ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                 | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_ena 
        = (1U & ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                 | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_ena 
        = (1U & ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                 | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_req 
        = ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
           & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_op))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_cacop_hit 
        = (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer 
             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_tag 
                == (0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer 
                                >> 1U)))) & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_mode))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_hit 
        = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_tag 
              == (0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer 
                              >> 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__replace_way 
        = (1U & (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer) 
                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__lfsr__DOT__r_lfsr) 
                     >> 7U)) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_cacop_hit 
        = (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer 
             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_tag 
                == (0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer 
                                >> 1U)))) & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_mode))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_hit 
        = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_tag 
              == (0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer 
                              >> 1U))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap 
        = ((0xfffffffcU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap) 
           | (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap 
        = ((3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap) 
           | ((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
              | (0x3cU & ((0xfffffffcU & (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                          & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen)) 
                                             << 2U))) 
                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen) 
                              & ((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                                >> 2U))) 
                             << 2U)))));
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
            = (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr)) 
                << 0xdU) | (QData)((IData)((0x801U 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awsize) 
                                                << 8U) 
                                               | (0xf0U 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen) 
                                                     << 4U)))))));
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (7U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            if ((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai;
            }
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (1U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            if ((0x80U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                    = ((0xff00ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl) 
                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai) 
                          << 8U));
            }
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (2U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            if ((0x80U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                    = ((0xffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl) 
                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai) 
                          << 0x10U));
            }
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (0U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            if ((0x80U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                    = ((0xffff00U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl) 
                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai));
            }
        }
        if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state))) {
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state))) {
                if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state = 0U;
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bready))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__cpu_bready = 0U;
                }
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state))) {
                if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw) 
                        | (~ (IData)(vlSelf->enable_delay))))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state = 4U;
                    vlSelf->simu_top__DOT__soc__DOT__cpu_awvalid = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid = 1U;
                }
            } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready) 
                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w) 
                           | (~ (IData)(vlSelf->enable_delay))))) {
                if (vlSelf->simu_top__DOT__soc__DOT__cpu_wlast) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state = 6U;
                    vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__cpu_wlast = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__cpu_bready = 1U;
                } else {
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_num 
                        = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_num) 
                                 - (IData)(1U)));
                    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_last) {
                        vlSelf->simu_top__DOT__soc__DOT__cpu_wlast = 1U;
                    }
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state = 4U;
                    vlSelf->simu_top__DOT__soc__DOT__cpu_wdata 
                        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_data[0U];
                    vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid = 1U;
                    __Vtemp_h18c1ade6__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_data[1U];
                    __Vtemp_h18c1ade6__0[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_data[2U];
                    __Vtemp_h18c1ade6__0[2U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_data[3U];
                    VL_EXTEND_WW(128,96, __Vtemp_hea665da4__0, __Vtemp_h18c1ade6__0);
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_data[0U] 
                        = __Vtemp_hea665da4__0[0U];
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_data[1U] 
                        = __Vtemp_hea665da4__0[1U];
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_data[2U] 
                        = __Vtemp_hea665da4__0[2U];
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_data[3U] 
                        = __Vtemp_hea665da4__0[3U];
                }
            }
        } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state = 0U;
        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state = 0U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req) {
            __Vtemp_hdcd30b01__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[1U];
            __Vtemp_hdcd30b01__0[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[2U];
            __Vtemp_hdcd30b01__0[2U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[3U];
            VL_EXTEND_WW(128,96, __Vtemp_ha6ef75fe__0, __Vtemp_hdcd30b01__0);
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_data[0U] 
                = __Vtemp_ha6ef75fe__0[0U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_data[1U] 
                = __Vtemp_ha6ef75fe__0[1U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_data[2U] 
                = __Vtemp_ha6ef75fe__0[2U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_data[3U] 
                = __Vtemp_ha6ef75fe__0[3U];
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state = 5U;
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache) {
                vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr 
                    = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_tag 
                        << 0xcU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index) 
                                     << 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset)));
                vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb;
            } else {
                vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr 
                    = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_replaceWay)
                          ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__output_buffer 
                             >> 1U) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__output_buffer 
                                       >> 1U)) << 0xcU) 
                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index) 
                          << 4U));
                vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb = 0xfU;
            }
            if ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu_awsize = 2U;
                vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen = 3U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_num = 3U;
            } else {
                vlSelf->simu_top__DOT__soc__DOT__cpu_awsize 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type;
                vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen = 0U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_num = 0U;
                vlSelf->simu_top__DOT__soc__DOT__cpu_wlast = 1U;
            }
            vlSelf->simu_top__DOT__soc__DOT__cpu_awvalid = 1U;
            vlSelf->simu_top__DOT__soc__DOT__cpu_wdata 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[0U];
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (3U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
            = (0xff00ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl);
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
            = (0xffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl);
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
            = (0xffff00U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_num = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_data[0U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_data[1U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_data[2U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_data[3U] = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu_awvalid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu_wlast = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu_bready = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr = 3U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_rw_dma;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_dma;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_dma;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai 
            = (0xffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma);
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_addr_dma;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu = 0U;
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai 
            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu));
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu 
            = ((0U == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                >> 0xeU))) ? (0xffU 
                                              & ((4U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                  ? 
                                                 ((2U 
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
                                                  : 
                                                 ((2U 
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
                                                     >> 3U))))))
                : 0U);
    }
    if (vlSelf->aresetn) {
        if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))) {
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state = 0U;
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state = 0U;
            } else if ((1U & (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last)) 
                                | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__rd_req_buffer))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_op) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state = 0U;
            } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_retNum 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_retNum)));
            }
        } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))) {
                if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req) {
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req = 0U;
                }
                if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__rd_requst_can_receive) 
                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_op) 
                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache))) 
                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state = 4U;
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_retNum = 0U;
                }
            } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache) 
                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_op))) 
                        | (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state)))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req 
                    = (((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__replace_d) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__replace_v)) 
                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache))) 
                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en))) 
                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_op))) 
                        | (((((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode)) 
                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_hit_r)) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en)) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__replace_d)) 
                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__replace_v))) 
                       | ((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode)) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en)) 
                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__replace_d)) 
                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__replace_v)));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state = 3U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_replaceWay 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__replace_way;
            }
        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))) {
            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_req) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lookup2lookup_able))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state = 1U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache 
                    = (1U & (~ ((IData)((0x800000ULL 
                                         == (0xc00000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus)))
                                 ? (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                            >> 3U))
                                 : ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select))
                                     ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select))
                                         ? (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                    >> 2U))
                                         : (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                    >> 1U)))
                                     : (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                >> 7U))))));
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_size 
                    = ((3U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                     >> 1U))) ? 2U : 
                       ((2U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                      >> 1U))) ? 1U
                         : 0U));
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_op 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_wr;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr 
                                >> 4U));
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_tag 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr 
                       >> 0xcU);
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset 
                    = (0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr);
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_wstrb;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wdata 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_wdata;
            } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache_tlb_excp_cancel_req) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state = 0U;
            } else if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_hit)) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state = 2U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_hit_r 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_hit;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_hit_r 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_hit;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_hit_r 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_hit;
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state = 0U;
            }
        } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_req) 
                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcacop_en)) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__idle2lookup_able))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state = 1U;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache 
                = (1U & ((~ ((IData)((0x800000ULL == 
                                      (0xc00000ULL 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus)))
                              ? (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                         >> 3U)) : 
                             ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select))
                               ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select))
                                   ? (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                              >> 2U))
                                   : (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                              >> 1U)))
                               : (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                          >> 7U))))) 
                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcacop_en))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_size 
                = ((3U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                 >> 1U))) ? 2U : ((2U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                                       >> 1U)))
                                                   ? 1U
                                                   : 0U));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_op 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_wr;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index 
                = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr 
                            >> 4U));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_tag 
                = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr 
                   >> 0xcU);
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset 
                = (0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr);
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_wstrb;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wdata 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_wdata;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcacop_en;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode 
                = (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                         >> 0x18U));
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_req) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__rd_req_buffer = 1U;
        } else if ((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state)) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid)) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__rd_req_buffer = 0U;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_op = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_tag = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wdata = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_size = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_replaceWay = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__rd_req_buffer = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__s0_wready));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_wready) 
              << 3U));
    vlSelf->simu_top__DOT__soc__DOT__m0_bid = 0U;
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [0U];
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [1U];
    }
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [2U];
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 0U;
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [0U];
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [1U];
    }
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [2U];
    }
    if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [3U];
        vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [3U];
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_bvalid = 0U;
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid));
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                     >> 1U));
    }
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                     >> 2U));
    }
    if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                     >> 3U));
    }
    if ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                     >> 4U));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__inst_real_rd_size 
        = ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_type))
            ? 2U : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_type));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit 
        = ((0x19U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)) 
           | ((0x1fe0U == (vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                           >> 0x10U)) << 2U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)) 
           | (((0x1fafU == (0x1fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                                       >> 0x10U))) 
               | (0x1fd0U == (0x1fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                                         >> 0x10U)))) 
              << 3U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)) 
           | (1U & (~ (((0x1fafU == (0x1fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                                                >> 0x10U))) 
                        | (0x1fd0U == (0x1fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                                                  >> 0x10U)))) 
                       | (0x1fe0U == (vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                                      >> 0x10U))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s2 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_num))
            ? (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_extend_msb))) 
                << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s1 
                             >> 4U)) : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__replace_d 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__replace_way)
                  ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_D[
                     ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index) 
                      >> 5U)] >> (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index)))
                  : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_D[
                     ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index) 
                      >> 5U)] >> (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_cacop_hit 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_cacop_hit) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_cacop_hit));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__hitData 
        = (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_hit))) 
            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data[
            (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_offset) 
                   >> 2U))]) | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_hit))) 
                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data[
                                (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_offset) 
                                       >> 2U))]));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_hit 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_hit) 
             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_hit)) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_en)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_next 
        = ((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
            | ((- (IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
               & ((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                   >> 2U)) << 2U) | 
                  (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))) 
           | ((- (IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap));
    __Vtableidx3 = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir 
        = Vsimu_top__ConstPool__TABLE_hc3b7fa0f_0[__Vtableidx3];
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int 
        = Vsimu_top__ConstPool__TABLE_h1da55f25_0[__Vtableidx3];
    vlSelf->simu_top__DOT__soc__DOT__m0_arready = 0U;
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
                  >> 1U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 1U));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
                  >> 2U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 2U));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
                  >> 3U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 3U));
    }
    if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
            >> 4U))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 4U));
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode 
        = ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
           | (3U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s3 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_num))
            ? (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_extend_msb))) 
                << 0x18U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s2 
                             >> 8U)) : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr_ok 
        = (((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
            | ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_hit))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_en)));
    vlSelf->uart_rx = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg) 
                          ^ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                             >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
            >> 3U) & ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))
                       ? ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                            == (7U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg)))) 
                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                          & (2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))))
                       : (0U != (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr)))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
            | ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate)) 
               & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error) 
                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                      == (7U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg))))) 
                  | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error))))) 
           & ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count)) 
              & (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en 
        = (((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
            | (1U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                 >> 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s4 
        = ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_num))
            ? (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_extend_msb))) 
                << 0x10U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s3 
                             >> 0x10U)) : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_d 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))
            ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_too_small_q) 
                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q) 
                   >> 5U)) ? ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s4)) 
                              << 3U) : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__no_iter_needed_q)
                                         ? 0ULL : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_normal_init_value))
            : (((0xffffffffcULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                   << 2U)) ^ (0xffffffffcULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                 << 2U))) 
               ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__csa_3_2_x3));
    vlSelf->simu_top__DOT__soc__DOT__m0_wready = 0U;
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready));
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready) 
                     >> 1U));
    }
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready) 
                     >> 2U));
    }
    if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready) 
                     >> 3U));
    }
    if ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready) 
                     >> 4U));
    }
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w 
        = (1U & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                  >> 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable)));
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw 
        = (1U & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                  >> 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en));
    vlSelf->simu_top__DOT__soc__DOT__uart0_txd_oe = 
        ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next 
        = (0x1ffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                     + (0xffU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                 >> 0x10U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_last 
        = (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_num));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit 
        = ((0x19U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)) 
           | ((0x1fe0U == (vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr 
                           >> 0x10U)) << 2U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit 
        = ((7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)) 
           | ((0x1fd0U == (0x1fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr 
                                      >> 0x10U))) << 3U));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv_ena) {
        if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv_wea)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv_addra];
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv_ena) {
        if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv_wea)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv_addra];
        }
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_toggle 
        = (1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                  ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next)) 
                 >> 8U));
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__mem_reg__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__mem_reg__v0;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__mem_reg__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__mem_reg__v0;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache_tlb_excp_cancel_req 
        = (IData)((0U != (0x7cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U])));
    __Vtableidx6 = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value 
        = Vsimu_top__ConstPool__TABLE_hb8238e9e_0[__Vtableidx6];
    __Vtableidx9 = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value 
        = Vsimu_top__ConstPool__TABLE_hf182b53e_0[__Vtableidx9];
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out 
        = ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
           & (0U != (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                              >> 0xeU))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel) 
           & (0U == (0xfc000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab) 
           & (0U == (0xfc000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__replace_way 
        = (1U & (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode)) 
                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en))
                  ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset)
                  : ((((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode)) 
                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en)) 
                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_hit_r))
                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_hit_r)
                      : (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__output_buffer) 
                          | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lfsr__DOT__r_lfsr) 
                             >> 7U)) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__output_buffer))));
    VL_EXTEND_WI(128,32, __Vtemp_h3bce9da3__0, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wdata);
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[0U] 
            = __Vtemp_h3bce9da3__0[0U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[1U] 
            = __Vtemp_h3bce9da3__0[1U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[2U] 
            = __Vtemp_h3bce9da3__0[2U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[3U] 
            = __Vtemp_h3bce9da3__0[3U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_size;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_addr 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_tag 
                << 0xcU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index) 
                             << 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset)));
    } else {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_replaceWay) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[0U] 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_data[0U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[1U] 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_data[1U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[2U] 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_data[2U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[3U] 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_data[3U];
        } else {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[0U] 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_data[0U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[1U] 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_data[1U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[2U] 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_data[2U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[3U] 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_data[3U];
        }
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type = 4U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_addr 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_tag 
                << 0xcU) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index) 
                            << 4U));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_hit 
        = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__output_buffer 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_tag 
              == (0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__output_buffer 
                              >> 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_hit 
        = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__output_buffer 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_tag 
              == (0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__output_buffer 
                              >> 1U))));
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_allowin) 
         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_to_exe_valid))) {
        __Vtemp_h9c9a7739__0[0U] = ((((((((((((((((
                                                   ((((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slli) 
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
                                                | (0ULL 
                                                   != 
                                                   (0x280000ULL 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d))) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slti)) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sltui)) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_andi)) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ori)) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_xori)) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i)) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_cacop)) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll)) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sc))
                                       ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__imm
                                       : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB) 
                                     << 0x19U) | ((
                                                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_div) 
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
                                                                       & ((((1U 
                                                                             & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrrd)))) 
                                                                            | (2U 
                                                                               & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrwr))))) 
                                                                           | (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrxchg)))) 
                                                                          & (- (IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_excp)))))))))))))));
        __Vtemp_h9c9a7739__0[1U] = ((((((((((((((((
                                                   ((((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slli) 
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
                                                | (0ULL 
                                                   != 
                                                   (0x280000ULL 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d))) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slti)) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sltui)) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_andi)) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ori)) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_xori)) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i)) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_cacop)) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll)) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sc))
                                       ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__imm
                                       : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB) 
                                     >> 7U) | ((IData)(
                                                       (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((IData)(
                                                                                ((0ULL 
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
        __Vtemp_h30ec6957__0[3U] = ((0x3e000000U & 
                                     (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntid)
                                        ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                            << 0x17U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                              >> 9U))
                                        : ((1U & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                          >> 0x15U)))
                                            ? 1U : 
                                           ((1U & (
                                                   ((((IData)(
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
                                             ? 0U : 
                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                              << 0x1cU) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 4U))))) 
                                      << 0x19U)) | 
                                    ((IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB)) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((IData)(
                                                                          ((0ULL 
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
                                     >> 7U));
        __Vtemp_hdbeaea70__0[3U] = (((((((((((((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w)) 
                                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b))) 
                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h))) 
                                               & (0ULL 
                                                  == 
                                                  (0xfd00000ULL 
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
                                     << 0x1fU) | ((
                                                   ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w) 
                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b)) 
                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h)) 
                                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_excp))) 
                                                   << 0x1eU) 
                                                  | __Vtemp_h30ec6957__0[3U]));
        __Vtemp_hd47c7449__0[2U] = ((__Vtemp_h9c9a7739__0[1U] 
                                     >> 0xfU) | (0xfffe0000U 
                                                 & ((IData)(
                                                            (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((IData)(
                                                                                ((0ULL 
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
                                                    << 0xaU)));
        __Vtemp_hd47c7449__0[3U] = ((((IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB)) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((IData)(
                                                                          ((0ULL 
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
                                      >> 0x16U) | (0x1fc00U 
                                                   & ((IData)(
                                                              ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB)) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                ((IData)(
                                                                                ((0ULL 
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
                                                      << 0xaU))) 
                                    | (__Vtemp_hdbeaea70__0[3U] 
                                       << 0x11U));
        __Vtemp_h20b39df6__0[0U] = (((IData)((((QData)((IData)(
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[2U])) 
                                               << 0x3cU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U])) 
                                                    >> 4U)))) 
                                     << 0x12U) | ((
                                                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll) 
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
                                                     | (((IData)(
                                                                 ((0x14000U 
                                                                   == 
                                                                   (0xfffc000U 
                                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U])) 
                                                                  & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrrd) 
                                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrwr)) 
                                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrxchg)))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_idle) 
                                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_excp)))))));
        __Vtemp_h6e739bde__0[2U] = ((0xfc000000U & 
                                     ((((((0x4000000U 
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
                                             << 0x1aU))) 
                                      & ((- (IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_excp))))) 
                                         << 0x1aU))) 
                                    | ((0x3e00000U 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                           << 0x11U)) 
                                       | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_cacop) 
                                            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_excp))) 
                                           << 0x14U) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll) 
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
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[0U] 
            = __Vtemp_h20b39df6__0[0U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[1U] 
            = (((IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[2U])) 
                          << 0x3cU) | (((QData)((IData)(
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U])) 
                                        >> 4U)))) >> 0xeU) 
               | ((IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[2U])) 
                             << 0x3cU) | (((QData)((IData)(
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U])) 
                                           << 0x1cU) 
                                          | ((QData)((IData)(
                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U])) 
                                             >> 4U))) 
                           >> 0x20U)) << 0x12U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
            = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__excp_num) 
                << 0x1fU) | ((0x60000000U & (((0x20000000U 
                                               & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntid))) 
                                                  << 0x1dU)) 
                                              | (0x40000000U 
                                                 & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntvl))) 
                                                    << 0x1dU))) 
                                             | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntvh))) 
                                                << 0x1dU))) 
                             | __Vtemp_h6e739bde__0[2U]));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[3U] 
            = (((0x7fff0000U & (__Vtemp_h9c9a7739__0[0U] 
                                << 0x10U)) | ((0x7fff8000U 
                                               & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ertn) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_excp))) 
                                                  << 0xfU)) 
                                              | ((0x7fffc000U 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_excp) 
                                                     << 0xeU)) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__excp_num) 
                                                    >> 1U)))) 
               | (0x80000000U & (__Vtemp_h9c9a7739__0[0U] 
                                 << 0x10U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
            = (((__Vtemp_h9c9a7739__0[0U] >> 0x10U) 
                | (0x7fff0000U & (__Vtemp_h9c9a7739__0[1U] 
                                  << 0x10U))) | (__Vtemp_hd47c7449__0[2U] 
                                                 << 0x1fU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
            = ((__Vtemp_hd47c7449__0[2U] >> 1U) | (
                                                   __Vtemp_hd47c7449__0[3U] 
                                                   << 0x1fU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
            = ((__Vtemp_hd47c7449__0[3U] >> 1U) | (0x80000000U 
                                                   & (__Vtemp_hdbeaea70__0[3U] 
                                                      << 0x10U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
            = ((0x7ffe0000U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__alu_op) 
                               << 0x11U)) | ((0x7fff0000U 
                                              & (((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w) 
                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b)) 
                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h)) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_bu)) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_hu)) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll)) 
                                                 << 0x10U)) 
                                             | (__Vtemp_hdbeaea70__0[3U] 
                                                >> 0x10U)));
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in 
        = (1U & ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                  ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out)
                  : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol)
                      ? (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad))
                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad))));
    vlSelf->uart_tx = (1U & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__uart0_txd_oe)) 
                              & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                  >> 4U) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out)))) 
                             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__uart0_txd_oe))));
    __Vtemp_h17b52804__0[0U] = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab;
    __Vtemp_h17b52804__0[1U] = (IData)((((QData)((IData)(
                                                         (0xfU 
                                                          & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw))));
    __Vtemp_h17b52804__0[2U] = (IData)(((((QData)((IData)(
                                                          (0xfU 
                                                           & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw))) 
                                        >> 0x20U));
    __Vtemp_h17b52804__0[3U] = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai;
    VL_EXTEND_WW(128,104, __Vtemp_ha2e91cf0__0, __Vtemp_h17b52804__0);
    vlSelf->uart_ctr_bus[0U] = __Vtemp_ha2e91cf0__0[0U];
    vlSelf->uart_ctr_bus[1U] = __Vtemp_ha2e91cf0__0[1U];
    vlSelf->uart_ctr_bus[2U] = __Vtemp_ha2e91cf0__0[2U];
    vlSelf->uart_ctr_bus[3U] = __Vtemp_ha2e91cf0__0[3U];
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
              & ((0U == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                  >> 0xeU))) ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                  : (0U != (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                     >> 0xeU))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state;
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__replace_way) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__replace_v 
            = (1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__output_buffer);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__replace_d 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_D[
                     ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index) 
                      >> 5U)] >> (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index))));
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__replace_v 
            = (1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__output_buffer);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__replace_d 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_D[
                     ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index) 
                      >> 5U)] >> (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index))));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__data_real_rd_size 
        = ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))
            ? 2U : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__hitData 
        = (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_hit))) 
            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_data[
            (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset) 
                   >> 2U))]) | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_hit))) 
                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_data[
                                (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset) 
                                       >> 2U))]));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_hit 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_hit) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_hit)) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
            & (0U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
           & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
            & (2U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
           & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
            & (6U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
           & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
            & (0U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
           & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
            & (5U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
           & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv_ena 
        = (1U & (((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state)) 
                  | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))) 
                 | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv_ena 
        = (1U & (((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state)) 
                  | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))) 
                 | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_ena 
        = (1U & (((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state)) 
                  | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))) 
                 | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_req 
        = (((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state)) 
            & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache) 
                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_op)))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en)));
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_allowin) 
         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_id_valid))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_id_bus[0U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_id_bus[1U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[2U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_id_bus[2U];
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_sign 
        = (1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U]) 
                 >> 8U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_sign 
        = (1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U]) 
                 >> 8U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__div_start_handshaked 
        = (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
             >> 6U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_valid)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q));
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_in[0U] 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                             >> 9U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_in[1U] 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                             >> 9U));
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_in[0U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_q;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_in[1U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcacop_en 
        = (((IData)((0x300000U == (0xf00000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U]))) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_valid)) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en 
        = (((IData)((0x100000U == (0xf00000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U]))) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_valid)) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__or_result 
        = (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
             << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                          >> 9U)) | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                      << 0x17U) | (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                                   >> 9U)));
    if ((1U & (((0x7ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                           >> 0x12U)) | (0x3ffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                                   >> 0x13U))) 
               | (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                            >> 0x14U))))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_b 
            = (~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                   << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                >> 9U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_cin = 1U;
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_b 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                             >> 9U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_cin = 0U;
    }
    if ((0x80U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U])) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
            = (((QData)((IData)((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                       >> 8U)))) << 0x20U) 
               | (QData)((IData)(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                   << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                                >> 9U)))));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
            = (((QData)((IData)((- (IData)((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                                  >> 8U)))))) 
                << 0x20U) | (QData)((IData)(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                              << 0x17U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                >> 9U)))));
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
            = (QData)((IData)(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                             >> 9U))));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
            = (QData)((IData)(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                             >> 9U))));
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d)));
    __Vtableidx1 = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__div_start_handshaked) 
                     << 0xbU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__no_iter_needed_q) 
                                  << 0xaU) | ((0x200U 
                                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q) 
                                                  << 4U)) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_too_small_q) 
                                                  << 8U) 
                                                 | (((0U 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_num_q)) 
                                                     << 7U) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__div_finish_ready_i) 
                                                        << 6U) 
                                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_d 
        = Vsimu_top__ConstPool__TABLE_h82a1c4d2_0[__Vtableidx1];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_res[0U] 
        = (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_in
           [0U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_res[1U] 
        = (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_in
           [1U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__cacop_load 
        = (IData)(((0x2000000U == (0x3000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U])) 
                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en) 
                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcacop_en))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_result 
        = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
              << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                           >> 9U)) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_b) 
           + (IData)((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_cin))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x 
        = (IData)((6ULL == (0xeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x 
        = (IData)((0x18ULL == (0x38ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x 
        = (IData)((0x60ULL == (0xe0ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x 
        = (IData)((0x180ULL == (0x380ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x 
        = (IData)((0x600ULL == (0xe00ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x 
        = (IData)((0x1800ULL == (0x3800ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x 
        = (IData)((0x6000ULL == (0xe000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x 
        = (IData)((0x18000ULL == (0x38000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x 
        = (IData)((0x60000ULL == (0xe0000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x 
        = (IData)((0x180000ULL == (0x380000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x 
        = (IData)((0x600000ULL == (0xe00000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x 
        = (IData)((0x1800000ULL == (0x3800000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x 
        = (IData)((0x6000000ULL == (0xe000000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x 
        = (IData)((0x18000000ULL == (0x38000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x 
        = (IData)((0x60000000ULL == (0xe0000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x 
        = (IData)((1ULL == (3ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((2ULL == (0xeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((4ULL == (0xeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((8ULL == (0x38ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x10ULL == (0x38ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x20ULL == (0xe0ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x40ULL == (0xe0ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x80ULL == (0x380ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x100ULL == (0x380ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x200ULL == (0xe00ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x400ULL == (0xe00ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x800ULL == (0x3800ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x1000ULL == (0x3800ULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x2000ULL == (0xe000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x4000ULL == (0xe000ULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x8000ULL == (0x38000ULL 
                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x10000ULL == (0x38000ULL 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x20000ULL == (0xe0000ULL 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x40000ULL == (0xe0000ULL 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x80000ULL == (0x380000ULL 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x100000ULL == (0x380000ULL 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x200000ULL == (0xe00000ULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x400000ULL == (0xe00000ULL 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x800000ULL == (0x3800000ULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x1000000ULL == (0x3800000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x2000000ULL == (0xe000000ULL 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x4000000ULL == (0xe000000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x8000000ULL == (0x38000000ULL 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x10000000ULL == (0x38000000ULL 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x20000000ULL == (0xe0000000ULL 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x40000000ULL == (0xe0000000ULL 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx 
        = (IData)((3ULL == (3ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x 
        = (IData)((2ULL == (3ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0xcULL == (0xeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0xaULL == (0xeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x 
        = (IData)((8ULL == (0xeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0x30ULL == (0x38ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x28ULL == (0x38ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x20ULL == (0x38ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0xc0ULL == (0xe0ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0xa0ULL == (0xe0ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x80ULL == (0xe0ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0x300ULL == (0x380ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x280ULL == (0x380ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x200ULL == (0x380ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0xc00ULL == (0xe00ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0xa00ULL == (0xe00ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x800ULL == (0xe00ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0x3000ULL == (0x3800ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x2800ULL == (0x3800ULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x2000ULL == (0x3800ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0xc000ULL == (0xe000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0xa000ULL == (0xe000ULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x8000ULL == (0xe000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0x30000ULL == (0x38000ULL 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x28000ULL == (0x38000ULL 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x20000ULL == (0x38000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0xc0000ULL == (0xe0000ULL 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0xa0000ULL == (0xe0000ULL 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x80000ULL == (0xe0000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0x300000ULL == (0x380000ULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x280000ULL == (0x380000ULL 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x200000ULL == (0x380000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0xc00000ULL == (0xe00000ULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0xa00000ULL == (0xe00000ULL 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x800000ULL == (0xe00000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0x3000000ULL == (0x3800000ULL 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x2800000ULL == (0x3800000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x2000000ULL == (0x3800000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0xc000000ULL == (0xe000000ULL 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0xa000000ULL == (0xe000000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x8000000ULL == (0xe000000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0x30000000ULL == (0x38000000ULL 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x28000000ULL == (0x38000000ULL 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x20000000ULL == (0x38000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0xc0000000ULL == (0xe0000000ULL 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0xa0000000ULL == (0xe0000000ULL 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x80000000ULL == (0xe0000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellinp__las__y 
        = ((4U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                           >> 0x20U)) << 2U)) | (3U 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                            >> 0x1fU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[1U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[1U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [1U]) | (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 1U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [2U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   >> 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 2U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [3U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   >> 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 3U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [4U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   >> 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 4U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [5U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   >> 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 5U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [6U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   >> 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 6U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [7U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   >> 6U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 7U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [8U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   >> 7U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 8U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [9U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   >> 8U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 9U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xaU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                     >> 9U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xaU))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xbU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                     >> 0xaU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xbU))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xcU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                     >> 0xbU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xcU))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xdU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                     >> 0xcU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xdU))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xeU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                     >> 0xdU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xeU))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xfU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                     >> 0xeU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0xfU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x10U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0xfU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x10U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x11U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x10U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x11U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x12U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x11U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x12U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x13U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x12U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x13U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x14U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x13U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x14U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x15U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x14U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x15U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x16U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x15U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x16U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x17U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x16U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x17U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x18U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x17U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x18U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x19U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x18U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x19U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x19U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x1aU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x1aU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x1bU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x1bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x1cU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x1cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x1dU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x1dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x1eU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x1eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x1fU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x20U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x1fU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x20U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x21U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x20U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x21U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x22U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x21U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x22U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x23U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x22U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x23U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x24U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x23U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x24U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x25U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x24U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x25U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x26U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x25U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x26U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x27U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x26U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x27U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x28U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x27U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x28U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x29U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x28U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x29U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x29U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x2aU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x2aU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x2bU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x2bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x2cU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x2cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x2dU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x2dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x2eU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x2eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x2fU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x30U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x2fU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x30U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x31U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x30U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x31U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x32U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x31U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x32U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x33U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x32U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x33U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x34U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x33U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x34U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x35U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x34U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x35U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x36U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x35U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x36U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x37U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x36U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x37U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x38U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x37U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x38U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x39U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x38U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x39U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x39U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x3aU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x3aU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x3bU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x3bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x3cU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x3cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x3dU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x3dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x3eU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x3eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 0x3fU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x40U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x3fU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[1U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       << 0x20U))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[1U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [1U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   << 0x20U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7fffffff80000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x1fU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7fffffff80000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3fffffffc0000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x1eU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3fffffffc0000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1fffffffe0000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x1dU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1fffffffe0000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xffffffff0000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x1cU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [5U]) | (1U & (IData)((0xffffffff0000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7fffffff8000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x1bU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7fffffff8000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3fffffffc000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x1aU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3fffffffc000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1fffffffe000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x19U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1fffffffe000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xffffffff000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x18U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [9U]) | (1U & (IData)((0xffffffff000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7fffffff800000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0x17U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7fffffff800000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3fffffffc00000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0x16U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3fffffffc00000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1fffffffe00000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0x15U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1fffffffe00000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xffffffff00000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0x14U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xffffffff00000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7fffffff80000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0x13U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7fffffff80000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3fffffffc0000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0x12U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3fffffffc0000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1fffffffe0000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1fffffffe0000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffff0000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffff0000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffff8000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffff8000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffc000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffc000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffe000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffe000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xffffffff000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xffffffff000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7fffffff800ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7fffffff800ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3fffffffc00ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3fffffffc00ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1fffffffe00ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1fffffffe00ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffff00ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffff00ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffff80ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffff80ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffc0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffc0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffe0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffe0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xffffffff0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xffffffff0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7fffffff8ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7fffffff8ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3fffffffcULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 2U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3fffffffcULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1fffffffeULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1fffffffeULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 2U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       << 2U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [1U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7ffffffffffffffeULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 1U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7ffffffffffffffeULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3fffffffffffffffULL 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3fffffffffffffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1fffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 1U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1fffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xfffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 2U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xfffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7ffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 3U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7ffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3ffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 4U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3ffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1ffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 5U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1ffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 6U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 7U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 8U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 9U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xfffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 0xaU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xfffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 0xbU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 0xcU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1ffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1ffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xfffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xfffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x22U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x23U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x24U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x25U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x26U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x27U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x28U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x28U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x29U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x29U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x2aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x2bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x2cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x2dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x2eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x2fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x30U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x30U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x31U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x31U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x32U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x33U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x34U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x34U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x35U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x36U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x36U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x37U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x37U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x38U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x38U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x39U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x39U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x3aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                >> 0x3aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x3bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x3bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x3cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x3cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x3dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x3dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       << 4U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [1U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7ffffffffffffff8ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 3U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7ffffffffffffff8ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3ffffffffffffffcULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 2U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3ffffffffffffffcULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1ffffffffffffffeULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 1U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1ffffffffffffffeULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xfffffffffffffffULL 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xfffffffffffffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7ffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 1U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7ffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3ffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 2U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3ffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1ffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 3U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1ffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 4U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 5U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 6U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 7U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xfffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 8U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xfffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 9U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 0xaU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1ffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1ffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xfffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xfffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x16U)))));
}