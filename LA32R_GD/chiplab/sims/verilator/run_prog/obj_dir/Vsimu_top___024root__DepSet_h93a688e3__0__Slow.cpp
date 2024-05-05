// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsimu_top___024root.h"

extern const VlUnpacked<CData/*3:0*/, 4> Vsimu_top__ConstPool__TABLE_h96982afa_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vsimu_top__ConstPool__TABLE_hb8238e9e_0;
extern const VlUnpacked<SData/*9:0*/, 256> Vsimu_top__ConstPool__TABLE_hf182b53e_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vsimu_top__ConstPool__TABLE_hc3b7fa0f_0;
extern const VlUnpacked<IData/*31:0*/, 32> Vsimu_top__ConstPool__TABLE_h1da55f25_0;
extern const VlUnpacked<CData/*5:0*/, 4096> Vsimu_top__ConstPool__TABLE_h82a1c4d2_0;

VL_ATTR_COLD void Vsimu_top___024root___settle__TOP__0(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___settle__TOP__0\n"); );
    // Init
    CData/*0:0*/ simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c94d657__0;
    CData/*2:0*/ __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__Vfuncout;
    CData/*2:0*/ __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid;
    CData/*2:0*/ __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num;
    CData/*2:0*/ __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__Vfuncout;
    CData/*2:0*/ __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid;
    CData/*2:0*/ __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num;
    SData/*11:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx2;
    CData/*4:0*/ __Vtableidx3;
    CData/*1:0*/ __Vtableidx5;
    CData/*7:0*/ __Vtableidx6;
    CData/*7:0*/ __Vtableidx9;
    VlWide<4>/*127:0*/ __Vtemp_h3bce9da3__0;
    VlWide<6>/*191:0*/ __Vtemp_h0a5f91e0__0;
    // Body
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[0U] = 0U;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[0U] = 0U;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready 
        = (0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[2U] = 0U;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[2U] = 0U;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[3U] = 0U;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[3U] = 0U;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready 
        = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bid;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bresp;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rresp;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[4U] 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bid;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[4U] 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bresp;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[4U] 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rresp;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready 
        = (0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready 
        = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready 
        = (0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready 
        = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit 
        = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rlast) 
              << 1U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rlast) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0U] = 0U;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rid;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[4U] 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rid;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rdata;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[4U] 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rdata;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid 
        = (0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid 
        = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid));
    vlSelf->NAND_top__DOT__NAND_IORDY_post_i = ((0xeU 
                                                 & (IData)(vlSelf->NAND_top__DOT__NAND_IORDY_post_i)) 
                                                | (1U 
                                                   & (IData)(vlSelf->NAND_IORDY_i)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[0U] 
        = vlSelf->ram_rdata;
    vlSelf->NAND_top__DOT__HIT8 = ((IData)(vlSelf->psel) 
                                   & (0x20U == (IData)(vlSelf->ADDR)));
    vlSelf->NAND_top__DOT__HIT9 = ((IData)(vlSelf->psel) 
                                   & (0x24U == (IData)(vlSelf->ADDR)));
    vlSelf->NAND_top__DOT__HIT10 = ((IData)(vlSelf->psel) 
                                    & (0x28U == (IData)(vlSelf->ADDR)));
    vlSelf->NAND_top__DOT__HIT11 = ((IData)(vlSelf->psel) 
                                    & (0x2cU == (IData)(vlSelf->ADDR)));
    vlSelf->NAND_top__DOT__NAND_HIT = ((IData)(vlSelf->penable) 
                                       & (0x40U == (IData)(vlSelf->ADDR)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid 
        = (0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid 
        = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen 
        = (IData)((0x8000U == (0xfffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])));
    vlSelf->confreg_uart_data = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data;
    vlSelf->debug0_wb_pc = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[1U];
    vlSelf->debug0_wb_rf_wnum = (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[3U]);
    vlSelf->debug0_wb_rf_wdata = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[2U];
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelf->ram_raddr = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr;
    vlSelf->ram_waddr = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr;
    vlSelf->ram_wdata = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata;
    vlSelf->debug0_wb_rf_wen = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[3U] 
                                 >> 5U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_valid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap 
        = ((0xfffffffcU & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap) 
           | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap 
        = ((0xfffffffcU & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap) 
           | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr));
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
    __Vtableidx5 = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level 
        = Vsimu_top__ConstPool__TABLE_h96982afa_0[__Vtableidx5];
    vlSelf->NAND_top__DOT__NAND_IORDY_post_i = ((0xdU 
                                                 & (IData)(vlSelf->NAND_top__DOT__NAND_IORDY_post_i)) 
                                                | (2U 
                                                   & (((0x1000U 
                                                        & vlSelf->NAND_top__DOT__nand_ce_map0)
                                                        ? (IData)(vlSelf->NAND_IORDY_i)
                                                        : 
                                                       ((0x2000U 
                                                         & vlSelf->NAND_top__DOT__nand_ce_map0)
                                                         ? 
                                                        ((IData)(vlSelf->NAND_IORDY_i) 
                                                         >> 1U)
                                                         : 
                                                        ((0x4000U 
                                                          & vlSelf->NAND_top__DOT__nand_ce_map0)
                                                          ? 
                                                         ((IData)(vlSelf->NAND_IORDY_i) 
                                                          >> 2U)
                                                          : 
                                                         ((~ 
                                                           (vlSelf->NAND_top__DOT__nand_ce_map0 
                                                            >> 0xfU)) 
                                                          | ((IData)(vlSelf->NAND_IORDY_i) 
                                                             >> 3U))))) 
                                                      << 1U)));
    vlSelf->NAND_top__DOT__NAND_IORDY_post_i = ((0xbU 
                                                 & (IData)(vlSelf->NAND_top__DOT__NAND_IORDY_post_i)) 
                                                | (4U 
                                                   & (((0x100000U 
                                                        & vlSelf->NAND_top__DOT__nand_ce_map0)
                                                        ? (IData)(vlSelf->NAND_IORDY_i)
                                                        : 
                                                       ((0x200000U 
                                                         & vlSelf->NAND_top__DOT__nand_ce_map0)
                                                         ? 
                                                        ((IData)(vlSelf->NAND_IORDY_i) 
                                                         >> 1U)
                                                         : 
                                                        ((0x400000U 
                                                          & vlSelf->NAND_top__DOT__nand_ce_map0)
                                                          ? 
                                                         ((IData)(vlSelf->NAND_IORDY_i) 
                                                          >> 2U)
                                                          : 
                                                         ((~ 
                                                           (vlSelf->NAND_top__DOT__nand_ce_map0 
                                                            >> 0x17U)) 
                                                          | ((IData)(vlSelf->NAND_IORDY_i) 
                                                             >> 3U))))) 
                                                      << 2U)));
    vlSelf->NAND_top__DOT__NAND_IORDY_post_i = ((7U 
                                                 & (IData)(vlSelf->NAND_top__DOT__NAND_IORDY_post_i)) 
                                                | (8U 
                                                   & (((0x10000000U 
                                                        & vlSelf->NAND_top__DOT__nand_ce_map0)
                                                        ? (IData)(vlSelf->NAND_IORDY_i)
                                                        : 
                                                       ((0x20000000U 
                                                         & vlSelf->NAND_top__DOT__nand_ce_map0)
                                                         ? 
                                                        ((IData)(vlSelf->NAND_IORDY_i) 
                                                         >> 1U)
                                                         : 
                                                        ((0x40000000U 
                                                          & vlSelf->NAND_top__DOT__nand_ce_map0)
                                                          ? 
                                                         ((IData)(vlSelf->NAND_IORDY_i) 
                                                          >> 2U)
                                                          : 
                                                         ((~ 
                                                           (vlSelf->NAND_top__DOT__nand_ce_map0 
                                                            >> 0x1fU)) 
                                                          | ((IData)(vlSelf->NAND_IORDY_i) 
                                                             >> 3U))))) 
                                                      << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_wready) 
              << 2U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[2U] 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__para_m_neg_0_trunc_3_4 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_neg_0_q) 
            << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__special_divisor_q));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__para_m_pos_1_trunc_3_4 
        = (0x78U | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_pos_1_q) 
                     << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__special_divisor_q)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_awready) 
              << 2U));
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
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_arready) 
              << 2U));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur));
    vlSelf->NAND_top__DOT__NAND_CE_pre_o = ((0xcU & (IData)(vlSelf->NAND_top__DOT__NAND_CE_pre_o)) 
                                            | ((((1U 
                                                  != (IData)(vlSelf->NAND_top__DOT__nand_number)) 
                                                 | (IData)(vlSelf->NAND_top__DOT__NAND_CE_)) 
                                                << 1U) 
                                               | ((0U 
                                                   != (IData)(vlSelf->NAND_top__DOT__nand_number)) 
                                                  | (IData)(vlSelf->NAND_top__DOT__NAND_CE_))));
    vlSelf->NAND_top__DOT__NAND_CE_pre_o = ((3U & (IData)(vlSelf->NAND_top__DOT__NAND_CE_pre_o)) 
                                            | ((((3U 
                                                  != (IData)(vlSelf->NAND_top__DOT__nand_number)) 
                                                 | (IData)(vlSelf->NAND_top__DOT__NAND_CE_)) 
                                                << 3U) 
                                               | (((2U 
                                                    != (IData)(vlSelf->NAND_top__DOT__nand_number)) 
                                                   | (IData)(vlSelf->NAND_top__DOT__NAND_CE_)) 
                                                  << 2U)));
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
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram
        [(1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr))];
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr) 
           == ((2U & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr) 
                          >> 1U)) << 1U)) | (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr) 
           == ((2U & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr) 
                          >> 1U)) << 1U)) | (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast 
        = ((0x13U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast)) 
           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast) 
               << 3U) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast) 
                         << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid) 
              << 2U));
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
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[2U] 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid;
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
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg;
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
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid 
        = ((0x13U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid)) 
           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid) 
               << 3U) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid) 
                         << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram
        [(1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr))];
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out) 
            << 3U) | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
           [vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom]);
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
    vlSelf->NAND_top__DOT__HIT0 = ((IData)(vlSelf->psel) 
                                   & (0U == (IData)(vlSelf->ADDR)));
    vlSelf->NAND_top__DOT__HIT3 = ((IData)(vlSelf->psel) 
                                   & (0xcU == (IData)(vlSelf->ADDR)));
    vlSelf->NAND_top__DOT__HIT7 = ((IData)(vlSelf->psel) 
                                   & (0x1cU == (IData)(vlSelf->ADDR)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur));
    vlSelf->NAND_REQ = vlSelf->NAND_top__DOT__NAND_DMA_REQ;
    vlSelf->open_trace = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__open_trace;
    vlSelf->num_monitor = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor;
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random_next 
        = ((0x7ffffeU & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                         << 1U)) | (1U & VL_REDXOR_32(
                                                      (0x420000U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelf->led = (0xffffU & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_data);
    vlSelf->led_rg0 = (3U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data);
    vlSelf->led_rg1 = (3U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data);
    vlSelf->NAND_top__DOT__NANDtag = ((IData)(vlSelf->prst_) 
                                      & (IData)(vlSelf->NAND_top__DOT__nand_cmd_valid));
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
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready)) 
           | (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready)) 
           | (8U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready)) 
           | (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready)) 
           | (8U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__lzc_diff_fast 
        = (0x3fU & ((0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q)) 
                    - (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc_q))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__has_int 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
            >> 2U) & (0U != (0x1fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ecfg 
                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat))));
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar 
        = (1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable)));
    vlSelf->simu_top__DOT__soc__DOT__m0_rready = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_rready) 
                                                  & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                                      >> 3U) 
                                                     | (~ (IData)(vlSelf->enable_delay))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid) 
              << 3U));
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__need_corr 
        = (1U & (((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q) 
                      >> 5U)) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__no_iter_needed_q))) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q)
                     ? ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                    >> 0x20U))) & (0U 
                                                   != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q))
                     : (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tcfg_wen 
        = (IData)((0x8082U == (0xfffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q)));
    vlSelf->NAND_top__DOT__HIT1 = ((IData)(vlSelf->psel) 
                                   & (4U == (IData)(vlSelf->ADDR)));
    vlSelf->NAND_top__DOT__HIT2 = ((IData)(vlSelf->psel) 
                                   & (8U == (IData)(vlSelf->ADDR)));
    vlSelf->NAND_top__DOT__HIT6 = ((IData)(vlSelf->psel) 
                                   & (0x18U == (IData)(vlSelf->ADDR)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache_tlb_excp_cancel_req 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_tlbr) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_ppi)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_pif));
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
    vlSelf->num_data = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data;
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))) {
        vlSelf->btn_key_col = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state 
            = ((IData)(((vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                         >> 0x13U) & (~ (IData)((0xfU 
                                                 == (IData)(vlSelf->btn_key_row))))))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))) {
        vlSelf->btn_key_col = 0xeU;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state 
            = ((0xfU == (IData)(vlSelf->btn_key_row))
                ? 2U : 7U);
    } else if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))) {
        vlSelf->btn_key_col = 0xdU;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state 
            = ((0xfU == (IData)(vlSelf->btn_key_row))
                ? 3U : 7U);
    } else if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))) {
        vlSelf->btn_key_col = 0xbU;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state 
            = ((0xfU == (IData)(vlSelf->btn_key_row))
                ? 4U : 7U);
    } else if ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))) {
        vlSelf->btn_key_col = 7U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state 
            = ((0xfU == (IData)(vlSelf->btn_key_row))
                ? 0U : 7U);
    } else {
        vlSelf->btn_key_col = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state 
            = ((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
                ? (((vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                     >> 0x13U) & (0xfU == (IData)(vlSelf->btn_key_row)))
                    ? 0U : 7U) : 0U);
    }
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
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp 
        = (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
            & (0xeU == (IData)(vlSelf->btn_key_row)))
            ? 1U : (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                     & (0xdU == (IData)(vlSelf->btn_key_row)))
                     ? 0x10U : (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                 & (0xbU == (IData)(vlSelf->btn_key_row)))
                                 ? 0x100U : (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                              & (7U 
                                                 == (IData)(vlSelf->btn_key_row)))
                                              ? 0x1000U
                                              : (((2U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                  & (0xeU 
                                                     == (IData)(vlSelf->btn_key_row)))
                                                  ? 2U
                                                  : 
                                                 (((2U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                   & (0xdU 
                                                      == (IData)(vlSelf->btn_key_row)))
                                                   ? 0x20U
                                                   : 
                                                  (((2U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                    & (0xbU 
                                                       == (IData)(vlSelf->btn_key_row)))
                                                    ? 0x200U
                                                    : 
                                                   (((2U 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                     & (7U 
                                                        == (IData)(vlSelf->btn_key_row)))
                                                     ? 0x2000U
                                                     : 
                                                    (((3U 
                                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                      & (0xeU 
                                                         == (IData)(vlSelf->btn_key_row)))
                                                      ? 4U
                                                      : 
                                                     (((3U 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                       & (0xdU 
                                                          == (IData)(vlSelf->btn_key_row)))
                                                       ? 0x40U
                                                       : 
                                                      (((3U 
                                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                        & (0xbU 
                                                           == (IData)(vlSelf->btn_key_row)))
                                                        ? 0x400U
                                                        : 
                                                       (((3U 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                         & (7U 
                                                            == (IData)(vlSelf->btn_key_row)))
                                                         ? 0x4000U
                                                         : 
                                                        (((4U 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                          & (0xeU 
                                                             == (IData)(vlSelf->btn_key_row)))
                                                          ? 8U
                                                          : 
                                                         (((4U 
                                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                           & (0xdU 
                                                              == (IData)(vlSelf->btn_key_row)))
                                                           ? 0x80U
                                                           : 
                                                          (((4U 
                                                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                            & (0xbU 
                                                               == (IData)(vlSelf->btn_key_row)))
                                                            ? 0x800U
                                                            : 
                                                           (((4U 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                             & (7U 
                                                                == (IData)(vlSelf->btn_key_row)))
                                                             ? 0x8000U
                                                             : 0U))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6 
        = (((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count)) 
            & (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt))))) 
           & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t))) 
           & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csrRData 
        = ((((((((((((((((((((((((((((((- (IData)((0U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 0x10U))))) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd) 
                                      | ((- (IData)(
                                                    (1U 
                                                     == 
                                                     (0x3fffU 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                         >> 0x10U))))) 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd)) 
                                     | ((- (IData)(
                                                   (4U 
                                                    == 
                                                    (0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                        >> 0x10U))))) 
                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ecfg)) 
                                    | ((- (IData)((5U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 0x10U))))) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat)) 
                                   | ((- (IData)((6U 
                                                  == 
                                                  (0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                      >> 0x10U))))) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era)) 
                                  | ((- (IData)((7U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 0x10U))))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv)) 
                                 | ((- (IData)((0xcU 
                                                == 
                                                (0x3fffU 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                    >> 0x10U))))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry)) 
                                | ((- (IData)((0x10U 
                                               == (0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                      >> 0x10U))))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)) 
                               | ((- (IData)((0x11U 
                                              == (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 0x10U))))) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi)) 
                              | ((- (IData)((0x12U 
                                             == (0x3fffU 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                    >> 0x10U))))) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0)) 
                             | ((- (IData)((0x13U == 
                                            (0x3fffU 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                >> 0x10U))))) 
                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1)) 
                            | ((- (IData)((0x18U == 
                                           (0x3fffU 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                               >> 0x10U))))) 
                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid)) 
                           | ((- (IData)((0x19U == 
                                          (0x3fffU 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                              >> 0x10U))))) 
                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl)) 
                          | ((- (IData)((0x1aU == (0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                      >> 0x10U))))) 
                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh)) 
                         | ((- (IData)((0x1bU == (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 0x10U))))) 
                            & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv 
                                >> 0x1fU) ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh
                                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl))) 
                        | ((- (IData)((0x20U == (0x3fffU 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                    >> 0x10U))))) 
                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cpuid)) 
                       | ((- (IData)((0x30U == (0x3fffU 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                   >> 0x10U))))) 
                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save0)) 
                      | ((- (IData)((0x31U == (0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                  >> 0x10U))))) 
                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save1)) 
                     | ((- (IData)((0x32U == (0x3fffU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                 >> 0x10U))))) 
                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save2)) 
                    | ((- (IData)((0x33U == (0x3fffU 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                >> 0x10U))))) 
                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save3)) 
                   | ((- (IData)((0x40U == (0x3fffU 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                               >> 0x10U))))) 
                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid)) 
                  | ((- (IData)((0x41U == (0x3fffU 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                              >> 0x10U))))) 
                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg)) 
                 | ((- (IData)((0x43U == (0x3fffU & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                           >> 0x10U))))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cntc)) 
                | ((- (IData)((0x44U == (0x3fffU & 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                          >> 0x10U))))) 
                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cpuid)) 
               | ((- (IData)((0x60U == (0x3fffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                   >> 0x10U))))) 
                  & ((0xfffffffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl) 
                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit)))) 
              | ((- (IData)((0x42U == (0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                  >> 0x10U))))) 
                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval)) 
             | ((- (IData)((0x88U == (0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                 >> 0x10U))))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry)) 
            | ((- (IData)((0x180U == (0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                 >> 0x10U))))) 
               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0)) 
           | ((- (IData)((0x181U == (0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                >> 0x10U))))) 
              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1));
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_num 
            = (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc_q));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_num_d 
            = (0xfU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__lzc_diff_fast) 
                        >> 1U) + (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__lzc_diff_fast))));
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_num 
            = (0x1fU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_too_small_q) 
                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q) 
                            >> 5U)) ? 0U : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_num_d 
            = (0xfU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_num_q) 
                       - (IData)(1U)));
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__replace_way 
        = (1U & (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer) 
                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__lfsr__DOT__r_lfsr) 
                     >> 7U)) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer));
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_cacop_hit 
        = (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer 
             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_tag 
                == (0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer 
                                >> 1U)))) & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_mode))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_cacop_hit 
        = (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer 
             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_tag 
                == (0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer 
                                >> 1U)))) & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_mode))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_en));
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_hit 
        = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_tag 
              == (0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer 
                              >> 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_hit 
        = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_tag 
              == (0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer 
                              >> 1U))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode 
        = ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
           | (3U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))));
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w 
        = (1U & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                  >> 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable)));
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw 
        = (1U & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                  >> 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_last 
        = (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_num));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next 
        = (0x1ffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                     + (0xffU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                 >> 0x10U))));
    vlSelf->simu_top__DOT__soc__DOT__m0_bready = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bready) 
                                                  & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                                      >> 2U) 
                                                     | (~ (IData)(vlSelf->enable_delay))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit 
        = ((0x19U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)) 
           | ((0x1fe0U == (vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr 
                           >> 0x10U)) << 2U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit 
        = ((7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)) 
           | ((0x1fd0U == (0x1fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr 
                                      >> 0x10U))) << 3U));
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__i26 
        = ((0x3ff0000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                          << 0xcU)) | (0xffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                  >> 0xeU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d)) 
           | (((2U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                             >> 0x18U))) << 2U) | (
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                         >> 0x18U))) 
                                                    << 1U) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                          >> 0x18U))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d 
        = ((7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d)) 
           | ((3U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                            >> 0x18U))) << 3U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
        = ((0xfffffff8U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d) 
           | (((2U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                >> 0x13U))) << 2U) 
              | (((1U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                   >> 0x13U))) << 1U) 
                 | (0U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                    >> 0x13U))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
        = ((0xffffffc7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d) 
           | (((5U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                >> 0x13U))) << 5U) 
              | (((4U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                   >> 0x13U))) << 4U) 
                 | ((3U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                     >> 0x13U))) << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
        = ((0xfffffe3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d) 
           | (((8U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                >> 0x13U))) << 8U) 
              | (((7U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                   >> 0x13U))) << 7U) 
                 | ((6U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                     >> 0x13U))) << 6U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
        = ((0xfffff1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d) 
           | (((0xbU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                  >> 0x13U))) << 0xbU) 
              | (((0xaU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                     >> 0x13U))) << 0xaU) 
                 | ((9U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                     >> 0x13U))) << 9U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
        = ((0xffff8fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d) 
           | (((0xeU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                  >> 0x13U))) << 0xeU) 
              | (((0xdU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                     >> 0x13U))) << 0xdU) 
                 | ((0xcU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                       >> 0x13U))) 
                    << 0xcU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
        = ((0xfffc7fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d) 
           | (((0x11U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                   >> 0x13U))) << 0x11U) 
              | (((0x10U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                      >> 0x13U))) << 0x10U) 
                 | ((0xfU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                       >> 0x13U))) 
                    << 0xfU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
        = ((0xffe3ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d) 
           | (((0x14U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                   >> 0x13U))) << 0x14U) 
              | (((0x13U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                      >> 0x13U))) << 0x13U) 
                 | ((0x12U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                        >> 0x13U))) 
                    << 0x12U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
        = ((0xff1fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d) 
           | (((0x17U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                   >> 0x13U))) << 0x17U) 
              | (((0x16U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                      >> 0x13U))) << 0x16U) 
                 | ((0x15U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                        >> 0x13U))) 
                    << 0x15U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
        = ((0xf8ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d) 
           | (((0x1aU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                   >> 0x13U))) << 0x1aU) 
              | (((0x19U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                      >> 0x13U))) << 0x19U) 
                 | ((0x18U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                        >> 0x13U))) 
                    << 0x18U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
        = ((0xc7ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d) 
           | (((0x1dU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                   >> 0x13U))) << 0x1dU) 
              | (((0x1cU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                      >> 0x13U))) << 0x1cU) 
                 | ((0x1bU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                        >> 0x13U))) 
                    << 0x1bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
        = ((0x3fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d) 
           | (((0x1fU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                   >> 0x13U))) << 0x1fU) 
              | ((0x1eU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                     >> 0x13U))) << 0x1eU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d 
        = ((0xfff8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
           | (((2U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                               >> 0x1aU))) << 2U) | 
              (((1U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                >> 0x1aU))) << 1U) 
               | (0U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                 >> 0x1aU))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d 
        = ((0xffc7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
           | (((5U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                               >> 0x1aU))) << 5U) | 
              (((4U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                >> 0x1aU))) << 4U) 
               | ((3U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                  >> 0x1aU))) << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d 
        = ((0xfe3fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
           | (((8U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                               >> 0x1aU))) << 8U) | 
              (((7U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                >> 0x1aU))) << 7U) 
               | ((6U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                  >> 0x1aU))) << 6U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d 
        = ((0xf1ffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
           | (((0xbU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                 >> 0x1aU))) << 0xbU) 
              | (((0xaU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                    >> 0x1aU))) << 0xaU) 
                 | ((9U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                    >> 0x1aU))) << 9U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d 
        = ((0x8fffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
           | (((0xeU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                 >> 0x1aU))) << 0xeU) 
              | (((0xdU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                    >> 0x1aU))) << 0xdU) 
                 | ((0xcU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                      >> 0x1aU))) << 0xcU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d 
        = ((0x7fffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
           | ((0xfU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                >> 0x1aU))) << 0xfU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
        = ((0xfffffffffffffff8ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
           | (IData)((IData)((((2U == (0x3fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                 << 2U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0x1eU)))) 
                               << 2U) | (((1U == (0x3fU 
                                                  & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                      << 2U) 
                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                        >> 0x1eU)))) 
                                          << 1U) | 
                                         (0U == (0x3fU 
                                                 & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                     << 2U) 
                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                       >> 0x1eU)))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
        = ((0xffffffffffffffc7ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((5U == (0x3fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                  << 2U) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                    >> 0x1eU)))) 
                                << 2U) | (((4U == (0x3fU 
                                                   & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                       << 2U) 
                                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                         >> 0x1eU)))) 
                                           << 1U) | 
                                          (3U == (0x3fU 
                                                  & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                      << 2U) 
                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                        >> 0x1eU)))))))) 
              << 3U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
        = ((0xfffffffffffffe3fULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((8U == (0x3fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                  << 2U) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                    >> 0x1eU)))) 
                                << 2U) | (((7U == (0x3fU 
                                                   & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                       << 2U) 
                                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                         >> 0x1eU)))) 
                                           << 1U) | 
                                          (6U == (0x3fU 
                                                  & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                      << 2U) 
                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                        >> 0x1eU)))))))) 
              << 6U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
        = ((0xfffffffffffff1ffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0xbU == (0x3fU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                    << 2U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                      >> 0x1eU)))) 
                                << 2U) | (((0xaU == 
                                            (0x3fU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                 << 2U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0x1eU)))) 
                                           << 1U) | 
                                          (9U == (0x3fU 
                                                  & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                      << 2U) 
                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                        >> 0x1eU)))))))) 
              << 9U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
        = ((0xffffffffffff8fffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0xeU == (0x3fU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                    << 2U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                      >> 0x1eU)))) 
                                << 2U) | (((0xdU == 
                                            (0x3fU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                 << 2U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0x1eU)))) 
                                           << 1U) | 
                                          (0xcU == 
                                           (0x3fU & 
                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                              << 2U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 0x1eU)))))))) 
              << 0xcU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
        = ((0xfffffffffffc7fffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x11U == (0x3fU & 
                                           ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                             << 2U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                               >> 0x1eU)))) 
                                << 2U) | (((0x10U == 
                                            (0x3fU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                 << 2U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0x1eU)))) 
                                           << 1U) | 
                                          (0xfU == 
                                           (0x3fU & 
                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                              << 2U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 0x1eU)))))))) 
              << 0xfU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
        = ((0xffffffffffe3ffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x14U == (0x3fU & 
                                           ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                             << 2U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                               >> 0x1eU)))) 
                                << 2U) | (((0x13U == 
                                            (0x3fU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                 << 2U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0x1eU)))) 
                                           << 1U) | 
                                          (0x12U == 
                                           (0x3fU & 
                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                              << 2U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 0x1eU)))))))) 
              << 0x12U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
        = ((0xffffffffff1fffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x17U == (0x3fU & 
                                           ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                             << 2U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                               >> 0x1eU)))) 
                                << 2U) | (((0x16U == 
                                            (0x3fU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                 << 2U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0x1eU)))) 
                                           << 1U) | 
                                          (0x15U == 
                                           (0x3fU & 
                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                              << 2U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 0x1eU)))))))) 
              << 0x15U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
        = ((0xfffffffff8ffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x1aU == (0x3fU & 
                                           ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                             << 2U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                               >> 0x1eU)))) 
                                << 2U) | (((0x19U == 
                                            (0x3fU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                 << 2U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0x1eU)))) 
                                           << 1U) | 
                                          (0x18U == 
                                           (0x3fU & 
                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                              << 2U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 0x1eU)))))))) 
              << 0x18U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
        = ((0xffffffffc7ffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x1dU == (0x3fU & 
                                           ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                             << 2U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                               >> 0x1eU)))) 
                                << 2U) | (((0x1cU == 
                                            (0x3fU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                 << 2U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0x1eU)))) 
                                           << 1U) | 
                                          (0x1bU == 
                                           (0x3fU & 
                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                              << 2U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 0x1eU)))))))) 
              << 0x1bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
        = ((0xfffffffe3fffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x20U == (0x3fU & 
                                           ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                             << 2U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                               >> 0x1eU)))) 
                                << 2U) | (((0x1fU == 
                                            (0x3fU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                 << 2U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0x1eU)))) 
                                           << 1U) | 
                                          (0x1eU == 
                                           (0x3fU & 
                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                              << 2U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 0x1eU)))))))) 
              << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
        = ((0xfffffff1ffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x23U == (0x3fU & 
                                           ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                             << 2U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                               >> 0x1eU)))) 
                                << 2U) | (((0x22U == 
                                            (0x3fU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                 << 2U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0x1eU)))) 
                                           << 1U) | 
                                          (0x21U == 
                                           (0x3fU & 
                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                              << 2U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 0x1eU)))))))) 
              << 0x21U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
        = ((0xffffff8fffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x26U == (0x3fU & 
                                           ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                             << 2U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                               >> 0x1eU)))) 
                                << 2U) | (((0x25U == 
                                            (0x3fU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                 << 2U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0x1eU)))) 
                                           << 1U) | 
                                          (0x24U == 
                                           (0x3fU & 
                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                              << 2U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 0x1eU)))))))) 
              << 0x24U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
        = ((0xfffffc7fffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x29U == (0x3fU & 
                                           ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                             << 2U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                               >> 0x1eU)))) 
                                << 2U) | (((0x28U == 
                                            (0x3fU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                 << 2U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0x1eU)))) 
                                           << 1U) | 
                                          (0x27U == 
                                           (0x3fU & 
                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                              << 2U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 0x1eU)))))))) 
              << 0x27U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
        = ((0xffffe3ffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x2cU == (0x3fU & 
                                           ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                             << 2U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                               >> 0x1eU)))) 
                                << 2U) | (((0x2bU == 
                                            (0x3fU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                 << 2U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0x1eU)))) 
                                           << 1U) | 
                                          (0x2aU == 
                                           (0x3fU & 
                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                              << 2U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 0x1eU)))))))) 
              << 0x2aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
        = ((0xffff1fffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x2fU == (0x3fU & 
                                           ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                             << 2U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                               >> 0x1eU)))) 
                                << 2U) | (((0x2eU == 
                                            (0x3fU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                 << 2U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0x1eU)))) 
                                           << 1U) | 
                                          (0x2dU == 
                                           (0x3fU & 
                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                              << 2U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 0x1eU)))))))) 
              << 0x2dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
        = ((0xfff8ffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x32U == (0x3fU & 
                                           ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                             << 2U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                               >> 0x1eU)))) 
                                << 2U) | (((0x31U == 
                                            (0x3fU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                 << 2U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0x1eU)))) 
                                           << 1U) | 
                                          (0x30U == 
                                           (0x3fU & 
                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                              << 2U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 0x1eU)))))))) 
              << 0x30U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
        = ((0xffc7ffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x35U == (0x3fU & 
                                           ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                             << 2U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                               >> 0x1eU)))) 
                                << 2U) | (((0x34U == 
                                            (0x3fU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                 << 2U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0x1eU)))) 
                                           << 1U) | 
                                          (0x33U == 
                                           (0x3fU & 
                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                              << 2U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 0x1eU)))))))) 
              << 0x33U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
        = ((0xfe3fffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x38U == (0x3fU & 
                                           ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                             << 2U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                               >> 0x1eU)))) 
                                << 2U) | (((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                 << 2U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0x1eU)))) 
                                           << 1U) | 
                                          (0x36U == 
                                           (0x3fU & 
                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                              << 2U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 0x1eU)))))))) 
              << 0x36U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
        = ((0xf1ffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x3bU == (0x3fU & 
                                           ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                             << 2U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                               >> 0x1eU)))) 
                                << 2U) | (((0x3aU == 
                                            (0x3fU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                 << 2U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0x1eU)))) 
                                           << 1U) | 
                                          (0x39U == 
                                           (0x3fU & 
                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                              << 2U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 0x1eU)))))))) 
              << 0x39U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
        = ((0x8fffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x3eU == (0x3fU & 
                                           ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                             << 2U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                               >> 0x1eU)))) 
                                << 2U) | (((0x3dU == 
                                            (0x3fU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                 << 2U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0x1eU)))) 
                                           << 1U) | 
                                          (0x3cU == 
                                           (0x3fU & 
                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                              << 2U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 0x1eU)))))))) 
              << 0x3cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
        = ((0x7fffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x3fU == (0x3fU & ((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                   << 2U) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                     >> 0x1eU)))))) 
              << 0x3fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cur_plv 
        = (3U & ((((- (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[5U] 
                               >> 0x1fU))) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd) 
                  | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen))) 
                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U] 
                         << 0x1fU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U] 
                                      >> 1U)))) | (
                                                   (- (IData)(
                                                              (1U 
                                                               & (((~ 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U]) 
                                                                   & (~ 
                                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[5U] 
                                                                       >> 0x1fU))) 
                                                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen)))))) 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_next 
        = ((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
             & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
            | ((- (IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
               & ((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                   >> 2U)) << 2U) | 
                  (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)))) 
           | ((- (IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
              & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_next 
        = ((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
             & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
            | ((- (IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
               & ((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                   >> 2U)) << 2U) | 
                  (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)))) 
           | ((- (IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
              & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count) 
              >= (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level)));
    vlSelf->NAND_top__DOT__NAND_IORDY = (1U & ((0U 
                                                == (IData)(vlSelf->NAND_top__DOT__nand_number))
                                                ? (IData)(vlSelf->NAND_top__DOT__NAND_IORDY_post_i)
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->NAND_top__DOT__nand_number))
                                                    ? 
                                                   ((IData)(vlSelf->NAND_top__DOT__NAND_IORDY_post_i) 
                                                    >> 1U)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->NAND_top__DOT__nand_number))
                                                     ? 
                                                    ((IData)(vlSelf->NAND_top__DOT__NAND_IORDY_post_i) 
                                                     >> 2U)
                                                     : 
                                                    ((3U 
                                                      != (IData)(vlSelf->NAND_top__DOT__nand_number)) 
                                                     | ((IData)(vlSelf->NAND_top__DOT__NAND_IORDY_post_i) 
                                                        >> 3U))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int 
        = (IData)((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
                    >> 2U) & (0U != (0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr)))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int 
        = (1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
                  >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr) 
                            >> 5U)));
    vlSelf->NAND_CE_o = ((0xeU & (IData)(vlSelf->NAND_CE_o)) 
                         | (1U & (IData)(vlSelf->NAND_top__DOT__NAND_CE_pre_o)));
    vlSelf->NAND_CE_o = ((0xdU & (IData)(vlSelf->NAND_CE_o)) 
                         | (2U & (((0x100U & vlSelf->NAND_top__DOT__nand_ce_map0)
                                    ? (IData)(vlSelf->NAND_top__DOT__NAND_CE_pre_o)
                                    : ((0x200U & vlSelf->NAND_top__DOT__nand_ce_map0)
                                        ? ((IData)(vlSelf->NAND_top__DOT__NAND_CE_pre_o) 
                                           >> 1U) : 
                                       ((0x400U & vlSelf->NAND_top__DOT__nand_ce_map0)
                                         ? ((IData)(vlSelf->NAND_top__DOT__NAND_CE_pre_o) 
                                            >> 2U) : 
                                        ((~ (vlSelf->NAND_top__DOT__nand_ce_map0 
                                             >> 0xbU)) 
                                         | ((IData)(vlSelf->NAND_top__DOT__NAND_CE_pre_o) 
                                            >> 3U))))) 
                                  << 1U)));
    vlSelf->NAND_CE_o = ((0xbU & (IData)(vlSelf->NAND_CE_o)) 
                         | (4U & (((0x10000U & vlSelf->NAND_top__DOT__nand_ce_map0)
                                    ? (IData)(vlSelf->NAND_top__DOT__NAND_CE_pre_o)
                                    : ((0x20000U & vlSelf->NAND_top__DOT__nand_ce_map0)
                                        ? ((IData)(vlSelf->NAND_top__DOT__NAND_CE_pre_o) 
                                           >> 1U) : 
                                       ((0x40000U & vlSelf->NAND_top__DOT__nand_ce_map0)
                                         ? ((IData)(vlSelf->NAND_top__DOT__NAND_CE_pre_o) 
                                            >> 2U) : 
                                        ((~ (vlSelf->NAND_top__DOT__nand_ce_map0 
                                             >> 0x13U)) 
                                         | ((IData)(vlSelf->NAND_top__DOT__NAND_CE_pre_o) 
                                            >> 3U))))) 
                                  << 2U)));
    vlSelf->NAND_CE_o = ((7U & (IData)(vlSelf->NAND_CE_o)) 
                         | (8U & (((0x1000000U & vlSelf->NAND_top__DOT__nand_ce_map0)
                                    ? (IData)(vlSelf->NAND_top__DOT__NAND_CE_pre_o)
                                    : ((0x2000000U 
                                        & vlSelf->NAND_top__DOT__nand_ce_map0)
                                        ? ((IData)(vlSelf->NAND_top__DOT__NAND_CE_pre_o) 
                                           >> 1U) : 
                                       ((0x4000000U 
                                         & vlSelf->NAND_top__DOT__nand_ce_map0)
                                         ? ((IData)(vlSelf->NAND_top__DOT__NAND_CE_pre_o) 
                                            >> 2U) : 
                                        ((~ (vlSelf->NAND_top__DOT__nand_ce_map0 
                                             >> 0x1bU)) 
                                         | ((IData)(vlSelf->NAND_top__DOT__NAND_CE_pre_o) 
                                            >> 3U))))) 
                                  << 3U)));
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
    VL_EXTEND_WI(128,32, __Vtemp_h3bce9da3__0, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wdata);
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_addr 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_tag 
                << 0xcU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index) 
                             << 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_size;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[0U] 
            = __Vtemp_h3bce9da3__0[0U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[1U] 
            = __Vtemp_h3bce9da3__0[1U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[2U] 
            = __Vtemp_h3bce9da3__0[2U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[3U] 
            = __Vtemp_h3bce9da3__0[3U];
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_addr 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_tag 
                << 0xcU) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index) 
                            << 4U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type = 4U;
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
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 0U;
    vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 0U;
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [0U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast));
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [0U];
    } else {
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = 0U;
    }
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [1U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 1U));
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [1U];
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 0U;
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [0U];
    }
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [1U];
    }
    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [2U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 2U));
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [2U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [2U];
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
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [3U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 3U));
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [3U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [3U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 3U));
    }
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_next 
        = ((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr) 
            | ((- (IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
               & ((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                   >> 2U)) << 2U) | 
                  (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)))) 
           | ((- (IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap));
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_normal_init_value 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__lzc_diff_fast))
            ? (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q))
            : ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q)) 
               << 1U));
    vlSelf->simu_top__DOT__soc__DOT__m0_arvalid = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid) 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar) 
                                                      | (~ (IData)(vlSelf->enable_delay))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h02122bf1__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_rready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h02122bf1__1));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h02122bf1__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_rready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h02122bf1__1) 
                  << 1U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h02122bf1__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_rready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h02122bf1__1) 
                  << 2U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h02122bf1__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_rready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h02122bf1__1) 
                  << 3U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 4U));
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 4U));
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h02122bf1__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_rready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h02122bf1__1) 
                  << 4U));
    }
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_shifted_rem 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__need_corr)
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0 
        = ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse));
    vlSelf->NAND_top__DOT__REG_DAT_T = ((((~ (IData)(vlSelf->pwrite)) 
                                          & (IData)(vlSelf->NAND_top__DOT__HIT0)) 
                                         & (IData)(vlSelf->penable))
                                         ? vlSelf->NAND_top__DOT__nand_command
                                         : ((((~ (IData)(vlSelf->pwrite)) 
                                              & (IData)(vlSelf->NAND_top__DOT__HIT1)) 
                                             & (IData)(vlSelf->penable))
                                             ? (IData)((QData)((IData)(vlSelf->NAND_top__DOT__nand_addr_c)))
                                             : ((((~ (IData)(vlSelf->pwrite)) 
                                                  & (IData)(vlSelf->NAND_top__DOT__HIT2)) 
                                                 & (IData)(vlSelf->penable))
                                                 ? vlSelf->NAND_top__DOT__nand_addr_r
                                                 : 
                                                ((((~ (IData)(vlSelf->pwrite)) 
                                                   & (IData)(vlSelf->NAND_top__DOT__HIT3)) 
                                                  & (IData)(vlSelf->penable))
                                                  ? (IData)(vlSelf->NAND_top__DOT__nand_timing)
                                                  : 
                                                 ((((~ (IData)(vlSelf->pwrite)) 
                                                    & ((IData)(vlSelf->psel) 
                                                       & (0x10U 
                                                          == (IData)(vlSelf->ADDR)))) 
                                                   & (IData)(vlSelf->penable))
                                                   ? (IData)(vlSelf->NAND_top__DOT__ID_INFORM)
                                                   : 
                                                  ((((~ (IData)(vlSelf->pwrite)) 
                                                     & ((IData)(vlSelf->psel) 
                                                        & (0x14U 
                                                           == (IData)(vlSelf->ADDR)))) 
                                                    & (IData)(vlSelf->penable))
                                                    ? 
                                                   (((IData)(vlSelf->NAND_top__DOT__status) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & (IData)(
                                                                 (vlSelf->NAND_top__DOT__ID_INFORM 
                                                                  >> 0x20U))))
                                                    : 
                                                   ((((~ (IData)(vlSelf->pwrite)) 
                                                      & (IData)(vlSelf->NAND_top__DOT__HIT6)) 
                                                     & (IData)(vlSelf->penable))
                                                     ? vlSelf->NAND_top__DOT__nand_parameter
                                                     : 
                                                    ((((~ (IData)(vlSelf->pwrite)) 
                                                       & (IData)(vlSelf->NAND_top__DOT__HIT7)) 
                                                      & (IData)(vlSelf->penable))
                                                      ? vlSelf->NAND_top__DOT__nand_op_num
                                                      : 
                                                     ((((~ (IData)(vlSelf->pwrite)) 
                                                        & (IData)(vlSelf->NAND_top__DOT__HIT8)) 
                                                       & (IData)(vlSelf->penable))
                                                       ? vlSelf->NAND_top__DOT__nand_ce_map0
                                                       : 
                                                      ((((~ (IData)(vlSelf->pwrite)) 
                                                         & (IData)(vlSelf->NAND_top__DOT__HIT9)) 
                                                        & (IData)(vlSelf->penable))
                                                        ? vlSelf->NAND_top__DOT__nand_ce_map1
                                                        : 
                                                       ((((~ (IData)(vlSelf->pwrite)) 
                                                          & (IData)(vlSelf->NAND_top__DOT__HIT10)) 
                                                         & (IData)(vlSelf->penable))
                                                         ? vlSelf->NAND_top__DOT__nand_rdy_map0
                                                         : 
                                                        ((((~ (IData)(vlSelf->pwrite)) 
                                                           & (IData)(vlSelf->NAND_top__DOT__HIT11)) 
                                                          & (IData)(vlSelf->penable))
                                                          ? vlSelf->NAND_top__DOT__nand_rdy_map1
                                                          : 
                                                         ((((~ (IData)(vlSelf->pwrite)) 
                                                            & (IData)(vlSelf->NAND_top__DOT__NAND_HIT)) 
                                                           & (IData)(vlSelf->penable))
                                                           ? vlSelf->NAND_top__DOT__NAND_DAT_O_RD
                                                           : 0U)))))))))))));
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
    vlSelf->simu_top__DOT__soc__DOT__s0_wready = (1U 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out) 
                                                     | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out)) 
           & (IData)(vlSelf->aresetn));
    vlSelf->simu_top__DOT__soc__DOT__conf_s_wready 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out) 
                 | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out)) 
           & (IData)(vlSelf->aresetn));
    __Vtemp_h0a5f91e0__0[0U] = (IData)((((QData)((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi 
                                                          >> 0xdU))) 
                                         << 0x2dU) 
                                        | (((QData)((IData)(
                                                            (0x3ffU 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx))) 
                                               << 0x1eU) 
                                              | (QData)((IData)(
                                                                ((0x20000000U 
                                                                  & (((0x3fU 
                                                                       == 
                                                                       (0x3fU 
                                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                                                                           >> 0x10U))) 
                                                                      | (~ 
                                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx 
                                                                          >> 0x1fU))) 
                                                                     << 0x1dU)) 
                                                                 | ((0x1f800000U 
                                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx 
                                                                        >> 1U)) 
                                                                    | ((0x400000U 
                                                                        & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1) 
                                                                           << 0x10U)) 
                                                                       | ((0x3ffffcU 
                                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                                                                              >> 6U)) 
                                                                          | (3U 
                                                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                                                                                >> 2U))))))))))));
    __Vtemp_h0a5f91e0__0[1U] = (IData)(((((QData)((IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi 
                                                           >> 0xdU))) 
                                          << 0x2dU) 
                                         | (((QData)((IData)(
                                                             (0x3ffU 
                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid))) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 ((0x20000000U 
                                                                   & (((0x3fU 
                                                                        == 
                                                                        (0x3fU 
                                                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                                                                            >> 0x10U))) 
                                                                       | (~ 
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx 
                                                                           >> 0x1fU))) 
                                                                      << 0x1dU)) 
                                                                  | ((0x1f800000U 
                                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx 
                                                                         >> 1U)) 
                                                                     | ((0x400000U 
                                                                         & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1) 
                                                                            << 0x10U)) 
                                                                        | ((0x3ffffcU 
                                                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                                                                               >> 6U)) 
                                                                           | (3U 
                                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                                                                                >> 2U))))))))))) 
                                        >> 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
        = ((__Vtemp_h0a5f91e0__0[0U] << 0x1eU) | ((0x30000000U 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                                                      << 0x18U)) 
                                                  | ((0x8000000U 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                                                         << 0x1aU)) 
                                                     | ((0x4000000U 
                                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                                                            << 0x1aU)) 
                                                        | ((0x3ffffc0U 
                                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
                                                               >> 2U)) 
                                                           | ((0x30U 
                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
                                                                  << 2U)) 
                                                              | ((0xcU 
                                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
                                                                     >> 2U)) 
                                                                 | (3U 
                                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[1U] 
        = ((__Vtemp_h0a5f91e0__0[0U] >> 2U) | (__Vtemp_h0a5f91e0__0[1U] 
                                               << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[2U] 
        = ((__Vtemp_h0a5f91e0__0[1U] >> 2U) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64) 
                                               << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[3U] 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64) 
            >> 2U) | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64 
                               >> 0x20U)) << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[4U] 
        = (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64 
                     >> 0x20U)) >> 2U) | ((IData)((
                                                   ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csrRData)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid)))) 
                                          << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[5U] 
        = (((IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csrRData)) 
                      << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid)))) 
            >> 2U) | ((IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csrRData)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid))) 
                               >> 0x20U)) << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[6U] 
        = ((IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csrRData)) 
                      << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid))) 
                    >> 0x20U)) >> 2U);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__inst_real_rd_size 
        = ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_type))
            ? 2U : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_type));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__replace_d 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__replace_way)
                  ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_D[
                     ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index) 
                      >> 5U)] >> (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index)))
                  : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_D[
                     ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index) 
                      >> 5U)] >> (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index)))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_next 
        = ((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
            | ((- (IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
               & ((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                   >> 2U)) << 2U) | 
                  (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))) 
           | ((- (IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_cacop_hit 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_cacop_hit) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_cacop_hit));
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
    vlSelf->simu_top__DOT__soc__DOT__m0_wvalid = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid) 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w) 
                                                     | (~ (IData)(vlSelf->enable_delay))));
    vlSelf->simu_top__DOT__soc__DOT__m0_awvalid = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awvalid) 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw) 
                                                      | (~ (IData)(vlSelf->enable_delay))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_toggle 
        = (1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                  ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next)) 
                 >> 8U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)) 
           | (1U & (~ (IData)((0U != (0xfU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
                                              >> 1U)))))));
    __Vtableidx2 = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir 
        = Vsimu_top__ConstPool__TABLE_hc3b7fa0f_0[__Vtableidx2];
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int 
        = Vsimu_top__ConstPool__TABLE_h1da55f25_0[__Vtableidx2];
    vlSelf->simu_top__DOT__soc__DOT__m0_awready = 0U;
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
                  >> 1U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 1U));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
                  >> 2U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 2U));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
                  >> 3U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 3U));
    }
    if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
            >> 4U))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 4U));
    }
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__data_real_rd_size 
        = ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))
            ? 2U : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in 
        = (1U & ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                  ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out)
                  : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol)
                      ? (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad))
                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad))));
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x22U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x23U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x24U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x25U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x26U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x27U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x28U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x28U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x29U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x29U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x2aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x2bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x2cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x2dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x2eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x2fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x30U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x31U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x32U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x33U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x34U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x34U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x35U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x35U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x36U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x36U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x37U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x37U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x38U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                >> 0x38U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x39U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x39U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x3aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x3aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x3bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x3bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       << 6U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [1U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   << 6U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7fffffffffffffe0ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 5U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7fffffffffffffe0ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3ffffffffffffff0ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 4U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3ffffffffffffff0ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1ffffffffffffff8ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 3U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1ffffffffffffff8ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xffffffffffffffcULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 2U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xffffffffffffffcULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7fffffffffffffeULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 1U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7fffffffffffffeULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3ffffffffffffffULL 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3ffffffffffffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1ffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 1U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1ffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          >> 2U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 3U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 4U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 5U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xfffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 6U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xfffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 7U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 8U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1ffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1ffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xfffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xfffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x22U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x23U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x24U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x25U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x26U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x27U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x28U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x28U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x29U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x29U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x2aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x2bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x2cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x2dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x30U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x31U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x32U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x32U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x33U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x33U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x34U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x34U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x35U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x35U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x36U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                >> 0x36U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x37U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x37U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x38U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x38U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x39U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x39U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       << 8U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [1U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   << 8U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7fffffffffffff80ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 7U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7fffffffffffff80ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3fffffffffffffc0ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 6U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3fffffffffffffc0ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1fffffffffffffe0ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 5U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1fffffffffffffe0ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xffffffffffffff0ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 4U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xffffffffffffff0ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7fffffffffffff8ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 3U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7fffffffffffff8ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3fffffffffffffcULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 2U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3fffffffffffffcULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1fffffffffffffeULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 1U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1fffffffffffffeULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xffffffffffffffULL 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xffffffffffffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 1U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 2U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 3U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xfffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 4U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xfffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 5U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 6U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1ffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1ffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xfffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xfffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x22U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x23U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x24U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x25U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x26U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x27U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x28U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x28U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x29U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x29U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x2aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x2bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x30U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x30U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x31U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x31U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x32U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x32U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x33U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x33U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x34U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                >> 0x34U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x35U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x36U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x36U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x37U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x37U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       << 0xaU))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [1U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   << 0xaU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7ffffffffffffe00ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 9U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7ffffffffffffe00ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3fffffffffffff00ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 8U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3fffffffffffff00ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1fffffffffffff80ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 7U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1fffffffffffff80ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 7U)))));
}
