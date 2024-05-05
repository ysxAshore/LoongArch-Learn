// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


void Vsimu_top___024root__trace_chg_sub_0(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp);
void Vsimu_top___024root__trace_chg_sub_1(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp);
void Vsimu_top___024root__trace_chg_sub_2(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp);
void Vsimu_top___024root__trace_chg_sub_3(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp);
void Vsimu_top___024root__trace_chg_sub_4(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vsimu_top___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_chg_top_0\n"); );
    // Init
    Vsimu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimu_top___024root*>(voidSelf);
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsimu_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
    Vsimu_top___024root__trace_chg_sub_1((&vlSymsp->TOP), bufp);
    Vsimu_top___024root__trace_chg_sub_2((&vlSymsp->TOP), bufp);
    Vsimu_top___024root__trace_chg_sub_3((&vlSymsp->TOP), bufp);
    Vsimu_top___024root__trace_chg_sub_4((&vlSymsp->TOP), bufp);
}

void Vsimu_top___024root__trace_chg_sub_0(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_h9c9a7739__0;
    VlWide<4>/*127:0*/ __Vtemp_h30ec6957__0;
    VlWide<4>/*127:0*/ __Vtemp_hdbeaea70__0;
    VlWide<5>/*159:0*/ __Vtemp_hd47c7449__0;
    VlWide<3>/*95:0*/ __Vtemp_h20b39df6__0;
    VlWide<3>/*95:0*/ __Vtemp_h6e739bde__0;
    VlWide<8>/*255:0*/ __Vtemp_h5d6c71de__0;
    VlWide<4>/*127:0*/ __Vtemp_h47e7c628__0;
    VlWide<4>/*127:0*/ __Vtemp_h4a661ba8__0;
    VlWide<4>/*127:0*/ __Vtemp_ha0efd245__0;
    VlWide<4>/*127:0*/ __Vtemp_h74e64149__1;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[0]),2);
        bufp->chgCData(oldp+1,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[1]),2);
        bufp->chgCData(oldp+2,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[2]),2);
        bufp->chgCData(oldp+3,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[3]),2);
        bufp->chgCData(oldp+4,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[4]),2);
        bufp->chgCData(oldp+5,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[0]),2);
        bufp->chgCData(oldp+6,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[1]),2);
        bufp->chgCData(oldp+7,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[2]),2);
        bufp->chgCData(oldp+8,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[3]),2);
        bufp->chgCData(oldp+9,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[4]),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+10,(vlSelf->NAND_top__DOT__REG_DAT_T),32);
        bufp->chgBit(oldp+11,(vlSelf->NAND_top__DOT__NANDtag));
        bufp->chgBit(oldp+12,(vlSelf->NAND_top__DOT__NAND_IORDY));
        bufp->chgBit(oldp+13,(vlSelf->NAND_top__DOT__HIT0));
        bufp->chgBit(oldp+14,(vlSelf->NAND_top__DOT__HIT1));
        bufp->chgBit(oldp+15,(vlSelf->NAND_top__DOT__HIT2));
        bufp->chgBit(oldp+16,(vlSelf->NAND_top__DOT__HIT3));
        bufp->chgBit(oldp+17,(vlSelf->NAND_top__DOT__HIT6));
        bufp->chgBit(oldp+18,(vlSelf->NAND_top__DOT__HIT7));
        bufp->chgBit(oldp+19,(vlSelf->NAND_top__DOT__HIT8));
        bufp->chgBit(oldp+20,(vlSelf->NAND_top__DOT__HIT9));
        bufp->chgBit(oldp+21,(vlSelf->NAND_top__DOT__HIT10));
        bufp->chgBit(oldp+22,(vlSelf->NAND_top__DOT__HIT11));
        bufp->chgBit(oldp+23,(vlSelf->NAND_top__DOT__NAND_HIT));
        bufp->chgCData(oldp+24,(vlSelf->NAND_top__DOT__NAND_IORDY_post_i),4);
        bufp->chgBit(oldp+25,(vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid));
        bufp->chgBit(oldp+26,(vlSelf->simu_top__DOT__soc__DOT__cpu_arready));
        bufp->chgIData(oldp+27,(vlSelf->simu_top__DOT__soc__DOT__m0_rdata),32);
        bufp->chgBit(oldp+28,(vlSelf->simu_top__DOT__soc__DOT__cpu_rvalid));
        bufp->chgBit(oldp+29,(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
        bufp->chgBit(oldp+30,(vlSelf->simu_top__DOT__soc__DOT__m0_awready));
        bufp->chgBit(oldp+31,(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid));
        bufp->chgBit(oldp+32,(vlSelf->simu_top__DOT__soc__DOT__m0_bready));
        bufp->chgBit(oldp+33,(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
        bufp->chgBit(oldp+34,(vlSelf->simu_top__DOT__soc__DOT__m0_rready));
        bufp->chgBit(oldp+35,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid))));
        bufp->chgBit(oldp+36,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid))));
        bufp->chgBit(oldp+37,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))));
        bufp->chgBit(oldp+38,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid))));
        bufp->chgBit(oldp+39,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready))));
        bufp->chgBit(oldp+40,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                     >> 3U))));
        bufp->chgBit(oldp+41,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                     >> 3U))));
        bufp->chgBit(oldp+42,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                     >> 3U))));
        bufp->chgBit(oldp+43,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                     >> 3U))));
        bufp->chgBit(oldp+44,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                     >> 3U))));
        bufp->chgBit(oldp+45,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                     >> 2U))));
        bufp->chgBit(oldp+46,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                     >> 2U))));
        bufp->chgBit(oldp+47,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                     >> 2U))));
        bufp->chgBit(oldp+48,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                     >> 2U))));
        bufp->chgBit(oldp+49,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                     >> 2U))));
        bufp->chgBit(oldp+50,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en));
        bufp->chgCData(oldp+51,(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen),4);
        bufp->chgBit(oldp+52,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu));
        bufp->chgCData(oldp+53,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt),4);
        bufp->chgBit(oldp+54,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                     >> 1U))));
        bufp->chgBit(oldp+55,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                     >> 1U))));
        bufp->chgBit(oldp+56,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                     >> 1U))));
        bufp->chgBit(oldp+57,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                     >> 1U))));
        bufp->chgBit(oldp+58,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                     >> 1U))));
        bufp->chgBit(oldp+59,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                     >> 4U))));
        bufp->chgBit(oldp+60,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                     >> 4U))));
        bufp->chgBit(oldp+61,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                     >> 4U))));
        bufp->chgBit(oldp+62,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                     >> 4U))));
        bufp->chgBit(oldp+63,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                     >> 4U))));
        bufp->chgCData(oldp+64,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid),5);
        bufp->chgCData(oldp+65,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid),5);
        bufp->chgCData(oldp+66,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready),5);
        bufp->chgCData(oldp+67,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid),5);
        bufp->chgCData(oldp+68,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready),5);
        bufp->chgBit(oldp+69,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins));
        bufp->chgCData(oldp+70,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir),3);
        bufp->chgIData(oldp+71,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int),32);
        bufp->chgBit(oldp+72,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins));
        bufp->chgBit(oldp+73,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push));
        bufp->chgBit(oldp+74,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop));
        bufp->chgBit(oldp+75,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push));
        bufp->chgBit(oldp+76,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push));
        bufp->chgBit(oldp+77,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push));
        bufp->chgBit(oldp+78,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop));
        bufp->chgBit(oldp+79,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push));
        bufp->chgBit(oldp+80,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push));
        bufp->chgBit(oldp+81,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop));
        bufp->chgBit(oldp+82,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push));
        bufp->chgBit(oldp+83,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en));
        bufp->chgBit(oldp+84,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go));
        bufp->chgBit(oldp+85,((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen))));
        bufp->chgBit(oldp+86,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer));
        bufp->chgBit(oldp+87,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid));
        bufp->chgCData(oldp+88,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state),3);
        bufp->chgSData(oldp+89,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp),16);
        bufp->chgIData(oldp+90,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataA),32);
        bufp->chgBit(oldp+91,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_allowin));
        bufp->chgBit(oldp+92,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_allowin));
        bufp->chgBit(oldp+93,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_allowin));
        bufp->chgBit(oldp+94,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_id_valid));
        bufp->chgBit(oldp+95,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_to_exe_valid));
        bufp->chgBit(oldp+96,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_mem_valid));
        bufp->chgBit(oldp+97,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_valid));
        bufp->chgWData(oldp+98,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_id_bus),68);
        bufp->chgQData(oldp+101,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_to_if_bus),34);
        bufp->chgWData(oldp+103,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_mem_bus),301);
        bufp->chgWData(oldp+113,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_bus),102);
        bufp->chgQData(oldp+117,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus),44);
        bufp->chgWData(oldp+119,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus),72);
        bufp->chgWData(oldp+122,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus),254);
        bufp->chgWData(oldp+130,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus),222);
        bufp->chgWData(oldp+137,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus),129);
        bufp->chgQData(oldp+142,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus),52);
        bufp->chgQData(oldp+144,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus),36);
        bufp->chgWData(oldp+146,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus),89);
        bufp->chgWData(oldp+149,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus),100);
        bufp->chgQData(oldp+153,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus),38);
        bufp->chgIData(oldp+155,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus),30);
        bufp->chgQData(oldp+156,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus),38);
        bufp->chgBit(oldp+158,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_req));
        bufp->chgIData(oldp+159,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr),32);
        bufp->chgIData(oldp+160,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_rdata),32);
        bufp->chgBit(oldp+161,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_data_ok));
        bufp->chgBit(oldp+162,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_req));
        bufp->chgBit(oldp+163,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_wr));
        bufp->chgCData(oldp+164,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_wstrb),4);
        bufp->chgIData(oldp+165,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr),32);
        bufp->chgIData(oldp+166,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_rdata),32);
        bufp->chgBit(oldp+167,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr_ok));
        bufp->chgBit(oldp+168,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__crmd_da) 
                                       & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__crmd_pg)))
                                       ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U]
                                       : ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select))
                                           ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select))
                                               ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                                  >> 2U)
                                               : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                                  >> 1U))
                                           : (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                      >> 7U)))))));
        bufp->chgCData(oldp+169,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cur_plv),2);
        bufp->chgBit(oldp+170,((1U & ((IData)((0x800000ULL 
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
                                           : (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                      >> 7U)))))));
        bufp->chgCData(oldp+171,((0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[3U] 
                                            << 2U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[2U] 
                                              >> 0x1eU)))),5);
        bufp->chgSData(oldp+172,((0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                             >> 0x10U))),14);
        bufp->chgBit(oldp+173,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                      >> 0xfU))));
        bufp->chgSData(oldp+174,((0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                             >> 1U))),14);
        bufp->chgIData(oldp+175,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                   << 0x1fU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U] 
                                                >> 1U))),32);
        bufp->chgBit(oldp+176,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U])));
        bufp->chgBit(oldp+177,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[5U] 
                                >> 0x1fU)));
        bufp->chgSData(oldp+178,((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[4U] 
                                            >> 0x16U))),9);
        bufp->chgCData(oldp+179,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[4U] 
                                           >> 0x10U))),6);
        bufp->chgIData(oldp+180,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[5U] 
                                   << 1U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[4U] 
                                             >> 0x1fU))),32);
        bufp->chgIData(oldp+181,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[4U] 
                                   << 0x11U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[3U] 
                                                >> 0xfU))),32);
        bufp->chgBit(oldp+182,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[4U] 
                                      >> 0xfU))));
        bufp->chgSData(oldp+183,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[3U] 
                                            >> 5U))),10);
        bufp->chgIData(oldp+184,((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[3U] 
                                               << 0xeU) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[2U] 
                                                 >> 0x12U)))),19);
        bufp->chgIData(oldp+185,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[2U] 
                                   << 0xeU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[1U] 
                                               >> 0x12U))),32);
        bufp->chgIData(oldp+186,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[1U] 
                                   << 0xeU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                               >> 0x12U))),32);
        bufp->chgCData(oldp+187,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                           >> 0xdU))),5);
        bufp->chgCData(oldp+188,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                           >> 7U))),6);
        bufp->chgBit(oldp+189,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+190,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                      >> 4U))));
        bufp->chgBit(oldp+191,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+192,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+193,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+194,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+195,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U])));
        bufp->chgIData(oldp+196,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csrRData),32);
        bufp->chgIData(oldp+197,((0x7ffffU & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                      >> 0x11U)))),19);
        bufp->chgSData(oldp+198,((0x3ffU & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                    >> 7U)))),10);
        bufp->chgBit(oldp+199,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 6U)))));
        bufp->chgBit(oldp+200,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                              >> 5U)))));
        bufp->chgCData(oldp+201,((0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))),5);
        bufp->chgCData(oldp+202,((0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                                                  [0x1fU]))),5);
        bufp->chgBit(oldp+203,((0U != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1)));
        bufp->chgCData(oldp+204,((0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                            << 1U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                              >> 0x1fU)))),5);
        bufp->chgBit(oldp+205,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+206,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                           >> 0x19U))),5);
        bufp->chgBit(oldp+207,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                      >> 0x18U))));
        bufp->chgIData(oldp+208,((0x7ffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                              >> 5U))),19);
        bufp->chgCData(oldp+209,((0x3fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                            << 1U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[1U] 
                                              >> 0x1fU)))),6);
        bufp->chgSData(oldp+210,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[1U] 
                                            >> 0x15U))),10);
        bufp->chgBit(oldp+211,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[1U] 
                                      >> 0x14U))));
        bufp->chgIData(oldp+212,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[1U])),20);
        bufp->chgCData(oldp+213,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                  >> 0x1eU)),2);
        bufp->chgCData(oldp+214,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                        >> 0x1cU))),2);
        bufp->chgBit(oldp+215,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+216,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                      >> 0x1aU))));
        bufp->chgIData(oldp+217,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                              >> 6U))),20);
        bufp->chgCData(oldp+218,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                        >> 4U))),2);
        bufp->chgCData(oldp+219,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                        >> 2U))),2);
        bufp->chgBit(oldp+220,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+221,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U])));
        bufp->chgBit(oldp+222,((0U != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0)));
        bufp->chgIData(oldp+223,((0xfffffU & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                                                      [0x1fU] 
                                                      >> 0x11U)))),20);
        bufp->chgCData(oldp+224,((0x3fU & (IData)((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                                                   [0x1fU] 
                                                   >> 0xbU)))),6);
        bufp->chgCData(oldp+225,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                                                [0x1fU] 
                                                >> 9U)))),2);
        bufp->chgCData(oldp+226,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                                                [0x1fU] 
                                                >> 7U)))),2);
        bufp->chgBit(oldp+227,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                                              [0x1fU] 
                                              >> 6U)))));
        bufp->chgBit(oldp+228,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                                              [0x1fU] 
                                              >> 5U)))));
        bufp->chgCData(oldp+229,((0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                                                  [0x1fU]))),5);
        bufp->chgIData(oldp+230,((0x7ffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                              >> 0xbU))),19);
        bufp->chgBit(oldp+231,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus)));
        bufp->chgSData(oldp+232,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                            >> 1U))),10);
        bufp->chgIData(oldp+233,((0xfffffU & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                                                      [0x1fU] 
                                                      >> 0x11U)))),20);
        bufp->chgCData(oldp+234,((0x3fU & (IData)((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                                                   [0x1fU] 
                                                   >> 0xbU)))),6);
        bufp->chgCData(oldp+235,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                                                [0x1fU] 
                                                >> 9U)))),2);
        bufp->chgCData(oldp+236,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                                                [0x1fU] 
                                                >> 7U)))),2);
        bufp->chgBit(oldp+237,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                                              [0x1fU] 
                                              >> 6U)))));
        bufp->chgBit(oldp+238,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                                              [0x1fU] 
                                              >> 5U)))));
        bufp->chgBit(oldp+239,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid));
        bufp->chgBit(oldp+240,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__rd_requst_can_receive));
        bufp->chgBit(oldp+241,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid));
        bufp->chgQData(oldp+242,((((QData)((IData)(
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[4U])) 
                                   << 0x22U) | (((QData)((IData)(
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[3U])) 
                                                 << 2U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[2U])) 
                                                   >> 0x1eU)))),64);
        bufp->chgCData(oldp+244,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr 
                                           >> 4U))),8);
        bufp->chgIData(oldp+245,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr 
                                  >> 0xcU)),20);
        bufp->chgCData(oldp+246,((0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr)),4);
        bufp->chgBit(oldp+247,((1U & (~ ((IData)((0x800000ULL 
                                                  == 
                                                  (0xc00000ULL 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus)))
                                          ? (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                     >> 3U))
                                          : ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select))
                                              ? ((1U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select))
                                                  ? (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                             >> 2U))
                                                  : (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                             >> 1U)))
                                              : (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                         >> 7U))))))));
        bufp->chgBit(oldp+248,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv_wea));
        bufp->chgCData(oldp+249,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv_addra),8);
        bufp->chgBit(oldp+250,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv_wea));
        bufp->chgCData(oldp+251,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv_addra),8);
        bufp->chgCData(oldp+252,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0_wea),4);
        bufp->chgCData(oldp+253,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0_addr),8);
        bufp->chgIData(oldp+254,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina),32);
        bufp->chgCData(oldp+255,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1_wea),4);
        bufp->chgCData(oldp+256,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1_addr),8);
        bufp->chgCData(oldp+257,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2_wea),4);
        bufp->chgCData(oldp+258,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2_addr),8);
        bufp->chgCData(oldp+259,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_wea),4);
        bufp->chgCData(oldp+260,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_addr),8);
        bufp->chgCData(oldp+261,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0_wea),4);
        bufp->chgCData(oldp+262,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0_addr),8);
        bufp->chgCData(oldp+263,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1_wea),4);
        bufp->chgCData(oldp+264,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1_addr),8);
        bufp->chgCData(oldp+265,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2_wea),4);
        bufp->chgCData(oldp+266,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2_addr),8);
        bufp->chgCData(oldp+267,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3_wea),4);
        bufp->chgCData(oldp+268,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3_addr),8);
        bufp->chgBit(oldp+269,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__idle2lookup_able));
        bufp->chgBit(oldp+270,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lookup2lookup_able));
        bufp->chgBit(oldp+271,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__refill_write_way0));
        bufp->chgBit(oldp+272,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__refill_write_way1));
        bufp->chgCData(oldp+273,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr 
                                           >> 4U))),8);
        bufp->chgIData(oldp+274,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr 
                                  >> 0xcU)),20);
        bufp->chgCData(oldp+275,((0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr)),4);
        bufp->chgBit(oldp+276,((1U & (~ (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__crmd_da) 
                                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__crmd_pg)))
                                          ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U]
                                          : ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select))
                                              ? ((1U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select))
                                                  ? 
                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                                  >> 2U)
                                                  : 
                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                                  >> 1U))
                                              : (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                         >> 7U))))))));
        bufp->chgBit(oldp+277,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv_wea));
        bufp->chgCData(oldp+278,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv_addra),8);
        bufp->chgBit(oldp+279,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv_wea));
        bufp->chgCData(oldp+280,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_wea),4);
        bufp->chgCData(oldp+281,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_addr),8);
        bufp->chgIData(oldp+282,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina),32);
        bufp->chgCData(oldp+283,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_wea),4);
        bufp->chgCData(oldp+284,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_addr),8);
        bufp->chgCData(oldp+285,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_wea),4);
        bufp->chgCData(oldp+286,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_addr),8);
        bufp->chgCData(oldp+287,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_wea),4);
        bufp->chgCData(oldp+288,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_addr),8);
        bufp->chgCData(oldp+289,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_wea),4);
        bufp->chgCData(oldp+290,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_addr),8);
        bufp->chgCData(oldp+291,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_wea),4);
        bufp->chgCData(oldp+292,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_addr),8);
        bufp->chgCData(oldp+293,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_wea),4);
        bufp->chgCData(oldp+294,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_addr),8);
        bufp->chgCData(oldp+295,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_wea),4);
        bufp->chgCData(oldp+296,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_addr),8);
        bufp->chgBit(oldp+297,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__refill_write_way0));
        bufp->chgBit(oldp+298,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__refill_write_way1));
        bufp->chgBit(oldp+299,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen));
        bufp->chgBit(oldp+300,((IData)((0x8002U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+301,((IData)((0x8004U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+302,((IData)((0x8008U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+303,((IData)((0x800aU == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+304,((IData)((0x800cU == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+305,((IData)((0x800eU == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+306,((IData)((0x8018U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+307,((IData)((0x8020U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+308,((IData)((0x8022U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+309,((IData)((0x8024U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+310,((IData)((0x8026U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+311,((IData)((0x8030U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+312,((IData)((0x8032U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+313,((IData)((0x8034U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+314,((IData)((0x8060U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+315,((IData)((0x8062U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+316,((IData)((0x8064U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+317,((IData)((0x8066U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+318,((IData)((0x8080U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+319,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tcfg_wen));
        bufp->chgBit(oldp+320,((IData)((0x8086U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+321,((IData)((0x8088U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+322,((IData)((0x80c0U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+323,((IData)((0x8110U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+324,((IData)((0x8130U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+325,((IData)((0x8300U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+326,((IData)((0x8302U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+327,((IData)((0x8200U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+328,((IData)((0x8202U == 
                                        (0xfffeU & 
                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U])))));
        bufp->chgBit(oldp+329,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_ready_go));
        bufp->chgBit(oldp+330,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_memW));
        bufp->chgIData(oldp+331,((0x7ffffU & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                      >> 0x22U)))),19);
        bufp->chgSData(oldp+332,((0x3ffU & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                    >> 0x18U)))),10);
        bufp->chgBit(oldp+333,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+334,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                              >> 0x16U)))));
        bufp->chgCData(oldp+335,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                >> 0x13U)))),3);
        bufp->chgCData(oldp+336,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                >> 0x10U)))),3);
        bufp->chgCData(oldp+337,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                >> 0xdU)))),3);
        bufp->chgCData(oldp+338,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                >> 0xaU)))),3);
        bufp->chgBit(oldp+339,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                              >> 9U)))));
        bufp->chgBit(oldp+340,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                              >> 7U)))));
        bufp->chgBit(oldp+341,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                              >> 8U)))));
        bufp->chgBit(oldp+342,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                              >> 6U)))));
        bufp->chgCData(oldp+343,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                >> 4U)))),2);
        bufp->chgBit(oldp+344,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                              >> 3U)))));
        bufp->chgBit(oldp+345,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                              >> 2U)))));
        bufp->chgBit(oldp+346,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                              >> 1U)))));
        bufp->chgBit(oldp+347,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus))));
        bufp->chgBit(oldp+348,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                              >> 0x25U)))));
        bufp->chgIData(oldp+349,((0xfffffU & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                      >> 0x11U)))),20);
        bufp->chgCData(oldp+350,((0x3fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                   >> 0xbU)))),6);
        bufp->chgCData(oldp+351,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                >> 9U)))),2);
        bufp->chgCData(oldp+352,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                >> 7U)))),2);
        bufp->chgBit(oldp+353,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                              >> 6U)))));
        bufp->chgBit(oldp+354,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                              >> 5U)))));
        bufp->chgCData(oldp+355,((0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus))),5);
        bufp->chgQData(oldp+356,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_mulResult),64);
        bufp->chgBit(oldp+358,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__TLBR));
        bufp->chgBit(oldp+359,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PIL));
        bufp->chgBit(oldp+360,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PIS));
        bufp->chgBit(oldp+361,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PPI));
        bufp->chgBit(oldp+362,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PME));
        bufp->chgBit(oldp+363,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_regW));
        bufp->chgBit(oldp+364,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_excp));
        bufp->chgSData(oldp+365,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__excp_num),15);
        bufp->chgCData(oldp+366,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select),2);
        bufp->chgIData(oldp+367,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_finalResult),32);
        bufp->chgCData(oldp+368,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc),6);
        bufp->chgCData(oldp+369,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc),6);
        bufp->chgCData(oldp+370,((0x3fU & ((0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc)) 
                                           - (0x1fU 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc))))),6);
        bufp->chgBit(oldp+371,((1U & ((1U & (((0x1fU 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc)) 
                                              - (0x1fU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc))) 
                                             >> 5U)) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc) 
                                         >> 5U)))));
        bufp->chgBit(oldp+372,((0x1fU == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc)))));
        bufp->chgBit(oldp+373,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT____Vcellinp__u_mul__resetn));
        bufp->chgQData(oldp+374,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[0]),64);
        bufp->chgQData(oldp+376,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[1]),64);
        bufp->chgQData(oldp+378,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[2]),64);
        bufp->chgQData(oldp+380,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[3]),64);
        bufp->chgQData(oldp+382,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[4]),64);
        bufp->chgQData(oldp+384,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[5]),64);
        bufp->chgQData(oldp+386,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[6]),64);
        bufp->chgQData(oldp+388,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[7]),64);
        bufp->chgQData(oldp+390,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[8]),64);
        bufp->chgQData(oldp+392,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[9]),64);
        bufp->chgQData(oldp+394,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[10]),64);
        bufp->chgQData(oldp+396,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[11]),64);
        bufp->chgQData(oldp+398,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[12]),64);
        bufp->chgQData(oldp+400,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[13]),64);
        bufp->chgQData(oldp+402,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[14]),64);
        bufp->chgQData(oldp+404,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[15]),64);
        bufp->chgQData(oldp+406,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[16]),64);
        bufp->chgIData(oldp+408,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__p),32);
        bufp->chgQData(oldp+409,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__COut),64);
        bufp->chgQData(oldp+411,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SOut),64);
        bufp->chgQData(oldp+413,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig[0]),64);
        bufp->chgQData(oldp+415,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig[1]),64);
        bufp->chgQData(oldp+417,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig[2]),64);
        bufp->chgQData(oldp+419,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig[3]),64);
        bufp->chgQData(oldp+421,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig[4]),64);
        bufp->chgQData(oldp+423,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC[0]),64);
        bufp->chgQData(oldp+425,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC[1]),64);
        bufp->chgQData(oldp+427,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC[2]),64);
        bufp->chgQData(oldp+429,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC[3]),64);
        bufp->chgQData(oldp+431,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC[4]),64);
        bufp->chgQData(oldp+433,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig[0]),64);
        bufp->chgQData(oldp+435,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig[1]),64);
        bufp->chgQData(oldp+437,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig[2]),64);
        bufp->chgQData(oldp+439,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig[3]),64);
        bufp->chgQData(oldp+441,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC[0]),64);
        bufp->chgQData(oldp+443,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC[1]),64);
        bufp->chgQData(oldp+445,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC[2]),64);
        bufp->chgQData(oldp+447,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC[3]),64);
        bufp->chgQData(oldp+449,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig[0]),64);
        bufp->chgQData(oldp+451,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig[1]),64);
        bufp->chgQData(oldp+453,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC[0]),64);
        bufp->chgQData(oldp+455,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC[1]),64);
        bufp->chgQData(oldp+457,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forSig[0]),64);
        bufp->chgQData(oldp+459,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forSig[1]),64);
        bufp->chgQData(oldp+461,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forC[0]),64);
        bufp->chgQData(oldp+463,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forC[1]),64);
        bufp->chgQData(oldp+465,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fifSig),64);
        bufp->chgQData(oldp+467,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fifC),64);
        bufp->chgQData(oldp+469,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forC
                                  [0U] << 1U)),64);
        bufp->chgQData(oldp+471,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forSig
                                 [0U]),64);
        bufp->chgQData(oldp+473,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forC
                                  [1U] << 1U)),64);
        bufp->chgQData(oldp+475,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U]),64);
        bufp->chgQData(oldp+477,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U]),64);
        bufp->chgQData(oldp+479,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                 [2U]),64);
        bufp->chgQData(oldp+481,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir1__Carry),64);
        bufp->chgQData(oldp+483,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir1__S),64);
        bufp->chgQData(oldp+485,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U]),64);
        bufp->chgQData(oldp+487,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U]),64);
        bufp->chgQData(oldp+489,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                 [5U]),64);
        bufp->chgQData(oldp+491,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir2__Carry),64);
        bufp->chgQData(oldp+493,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir2__S),64);
        bufp->chgQData(oldp+495,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                 [6U]),64);
        bufp->chgQData(oldp+497,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                 [7U]),64);
        bufp->chgQData(oldp+499,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                 [8U]),64);
        bufp->chgQData(oldp+501,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir3__Carry),64);
        bufp->chgQData(oldp+503,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir3__S),64);
        bufp->chgQData(oldp+505,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                 [9U]),64);
        bufp->chgQData(oldp+507,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xaU]),64);
        bufp->chgQData(oldp+509,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xbU]),64);
        bufp->chgQData(oldp+511,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir4__Carry),64);
        bufp->chgQData(oldp+513,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir4__S),64);
        bufp->chgQData(oldp+515,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU]),64);
        bufp->chgQData(oldp+517,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xdU]),64);
        bufp->chgQData(oldp+519,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xeU]),64);
        bufp->chgQData(oldp+521,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__Carry),64);
        bufp->chgQData(oldp+523,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S),64);
        bufp->chgQData(oldp+525,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                  [3U] << 1U)),64);
        bufp->chgQData(oldp+527,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                 [3U]),64);
        bufp->chgQData(oldp+529,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                  [0U] << 1U)),64);
        bufp->chgQData(oldp+531,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry),64);
        bufp->chgQData(oldp+533,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__S),64);
        bufp->chgQData(oldp+535,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                 [0U]),64);
        bufp->chgQData(oldp+537,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                  [1U] << 1U)),64);
        bufp->chgQData(oldp+539,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                 [1U]),64);
        bufp->chgQData(oldp+541,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry),64);
        bufp->chgQData(oldp+543,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S),64);
        bufp->chgQData(oldp+545,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xfU]),64);
        bufp->chgQData(oldp+547,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                 [0x10U]),64);
        bufp->chgQData(oldp+549,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                 [0U]),64);
        bufp->chgQData(oldp+551,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry),64);
        bufp->chgQData(oldp+553,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S),64);
        bufp->chgQData(oldp+555,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                  [0U] << 1U)),64);
        bufp->chgQData(oldp+557,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                 [1U]),64);
        bufp->chgQData(oldp+559,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                  [1U] << 1U)),64);
        bufp->chgQData(oldp+561,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry),64);
        bufp->chgQData(oldp+563,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S),64);
        bufp->chgQData(oldp+565,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                 [2U]),64);
        bufp->chgQData(oldp+567,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                  [2U] << 1U)),64);
        bufp->chgQData(oldp+569,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                 [3U]),64);
        bufp->chgQData(oldp+571,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry),64);
        bufp->chgQData(oldp+573,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S),64);
        bufp->chgQData(oldp+575,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                  [3U] << 1U)),64);
        bufp->chgQData(oldp+577,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                 [4U]),64);
        bufp->chgQData(oldp+579,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                  [4U] << 1U)),64);
        bufp->chgQData(oldp+581,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry),64);
        bufp->chgQData(oldp+583,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S),64);
        bufp->chgQData(oldp+585,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forSig
                                 [1U]),64);
        bufp->chgQData(oldp+587,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fifC 
                                  << 1U)),64);
        bufp->chgQData(oldp+589,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                  [0U] << 1U)),64);
        bufp->chgQData(oldp+591,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                 [0U]),64);
        bufp->chgQData(oldp+593,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                  [1U] << 1U)),64);
        bufp->chgQData(oldp+595,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry),64);
        bufp->chgQData(oldp+597,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S),64);
        bufp->chgQData(oldp+599,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                 [1U]),64);
        bufp->chgQData(oldp+601,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                  [2U] << 1U)),64);
        bufp->chgQData(oldp+603,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                 [2U]),64);
        bufp->chgQData(oldp+605,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry),64);
        bufp->chgQData(oldp+607,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S),64);
        bufp->chgBit(oldp+609,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_ready_go));
        bufp->chgBit(oldp+610,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_taken));
        bufp->chgIData(oldp+611,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_target_buf),32);
        bufp->chgBit(oldp+612,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel));
        bufp->chgBit(oldp+613,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+614,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+615,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                              >> 0x2aU)))));
        bufp->chgCData(oldp+616,((0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                   >> 0x24U)))),5);
        bufp->chgIData(oldp+617,((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                          >> 4U))),32);
        bufp->chgBit(oldp+618,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                              >> 3U)))));
        bufp->chgBit(oldp+619,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                              >> 2U)))));
        bufp->chgBit(oldp+620,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                              >> 1U)))));
        bufp->chgBit(oldp+621,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus))));
        bufp->chgBit(oldp+622,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[2U] 
                                      >> 7U))));
        bufp->chgBit(oldp+623,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[2U] 
                                      >> 6U))));
        bufp->chgBit(oldp+624,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[2U] 
                                      >> 5U))));
        bufp->chgCData(oldp+625,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[2U])),5);
        bufp->chgIData(oldp+626,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[1U]),32);
        bufp->chgIData(oldp+627,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[0U]),32);
        bufp->chgIData(oldp+628,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB),32);
        bufp->chgIData(oldp+629,((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB)),32);
        bufp->chgIData(oldp+630,(((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataA 
                                                 + 
                                                 (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB)))),32);
        bufp->chgBit(oldp+631,((1U & (IData)((1ULL 
                                              & ((1ULL 
                                                  + 
                                                  ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataA)) 
                                                   + (QData)((IData)(
                                                                     (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB))))) 
                                                 >> 0x20U))))));
        bufp->chgIData(oldp+632,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_target),32);
        bufp->chgBit(oldp+633,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__rj_eq_rd));
        bufp->chgBit(oldp+634,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__rj_lt_rd));
        bufp->chgBit(oldp+635,((1U & (~ (IData)((1ULL 
                                                 & ((1ULL 
                                                     + 
                                                     ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataA)) 
                                                      + (QData)((IData)(
                                                                        (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB))))) 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+636,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__IPE_EXCP));
        bufp->chgBit(oldp+637,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_excp));
        bufp->chgSData(oldp+638,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__excp_num),15);
        bufp->chgBit(oldp+639,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_ready_go));
        bufp->chgBit(oldp+640,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_allowin));
        bufp->chgBit(oldp+641,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__preIF_to_IF_valid));
        bufp->chgBit(oldp+642,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__preIF_ready_go));
        bufp->chgIData(oldp+643,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc),32);
        bufp->chgBit(oldp+644,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__br_taken));
        bufp->chgIData(oldp+645,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[3U] 
                                   << 0x1fU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[2U] 
                                                >> 1U))),32);
        bufp->chgIData(oldp+646,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[4U] 
                                   << 0x1fU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[3U] 
                                                >> 1U))),32);
        bufp->chgIData(oldp+647,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[2U] 
                                   << 0x1fU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[1U] 
                                                >> 1U))),32);
        bufp->chgSData(oldp+648,((0x3ffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[1U] 
                                             << 9U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                               >> 0x17U)))),10);
        bufp->chgBit(oldp+649,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+650,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                      >> 0x15U))));
        bufp->chgCData(oldp+651,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                        >> 0x12U))),3);
        bufp->chgCData(oldp+652,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                        >> 0xfU))),3);
        bufp->chgCData(oldp+653,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+654,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                        >> 9U))),3);
        bufp->chgBit(oldp+655,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                      >> 8U))));
        bufp->chgBit(oldp+656,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+657,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                      >> 7U))));
        bufp->chgBit(oldp+658,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+659,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+660,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                      >> 1U))));
        bufp->chgCData(oldp+661,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                        >> 3U))),2);
        bufp->chgBit(oldp+662,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U])));
        bufp->chgBit(oldp+663,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__crmd_da));
        bufp->chgBit(oldp+664,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__crmd_pg));
        bufp->chgBit(oldp+665,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                              >> 0x25U)))));
        bufp->chgIData(oldp+666,((0xfffffU & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                      >> 0x11U)))),20);
        bufp->chgCData(oldp+667,((0x3fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                   >> 0xbU)))),6);
        bufp->chgCData(oldp+668,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                >> 9U)))),2);
        bufp->chgCData(oldp+669,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                >> 7U)))),2);
        bufp->chgBit(oldp+670,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                              >> 6U)))));
        bufp->chgBit(oldp+671,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                              >> 5U)))));
        bufp->chgCData(oldp+672,((0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus))),5);
        bufp->chgBit(oldp+673,((0U != (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc))));
        bufp->chgBit(oldp+674,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__TLBR));
        bufp->chgBit(oldp+675,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__PPI));
        bufp->chgBit(oldp+676,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__PIF));
        bufp->chgBit(oldp+677,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__idle_lock));
        bufp->chgIData(oldp+678,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc 
                                  >> 0xdU)),19);
        bufp->chgBit(oldp+679,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc 
                                      >> 0xcU))));
        bufp->chgIData(oldp+680,((((- (IData)((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select)))) 
                                   & ((0xe0000000U 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                          << 0x11U)) 
                                      | (0x1fffffffU 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc))) 
                                  | ((- (IData)((1U 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select) 
                                                    >> 1U)))) 
                                     & ((0xe0000000U 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                            << 0x14U)) 
                                        | (0x1fffffffU 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc))))),32);
        bufp->chgCData(oldp+681,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select),2);
        bufp->chgIData(oldp+682,(((0x15U == (0x3fU 
                                             & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                        >> 0xbU))))
                                   ? (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                >> 0x1aU)) 
                                       << 0x15U) | 
                                      (0x1fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc))
                                   : (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                >> 0x11U)) 
                                       << 0xcU) | (0xfffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc)))),32);
        bufp->chgBit(oldp+683,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_ready_go));
        bufp->chgIData(oldp+684,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[6U] 
                                   << 2U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[5U] 
                                             >> 0x1eU))),32);
        bufp->chgIData(oldp+685,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[5U] 
                                   << 2U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[4U] 
                                             >> 0x1eU))),32);
        bufp->chgIData(oldp+686,((0x7ffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[2U] 
                                              >> 0xbU))),19);
        bufp->chgSData(oldp+687,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[2U] 
                                            >> 1U))),10);
        bufp->chgCData(oldp+688,((0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[2U] 
                                            << 4U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[1U] 
                                              >> 0x1cU)))),5);
        bufp->chgBit(oldp+689,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[1U] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+690,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[1U] 
                                           >> 0x15U))),6);
        bufp->chgBit(oldp+691,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[1U] 
                                      >> 0x14U))));
        bufp->chgIData(oldp+692,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[1U])),20);
        bufp->chgCData(oldp+693,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                  >> 0x1eU)),2);
        bufp->chgCData(oldp+694,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                        >> 0x1cU))),2);
        bufp->chgBit(oldp+695,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+696,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                      >> 0x1aU))));
        bufp->chgIData(oldp+697,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                              >> 6U))),20);
        bufp->chgCData(oldp+698,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                        >> 4U))),2);
        bufp->chgCData(oldp+699,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                        >> 2U))),2);
        bufp->chgBit(oldp+700,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+701,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U])));
        bufp->chgBit(oldp+702,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U] 
                                      >> 0x18U))));
        bufp->chgIData(oldp+703,((0x7ffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U] 
                                              >> 5U))),19);
        bufp->chgCData(oldp+704,((0x3fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U] 
                                            << 1U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                              >> 0x1fU)))),6);
        bufp->chgSData(oldp+705,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                            >> 0x15U))),10);
        bufp->chgBit(oldp+706,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                      >> 0x14U))));
        bufp->chgIData(oldp+707,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U])),20);
        bufp->chgCData(oldp+708,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                  >> 0x1eU)),2);
        bufp->chgCData(oldp+709,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                        >> 0x1cU))),2);
        bufp->chgBit(oldp+710,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+711,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                      >> 0x1aU))));
        bufp->chgIData(oldp+712,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                              >> 6U))),20);
        bufp->chgCData(oldp+713,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                        >> 4U))),2);
        bufp->chgCData(oldp+714,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                        >> 2U))),2);
        bufp->chgBit(oldp+715,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+716,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U])));
        bufp->chgCData(oldp+717,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__byteReadData),8);
        bufp->chgSData(oldp+718,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__halfReadData),16);
        bufp->chgIData(oldp+719,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_regWData),32);
        bufp->chgIData(oldp+720,(((0x1000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                   ? ((0xfffff00U & 
                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                        << 8U)) | (
                                                   (0x40U 
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
                                   : 0U)),32);
        bufp->chgIData(oldp+721,(((0x1000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                   ? (0x80U | ((0xfffff00U 
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
                                   : 0U)),32);
        bufp->chgSData(oldp+722,(((0x1000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                   ? (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                                >> 0x15U))
                                   : 0U)),10);
        bufp->chgIData(oldp+723,(((0x1000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                   ? (0x7ffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U] 
                                                  >> 5U))
                                   : 0U)),19);
        bufp->chgCData(oldp+724,(((0x1000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                   ? (0x3fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U] 
                                                << 1U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                                  >> 0x1fU)))
                                   : 0U)),6);
        bufp->chgIData(oldp+725,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0),32);
        bufp->chgIData(oldp+726,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1),32);
        bufp->chgQData(oldp+727,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0]),37);
        bufp->chgQData(oldp+729,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[1]),37);
        bufp->chgQData(oldp+731,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[2]),37);
        bufp->chgQData(oldp+733,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[3]),37);
        bufp->chgQData(oldp+735,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[4]),37);
        bufp->chgQData(oldp+737,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[5]),37);
        bufp->chgQData(oldp+739,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[6]),37);
        bufp->chgQData(oldp+741,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[7]),37);
        bufp->chgQData(oldp+743,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[8]),37);
        bufp->chgQData(oldp+745,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[9]),37);
        bufp->chgQData(oldp+747,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[10]),37);
        bufp->chgQData(oldp+749,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[11]),37);
        bufp->chgQData(oldp+751,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[12]),37);
        bufp->chgQData(oldp+753,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[13]),37);
        bufp->chgQData(oldp+755,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[14]),37);
        bufp->chgQData(oldp+757,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[15]),37);
        bufp->chgQData(oldp+759,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[16]),37);
        bufp->chgQData(oldp+761,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[17]),37);
        bufp->chgQData(oldp+763,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[18]),37);
        bufp->chgQData(oldp+765,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[19]),37);
        bufp->chgQData(oldp+767,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[20]),37);
        bufp->chgQData(oldp+769,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[21]),37);
        bufp->chgQData(oldp+771,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[22]),37);
        bufp->chgQData(oldp+773,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[23]),37);
        bufp->chgQData(oldp+775,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[24]),37);
        bufp->chgQData(oldp+777,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[25]),37);
        bufp->chgQData(oldp+779,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[26]),37);
        bufp->chgQData(oldp+781,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[27]),37);
        bufp->chgQData(oldp+783,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[28]),37);
        bufp->chgQData(oldp+785,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[29]),37);
        bufp->chgQData(oldp+787,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[30]),37);
        bufp->chgQData(oldp+789,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[31]),37);
        bufp->chgQData(oldp+791,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0]),37);
        bufp->chgQData(oldp+793,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[1]),37);
        bufp->chgQData(oldp+795,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[2]),37);
        bufp->chgQData(oldp+797,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[3]),37);
        bufp->chgQData(oldp+799,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[4]),37);
        bufp->chgQData(oldp+801,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[5]),37);
        bufp->chgQData(oldp+803,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[6]),37);
        bufp->chgQData(oldp+805,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[7]),37);
        bufp->chgQData(oldp+807,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[8]),37);
        bufp->chgQData(oldp+809,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[9]),37);
        bufp->chgQData(oldp+811,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[10]),37);
        bufp->chgQData(oldp+813,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[11]),37);
        bufp->chgQData(oldp+815,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[12]),37);
        bufp->chgQData(oldp+817,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[13]),37);
        bufp->chgQData(oldp+819,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[14]),37);
        bufp->chgQData(oldp+821,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[15]),37);
        bufp->chgQData(oldp+823,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[16]),37);
        bufp->chgQData(oldp+825,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[17]),37);
        bufp->chgQData(oldp+827,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[18]),37);
        bufp->chgQData(oldp+829,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[19]),37);
        bufp->chgQData(oldp+831,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[20]),37);
        bufp->chgQData(oldp+833,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[21]),37);
        bufp->chgQData(oldp+835,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[22]),37);
        bufp->chgQData(oldp+837,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[23]),37);
        bufp->chgQData(oldp+839,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[24]),37);
        bufp->chgQData(oldp+841,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[25]),37);
        bufp->chgQData(oldp+843,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[26]),37);
        bufp->chgQData(oldp+845,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[27]),37);
        bufp->chgQData(oldp+847,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[28]),37);
        bufp->chgQData(oldp+849,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[29]),37);
        bufp->chgQData(oldp+851,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[30]),37);
        bufp->chgQData(oldp+853,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[31]),37);
        bufp->chgBit(oldp+855,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready))));
        bufp->chgBit(oldp+856,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push));
        bufp->chgBit(oldp+857,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop));
        bufp->chgBit(oldp+858,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push));
        bufp->chgBit(oldp+859,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push));
        bufp->chgBit(oldp+860,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en));
        bufp->chgBit(oldp+861,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push));
        bufp->chgBit(oldp+862,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop));
        bufp->chgBit(oldp+863,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push));
        bufp->chgBit(oldp+864,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push));
        bufp->chgBit(oldp+865,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop));
        bufp->chgBit(oldp+866,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push));
        bufp->chgBit(oldp+867,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en));
        bufp->chgBit(oldp+868,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+869,(((((8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast)) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                    >> 2U)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid) 
                                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                                  >> 2U)))));
        bufp->chgCData(oldp+870,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit),5);
        bufp->chgIData(oldp+871,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[0]),32);
        bufp->chgIData(oldp+872,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[1]),32);
        bufp->chgIData(oldp+873,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[2]),32);
        bufp->chgIData(oldp+874,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[3]),32);
        bufp->chgIData(oldp+875,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[4]),32);
        bufp->chgBit(oldp+876,(((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wlast))));
        bufp->chgBit(oldp+877,(((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rready)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast))));
        bufp->chgBit(oldp+878,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) 
                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last)))));
        bufp->chgBit(oldp+879,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid))));
        bufp->chgBit(oldp+880,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                       >> 3U) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid))))));
        bufp->chgBit(oldp+881,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en) 
                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast)))));
        bufp->chgBit(oldp+882,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid))));
        bufp->chgBit(oldp+883,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
                                   | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid))))));
        bufp->chgBit(oldp+884,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid))));
        bufp->chgBit(oldp+885,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8000U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+886,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8010U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+887,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8020U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+888,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8030U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+889,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8040U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+890,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8050U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+891,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8060U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+892,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8070U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+893,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xff00U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+894,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xff30U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+895,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xff40U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+896,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xf020U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+897,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xf030U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+898,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xf040U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+899,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xf050U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
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
        __Vtemp_h5d6c71de__0[0U] = __Vtemp_h20b39df6__0[0U];
        __Vtemp_h5d6c71de__0[1U] = (((IData)((((QData)((IData)(
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[2U])) 
                                               << 0x3cU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U])) 
                                                    >> 4U)))) 
                                     >> 0xeU) | ((IData)(
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
                                                 << 0x12U));
        __Vtemp_h5d6c71de__0[2U] = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__excp_num) 
                                     << 0x1fU) | ((0x60000000U 
                                                   & (((0x20000000U 
                                                        & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntid))) 
                                                           << 0x1dU)) 
                                                       | (0x40000000U 
                                                          & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntvl))) 
                                                             << 0x1dU))) 
                                                      | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntvh))) 
                                                         << 0x1dU))) 
                                                  | __Vtemp_h6e739bde__0[2U]));
        __Vtemp_h5d6c71de__0[3U] = (((0x7fff0000U & 
                                      (__Vtemp_h9c9a7739__0[0U] 
                                       << 0x10U)) | 
                                     ((0x7fff8000U 
                                       & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ertn) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_excp))) 
                                          << 0xfU)) 
                                      | ((0x7fffc000U 
                                          & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_excp) 
                                             << 0xeU)) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__excp_num) 
                                            >> 1U)))) 
                                    | (0x80000000U 
                                       & (__Vtemp_h9c9a7739__0[0U] 
                                          << 0x10U)));
        __Vtemp_h5d6c71de__0[4U] = (((__Vtemp_h9c9a7739__0[0U] 
                                      >> 0x10U) | (0x7fff0000U 
                                                   & (__Vtemp_h9c9a7739__0[1U] 
                                                      << 0x10U))) 
                                    | (__Vtemp_hd47c7449__0[2U] 
                                       << 0x1fU));
        __Vtemp_h5d6c71de__0[5U] = ((__Vtemp_hd47c7449__0[2U] 
                                     >> 1U) | (__Vtemp_hd47c7449__0[3U] 
                                               << 0x1fU));
        __Vtemp_h5d6c71de__0[6U] = ((__Vtemp_hd47c7449__0[3U] 
                                     >> 1U) | (0x80000000U 
                                               & (__Vtemp_hdbeaea70__0[3U] 
                                                  << 0x10U)));
        __Vtemp_h5d6c71de__0[7U] = ((0x7ffe0000U & 
                                     ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__alu_op) 
                                      << 0x11U)) | 
                                    ((0x7fff0000U & 
                                      (((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b)) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h)) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_bu)) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_hu)) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll)) 
                                       << 0x10U)) | 
                                     (__Vtemp_hdbeaea70__0[3U] 
                                      >> 0x10U)));
        bufp->chgWData(oldp+900,(__Vtemp_h5d6c71de__0),255);
        bufp->chgBit(oldp+908,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_hit) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_op)) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache_tlb_excp_cancel_req)) 
                                 & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))) 
                                | ((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state)) 
                                     & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_op))) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid)) 
                                   & (((3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset) 
                                              >> 2U)) 
                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_retNum)) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache))))));
        bufp->chgBit(oldp+909,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                               [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                           << 1U) | 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                           >> 0x1fU)))]));
        bufp->chgIData(oldp+910,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                 [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                             << 1U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                               >> 0x1fU)))]),19);
        bufp->chgCData(oldp+911,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                 [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                             << 1U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                               >> 0x1fU)))]),6);
        bufp->chgSData(oldp+912,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                 [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                             << 1U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                               >> 0x1fU)))]),10);
        bufp->chgBit(oldp+913,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                               [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                           << 1U) | 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                           >> 0x1fU)))]));
        bufp->chgIData(oldp+914,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                 [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                             << 1U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                               >> 0x1fU)))]),20);
        bufp->chgCData(oldp+915,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                 [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                             << 1U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                               >> 0x1fU)))]),2);
        bufp->chgCData(oldp+916,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                 [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                             << 1U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                               >> 0x1fU)))]),2);
        bufp->chgBit(oldp+917,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                               [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                           << 1U) | 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                           >> 0x1fU)))]));
        bufp->chgBit(oldp+918,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                               [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                           << 1U) | 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                           >> 0x1fU)))]));
        bufp->chgIData(oldp+919,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                 [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                             << 1U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                               >> 0x1fU)))]),20);
        bufp->chgCData(oldp+920,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                 [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                             << 1U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                               >> 0x1fU)))]),2);
        bufp->chgCData(oldp+921,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                 [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                             << 1U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                               >> 0x1fU)))]),2);
        bufp->chgBit(oldp+922,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                               [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                           << 1U) | 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                           >> 0x1fU)))]));
        bufp->chgBit(oldp+923,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                               [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                           << 1U) | 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                           >> 0x1fU)))]));
        bufp->chgBit(oldp+924,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_req)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__rd_requst_can_receive))));
        bufp->chgBit(oldp+925,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_valid) 
                                & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                      >> 0x11U)))));
        bufp->chgIData(oldp+926,(((1U == (3U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                   >> 0x1fU))))
                                   ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[5U] 
                                       << 2U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[4U] 
                                                 >> 0x1eU))
                                   : ((2U == (3U & 
                                              ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
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
                                           : ((0x80000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U])
                                               ? (1U 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
                                                     >> 1U))
                                               : ((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[6U] 
                                                   << 2U) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[5U] 
                                                     >> 0x1eU))))))),32);
        bufp->chgIData(oldp+927,(((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb))
                                     ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wdata 
                                        >> 0x18U) : 
                                    (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                     >> 0x18U)) << 0x18U) 
                                  | ((0xff0000U & (
                                                   ((4U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb))
                                                     ? 
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wdata 
                                                     >> 0x10U)
                                                     : 
                                                    (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                     >> 0x10U)) 
                                                   << 0x10U)) 
                                     | ((0xff00U & 
                                         (((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb))
                                            ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wdata 
                                               >> 8U)
                                            : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                               >> 8U)) 
                                          << 8U)) | 
                                        (0xffU & ((1U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb))
                                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wdata
                                                   : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)))))),32);
        bufp->chgIData(oldp+928,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_op) 
                                   & ((3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset) 
                                             >> 2U)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_retNum)))
                                   ? ((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb))
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
                                                 : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)))))
                                   : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)),32);
        bufp->chgIData(oldp+929,(((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wstrb))
                                     ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wdata 
                                        >> 0x18U) : 
                                    (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                     >> 0x18U)) << 0x18U) 
                                  | ((0xff0000U & (
                                                   ((4U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wstrb))
                                                     ? 
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wdata 
                                                     >> 0x10U)
                                                     : 
                                                    (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                     >> 0x10U)) 
                                                   << 0x10U)) 
                                     | ((0xff00U & 
                                         (((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wstrb))
                                            ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wdata 
                                               >> 8U)
                                            : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                               >> 8U)) 
                                          << 8U)) | 
                                        (0xffU & ((1U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wstrb))
                                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wdata
                                                   : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)))))),32);
        bufp->chgIData(oldp+930,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_op) 
                                   & ((3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_offset) 
                                             >> 2U)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_retNum)))
                                   ? ((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wstrb))
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
                                                 : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)))))
                                   : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)),32);
        bufp->chgIData(oldp+931,((0x7ffffU & ((((- (IData)(
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
                                                      << 0xaU) 
                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                                        >> 0x16U)))) 
                                              | ((- (IData)(
                                                            ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_valid) 
                                                             & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_memW) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                                                    >> 0x10U)) 
                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__cacop_load))))) 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult 
                                                    >> 0xdU))))),19);
        bufp->chgSData(oldp+932,((0x3ffU & ((((- (IData)(
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
                                                    << 0x17U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                      >> 9U)))) 
                                            | ((- (IData)(
                                                          ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_valid) 
                                                           & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_memW) 
                                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                                                  >> 0x10U)) 
                                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__cacop_load))))) 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                          >> 0x18U)))))),10);
        bufp->chgIData(oldp+933,(((0x15U == (0x3fU 
                                             & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                        >> 0xbU))))
                                   ? (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                >> 0x1aU)) 
                                       << 0x15U) | 
                                      (0x1fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult))
                                   : (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                >> 0x11U)) 
                                       << 0xcU) | (0xfffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult)))),32);
        bufp->chgIData(oldp+934,((((- (IData)((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select)))) 
                                   & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                >> 0xdU)) 
                                       << 0x1dU) | 
                                      (0x1fffffffU 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult))) 
                                  | ((- (IData)((1U 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select) 
                                                    >> 1U)))) 
                                     & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                  >> 0xaU)) 
                                         << 0x1dU) 
                                        | (0x1fffffffU 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult))))),32);
        bufp->chgCData(oldp+935,(((8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                          >> 0xfU) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus) 
                                            << 3U))) 
                                  | (7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[0U] 
                                           >> 2U)))),8);
        bufp->chgIData(oldp+936,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q) 
                                  << (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc)))),32);
        bufp->chgQData(oldp+937,((0x1ffffffffULL & 
                                  ((((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))))) 
                                     & (QData)((IData)(
                                                       ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_sign)
                                                         ? 
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_res
                                                        [0U]
                                                         : 
                                                        ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                                          << 0x17U) 
                                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                            >> 9U)))))) 
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
                                              + ((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q))) 
                                                 ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q)) 
                                             + ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q)) 
                                                << 1U)) 
                                            >> 3U)))))),33);
        bufp->chgQData(oldp+939,((0x1ffffffffULL & 
                                  ((((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))))) 
                                     & (QData)((IData)(
                                                       ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_sign)
                                                         ? 
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_res
                                                        [1U]
                                                         : 
                                                        ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                          << 0x17U) 
                                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                                            >> 9U)))))) 
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
                                               + ((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q))) 
                                                  ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q)) 
                                              + ((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q))) 
                                                 ^ 
                                                 ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                                  << 3U))) 
                                             + (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q)) 
                                                 << 1U) 
                                                | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q)))) 
                                            >> 3U)))))),33);
        bufp->chgIData(oldp+941,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q) 
                                  << (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc)))),32);
        bufp->chgBit(oldp+942,(((0x1fU == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc))) 
                                & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                           >> 0x1fU)))));
        bufp->chgCData(oldp+943,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgBit(oldp+944,((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__sel_nodes))));
        bufp->chgIData(oldp+945,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__sel_nodes),32);
        bufp->chgWData(oldp+946,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes),160);
        bufp->chgCData(oldp+951,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgBit(oldp+952,((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__sel_nodes))));
        bufp->chgIData(oldp+953,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__sel_nodes),32);
        bufp->chgWData(oldp+954,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes),160);
        bufp->chgBit(oldp+959,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel_r_valid)
                                 ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel_r) 
                                    & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_id_bus[2U] 
                                         << 0x1cU) 
                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_id_bus[1U] 
                                           >> 4U)) 
                                       != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_target_buf))
                                 : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel) 
                                    & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_id_bus[2U] 
                                         << 0x1cU) 
                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_id_bus[1U] 
                                           >> 4U)) 
                                       != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_target_buf)))));
        bufp->chgBit(oldp+960,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h)) 
                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_excp)))));
        bufp->chgBit(oldp+961,((((((((((((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b))) 
                                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h))) 
                                         & (0ULL == 
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
                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_excp)))));
        bufp->chgBit(oldp+962,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_valid) 
                                & (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__need_rj) 
                                      & (0xc0000000000ULL 
                                         == (0xc0000000000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus))) 
                                     & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrA))) 
                                    & ((0x1fU & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                         >> 0x24U))) 
                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrA))) 
                                   | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__need_rkd) 
                                        & (0xc0000000000ULL 
                                           == (0xc0000000000ULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus))) 
                                       & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrB))) 
                                      & ((0x1fU & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                           >> 0x24U))) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrB)))))));
        bufp->chgIData(oldp+963,(((IData)(((0ULL != 
                                            (0x280000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i)))
                                   ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[2U] 
                                       << 0x1cU) | 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                       >> 4U)) : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataA)),32);
        bufp->chgIData(oldp+964,(((((((((((((((((((
                                                   ((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slli) 
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
                                               != (0x280000ULL 
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
                                   : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB)),32);
        bufp->chgBit(oldp+965,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_valid) 
                                  & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                             >> 3U))) 
                                 & (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__need_rj) 
                                       & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrA))) 
                                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                 >> 0x2bU))) 
                                     & ((0x1fU & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                          >> 0x24U))) 
                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrA))) 
                                    | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__need_rkd) 
                                         & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrB))) 
                                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                   >> 0x2bU))) 
                                       & ((0x1fU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                            >> 0x24U))) 
                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrB))))) 
                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn)))));
        bufp->chgBit(oldp+966,(((((~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[2U] 
                                      >> 7U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_valid)) 
                                 & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__need_rj) 
                                      & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrA))) 
                                     & ((((0x1fU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                            >> 0x24U))) 
                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrA)) 
                                         | ((0x1fU 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[2U]) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrA))) 
                                        | ((0x1fU & 
                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U]) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                          >> 0x24U)))))) 
                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__need_rkd) 
                                        & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrB))) 
                                       & ((((0x1fU 
                                             & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                        >> 0x24U))) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrB)) 
                                           | ((0x1fU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[2U]) 
                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrB))) 
                                          | ((0x1fU 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U]) 
                                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrB)))))) 
                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[0U] 
                                   != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[0U]))));
        bufp->chgBit(oldp+967,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_valid) 
                                  & (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__need_rj) 
                                        & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrA))) 
                                       & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                  >> 0x2bU))) 
                                      & ((0x1fU & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                           >> 0x24U))) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrA))) 
                                     | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__need_rkd) 
                                          & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrB))) 
                                         & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                    >> 0x2bU))) 
                                        & ((0x1fU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                             >> 0x24U))) 
                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrB))))) 
                                 & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                            >> 2U))) 
                                & (~ ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                               >> 1U)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus))))));
        bufp->chgBit(oldp+968,((1U & (IData)((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__id_to_if_bus_r_valid)
                                                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__id_to_if_bus_r
                                                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_to_if_bus) 
                                              >> 0x21U)))));
        bufp->chgIData(oldp+969,((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__id_to_if_bus_r_valid)
                                           ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__id_to_if_bus_r
                                           : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_to_if_bus))),32);
        bufp->chgIData(oldp+970,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_data_ok)
                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_rdata
                                   : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__inst_sram_rdata_r)),32);
        bufp->chgIData(oldp+971,(((((- (IData)((1U 
                                                == 
                                                (3U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                    >> 3U))))) 
                                    & (((- (IData)(
                                                   ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                     >> 2U) 
                                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__byteReadData) 
                                                       >> 7U)))) 
                                        << 8U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__byteReadData))) 
                                   | ((- (IData)((2U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                      >> 3U))))) 
                                      & (((- (IData)(
                                                     ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                       >> 2U) 
                                                      & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__halfReadData) 
                                                         >> 0xfU)))) 
                                          << 0x10U) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__halfReadData)))) 
                                  | ((- (IData)((3U 
                                                 == 
                                                 (3U 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                     >> 3U))))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_rdata))),32);
        bufp->chgIData(oldp+972,(((2U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                >> 0x12U)))
                                   ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[7U] 
                                       << 0x1eU) | 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                       >> 2U)) : ((3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                       >> 0x12U)))
                                                   ? 
                                                  ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[7U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                                        >> 2U)) 
                                                    & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                        << 0x1eU) 
                                                       | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[7U] 
                                                          >> 2U))) 
                                                   | ((~ 
                                                       ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                         << 0x1eU) 
                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[7U] 
                                                           >> 2U))) 
                                                      & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[6U] 
                                                          << 2U) 
                                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[5U] 
                                                            >> 0x1eU))))
                                                   : 0U))),32);
        bufp->chgCData(oldp+973,((0x1fU & (((- (IData)(
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
        bufp->chgBit(oldp+974,((1U & ((1U == (7U & 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                               >> 0x1cU)))
                                       ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                          >> 0x1aU)
                                       : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U] 
                                          >> 0x18U)))));
        bufp->chgBit(oldp+975,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready))));
        bufp->chgBit(oldp+976,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready))));
        bufp->chgBit(oldp+977,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) 
                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last)))));
        bufp->chgBit(oldp+978,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid))));
        bufp->chgBit(oldp+979,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                      | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid))))));
        bufp->chgBit(oldp+980,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en) 
                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast)))));
        bufp->chgBit(oldp+981,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid))));
        bufp->chgBit(oldp+982,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
                                   | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid))))));
        bufp->chgBit(oldp+983,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+984,(vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr),32);
        bufp->chgCData(oldp+985,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen))),4);
        bufp->chgCData(oldp+986,(vlSelf->simu_top__DOT__soc__DOT__cpu_awsize),3);
        bufp->chgBit(oldp+987,(vlSelf->simu_top__DOT__soc__DOT__cpu_awvalid));
        bufp->chgIData(oldp+988,(vlSelf->simu_top__DOT__soc__DOT__cpu_wdata),32);
        bufp->chgCData(oldp+989,(vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb),4);
        bufp->chgBit(oldp+990,(vlSelf->simu_top__DOT__soc__DOT__cpu_wlast));
        bufp->chgBit(oldp+991,(vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid));
        bufp->chgCData(oldp+992,(vlSelf->simu_top__DOT__soc__DOT__m0_bid),4);
        bufp->chgCData(oldp+993,(vlSelf->simu_top__DOT__soc__DOT__m0_bresp),2);
        bufp->chgBit(oldp+994,(vlSelf->simu_top__DOT__soc__DOT__cpu_bready));
        bufp->chgCData(oldp+995,(vlSelf->simu_top__DOT__soc__DOT__cpu_arid),4);
        bufp->chgIData(oldp+996,(vlSelf->simu_top__DOT__soc__DOT__cpu_araddr),32);
        bufp->chgCData(oldp+997,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen))),4);
        bufp->chgCData(oldp+998,(vlSelf->simu_top__DOT__soc__DOT__cpu_arsize),3);
        bufp->chgBit(oldp+999,(vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid));
        bufp->chgCData(oldp+1000,(vlSelf->simu_top__DOT__soc__DOT__m0_rid),4);
        bufp->chgCData(oldp+1001,(vlSelf->simu_top__DOT__soc__DOT__m0_rresp),2);
        bufp->chgBit(oldp+1002,(vlSelf->simu_top__DOT__soc__DOT__m0_rlast));
        bufp->chgBit(oldp+1003,(vlSelf->simu_top__DOT__soc__DOT__cpu_rready));
        bufp->chgBit(oldp+1004,(vlSelf->simu_top__DOT__soc__DOT__m0_wready));
        bufp->chgBit(oldp+1005,(vlSelf->simu_top__DOT__soc__DOT__m0_bvalid));
        bufp->chgBit(oldp+1006,(vlSelf->simu_top__DOT__soc__DOT__m0_arready));
        bufp->chgBit(oldp+1007,(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid));
        bufp->chgBit(oldp+1008,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)))));
        bufp->chgBit(oldp+1009,(vlSelf->simu_top__DOT__soc__DOT__s0_wready));
        bufp->chgCData(oldp+1010,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data),4);
        bufp->chgBit(oldp+1011,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid));
        bufp->chgBit(oldp+1012,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)))));
        bufp->chgCData(oldp+1013,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid),4);
        bufp->chgBit(oldp+1014,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast));
        bufp->chgBit(oldp+1015,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid));
        bufp->chgBit(oldp+1016,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)))));
        bufp->chgBit(oldp+1017,(vlSelf->simu_top__DOT__soc__DOT__conf_s_wready));
        bufp->chgCData(oldp+1018,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data),4);
        bufp->chgBit(oldp+1019,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid));
        bufp->chgBit(oldp+1020,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)))));
        bufp->chgCData(oldp+1021,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid),4);
        bufp->chgIData(oldp+1022,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg),32);
        bufp->chgBit(oldp+1023,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast));
        bufp->chgBit(oldp+1024,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid));
        bufp->chgBit(oldp+1025,(vlSelf->simu_top__DOT__soc__DOT__apb_s_awready));
        bufp->chgBit(oldp+1026,(vlSelf->simu_top__DOT__soc__DOT__apb_s_wready));
        bufp->chgCData(oldp+1027,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id),4);
        bufp->chgBit(oldp+1028,(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid));
        bufp->chgBit(oldp+1029,(vlSelf->simu_top__DOT__soc__DOT__apb_s_arready));
        bufp->chgCData(oldp+1030,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id),4);
        bufp->chgIData(oldp+1031,(((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                    ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32
                                    : ((1U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                        ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                           << 8U) : 
                                       ((2U == (3U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                         ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                            << 0x10U)
                                         : ((3U == 
                                             (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                             ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                << 0x18U)
                                             : 0U))))),32);
        bufp->chgBit(oldp+1032,(vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast));
        bufp->chgBit(oldp+1033,(vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid));
        bufp->chgIData(oldp+1034,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr),32);
        bufp->chgIData(oldp+1035,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr),32);
        bufp->chgIData(oldp+1036,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata),32);
        bufp->chgCData(oldp+1037,(((IData)(vlSelf->simu_top__DOT__soc__DOT__uart0_int) 
                                   << 1U)),8);
        bufp->chgBit(oldp+1038,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                       >> 1U))));
        bufp->chgBit(oldp+1039,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))));
        bufp->chgBit(oldp+1040,(vlSelf->simu_top__DOT__soc__DOT__uart0_int));
        bufp->chgBit(oldp+1041,((IData)(((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                           >> 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared)) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out)))));
        bufp->chgBit(oldp+1042,(vlSelf->simu_top__DOT__soc__DOT__uart0_txd_oe));
        bufp->chgBit(oldp+1043,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg) 
                                       ^ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                          >> 3U)))));
        bufp->chgBit(oldp+1044,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)))));
        bufp->chgBit(oldp+1045,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant) 
                                 & ((0U == (0x3fU & 
                                            (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                             >> 0xeU)))
                                     ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                                     : (0U != (0x3fU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                  >> 0xeU)))))));
        bufp->chgIData(oldp+1046,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                    ? ((0U == (0x3fU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                  >> 0xeU)))
                                        ? (0xffU & 
                                           ((4U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                             ? ((2U 
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
                                             : ((2U 
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
                                        : 0U) : 0U)),32);
        bufp->chgBit(oldp+1047,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant));
        bufp->chgBit(oldp+1048,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
                                 & ((0U == (0x3fU & 
                                            (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                             >> 0xeU)))
                                     ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                                     : (0U != (0x3fU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                  >> 0xeU)))))));
        bufp->chgBit(oldp+1049,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr));
        bufp->chgBit(oldp+1050,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu));
        bufp->chgBit(oldp+1051,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu));
        bufp->chgIData(oldp+1052,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr),20);
        bufp->chgCData(oldp+1053,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu),8);
        bufp->chgCData(oldp+1054,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu),8);
        bufp->chgBit(oldp+1055,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu));
        bufp->chgIData(oldp+1056,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr),24);
        bufp->chgBit(oldp+1057,((0U == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                 >> 0xeU)))));
        bufp->chgBit(oldp+1058,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab));
        bufp->chgBit(oldp+1059,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw));
        bufp->chgBit(oldp+1060,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel));
        bufp->chgIData(oldp+1061,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr),20);
        bufp->chgCData(oldp+1062,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai),8);
        bufp->chgCData(oldp+1063,((0xffU & ((4U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                             ? ((2U 
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
                                             : ((2U 
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
        bufp->chgBit(oldp+1064,((0U != (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                 >> 0xeU)))));
        bufp->chgBit(oldp+1065,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel) 
                                 & (0U != (0x3fU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                            >> 0xeU))))));
        bufp->chgBit(oldp+1066,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab) 
                                 & (0U != (0x3fU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                            >> 0xeU))))));
        bufp->chgIData(oldp+1067,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                      ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma 
                                         >> 8U) : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr) 
                                    << 8U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai))),32);
        bufp->chgBit(oldp+1068,(((0U == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                  >> 0xeU)))
                                  ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                                  : (0U != (0x3fU & 
                                            (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                             >> 0xeU))))));
        bufp->chgBit(oldp+1069,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel));
        bufp->chgBit(oldp+1070,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab));
        bufp->chgIData(oldp+1071,((0xffffffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                                 ? 
                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma 
                                                 >> 8U)
                                                 : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr))),24);
        bufp->chgCData(oldp+1072,(((0U == (0x3fU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                            >> 0xeU)))
                                    ? (0xffU & ((4U 
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
                                    : 0U)),8);
        bufp->chgBit(oldp+1073,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))));
        bufp->chgBit(oldp+1074,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready));
        bufp->chgBit(oldp+1075,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd));
        bufp->chgCData(oldp+1076,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm),4);
        bufp->chgCData(oldp+1077,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb),4);
        bufp->chgCData(oldp+1078,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb),4);
        bufp->chgIData(oldp+1079,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32),32);
        bufp->chgIData(oldp+1080,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32),32);
        bufp->chgCData(oldp+1081,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count),3);
        bufp->chgCData(oldp+1082,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size),3);
        bufp->chgCData(oldp+1083,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size),3);
        bufp->chgCData(oldp+1084,((0xffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)),8);
        bufp->chgBit(oldp+1085,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we));
        bufp->chgBit(oldp+1086,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re));
        bufp->chgBit(oldp+1087,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en));
        bufp->chgBit(oldp+1088,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en));
        bufp->chgBit(oldp+1089,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode));
        bufp->chgCData(oldp+1090,((7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)),3);
        bufp->chgBit(oldp+1091,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable));
        bufp->chgBit(oldp+1092,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad));
        bufp->chgCData(oldp+1093,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier),4);
        bufp->chgCData(oldp+1094,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir),4);
        bufp->chgCData(oldp+1095,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr),2);
        bufp->chgCData(oldp+1096,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr),5);
        bufp->chgBit(oldp+1097,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared));
        bufp->chgBit(oldp+1098,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol));
        bufp->chgCData(oldp+1099,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr),8);
        bufp->chgCData(oldp+1100,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr),8);
        bufp->chgIData(oldp+1101,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl),24);
        bufp->chgBit(oldp+1102,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc));
        bufp->chgBit(oldp+1103,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d));
        bufp->chgBit(oldp+1104,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset));
        bufp->chgSData(oldp+1105,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc),16);
        bufp->chgCData(oldp+1106,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level),4);
        bufp->chgBit(oldp+1107,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset));
        bufp->chgBit(oldp+1108,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset));
        bufp->chgBit(oldp+1109,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                                       >> 7U))));
        bufp->chgBit(oldp+1110,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                       >> 2U))));
        bufp->chgBit(oldp+1111,((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                          >> 2U)))));
        bufp->chgBit(oldp+1112,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg));
        bufp->chgBit(oldp+1113,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg));
        bufp->chgCData(oldp+1114,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg),8);
        bufp->chgCData(oldp+1115,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg),8);
        bufp->chgCData(oldp+1116,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count),8);
        bufp->chgCData(oldp+1117,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg),3);
        bufp->chgBit(oldp+1118,((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        bufp->chgBit(oldp+1119,((1U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        bufp->chgBit(oldp+1120,((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        bufp->chgBit(oldp+1121,((3U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        bufp->chgBit(oldp+1122,((((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
                                  | (1U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
                                    & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                          >> 2U))))));
        bufp->chgBit(oldp+1123,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                       >> 3U))));
        bufp->chgBit(oldp+1124,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                       >> 4U))));
        bufp->chgBit(oldp+1125,((1U & (((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                         ? ((0xcU & 
                                             ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                              << 2U)) 
                                            | ((2U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                   >> 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                     >> 3U))))
                                         : ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                            << 1U)) 
                                       >> 3U))));
        bufp->chgBit(oldp+1126,((1U & (((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                         ? ((0xcU & 
                                             ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                              << 2U)) 
                                            | ((2U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                   >> 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                     >> 3U))))
                                         : ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                            << 1U)) 
                                       >> 2U))));
        bufp->chgBit(oldp+1127,((1U & (((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                         ? ((0xcU & 
                                             ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                              << 2U)) 
                                            | ((2U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                   >> 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                     >> 3U))))
                                         : ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                            << 1U)) 
                                       >> 1U))));
        bufp->chgBit(oldp+1128,((1U & ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                        ? ((0xcU & 
                                            ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                             << 2U)) 
                                           | ((2U & 
                                               ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                >> 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                    >> 3U))))
                                        : ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                           << 1U)))));
        bufp->chgCData(oldp+1129,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr),8);
        bufp->chgBit(oldp+1130,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0));
        bufp->chgBit(oldp+1131,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun));
        bufp->chgBit(oldp+1132,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                       >> 1U))));
        bufp->chgBit(oldp+1133,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out))));
        bufp->chgBit(oldp+1134,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                       >> 2U))));
        bufp->chgBit(oldp+1135,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5));
        bufp->chgBit(oldp+1136,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6));
        bufp->chgBit(oldp+1137,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7));
        bufp->chgBit(oldp+1138,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r));
        bufp->chgBit(oldp+1139,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r));
        bufp->chgBit(oldp+1140,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r));
        bufp->chgBit(oldp+1141,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r));
        bufp->chgBit(oldp+1142,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r));
        bufp->chgBit(oldp+1143,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r));
        bufp->chgBit(oldp+1144,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r));
        bufp->chgBit(oldp+1145,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r));
        bufp->chgBit(oldp+1146,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask));
        bufp->chgBit(oldp+1147,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int));
        bufp->chgBit(oldp+1148,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int));
        bufp->chgBit(oldp+1149,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int));
        bufp->chgBit(oldp+1150,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int));
        bufp->chgBit(oldp+1151,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int));
        bufp->chgBit(oldp+1152,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push));
        bufp->chgBit(oldp+1153,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop));
        bufp->chgSData(oldp+1154,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out),11);
        bufp->chgBit(oldp+1155,((0U != ((((((((((((
                                                   (((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
                                          [0xdU]) | 
                                         vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                         [0xeU]) | 
                                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [0xfU]))));
        bufp->chgCData(oldp+1156,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count),5);
        bufp->chgCData(oldp+1157,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count),5);
        bufp->chgCData(oldp+1158,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate),3);
        bufp->chgCData(oldp+1159,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate),4);
        bufp->chgSData(oldp+1160,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t),10);
        bufp->chgBit(oldp+1161,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt)))))));
        bufp->chgCData(oldp+1162,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt),8);
        bufp->chgCData(oldp+1163,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value),8);
        bufp->chgBit(oldp+1164,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                                       | ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate)) 
                                          & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error) 
                                              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                                                 == 
                                                 (7U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg))))) 
                                             | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error))))))));
        bufp->chgBit(oldp+1165,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                                   == (7U & ((IData)(1U) 
                                             + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg)))) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                                 & (2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))))));
        bufp->chgBit(oldp+1166,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out));
        bufp->chgBit(oldp+1167,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in));
        bufp->chgBit(oldp+1168,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse));
        bufp->chgBit(oldp+1169,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition));
        bufp->chgBit(oldp+1170,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read));
        bufp->chgBit(oldp+1171,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read));
        bufp->chgBit(oldp+1172,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read));
        bufp->chgCData(oldp+1173,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals),4);
        bufp->chgBit(oldp+1174,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d));
        bufp->chgBit(oldp+1175,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d));
        bufp->chgBit(oldp+1176,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d));
        bufp->chgBit(oldp+1177,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d));
        bufp->chgBit(oldp+1178,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d));
        bufp->chgBit(oldp+1179,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d));
        bufp->chgBit(oldp+1180,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d));
        bufp->chgBit(oldp+1181,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d));
        bufp->chgSData(oldp+1182,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt),9);
        bufp->chgSData(oldp+1183,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next),9);
        bufp->chgBit(oldp+1184,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                                        ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next)) 
                                       >> 8U))));
        bufp->chgBit(oldp+1185,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d));
        bufp->chgBit(oldp+1186,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d));
        bufp->chgBit(oldp+1187,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d));
        bufp->chgBit(oldp+1188,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d));
        bufp->chgBit(oldp+1189,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d));
        bufp->chgBit(oldp+1190,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d)))));
        bufp->chgBit(oldp+1191,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d)))));
        bufp->chgBit(oldp+1192,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d)))));
        bufp->chgBit(oldp+1193,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d)))));
        bufp->chgBit(oldp+1194,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d)))));
        bufp->chgBit(oldp+1195,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd));
        bufp->chgBit(oldp+1196,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd));
        bufp->chgBit(oldp+1197,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd));
        bufp->chgBit(oldp+1198,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd));
        bufp->chgBit(oldp+1199,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd));
        bufp->chgBit(oldp+1200,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read));
        bufp->chgBit(oldp+1201,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgBit(oldp+1202,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable));
        bufp->chgCData(oldp+1203,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16),4);
        bufp->chgCData(oldp+1204,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter),3);
        bufp->chgCData(oldp+1205,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift),8);
        bufp->chgBit(oldp+1206,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity));
        bufp->chgBit(oldp+1207,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error));
        bufp->chgBit(oldp+1208,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error));
        bufp->chgBit(oldp+1209,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_in));
        bufp->chgBit(oldp+1210,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor));
        bufp->chgCData(oldp+1211,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b),8);
        bufp->chgBit(oldp+1212,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q));
        bufp->chgSData(oldp+1213,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in),11);
        bufp->chgBit(oldp+1214,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push));
        bufp->chgBit(oldp+1215,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b))));
        bufp->chgBit(oldp+1216,((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+1217,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+1218,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
        bufp->chgCData(oldp+1219,((0xfU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16) 
                                           - (IData)(1U)))),4);
        bufp->chgSData(oldp+1220,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value),10);
        bufp->chgCData(oldp+1221,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value) 
                                            >> 2U))),8);
        bufp->chgCData(oldp+1222,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out),8);
        bufp->chgCData(oldp+1223,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        bufp->chgCData(oldp+1224,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        bufp->chgCData(oldp+1225,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        bufp->chgCData(oldp+1226,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        bufp->chgCData(oldp+1227,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        bufp->chgCData(oldp+1228,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        bufp->chgCData(oldp+1229,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        bufp->chgCData(oldp+1230,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        bufp->chgCData(oldp+1231,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        bufp->chgCData(oldp+1232,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        bufp->chgCData(oldp+1233,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        bufp->chgCData(oldp+1234,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        bufp->chgCData(oldp+1235,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        bufp->chgCData(oldp+1236,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        bufp->chgCData(oldp+1237,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        bufp->chgCData(oldp+1238,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        bufp->chgCData(oldp+1239,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
        bufp->chgCData(oldp+1240,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        bufp->chgCData(oldp+1241,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
        bufp->chgCData(oldp+1242,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0U]),3);
        bufp->chgCData(oldp+1243,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [1U]),3);
        bufp->chgCData(oldp+1244,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [2U]),3);
        bufp->chgCData(oldp+1245,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [3U]),3);
        bufp->chgCData(oldp+1246,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [4U]),3);
        bufp->chgCData(oldp+1247,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [5U]),3);
        bufp->chgCData(oldp+1248,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [6U]),3);
        bufp->chgCData(oldp+1249,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [7U]),3);
        bufp->chgCData(oldp+1250,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [8U]),3);
        bufp->chgCData(oldp+1251,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [9U]),3);
        bufp->chgCData(oldp+1252,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xaU]),3);
        bufp->chgCData(oldp+1253,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xbU]),3);
        bufp->chgCData(oldp+1254,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xcU]),3);
        bufp->chgCData(oldp+1255,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xdU]),3);
        bufp->chgCData(oldp+1256,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xeU]),3);
        bufp->chgCData(oldp+1257,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xfU]),3);
        bufp->chgCData(oldp+1258,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                                            >> 3U))),8);
        bufp->chgCData(oldp+1259,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+1260,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+1261,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+1262,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+1263,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+1264,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+1265,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+1266,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+1267,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+1268,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+1269,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+1270,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+1271,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+1272,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+1273,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+1274,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
        bufp->chgBit(oldp+1275,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
                                 & (((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
                                     | (1U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
                                       & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                             >> 2U)))))));
        bufp->chgCData(oldp+1276,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter),5);
        bufp->chgCData(oldp+1277,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter),3);
        bufp->chgCData(oldp+1278,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out),7);
        bufp->chgBit(oldp+1279,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
        bufp->chgBit(oldp+1280,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor));
        bufp->chgBit(oldp+1281,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop));
        bufp->chgBit(oldp+1282,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out));
        bufp->chgBit(oldp+1283,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error));
        bufp->chgCData(oldp+1284,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time),3);
        bufp->chgCData(oldp+1285,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out),8);
        bufp->chgBit(oldp+1286,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun));
        bufp->chgCData(oldp+1287,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak),8);
        bufp->chgCData(oldp+1288,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
        bufp->chgCData(oldp+1289,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        bufp->chgCData(oldp+1290,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
        bufp->chgCData(oldp+1291,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+1292,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+1293,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+1294,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+1295,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+1296,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+1297,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+1298,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+1299,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+1300,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+1301,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+1302,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+1303,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+1304,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+1305,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+1306,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
        bufp->chgCData(oldp+1307,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit),5);
        bufp->chgCData(oldp+1308,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit),5);
        bufp->chgCData(oldp+1309,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit),5);
        bufp->chgCData(oldp+1310,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready),5);
        bufp->chgCData(oldp+1311,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready),5);
        bufp->chgCData(oldp+1312,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid),5);
        bufp->chgCData(oldp+1313,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready),5);
        bufp->chgCData(oldp+1314,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast),5);
        bufp->chgCData(oldp+1315,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid),5);
        bufp->chgCData(oldp+1316,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[0]),4);
        bufp->chgCData(oldp+1317,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[1]),4);
        bufp->chgCData(oldp+1318,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[2]),4);
        bufp->chgCData(oldp+1319,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[3]),4);
        bufp->chgCData(oldp+1320,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[4]),4);
        bufp->chgCData(oldp+1321,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[0]),4);
        bufp->chgCData(oldp+1322,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[1]),4);
        bufp->chgCData(oldp+1323,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[2]),4);
        bufp->chgCData(oldp+1324,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[3]),4);
        bufp->chgCData(oldp+1325,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[4]),4);
        bufp->chgCData(oldp+1326,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0),3);
        bufp->chgCData(oldp+1327,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1),3);
        bufp->chgCData(oldp+1328,((7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid))),3);
        bufp->chgCData(oldp+1329,((3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                                         >> 3U))),3);
        bufp->chgCData(oldp+1330,((7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid))),3);
        bufp->chgCData(oldp+1331,((3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                                         >> 3U))),3);
        bufp->chgBit(oldp+1332,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty));
        bufp->chgBit(oldp+1333,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full));
        bufp->chgBit(oldp+1334,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty));
        bufp->chgBit(oldp+1335,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full));
        bufp->chgCData(oldp+1336,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir),3);
        bufp->chgCData(oldp+1337,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel),3);
        bufp->chgBit(oldp+1338,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog));
        bufp->chgCData(oldp+1339,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg),3);
        bufp->chgCData(oldp+1340,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel),3);
        bufp->chgCData(oldp+1341,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir),3);
        bufp->chgCData(oldp+1342,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir),3);
        bufp->chgCData(oldp+1343,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel),3);
        bufp->chgBit(oldp+1344,((1U & (~ (((0x1fafU 
                                            == (0x1fffU 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                                                   >> 0x10U))) 
                                           | (0x1fd0U 
                                              == (0x1fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                                                     >> 0x10U)))) 
                                          | (0x1fe0U 
                                             == (vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                                                 >> 0x10U)))))));
        bufp->chgIData(oldp+1345,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int),32);
        bufp->chgCData(oldp+1346,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[0]),3);
        bufp->chgCData(oldp+1347,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[1]),3);
        bufp->chgCData(oldp+1348,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+1349,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr),2);
        bufp->chgBit(oldp+1350,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr))));
        bufp->chgBit(oldp+1351,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr))));
        bufp->chgIData(oldp+1352,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__i),32);
        bufp->chgCData(oldp+1353,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[0]),3);
        bufp->chgCData(oldp+1354,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[1]),3);
        bufp->chgCData(oldp+1355,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+1356,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr),2);
        bufp->chgBit(oldp+1357,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr))));
        bufp->chgBit(oldp+1358,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr))));
        bufp->chgIData(oldp+1359,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__i),32);
        bufp->chgQData(oldp+1360,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)) 
                                    << 0x2bU) | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize)) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                        << 4U) 
                                                       | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid))))))),45);
        bufp->chgIData(oldp+1362,(((((IData)(1U) + 
                                     (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                      >> 2U)) << 2U) 
                                   | (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr))),32);
        bufp->chgIData(oldp+1363,(((((- (IData)((0U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr) 
                                    | ((- (IData)((1U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                       & ((((IData)(1U) 
                                            + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                               >> 2U)) 
                                           << 2U) | 
                                          (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)))) 
                                   | ((- (IData)((2U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                      & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap))),32);
        bufp->chgIData(oldp+1364,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap),32);
        bufp->chgCData(oldp+1365,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst),2);
        bufp->chgBit(oldp+1366,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgBit(oldp+1367,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgBit(oldp+1368,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgCData(oldp+1369,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid),4);
        bufp->chgCData(oldp+1370,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen),4);
        bufp->chgBit(oldp+1371,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last));
        bufp->chgCData(oldp+1372,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize),3);
        bufp->chgBit(oldp+1373,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid));
        bufp->chgQData(oldp+1374,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_araddr)) 
                                    << 0xdU) | (QData)((IData)(
                                                               (0x800U 
                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arsize) 
                                                                    << 8U) 
                                                                   | ((0xf0U 
                                                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen) 
                                                                          << 4U)) 
                                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arid)))))))),45);
        bufp->chgQData(oldp+1376,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas),45);
        bufp->chgIData(oldp+1378,((IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                           >> 0xdU))),32);
        bufp->chgCData(oldp+1379,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                 >> 0xbU)))),2);
        bufp->chgCData(oldp+1380,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas))),4);
        bufp->chgCData(oldp+1381,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                   >> 4U)))),4);
        bufp->chgCData(oldp+1382,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                 >> 8U)))),3);
        bufp->chgBit(oldp+1383,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid));
        bufp->chgCData(oldp+1384,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur),4);
        bufp->chgQData(oldp+1385,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                    << 0xdU) | (QData)((IData)(
                                                               (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst) 
                                                                 << 0xbU) 
                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                       << 4U) 
                                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
        bufp->chgIData(oldp+1387,(((((IData)(1U) + 
                                     (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                      >> 2U)) << 2U) 
                                   | (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr))),32);
        bufp->chgIData(oldp+1388,(((((- (IData)((0U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
                                    | ((- (IData)((1U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                       & ((((IData)(1U) 
                                            + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                               >> 2U)) 
                                           << 2U) | 
                                          (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))) 
                                   | ((- (IData)((2U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                      & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap))),32);
        bufp->chgIData(oldp+1389,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap),32);
        bufp->chgCData(oldp+1390,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst),2);
        bufp->chgBit(oldp+1391,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgBit(oldp+1392,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgBit(oldp+1393,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgCData(oldp+1394,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid),4);
        bufp->chgCData(oldp+1395,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen),4);
        bufp->chgCData(oldp+1396,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize),3);
        bufp->chgBit(oldp+1397,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid));
        bufp->chgQData(oldp+1398,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr)) 
                                    << 0xdU) | (QData)((IData)(
                                                               (0x801U 
                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awsize) 
                                                                    << 8U) 
                                                                   | (0xf0U 
                                                                      & ((IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen) 
                                                                         << 4U)))))))),45);
        bufp->chgQData(oldp+1400,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas),45);
        bufp->chgIData(oldp+1402,((IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                           >> 0xdU))),32);
        bufp->chgCData(oldp+1403,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                 >> 0xbU)))),2);
        bufp->chgCData(oldp+1404,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas))),4);
        bufp->chgCData(oldp+1405,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                   >> 4U)))),4);
        bufp->chgCData(oldp+1406,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                 >> 8U)))),3);
        bufp->chgBit(oldp+1407,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid));
        bufp->chgBit(oldp+1408,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out));
        bufp->chgBit(oldp+1409,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid));
        bufp->chgCData(oldp+1410,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_datas),4);
        bufp->chgBit(oldp+1411,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid)))));
        bufp->chgCData(oldp+1412,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb),4);
        bufp->chgBit(oldp+1413,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast));
        bufp->chgBit(oldp+1414,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid));
        bufp->chgIData(oldp+1415,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr0),32);
        bufp->chgIData(oldp+1416,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr1),32);
        bufp->chgIData(oldp+1417,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr2),32);
        bufp->chgIData(oldp+1418,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr3),32);
        bufp->chgIData(oldp+1419,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr4),32);
        bufp->chgIData(oldp+1420,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr5),32);
        bufp->chgIData(oldp+1421,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr6),32);
        bufp->chgIData(oldp+1422,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr7),32);
        bufp->chgIData(oldp+1423,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_data),32);
        bufp->chgIData(oldp+1424,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data),32);
        bufp->chgIData(oldp+1425,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data),32);
        bufp->chgIData(oldp+1426,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data),32);
        bufp->chgIData(oldp+1427,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r),32);
        bufp->chgIData(oldp+1428,(((2U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                          << 1U)) | 
                                   (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r))))),32);
        bufp->chgCData(oldp+1429,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data),8);
        bufp->chgBit(oldp+1430,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid));
        bufp->chgIData(oldp+1431,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r2),32);
        bufp->chgIData(oldp+1432,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__simu_flag),32);
        bufp->chgIData(oldp+1433,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__io_simu),32);
        bufp->chgCData(oldp+1434,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data),8);
        bufp->chgBit(oldp+1435,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__open_trace));
        bufp->chgBit(oldp+1436,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor));
        bufp->chgBit(oldp+1437,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin));
        bufp->chgBit(oldp+1438,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r1));
        bufp->chgBit(oldp+1439,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2));
        bufp->chgBit(oldp+1440,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3));
        bufp->chgBit(oldp+1441,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1));
        bufp->chgBit(oldp+1442,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r2));
        bufp->chgIData(oldp+1443,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r),32);
        bufp->chgIData(oldp+1444,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r1),32);
        bufp->chgIData(oldp+1445,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2),32);
        bufp->chgIData(oldp+1446,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r1),32);
        bufp->chgIData(oldp+1447,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer),32);
        bufp->chgCData(oldp+1448,((0xffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata)),8);
        bufp->chgSData(oldp+1449,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r),16);
        bufp->chgCData(oldp+1450,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state),3);
        bufp->chgBit(oldp+1451,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_flag));
        bufp->chgIData(oldp+1452,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count),20);
        bufp->chgCData(oldp+1453,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count),4);
        bufp->chgBit(oldp+1454,((1U & (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1455,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r));
        bufp->chgBit(oldp+1456,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r));
        bufp->chgBit(oldp+1457,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag));
        bufp->chgIData(oldp+1458,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count),20);
        bufp->chgBit(oldp+1459,((1U & (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1460,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag));
        bufp->chgIData(oldp+1461,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count),20);
        bufp->chgBit(oldp+1462,((1U & (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count 
                                       >> 0x13U))));
        bufp->chgIData(oldp+1463,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count),20);
        bufp->chgCData(oldp+1464,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__scan_data),4);
        bufp->chgCData(oldp+1465,(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen),8);
        bufp->chgCData(oldp+1466,(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen),8);
        bufp->chgBit(oldp+1467,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_valid));
        bufp->chgCData(oldp+1468,((0xfU & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[3U] 
                                                          >> 5U)))) 
                                           & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_valid)))))),4);
        bufp->chgIData(oldp+1469,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[0U]),32);
        bufp->chgWData(oldp+1470,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus),71);
        bufp->chgQData(oldp+1473,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_if_bus),43);
        bufp->chgBit(oldp+1475,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr_ok));
        bufp->chgCData(oldp+1476,(((3U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                                 >> 1U)))
                                    ? 2U : ((2U == 
                                             (3U & 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                               >> 1U)))
                                             ? 1U : 0U))),2);
        bufp->chgIData(oldp+1477,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_wdata),32);
        bufp->chgBit(oldp+1478,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__has_int));
        bufp->chgBit(oldp+1479,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache_tlb_excp_cancel_req));
        bufp->chgBit(oldp+1480,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn));
        bufp->chgIData(oldp+1481,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0]),32);
        bufp->chgIData(oldp+1482,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[1]),32);
        bufp->chgIData(oldp+1483,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[2]),32);
        bufp->chgIData(oldp+1484,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[3]),32);
        bufp->chgIData(oldp+1485,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[4]),32);
        bufp->chgIData(oldp+1486,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[5]),32);
        bufp->chgIData(oldp+1487,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[6]),32);
        bufp->chgIData(oldp+1488,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[7]),32);
        bufp->chgIData(oldp+1489,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[8]),32);
        bufp->chgIData(oldp+1490,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[9]),32);
        bufp->chgIData(oldp+1491,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[10]),32);
        bufp->chgIData(oldp+1492,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[11]),32);
        bufp->chgIData(oldp+1493,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[12]),32);
        bufp->chgIData(oldp+1494,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[13]),32);
        bufp->chgIData(oldp+1495,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[14]),32);
        bufp->chgIData(oldp+1496,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[15]),32);
        bufp->chgIData(oldp+1497,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[16]),32);
        bufp->chgIData(oldp+1498,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[17]),32);
        bufp->chgIData(oldp+1499,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[18]),32);
        bufp->chgIData(oldp+1500,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[19]),32);
        bufp->chgIData(oldp+1501,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[20]),32);
        bufp->chgIData(oldp+1502,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[21]),32);
        bufp->chgIData(oldp+1503,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[22]),32);
        bufp->chgIData(oldp+1504,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[23]),32);
        bufp->chgIData(oldp+1505,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[24]),32);
        bufp->chgIData(oldp+1506,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[25]),32);
        bufp->chgIData(oldp+1507,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[26]),32);
        bufp->chgIData(oldp+1508,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[27]),32);
        bufp->chgIData(oldp+1509,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[28]),32);
        bufp->chgIData(oldp+1510,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[29]),32);
        bufp->chgIData(oldp+1511,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[30]),32);
        bufp->chgIData(oldp+1512,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[31]),32);
        bufp->chgBit(oldp+1513,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en));
        bufp->chgBit(oldp+1514,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcacop_en));
        bufp->chgCData(oldp+1515,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                         >> 0x18U))),2);
        bufp->chgBit(oldp+1516,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state))));
        bufp->chgBit(oldp+1517,((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))));
        bufp->chgBit(oldp+1518,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache_tlb_excp_cancel_req));
        bufp->chgBit(oldp+1519,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                  >> 0x11U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid))));
        bufp->chgBit(oldp+1520,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                  >> 0x10U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid))));
        bufp->chgCData(oldp+1521,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__code),6);
        bufp->chgBit(oldp+1522,((4U == (7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                              >> 0x1cU)))));
        bufp->chgIData(oldp+1523,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi 
                                   >> 0xdU)),19);
        bufp->chgSData(oldp+1524,((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid)),10);
        bufp->chgBit(oldp+1525,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                       >> 3U))));
        bufp->chgBit(oldp+1526,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                       >> 4U))));
        bufp->chgCData(oldp+1527,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
                                   >> 0x1dU)),3);
        bufp->chgCData(oldp+1528,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
                                   >> 0x1dU)),3);
        bufp->chgCData(oldp+1529,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
                                         >> 0x19U))),3);
        bufp->chgCData(oldp+1530,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
                                         >> 0x19U))),3);
        bufp->chgBit(oldp+1531,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0)));
        bufp->chgBit(oldp+1532,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
                                       >> 3U))));
        bufp->chgBit(oldp+1533,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1)));
        bufp->chgBit(oldp+1534,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
                                       >> 3U))));
        bufp->chgBit(oldp+1535,((1U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                              >> 7U)))));
        bufp->chgBit(oldp+1536,((1U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
                                              >> 4U)))));
        bufp->chgBit(oldp+1537,((1U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
                                              >> 4U)))));
        bufp->chgBit(oldp+1538,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit));
        bufp->chgIData(oldp+1539,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid),32);
        bufp->chgQData(oldp+1540,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64),64);
        bufp->chgCData(oldp+1542,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)),5);
        bufp->chgBit(oldp+1543,((1U & ((0x3fU == (0x3fU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                                                     >> 0x10U))) 
                                       | (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx 
                                             >> 0x1fU))))));
        bufp->chgCData(oldp+1544,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx 
                                            >> 0x18U))),6);
        bufp->chgIData(oldp+1545,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0),32);
        bufp->chgIData(oldp+1546,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1),32);
        bufp->chgIData(oldp+1547,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era),32);
        bufp->chgIData(oldp+1548,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry),32);
        bufp->chgIData(oldp+1549,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry),32);
        bufp->chgBit(oldp+1550,((1U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                              >> 5U)))));
        bufp->chgIData(oldp+1551,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd),32);
        bufp->chgIData(oldp+1552,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd),32);
        bufp->chgIData(oldp+1553,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ecfg),32);
        bufp->chgIData(oldp+1554,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat),32);
        bufp->chgIData(oldp+1555,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv),32);
        bufp->chgIData(oldp+1556,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx),32);
        bufp->chgIData(oldp+1557,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi),32);
        bufp->chgIData(oldp+1558,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid),32);
        bufp->chgIData(oldp+1559,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save0),32);
        bufp->chgIData(oldp+1560,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save1),32);
        bufp->chgIData(oldp+1561,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save2),32);
        bufp->chgIData(oldp+1562,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save3),32);
        bufp->chgIData(oldp+1563,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg),32);
        bufp->chgIData(oldp+1564,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval),32);
        bufp->chgIData(oldp+1565,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cpuid),32);
        bufp->chgIData(oldp+1566,(((0xfffffffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit))),32);
        bufp->chgIData(oldp+1567,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0),32);
        bufp->chgIData(oldp+1568,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1),32);
        bufp->chgIData(oldp+1569,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl),32);
        bufp->chgIData(oldp+1570,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh),32);
        bufp->chgBit(oldp+1571,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_req));
        bufp->chgCData(oldp+1572,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_type),3);
        bufp->chgIData(oldp+1573,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_addr),32);
        bufp->chgBit(oldp+1574,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last));
        bufp->chgBit(oldp+1575,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_req));
        bufp->chgCData(oldp+1576,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type),3);
        bufp->chgIData(oldp+1577,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_addr),32);
        bufp->chgBit(oldp+1578,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last));
        bufp->chgBit(oldp+1579,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req));
        bufp->chgIData(oldp+1580,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache)
                                    ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_tag 
                                        << 0xcU) | 
                                       (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index) 
                                         << 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset)))
                                    : ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_replaceWay)
                                          ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__output_buffer 
                                             >> 1U)
                                          : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__output_buffer 
                                             >> 1U)) 
                                        << 0xcU) | 
                                       ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index) 
                                        << 4U)))),32);
        bufp->chgCData(oldp+1581,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache)
                                    ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb)
                                    : 0xfU)),4);
        bufp->chgWData(oldp+1582,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data),128);
        bufp->chgBit(oldp+1586,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state))));
        bufp->chgBit(oldp+1587,((0U != (3U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                               << 1U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                 >> 0x1fU))))));
        bufp->chgCData(oldp+1588,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
                                            >> 0xbU))),8);
        bufp->chgIData(oldp+1589,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
                                    << 0x1fU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[0U] 
                                                 >> 1U))),32);
        bufp->chgIData(oldp+1590,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                                    << 0x1bU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                 >> 5U))),32);
        bufp->chgCData(oldp+1591,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
                                            >> 3U))),8);
        bufp->chgIData(oldp+1592,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[2U] 
                                    << 0xdU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
                                                >> 0x13U))),32);
        bufp->chgBit(oldp+1593,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
                                       >> 2U))));
        bufp->chgBit(oldp+1594,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_valid));
        bufp->chgBit(oldp+1595,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_cnt_inst));
        bufp->chgQData(oldp+1596,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_timer_64),64);
        bufp->chgCData(oldp+1598,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst_ld_en),8);
        bufp->chgIData(oldp+1599,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_paddr),32);
        bufp->chgIData(oldp+1600,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_vaddr),32);
        bufp->chgCData(oldp+1601,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst_st_en),8);
        bufp->chgIData(oldp+1602,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_paddr),32);
        bufp->chgIData(oldp+1603,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_vaddr),32);
        bufp->chgIData(oldp+1604,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_data),32);
        bufp->chgBit(oldp+1605,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_rstat_en));
        bufp->chgIData(oldp+1606,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_data),32);
        bufp->chgBit(oldp+1607,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wen));
        bufp->chgCData(oldp+1608,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdest),8);
        bufp->chgIData(oldp+1609,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdata),32);
        bufp->chgIData(oldp+1610,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_pc),32);
        bufp->chgIData(oldp+1611,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst),32);
        bufp->chgBit(oldp+1612,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_excp_flush));
        bufp->chgBit(oldp+1613,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ertn));
        bufp->chgCData(oldp+1614,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_ecode),6);
        bufp->chgBit(oldp+1615,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_tlbfill_en));
        bufp->chgCData(oldp+1616,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_rand_index),5);
        bufp->chgBit(oldp+1617,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__trap));
        bufp->chgCData(oldp+1618,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__trap_code),8);
        bufp->chgQData(oldp+1619,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cycleCnt),64);
        bufp->chgQData(oldp+1621,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__instrCnt),64);
        bufp->chgQData(oldp+1623,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd))),64);
        bufp->chgQData(oldp+1625,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd))),64);
        bufp->chgQData(oldp+1627,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ecfg))),64);
        bufp->chgQData(oldp+1629,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat))),64);
        bufp->chgQData(oldp+1631,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era))),64);
        bufp->chgQData(oldp+1633,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv))),64);
        bufp->chgQData(oldp+1635,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry))),64);
        bufp->chgQData(oldp+1637,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx))),64);
        bufp->chgQData(oldp+1639,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi))),64);
        bufp->chgQData(oldp+1641,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0))),64);
        bufp->chgQData(oldp+1643,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1))),64);
        bufp->chgQData(oldp+1645,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid))),64);
        bufp->chgQData(oldp+1647,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl))),64);
        bufp->chgQData(oldp+1649,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh))),64);
        bufp->chgQData(oldp+1651,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save0))),64);
        bufp->chgQData(oldp+1653,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save1))),64);
        bufp->chgQData(oldp+1655,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save2))),64);
        bufp->chgQData(oldp+1657,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save3))),64);
        bufp->chgQData(oldp+1659,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid))),64);
        bufp->chgQData(oldp+1661,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg))),64);
        bufp->chgQData(oldp+1663,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval))),64);
        bufp->chgQData(oldp+1665,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cpuid))),64);
        bufp->chgQData(oldp+1667,((QData)((IData)((
                                                   (0xfffffffeU 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit))))),64);
        bufp->chgQData(oldp+1669,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry))),64);
        bufp->chgQData(oldp+1671,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0))),64);
        bufp->chgQData(oldp+1673,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1))),64);
        bufp->chgIData(oldp+1675,((0x7ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                                             >> 2U))),32);
        bufp->chgIData(oldp+1676,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_ecode),32);
        bufp->chgQData(oldp+1677,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_pc))),64);
        bufp->chgQData(oldp+1679,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [1U]))),64);
        bufp->chgQData(oldp+1681,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [2U]))),64);
        bufp->chgQData(oldp+1683,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [3U]))),64);
        bufp->chgQData(oldp+1685,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [4U]))),64);
        bufp->chgQData(oldp+1687,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [5U]))),64);
        bufp->chgQData(oldp+1689,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [6U]))),64);
        bufp->chgQData(oldp+1691,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [7U]))),64);
        bufp->chgQData(oldp+1693,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [8U]))),64);
        bufp->chgQData(oldp+1695,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [9U]))),64);
        bufp->chgQData(oldp+1697,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [0xaU]))),64);
        bufp->chgQData(oldp+1699,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [0xbU]))),64);
        bufp->chgQData(oldp+1701,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [0xcU]))),64);
        bufp->chgQData(oldp+1703,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [0xdU]))),64);
        bufp->chgQData(oldp+1705,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [0xeU]))),64);
        bufp->chgQData(oldp+1707,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [0xfU]))),64);
        bufp->chgQData(oldp+1709,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [0x10U]))),64);
        bufp->chgQData(oldp+1711,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [0x11U]))),64);
        bufp->chgQData(oldp+1713,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [0x12U]))),64);
        bufp->chgQData(oldp+1715,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [0x13U]))),64);
        bufp->chgQData(oldp+1717,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [0x14U]))),64);
        bufp->chgQData(oldp+1719,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [0x15U]))),64);
        bufp->chgQData(oldp+1721,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [0x16U]))),64);
        bufp->chgQData(oldp+1723,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [0x17U]))),64);
        bufp->chgQData(oldp+1725,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [0x18U]))),64);
        bufp->chgQData(oldp+1727,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [0x19U]))),64);
        bufp->chgQData(oldp+1729,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [0x1aU]))),64);
        bufp->chgQData(oldp+1731,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [0x1bU]))),64);
        bufp->chgQData(oldp+1733,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [0x1cU]))),64);
        bufp->chgQData(oldp+1735,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [0x1dU]))),64);
        bufp->chgQData(oldp+1737,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [0x1eU]))),64);
        bufp->chgQData(oldp+1739,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                  [0x1fU]))),64);
        bufp->chgQData(oldp+1741,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdata))),64);
        bufp->chgQData(oldp+1743,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_paddr))),64);
        bufp->chgQData(oldp+1745,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_vaddr))),64);
        bufp->chgQData(oldp+1747,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_paddr))),64);
        bufp->chgQData(oldp+1749,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_vaddr))),64);
        bufp->chgQData(oldp+1751,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_data))),64);
        bufp->chgCData(oldp+1753,((7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__trap_code))),3);
        bufp->chgCData(oldp+1754,(((3U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                                 >> 1U)))
                                    ? 2U : ((2U == 
                                             (3U & 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                               >> 1U)))
                                             ? 1U : 0U))),3);
        bufp->chgWData(oldp+1755,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_D),256);
        bufp->chgWData(oldp+1763,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_D),256);
        bufp->chgBit(oldp+1771,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv_ena));
        bufp->chgIData(oldp+1772,((((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en))
                                    ? 0U : ((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode)) 
                                              | ((2U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_hit_r))) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en))
                                             ? 0U : 
                                            (1U | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_tag 
                                                   << 1U))))),21);
        bufp->chgIData(oldp+1773,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__output_buffer),21);
        bufp->chgBit(oldp+1774,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv_ena));
        bufp->chgIData(oldp+1775,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__output_buffer),21);
        bufp->chgBit(oldp+1776,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_ena));
        bufp->chgIData(oldp+1777,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__output_buffer),32);
        bufp->chgIData(oldp+1778,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__output_buffer),32);
        bufp->chgIData(oldp+1779,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__output_buffer),32);
        bufp->chgIData(oldp+1780,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__output_buffer),32);
        bufp->chgIData(oldp+1781,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__output_buffer),32);
        bufp->chgIData(oldp+1782,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__output_buffer),32);
        bufp->chgIData(oldp+1783,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__output_buffer),32);
        bufp->chgIData(oldp+1784,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__output_buffer),32);
        bufp->chgBit(oldp+1785,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__wirteBuffer_way));
        bufp->chgCData(oldp+1786,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_offset),4);
        bufp->chgCData(oldp+1787,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_index),8);
        bufp->chgCData(oldp+1788,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb),4);
        bufp->chgIData(oldp+1789,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wdata),32);
        bufp->chgCData(oldp+1790,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state),3);
        bufp->chgBit(oldp+1791,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__write_state));
        bufp->chgBit(oldp+1792,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_op));
        bufp->chgBit(oldp+1793,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache));
        bufp->chgCData(oldp+1794,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_size),3);
        bufp->chgCData(oldp+1795,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index),8);
        bufp->chgIData(oldp+1796,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_tag),20);
        bufp->chgCData(oldp+1797,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset),4);
        bufp->chgCData(oldp+1798,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb),4);
        bufp->chgIData(oldp+1799,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wdata),32);
        bufp->chgBit(oldp+1800,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en));
        bufp->chgCData(oldp+1801,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode),2);
        bufp->chgBit(oldp+1802,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_hit_r));
        bufp->chgBit(oldp+1803,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_hit_r));
        bufp->chgBit(oldp+1804,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_hit_r));
        bufp->chgBit(oldp+1805,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__output_buffer)));
        bufp->chgBit(oldp+1806,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__output_buffer)));
        bufp->chgIData(oldp+1807,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__output_buffer 
                                               >> 1U))),20);
        bufp->chgIData(oldp+1808,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__output_buffer 
                                               >> 1U))),20);
        bufp->chgBit(oldp+1809,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_hit));
        bufp->chgBit(oldp+1810,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_hit));
        bufp->chgBit(oldp+1811,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_hit));
        bufp->chgWData(oldp+1812,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_data),128);
        bufp->chgWData(oldp+1816,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_data),128);
        bufp->chgIData(oldp+1820,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_data[
                                  (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset) 
                                         >> 2U))]),32);
        bufp->chgIData(oldp+1821,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_data[
                                  (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset) 
                                         >> 2U))]),32);
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_replaceWay) {
            __Vtemp_h47e7c628__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_data[0U];
            __Vtemp_h47e7c628__0[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_data[1U];
            __Vtemp_h47e7c628__0[2U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_data[2U];
            __Vtemp_h47e7c628__0[3U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_data[3U];
        } else {
            __Vtemp_h47e7c628__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_data[0U];
            __Vtemp_h47e7c628__0[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_data[1U];
            __Vtemp_h47e7c628__0[2U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_data[2U];
            __Vtemp_h47e7c628__0[3U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_data[3U];
        }
        bufp->chgWData(oldp+1822,(__Vtemp_h47e7c628__0),128);
        bufp->chgBit(oldp+1826,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__loadForward));
        bufp->chgIData(oldp+1827,(((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb))
                                      ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wdata 
                                         >> 0x18U) : 
                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__hitData 
                                      >> 0x18U)) << 0x18U) 
                                   | ((0xff0000U & 
                                       (((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb))
                                          ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wdata 
                                             >> 0x10U)
                                          : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__hitData 
                                             >> 0x10U)) 
                                        << 0x10U)) 
                                      | ((0xff00U & 
                                          (((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb))
                                             ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wdata 
                                                >> 8U)
                                             : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__hitData 
                                                >> 8U)) 
                                           << 8U)) 
                                         | (0xffU & 
                                            ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb))
                                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wdata
                                              : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__hitData)))))),32);
        bufp->chgIData(oldp+1828,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__hitData),32);
        bufp->chgIData(oldp+1829,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__loadForward)
                                    ? ((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb))
                                          ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wdata 
                                             >> 0x18U)
                                          : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__hitData 
                                             >> 0x18U)) 
                                        << 0x18U) | 
                                       ((0xff0000U 
                                         & (((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb))
                                              ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wdata 
                                                 >> 0x10U)
                                              : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__hitData 
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
        bufp->chgBit(oldp+1830,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lfsr__DOT__r_lfsr) 
                                       >> 7U))));
        bufp->chgBit(oldp+1831,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__replace_way));
        bufp->chgBit(oldp+1832,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_D[
                                       ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index) 
                                        >> 5U)] >> 
                                       (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index))))));
        bufp->chgBit(oldp+1833,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_D[
                                       ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index) 
                                        >> 5U)] >> 
                                       (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index))))));
        bufp->chgBit(oldp+1834,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__replace_d));
        bufp->chgBit(oldp+1835,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__replace_v));
        bufp->chgIData(oldp+1836,((0xfffffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_replaceWay)
                                                ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__output_buffer 
                                                   >> 1U)
                                                : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__output_buffer 
                                                   >> 1U)))),20);
        bufp->chgBit(oldp+1837,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_replaceWay));
        bufp->chgCData(oldp+1838,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_retNum),2);
        bufp->chgBit(oldp+1839,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__rd_req_buffer));
        bufp->chgBit(oldp+1840,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way0_bank0));
        bufp->chgBit(oldp+1841,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way0_bank1));
        bufp->chgBit(oldp+1842,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way0_bank2));
        bufp->chgBit(oldp+1843,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way0_bank3));
        bufp->chgBit(oldp+1844,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way1_bank0));
        bufp->chgBit(oldp+1845,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way1_bank1));
        bufp->chgBit(oldp+1846,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way1_bank2));
        bufp->chgBit(oldp+1847,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way1_bank3));
        bufp->chgCData(oldp+1848,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lfsr__DOT__r_lfsr),8);
        bufp->chgBit(oldp+1849,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__wr_req));
        bufp->chgCData(oldp+1850,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache)
                                    ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_size)
                                    : 4U)),3);
        bufp->chgIData(oldp+1851,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache)
                                    ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_tag 
                                        << 0xcU) | 
                                       (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index) 
                                         << 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_offset)))
                                    : ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_replaceWay)
                                          ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer 
                                             >> 1U)
                                          : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer 
                                             >> 1U)) 
                                        << 0xcU) | 
                                       ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index) 
                                        << 4U)))),32);
        bufp->chgCData(oldp+1852,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache)
                                    ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wstrb)
                                    : 0xfU)),4);
        VL_EXTEND_WI(128,32, __Vtemp_h4a661ba8__0, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wdata);
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache) {
            __Vtemp_ha0efd245__0[0U] = __Vtemp_h4a661ba8__0[0U];
            __Vtemp_ha0efd245__0[1U] = __Vtemp_h4a661ba8__0[1U];
            __Vtemp_ha0efd245__0[2U] = __Vtemp_h4a661ba8__0[2U];
            __Vtemp_ha0efd245__0[3U] = __Vtemp_h4a661ba8__0[3U];
        } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_replaceWay) {
            __Vtemp_ha0efd245__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data[0U];
            __Vtemp_ha0efd245__0[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data[1U];
            __Vtemp_ha0efd245__0[2U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data[2U];
            __Vtemp_ha0efd245__0[3U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data[3U];
        } else {
            __Vtemp_ha0efd245__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data[0U];
            __Vtemp_ha0efd245__0[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data[1U];
            __Vtemp_ha0efd245__0[2U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data[2U];
            __Vtemp_ha0efd245__0[3U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data[3U];
        }
        bufp->chgWData(oldp+1853,(__Vtemp_ha0efd245__0),128);
        bufp->chgWData(oldp+1857,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_D),256);
        bufp->chgWData(oldp+1865,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_D),256);
        bufp->chgBit(oldp+1873,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv_ena));
        bufp->chgIData(oldp+1874,((((IData)(((0U == 
                                              (0x3000000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U])) 
                                             & (0U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)))) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en))
                                    ? 0U : ((((IData)(
                                                      ((0x1000000U 
                                                        == 
                                                        (0x3000000U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U])) 
                                                       & (0U 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)))) 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en)) 
                                             | ((2U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_mode)) 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_cacop_hit)))
                                             ? 0U : 
                                            (1U | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_tag 
                                                   << 1U))))),21);
        bufp->chgIData(oldp+1875,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer),21);
        bufp->chgIData(oldp+1876,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer),21);
        bufp->chgBit(oldp+1877,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_ena));
        bufp->chgIData(oldp+1878,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__output_buffer),32);
        bufp->chgBit(oldp+1879,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_ena));
        bufp->chgIData(oldp+1880,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__output_buffer),32);
        bufp->chgBit(oldp+1881,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_ena));
        bufp->chgIData(oldp+1882,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__output_buffer),32);
        bufp->chgBit(oldp+1883,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_ena));
        bufp->chgIData(oldp+1884,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__output_buffer),32);
        bufp->chgBit(oldp+1885,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_ena));
        bufp->chgIData(oldp+1886,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__output_buffer),32);
        bufp->chgBit(oldp+1887,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_ena));
        bufp->chgIData(oldp+1888,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__output_buffer),32);
        bufp->chgBit(oldp+1889,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_ena));
        bufp->chgIData(oldp+1890,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__output_buffer),32);
        bufp->chgBit(oldp+1891,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_ena));
        bufp->chgIData(oldp+1892,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__output_buffer),32);
        bufp->chgBit(oldp+1893,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__wirteBuffer_way));
        bufp->chgCData(oldp+1894,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_offset),4);
        bufp->chgCData(oldp+1895,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_index),8);
        bufp->chgCData(oldp+1896,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb),4);
        bufp->chgIData(oldp+1897,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wdata),32);
        bufp->chgCData(oldp+1898,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state),3);
        bufp->chgBit(oldp+1899,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__write_state));
        bufp->chgBit(oldp+1900,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_op));
        bufp->chgBit(oldp+1901,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache));
        bufp->chgCData(oldp+1902,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_size),3);
        bufp->chgCData(oldp+1903,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index),8);
        bufp->chgIData(oldp+1904,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_tag),20);
        bufp->chgCData(oldp+1905,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_offset),4);
        bufp->chgCData(oldp+1906,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wstrb),4);
        bufp->chgIData(oldp+1907,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wdata),32);
        bufp->chgBit(oldp+1908,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_en));
        bufp->chgCData(oldp+1909,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_mode),2);
        bufp->chgIData(oldp+1910,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_tag),20);
        bufp->chgCData(oldp+1911,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_index),8);
        bufp->chgCData(oldp+1912,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_offset),4);
        bufp->chgBit(oldp+1913,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer)));
        bufp->chgBit(oldp+1914,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer)));
        bufp->chgIData(oldp+1915,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer 
                                               >> 1U))),20);
        bufp->chgIData(oldp+1916,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer 
                                               >> 1U))),20);
        bufp->chgBit(oldp+1917,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_hit));
        bufp->chgBit(oldp+1918,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_hit));
        bufp->chgBit(oldp+1919,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_hit));
        bufp->chgWData(oldp+1920,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data),128);
        bufp->chgWData(oldp+1924,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data),128);
        bufp->chgIData(oldp+1928,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data[
                                  (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_offset) 
                                         >> 2U))]),32);
        bufp->chgIData(oldp+1929,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data[
                                  (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_offset) 
                                         >> 2U))]),32);
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_replaceWay) {
            __Vtemp_h74e64149__1[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data[0U];
            __Vtemp_h74e64149__1[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data[1U];
            __Vtemp_h74e64149__1[2U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data[2U];
            __Vtemp_h74e64149__1[3U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data[3U];
        } else {
            __Vtemp_h74e64149__1[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data[0U];
            __Vtemp_h74e64149__1[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data[1U];
            __Vtemp_h74e64149__1[2U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data[2U];
            __Vtemp_h74e64149__1[3U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data[3U];
        }
        bufp->chgWData(oldp+1930,(__Vtemp_h74e64149__1),128);
        bufp->chgBit(oldp+1934,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__loadForward));
        bufp->chgIData(oldp+1935,(((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb))
                                      ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wdata 
                                         >> 0x18U) : 
                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__hitData 
                                      >> 0x18U)) << 0x18U) 
                                   | ((0xff0000U & 
                                       (((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb))
                                          ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wdata 
                                             >> 0x10U)
                                          : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__hitData 
                                             >> 0x10U)) 
                                        << 0x10U)) 
                                      | ((0xff00U & 
                                          (((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb))
                                             ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wdata 
                                                >> 8U)
                                             : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__hitData 
                                                >> 8U)) 
                                           << 8U)) 
                                         | (0xffU & 
                                            ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb))
                                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wdata
                                              : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__hitData)))))),32);
        bufp->chgIData(oldp+1936,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__hitData),32);
        bufp->chgIData(oldp+1937,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__loadForward)
                                    ? ((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb))
                                          ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wdata 
                                             >> 0x18U)
                                          : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__hitData 
                                             >> 0x18U)) 
                                        << 0x18U) | 
                                       ((0xff0000U 
                                         & (((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb))
                                              ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wdata 
                                                 >> 0x10U)
                                              : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__hitData 
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
        bufp->chgBit(oldp+1938,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__lfsr__DOT__r_lfsr) 
                                       >> 7U))));
        bufp->chgBit(oldp+1939,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__replace_way));
        bufp->chgBit(oldp+1940,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_D[
                                       ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index) 
                                        >> 5U)] >> 
                                       (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index))))));
        bufp->chgBit(oldp+1941,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__replace_way)
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
        bufp->chgBit(oldp+1942,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__replace_way)
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer))));
        bufp->chgIData(oldp+1943,((0xfffffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_replaceWay)
                                                ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer 
                                                   >> 1U)
                                                : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer 
                                                   >> 1U)))),20);
        bufp->chgBit(oldp+1944,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_replaceWay));
        bufp->chgCData(oldp+1945,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_retNum),2);
        bufp->chgBit(oldp+1946,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__rd_req_buffer));
        bufp->chgBit(oldp+1947,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank0));
        bufp->chgBit(oldp+1948,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank1));
        bufp->chgBit(oldp+1949,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank2));
        bufp->chgBit(oldp+1950,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank3));
        bufp->chgBit(oldp+1951,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank0));
        bufp->chgBit(oldp+1952,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank1));
        bufp->chgBit(oldp+1953,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank2));
        bufp->chgBit(oldp+1954,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank3));
        bufp->chgBit(oldp+1955,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_cacop_hit));
        bufp->chgBit(oldp+1956,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_cacop_hit));
        bufp->chgBit(oldp+1957,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_cacop_hit));
        bufp->chgCData(oldp+1958,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__lfsr__DOT__r_lfsr),8);
        bufp->chgBit(oldp+1959,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__read_requst_state));
        bufp->chgBit(oldp+1960,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__read_respond_state));
        bufp->chgCData(oldp+1961,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state),3);
        bufp->chgBit(oldp+1962,((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state))));
        bufp->chgBit(oldp+1963,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__read_requst_state)))));
        bufp->chgBit(oldp+1964,((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))));
        bufp->chgBit(oldp+1965,((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_type))));
        bufp->chgCData(oldp+1966,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__data_real_rd_size),3);
        bufp->chgCData(oldp+1967,(((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))
                                    ? 3U : 0U)),8);
        bufp->chgCData(oldp+1968,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__inst_real_rd_size),3);
        bufp->chgCData(oldp+1969,(((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_type))
                                    ? 3U : 0U)),8);
        bufp->chgCData(oldp+1970,(((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))
                                    ? 2U : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))),3);
        bufp->chgWData(oldp+1971,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_data),128);
        bufp->chgCData(oldp+1975,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_num),3);
        bufp->chgBit(oldp+1976,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_num))));
        bufp->chgIData(oldp+1977,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_euen),32);
        bufp->chgIData(oldp+1978,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cntc),32);
        bufp->chgIData(oldp+1979,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl),32);
        bufp->chgIData(oldp+1980,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv 
                                    >> 0x1fU) ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh
                                    : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl)),32);
        bufp->chgBit(oldp+1981,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en));
        bufp->chgBit(oldp+1982,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_valid));
        bufp->chgWData(oldp+1983,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data),255);
        bufp->chgSData(oldp+1991,((0xfffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                             >> 0x11U))),12);
        bufp->chgBit(oldp+1992,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1993,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1994,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                       >> 0xeU))));
        bufp->chgCData(oldp+1995,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                            >> 9U))),5);
        bufp->chgIData(oldp+1996,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1997,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1998,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                                 >> 9U))),32);
        bufp->chgBit(oldp+1999,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                       >> 8U))));
        bufp->chgBit(oldp+2000,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                       >> 7U))));
        bufp->chgBit(oldp+2001,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                       >> 6U))));
        bufp->chgCData(oldp+2002,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                         >> 3U))),3);
        bufp->chgCData(oldp+2003,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                         >> 1U))),2);
        bufp->chgSData(oldp+2004,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[3U] 
                                   >> 0x12U)),14);
        bufp->chgCData(oldp+2005,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[3U] 
                                         >> 0x10U))),2);
        bufp->chgBit(oldp+2006,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[3U] 
                                       >> 0xfU))));
        bufp->chgBit(oldp+2007,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[3U] 
                                       >> 0xeU))));
        bufp->chgBit(oldp+2008,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U])));
        bufp->chgSData(oldp+2009,((0x7fffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[3U] 
                                               << 1U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                                 >> 0x1fU)))),15);
        bufp->chgCData(oldp+2010,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                         >> 0x1dU))),2);
        bufp->chgCData(oldp+2011,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                            >> 0x15U))),5);
        bufp->chgCData(oldp+2012,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                         >> 0x1aU))),3);
        bufp->chgBit(oldp+2013,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                       >> 0x14U))));
        bufp->chgBit(oldp+2014,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                       >> 0x13U))));
        bufp->chgBit(oldp+2015,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                       >> 0x12U))));
        bufp->chgIData(oldp+2016,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                    << 0xeU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[1U] 
                                                >> 0x12U))),32);
        bufp->chgIData(oldp+2017,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[1U] 
                                    << 0xeU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[0U] 
                                                >> 0x12U))),32);
        bufp->chgCData(oldp+2018,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[0U] 
                                            >> 0xaU))),8);
        bufp->chgCData(oldp+2019,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[0U] 
                                            >> 2U))),8);
        bufp->chgBit(oldp+2020,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[0U] 
                                       >> 1U))));
        bufp->chgBit(oldp+2021,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[0U])));
        bufp->chgIData(oldp+2022,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult),32);
        bufp->chgIData(oldp+2023,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__need_corr)
                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q
                                    : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_q)),32);
        bufp->chgIData(oldp+2024,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s4),32);
        bufp->chgBit(oldp+2025,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q) 
                                       >> 5U))));
        bufp->chgBit(oldp+2026,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q) 
                                       >> 5U))));
        bufp->chgBit(oldp+2027,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))));
        bufp->chgBit(oldp+2028,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__div_finish_ready_i));
        bufp->chgBit(oldp+2029,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__cacop_load));
        bufp->chgBit(oldp+2030,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__ALE_EXCP));
        bufp->chgBit(oldp+2031,(((IData)(((0x14000000U 
                                           == (0x1c000000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U])) 
                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_valid))) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn)))));
        bufp->chgBit(oldp+2032,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult 
                                       >> 0xcU))));
        bufp->chgBit(oldp+2033,((IData)(((0U != (0x60000000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U])) 
                                         | (0U != (0x30000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[3U]))))));
        bufp->chgSData(oldp+2034,((0xfffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                             >> 0x11U))),14);
        bufp->chgBit(oldp+2035,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                       >> 0x11U))));
        bufp->chgBit(oldp+2036,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                       >> 0x12U))));
        bufp->chgBit(oldp+2037,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                       >> 0x13U))));
        bufp->chgBit(oldp+2038,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                       >> 0x14U))));
        bufp->chgBit(oldp+2039,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                       >> 0x15U))));
        bufp->chgBit(oldp+2040,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                       >> 0x16U))));
        bufp->chgBit(oldp+2041,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                       >> 0x17U))));
        bufp->chgBit(oldp+2042,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                       >> 0x18U))));
        bufp->chgBit(oldp+2043,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                       >> 0x19U))));
        bufp->chgBit(oldp+2044,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+2045,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+2046,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+2047,(0U));
        bufp->chgBit(oldp+2048,(0U));
        bufp->chgIData(oldp+2049,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_result),32);
        bufp->chgIData(oldp+2050,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__slt_result),32);
        bufp->chgIData(oldp+2051,((1U & (~ (IData)(
                                                   (1ULL 
                                                    & ((((QData)((IData)(
                                                                         ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                                                           << 0x17U) 
                                                                          | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                                             >> 9U)))) 
                                                         + (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_b))) 
                                                        + (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_cin))) 
                                                       >> 0x20U)))))),32);
        bufp->chgIData(oldp+2052,((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                     << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                  >> 9U)) 
                                   & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                       << 0x17U) | 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                       >> 9U)))),32);
        bufp->chgIData(oldp+2053,((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                     << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                  >> 9U)) 
                                   & (~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                          << 0x17U) 
                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                            >> 9U))))),32);
        bufp->chgIData(oldp+2054,((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                     << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                  >> 9U)) 
                                   | (~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                          << 0x17U) 
                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                            >> 9U))))),32);
        bufp->chgIData(oldp+2055,((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__or_result)),32);
        bufp->chgIData(oldp+2056,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__or_result),32);
        bufp->chgIData(oldp+2057,((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                     << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                  >> 9U)) 
                                   ^ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                       << 0x17U) | 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                       >> 9U)))),32);
        bufp->chgIData(oldp+2058,((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                     << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                  >> 9U)) 
                                   << (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                                >> 9U)))),32);
        bufp->chgQData(oldp+2059,(((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                                                     >> 0x1bU) 
                                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                                                       >> 8U))))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                                                   << 0x17U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                                     >> 9U))))) 
                                   >> (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                                >> 9U)))),64);
        bufp->chgIData(oldp+2061,((IData)(((((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                                                             >> 0x1bU) 
                                                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                                                               >> 8U))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                                                << 0x17U) 
                                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                                  >> 9U))))) 
                                           >> (0x1fU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                                  >> 9U))))),32);
        bufp->chgIData(oldp+2062,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_b),32);
        bufp->chgBit(oldp+2063,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_cin));
        bufp->chgBit(oldp+2064,((1U & (IData)((1ULL 
                                               & ((((QData)((IData)(
                                                                    ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                                        >> 9U)))) 
                                                    + (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_b))) 
                                                   + (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_cin))) 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+2065,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                  >> 6U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_valid))));
        bufp->chgBit(oldp+2066,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__div_start_handshaked));
        bufp->chgCData(oldp+2067,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_d),6);
        bufp->chgCData(oldp+2068,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q),6);
        bufp->chgBit(oldp+2069,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q) 
                                       >> 1U))));
        bufp->chgCData(oldp+2070,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc_q),6);
        bufp->chgCData(oldp+2071,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q),6);
        bufp->chgCData(oldp+2072,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__lzc_diff_fast),6);
        bufp->chgBit(oldp+2073,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__lzc_diff_fast))));
        bufp->chgBit(oldp+2074,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_num_q))));
        bufp->chgBit(oldp+2075,((IData)((0U != (0xcU 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))))));
        bufp->chgCData(oldp+2076,((0xfU & ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))
                                            ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__lzc_diff_fast) 
                                                >> 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__lzc_diff_fast)))
                                            : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_num_q) 
                                               - (IData)(1U))))),4);
        bufp->chgCData(oldp+2077,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_num_q),4);
        bufp->chgQData(oldp+2078,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_shifted_rem),33);
        bufp->chgIData(oldp+2080,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_data_in),32);
        bufp->chgCData(oldp+2081,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_num),5);
        bufp->chgBit(oldp+2082,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_extend_msb));
        bufp->chgIData(oldp+2083,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s0),32);
        bufp->chgIData(oldp+2084,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s1),32);
        bufp->chgIData(oldp+2085,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s2),32);
        bufp->chgIData(oldp+2086,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s3),32);
        bufp->chgBit(oldp+2087,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_sign));
        bufp->chgBit(oldp+2088,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_sign));
        bufp->chgIData(oldp+2089,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_sign)
                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_res
                                   [0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                            << 0x17U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                              >> 9U)))),32);
        bufp->chgIData(oldp+2090,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_sign)
                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_res
                                   [1U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                            << 0x17U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                              >> 9U)))),32);
        bufp->chgBit(oldp+2091,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__div_start_handshaked) 
                                 | (0U != (0x12U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))))));
        bufp->chgQData(oldp+2092,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q),33);
        bufp->chgQData(oldp+2094,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q),33);
        bufp->chgBit(oldp+2096,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__no_iter_needed_q));
        bufp->chgBit(oldp+2097,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_too_small_q));
        bufp->chgBit(oldp+2098,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__div_start_handshaked) 
                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q) 
                                           >> 2U) & 
                                          ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q) 
                                           >> 5U))))));
        bufp->chgBit(oldp+2099,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_sign) 
                                    ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_sign)))));
        bufp->chgBit(oldp+2100,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__quot_sign_q));
        bufp->chgBit(oldp+2101,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q));
        bufp->chgQData(oldp+2102,((0xfffffffffULL & 
                                   ((((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q))) 
                                      ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q) 
                                     + ((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q))) 
                                        ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q)) 
                                    + ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q)) 
                                       << 1U)))),36);
        bufp->chgQData(oldp+2104,((0xfffffffffULL & 
                                   (((((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q))) 
                                       ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q) 
                                      + ((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q))) 
                                         ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q)) 
                                     + ((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q))) 
                                        ^ ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                           << 3U))) 
                                    + (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q)) 
                                        << 1U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q)))))),36);
        bufp->chgBit(oldp+2106,((1U & (~ (IData)((0U 
                                                  != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q))))));
        bufp->chgBit(oldp+2107,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__need_corr));
        bufp->chgCData(oldp+2108,(((((((4U & (((- (IData)(
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
        bufp->chgCData(oldp+2109,(((((((((0xcU & (- (IData)(
                                                            (0U 
                                                             == 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                         >> 0x1cU))))))) 
                                         | (0xeU & 
                                            (- (IData)(
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
                                     | (0x14U & (- (IData)(
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
        bufp->chgCData(oldp+2110,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_cmp_res),2);
        bufp->chgCData(oldp+2111,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_normal_init_value 
                                                   >> 0x1dU)))),5);
        bufp->chgBit(oldp+2112,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q) 
                                       >> 2U))));
        bufp->chgCData(oldp+2113,(((((((((0xdU & (- (IData)(
                                                            (0U 
                                                             == 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                         >> 0x1cU))))))) 
                                         | (0xfU & 
                                            (- (IData)(
                                                       (1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                    >> 0x1cU)))))))) 
                                        | (0x10U & 
                                           (- (IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                   >> 0x1cU)))))))) 
                                       | (0x12U & (- (IData)(
                                                             (3U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                          >> 0x1cU)))))))) 
                                      | (0x13U & (- (IData)(
                                                            (4U 
                                                             == 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                         >> 0x1cU)))))))) 
                                     | (0x14U & (- (IData)(
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
        bufp->chgCData(oldp+2114,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_neg_1_q),5);
        bufp->chgCData(oldp+2115,(((((((((2U & (- (IData)(
                                                          (0U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                       >> 0x1cU))))))) 
                                         | (3U & (- (IData)(
                                                            (1U 
                                                             == 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                         >> 0x1cU)))))))) 
                                        | (3U & (- (IData)(
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
        bufp->chgCData(oldp+2116,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_neg_0_q),3);
        bufp->chgCData(oldp+2117,(((((2U & ((((- (IData)(
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
        bufp->chgCData(oldp+2118,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_pos_1_q),2);
        bufp->chgCData(oldp+2119,(((((((((0x14U & (- (IData)(
                                                             (0U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                          >> 0x1cU))))))) 
                                         | (0x12U & 
                                            (- (IData)(
                                                       (1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                    >> 0x1cU)))))))) 
                                        | (0x11U & 
                                           (- (IData)(
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
                                      | (0xeU & (- (IData)(
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
        bufp->chgCData(oldp+2120,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_pos_2_q),5);
        bufp->chgBit(oldp+2121,(((0U == (7U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                       >> 0x1cU)))) 
                                 | (4U == (7U & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                         >> 0x1cU)))))));
        bufp->chgBit(oldp+2122,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__special_divisor_q));
        bufp->chgQData(oldp+2123,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_normal_init_value),36);
        bufp->chgQData(oldp+2125,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_too_small_q) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q) 
                                       >> 5U)) ? ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s4)) 
                                                  << 3U)
                                    : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__no_iter_needed_q)
                                        ? 0ULL : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_normal_init_value))),36);
        bufp->chgQData(oldp+2127,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))
                                    ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_too_small_q) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q) 
                                           >> 5U)) ? 
                                       ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s4)) 
                                        << 3U) : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__no_iter_needed_q)
                                                   ? 0ULL
                                                   : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_normal_init_value))
                                    : (((0xffffffffcULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                            << 2U)) 
                                        ^ (0xffffffffcULL 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                              << 2U))) 
                                       ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__csa_3_2_x3))),36);
        bufp->chgQData(oldp+2129,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q),36);
        bufp->chgQData(oldp+2131,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))
                                    ? 0ULL : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_iter_end)),36);
        bufp->chgQData(oldp+2133,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q),36);
        bufp->chgQData(oldp+2135,((((0xffffffffcULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                        << 2U)) ^ (0xffffffffcULL 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                      << 2U))) 
                                   ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__csa_3_2_x3)),36);
        bufp->chgQData(oldp+2137,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_iter_end),36);
        bufp->chgQData(oldp+2139,((0xffffffffcULL & 
                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                    << 2U))),36);
        bufp->chgQData(oldp+2141,((0xffffffffcULL & 
                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                    << 2U))),36);
        bufp->chgQData(oldp+2143,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__csa_3_2_x3),36);
        bufp->chgCData(oldp+2145,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))
                                    ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_cmp_res))
                                        ? 0x10U : (
                                                   (2U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_cmp_res))
                                                    ? 8U
                                                    : 4U))
                                    : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__quot_digit_iter_end))),5);
        bufp->chgCData(oldp+2146,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q),5);
        bufp->chgCData(oldp+2147,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_cmp_res))
                                    ? 0x10U : ((2U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_cmp_res))
                                                ? 8U
                                                : 4U))),5);
        bufp->chgCData(oldp+2148,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__quot_digit_iter_end),5);
        bufp->chgBit(oldp+2149,((IData)((0U != (0x1cU 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))))));
        bufp->chgIData(oldp+2150,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))
                                    ? ((0x20U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q))
                                        ? 0xffffffffU
                                        : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__no_iter_needed_q)
                                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q)
                                            : 0U)) : 
                                   ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))
                                     ? ((((((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                           >> 4U)))) 
                                            & (2U | 
                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_q 
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
                                            & (3U | 
                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q 
                                                << 2U)))) 
                                        | ((- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q)))) 
                                           & (2U | 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q 
                                               << 2U))))
                                     : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__quot_sign_q)
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_res
                                        [0U] : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_q)))),32);
        bufp->chgIData(oldp+2151,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_q),32);
        bufp->chgIData(oldp+2152,(((((((- (IData)((1U 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                      >> 4U)))) 
                                       & (2U | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_q 
                                                << 2U))) 
                                      | ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                        >> 3U)))) 
                                         & (1U | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_q 
                                                  << 2U)))) 
                                     | ((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                       >> 2U)))) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_q 
                                           << 2U))) 
                                    | ((- (IData)((1U 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                      >> 1U)))) 
                                       & (3U | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q 
                                                << 2U)))) 
                                   | ((- (IData)((1U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q)))) 
                                      & (2U | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q 
                                               << 2U))))),32);
        bufp->chgIData(oldp+2153,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))
                                    ? 0U : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))
                                             ? ((((
                                                   ((- (IData)(
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
        bufp->chgIData(oldp+2154,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q),32);
        bufp->chgIData(oldp+2155,(((((((- (IData)((1U 
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
                                        & (3U | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q 
                                                 << 2U)))) 
                                    | ((- (IData)((1U 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                      >> 1U)))) 
                                       & (2U | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q 
                                                << 2U)))) 
                                   | ((- (IData)((1U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q)))) 
                                      & (1U | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q 
                                               << 2U))))),32);
        bufp->chgIData(oldp+2156,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_in[0]),32);
        bufp->chgIData(oldp+2157,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_in[1]),32);
        bufp->chgIData(oldp+2158,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_res[0]),32);
        bufp->chgIData(oldp+2159,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_res[1]),32);
        bufp->chgQData(oldp+2160,((0xffffffff8ULL & 
                                   (((0xffffffff8ULL 
                                      & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q) 
                                         << 3U)) | 
                                     ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                       << 3U) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__csa_3_2_x3 
                                                 << 1U))) 
                                    | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                        << 3U) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__csa_3_2_x3 
                                                  << 1U))))),36);
        bufp->chgIData(oldp+2162,((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q)),32);
        bufp->chgIData(oldp+2163,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp),32);
        bufp->chgIData(oldp+2164,((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)),32);
        bufp->chgIData(oldp+2165,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp),32);
        bufp->chgQData(oldp+2166,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                   << 4U)),40);
        bufp->chgQData(oldp+2168,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                   << 4U)),40);
        bufp->chgCData(oldp+2170,((0x7fU & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                    >> 0x1aU)))),7);
        bufp->chgCData(oldp+2171,((0x7fU & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                    >> 0x1aU)))),7);
        bufp->chgCData(oldp+2172,((0x7fU & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                    >> 0x1bU)))),7);
        bufp->chgCData(oldp+2173,((0x7fU & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                    >> 0x1bU)))),7);
        bufp->chgCData(oldp+2174,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_neg_1_q) 
                                   << 1U)),7);
        bufp->chgCData(oldp+2175,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__para_m_neg_0_trunc_3_4),7);
        bufp->chgCData(oldp+2176,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__para_m_pos_1_trunc_3_4),7);
        bufp->chgCData(oldp+2177,((0x40U | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_pos_2_q) 
                                            << 1U))),7);
        bufp->chgQData(oldp+2178,(((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                   << 3U)),36);
        bufp->chgQData(oldp+2180,(((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                   << 5U)),38);
        bufp->chgQData(oldp+2182,(((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                   << 6U)),38);
        bufp->chgQData(oldp+2184,((0x3fffffffffULL 
                                   & (~ ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                         << 5U)))),38);
        bufp->chgQData(oldp+2186,((0x3fffffffffULL 
                                   & (~ ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                         << 6U)))),38);
        bufp->chgCData(oldp+2188,((0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                                    >> 0x19U)))),7);
        bufp->chgCData(oldp+2189,((0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                                    >> 0x1aU)))),7);
        bufp->chgCData(oldp+2190,((0x7fU & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                    >> 0x18U)))),7);
        bufp->chgCData(oldp+2191,((0x7fU & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                    >> 0x19U)))),7);
        bufp->chgCData(oldp+2192,((0x7fU & (~ (IData)(
                                                      ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                                       >> 0x19U))))),7);
        bufp->chgCData(oldp+2193,((0x7fU & (~ (IData)(
                                                      ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                                       >> 0x1aU))))),7);
        bufp->chgCData(oldp+2194,((0x7fU & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                       >> 0x18U))))),7);
        bufp->chgCData(oldp+2195,((0x7fU & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                       >> 0x19U))))),7);
        bufp->chgCData(oldp+2196,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_3_4),7);
        bufp->chgCData(oldp+2197,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_2_5),7);
        bufp->chgBit(oldp+2198,((1U & (((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                   >> 0x1aU)) 
                                          + (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                     >> 0x1aU))) 
                                         + ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_neg_1_q) 
                                            << 1U)) 
                                        + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_2_5)) 
                                       >> 6U))));
        bufp->chgBit(oldp+2199,((1U & (((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                   >> 0x1bU)) 
                                          + (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                     >> 0x1bU))) 
                                         + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__para_m_neg_0_trunc_3_4)) 
                                        + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_3_4)) 
                                       >> 6U))));
        bufp->chgBit(oldp+2200,((1U & (((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                   >> 0x1bU)) 
                                          + (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                     >> 0x1bU))) 
                                         + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__para_m_pos_1_trunc_3_4)) 
                                        + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_3_4)) 
                                       >> 6U))));
        bufp->chgBit(oldp+2201,((1U & (((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                   >> 0x1aU)) 
                                          + (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                     >> 0x1aU))) 
                                         + (0x40U | 
                                            ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_pos_2_q) 
                                             << 1U))) 
                                        + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_2_5)) 
                                       >> 6U))));
        bufp->chgCData(oldp+2202,((0x3fU & ((((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                       >> 0x1bU)) 
                                              + (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                         >> 0x1bU))) 
                                             + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__para_m_neg_0_trunc_3_4)) 
                                            + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_3_4)))),6);
        bufp->chgCData(oldp+2203,((0x3fU & ((((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                       >> 0x1aU)) 
                                              + (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                         >> 0x1aU))) 
                                             + ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_neg_1_q) 
                                                << 1U)) 
                                            + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_2_5)))),6);
        bufp->chgCData(oldp+2204,((0x3fU & ((((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                       >> 0x1bU)) 
                                              + (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                         >> 0x1bU))) 
                                             + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__para_m_pos_1_trunc_3_4)) 
                                            + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_3_4)))),6);
        bufp->chgCData(oldp+2205,((0x3fU & ((((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                       >> 0x1aU)) 
                                              + (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                         >> 0x1aU))) 
                                             + ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_pos_2_q) 
                                                << 1U)) 
                                            + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_2_5)))),6);
        bufp->chgCData(oldp+2206,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__u_sign_coder__DOT__sign),4);
        bufp->chgQData(oldp+2207,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX),64);
        bufp->chgQData(oldp+2209,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY),33);
        bufp->chgIData(oldp+2211,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__Carry),17);
        bufp->chgQData(oldp+2212,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[0]),64);
        bufp->chgQData(oldp+2214,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[1]),64);
        bufp->chgQData(oldp+2216,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[2]),64);
        bufp->chgQData(oldp+2218,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[3]),64);
        bufp->chgQData(oldp+2220,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[4]),64);
        bufp->chgQData(oldp+2222,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[5]),64);
        bufp->chgQData(oldp+2224,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[6]),64);
        bufp->chgQData(oldp+2226,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[7]),64);
        bufp->chgQData(oldp+2228,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[8]),64);
        bufp->chgQData(oldp+2230,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[9]),64);
        bufp->chgQData(oldp+2232,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[10]),64);
        bufp->chgQData(oldp+2234,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[11]),64);
        bufp->chgQData(oldp+2236,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[12]),64);
        bufp->chgQData(oldp+2238,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[13]),64);
        bufp->chgQData(oldp+2240,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[14]),64);
        bufp->chgQData(oldp+2242,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[15]),64);
        bufp->chgQData(oldp+2244,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[16]),64);
        bufp->chgCData(oldp+2246,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                 >> 9U)))),3);
        bufp->chgQData(oldp+2247,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   << 0xaU)),64);
        bufp->chgQData(oldp+2249,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__10__KET____DOT__ai__OutX),64);
        bufp->chgBit(oldp+2251,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x))));
        bufp->chgBit(oldp+2252,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx));
        bufp->chgBit(oldp+2253,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x));
        bufp->chgBit(oldp+2254,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x));
        bufp->chgBit(oldp+2255,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xaU)))));
        bufp->chgBit(oldp+2256,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xaU))))));
        bufp->chgBit(oldp+2257,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xaU)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                << 0xaU)))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x))));
        bufp->chgBit(oldp+2258,((1U & (IData)((0x3fffffffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+2259,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0xaU])));
        bufp->chgBit(oldp+2260,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0xaU] >> 1U))));
        bufp->chgBit(oldp+2261,((1U & (~ (IData)((0x3fffffffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+2262,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffffffffULL 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0xaU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0xaU]))));
        bufp->chgBit(oldp+2263,((1U & (IData)((0x1fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))));
        bufp->chgBit(oldp+2264,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0xbU])));
        bufp->chgBit(oldp+2265,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0xbU] >> 1U))));
        bufp->chgBit(oldp+2266,((1U & (~ (IData)((0x1fffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+2267,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 1U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0xbU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0xbU]))));
        bufp->chgBit(oldp+2268,((1U & (IData)((0xfffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))));
        bufp->chgBit(oldp+2269,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0xcU])));
        bufp->chgBit(oldp+2270,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0xcU] >> 1U))));
        bufp->chgBit(oldp+2271,((1U & (~ (IData)((0xfffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+2272,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 2U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0xcU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0xcU]))));
        bufp->chgBit(oldp+2273,((1U & (IData)((0x7ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))));
        bufp->chgBit(oldp+2274,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0xdU])));
        bufp->chgBit(oldp+2275,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0xdU] >> 1U))));
        bufp->chgBit(oldp+2276,((1U & (~ (IData)((0x7ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+2277,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 3U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 3U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0xdU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0xdU]))));
        bufp->chgBit(oldp+2278,((1U & (IData)((0x3ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))));
        bufp->chgBit(oldp+2279,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0xeU])));
        bufp->chgBit(oldp+2280,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0xeU] >> 1U))));
        bufp->chgBit(oldp+2281,((1U & (~ (IData)((0x3ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+2282,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 4U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 4U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0xeU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0xeU]))));
        bufp->chgBit(oldp+2283,((1U & (IData)((0x1ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))));
        bufp->chgBit(oldp+2284,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0xfU])));
        bufp->chgBit(oldp+2285,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+2286,((1U & (~ (IData)((0x1ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+2287,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 5U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 5U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0xfU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0xfU]))));
        bufp->chgBit(oldp+2288,((1U & (IData)((0xffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))));
        bufp->chgBit(oldp+2289,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x10U])));
        bufp->chgBit(oldp+2290,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+2291,((1U & (~ (IData)((0xffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+2292,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 6U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 6U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x10U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x10U]))));
        bufp->chgBit(oldp+2293,((1U & (IData)((0x7fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))));
        bufp->chgBit(oldp+2294,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x11U])));
        bufp->chgBit(oldp+2295,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x11U] >> 1U))));
        bufp->chgBit(oldp+2296,((1U & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+2297,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 7U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 7U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x11U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x11U]))));
        bufp->chgBit(oldp+2298,((1U & (IData)((0x3fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))));
        bufp->chgBit(oldp+2299,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x12U])));
        bufp->chgBit(oldp+2300,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x12U] >> 1U))));
        bufp->chgBit(oldp+2301,((1U & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+2302,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 8U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 8U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x12U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x12U]))));
        bufp->chgBit(oldp+2303,((1U & (IData)((0x1fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))));
        bufp->chgBit(oldp+2304,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x13U])));
        bufp->chgBit(oldp+2305,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x13U] >> 1U))));
        bufp->chgBit(oldp+2306,((1U & (~ (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+2307,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 9U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 9U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x13U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x13U]))));
        bufp->chgBit(oldp+2308,((1U & (IData)((0x7ffffffffffffe00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 9U))))));
        bufp->chgBit(oldp+2309,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [1U])));
        bufp->chgBit(oldp+2310,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [1U] >> 1U))));
        bufp->chgBit(oldp+2311,((1U & (~ (IData)((0x7ffffffffffffe00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 9U)))))));
        bufp->chgBit(oldp+2312,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffffffe00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 9U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffffffe00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 9U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [1U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [1U]))));
        bufp->chgBit(oldp+2313,((1U & (IData)((0xfffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+2314,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x14U])));
        bufp->chgBit(oldp+2315,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x14U] >> 1U))));
        bufp->chgBit(oldp+2316,((1U & (~ (IData)((0xfffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+2317,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xaU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x14U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x14U]))));
        bufp->chgBit(oldp+2318,((1U & (IData)((0x7ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+2319,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x15U])));
        bufp->chgBit(oldp+2320,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x15U] >> 1U))));
        bufp->chgBit(oldp+2321,((1U & (~ (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+2322,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xbU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x15U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x15U]))));
        bufp->chgBit(oldp+2323,((1U & (IData)((0x3ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+2324,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x16U])));
        bufp->chgBit(oldp+2325,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x16U] >> 1U))));
        bufp->chgBit(oldp+2326,((1U & (~ (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+2327,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xcU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x16U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x16U]))));
        bufp->chgBit(oldp+2328,((1U & (IData)((0x1ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+2329,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x17U])));
        bufp->chgBit(oldp+2330,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x17U] >> 1U))));
        bufp->chgBit(oldp+2331,((1U & (~ (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+2332,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xdU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x17U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x17U]))));
        bufp->chgBit(oldp+2333,((1U & (IData)((0xffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+2334,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x18U])));
        bufp->chgBit(oldp+2335,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x18U] >> 1U))));
        bufp->chgBit(oldp+2336,((1U & (~ (IData)((0xffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+2337,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xeU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x18U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x18U]))));
        bufp->chgBit(oldp+2338,((1U & (IData)((0x7fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+2339,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x19U])));
        bufp->chgBit(oldp+2340,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x19U] >> 1U))));
        bufp->chgBit(oldp+2341,((1U & (~ (IData)((0x7fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+2342,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xfU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x19U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x19U]))));
        bufp->chgBit(oldp+2343,((1U & (IData)((0x3fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+2344,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x1aU])));
        bufp->chgBit(oldp+2345,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU] >> 1U))));
        bufp->chgBit(oldp+2346,((1U & (~ (IData)((0x3fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+2347,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x10U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x1aU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU]))));
        bufp->chgBit(oldp+2348,((1U & (IData)((0x1fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+2349,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x1bU])));
        bufp->chgBit(oldp+2350,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU] >> 1U))));
        bufp->chgBit(oldp+2351,((1U & (~ (IData)((0x1fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+2352,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x11U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x1bU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU]))));
        bufp->chgBit(oldp+2353,((1U & (IData)((0xfffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+2354,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x1cU])));
        bufp->chgBit(oldp+2355,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU] >> 1U))));
        bufp->chgBit(oldp+2356,((1U & (~ (IData)((0xfffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+2357,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x12U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x1cU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU]))));
        bufp->chgBit(oldp+2358,((1U & (IData)((0x7ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+2359,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x1dU])));
        bufp->chgBit(oldp+2360,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU] >> 1U))));
        bufp->chgBit(oldp+2361,((1U & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+2362,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x13U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x1dU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU]))));
        bufp->chgBit(oldp+2363,((1U & (IData)((0x3fffffffffffff00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 8U))))));
        bufp->chgBit(oldp+2364,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [2U])));
        bufp->chgBit(oldp+2365,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [2U] >> 1U))));
        bufp->chgBit(oldp+2366,((1U & (~ (IData)((0x3fffffffffffff00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 8U)))))));
        bufp->chgBit(oldp+2367,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffffffff00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 8U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffffffff00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 8U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [2U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [2U]))));
        bufp->chgBit(oldp+2368,((1U & (IData)((0x3ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+2369,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x1eU])));
        bufp->chgBit(oldp+2370,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU] >> 1U))));
        bufp->chgBit(oldp+2371,((1U & (~ (IData)((0x3ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+2372,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x14U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x1eU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU]))));
        bufp->chgBit(oldp+2373,((1U & (IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+2374,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x1fU])));
        bufp->chgBit(oldp+2375,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU] >> 1U))));
        bufp->chgBit(oldp+2376,((1U & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+2377,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x15U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x1fU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU]))));
        bufp->chgBit(oldp+2378,((1U & (IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+2379,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x20U])));
        bufp->chgBit(oldp+2380,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x20U] >> 1U))));
        bufp->chgBit(oldp+2381,((1U & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+2382,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x16U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x20U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x20U]))));
        bufp->chgBit(oldp+2383,((1U & (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+2384,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x21U])));
        bufp->chgBit(oldp+2385,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x21U] >> 1U))));
        bufp->chgBit(oldp+2386,((1U & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+2387,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x17U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x21U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x21U]))));
        bufp->chgBit(oldp+2388,((1U & (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+2389,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x22U])));
        bufp->chgBit(oldp+2390,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x22U] >> 1U))));
        bufp->chgBit(oldp+2391,((1U & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+2392,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x18U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x22U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x22U]))));
        bufp->chgBit(oldp+2393,((1U & (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+2394,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x23U])));
        bufp->chgBit(oldp+2395,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x23U] >> 1U))));
        bufp->chgBit(oldp+2396,((1U & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+2397,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x19U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x23U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x23U]))));
        bufp->chgBit(oldp+2398,((1U & (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+2399,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x24U])));
        bufp->chgBit(oldp+2400,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x24U] >> 1U))));
        bufp->chgBit(oldp+2401,((1U & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+2402,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x1aU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x24U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x24U]))));
        bufp->chgBit(oldp+2403,((1U & (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+2404,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x25U])));
        bufp->chgBit(oldp+2405,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x25U] >> 1U))));
        bufp->chgBit(oldp+2406,((1U & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+2407,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x1bU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x25U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x25U]))));
        bufp->chgBit(oldp+2408,((1U & (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+2409,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x26U])));
        bufp->chgBit(oldp+2410,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x26U] >> 1U))));
        bufp->chgBit(oldp+2411,((1U & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+2412,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x1cU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x26U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x26U]))));
        bufp->chgBit(oldp+2413,((1U & (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+2414,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x27U])));
        bufp->chgBit(oldp+2415,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x27U] >> 1U))));
        bufp->chgBit(oldp+2416,((1U & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+2417,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x1dU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x27U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x27U]))));
        bufp->chgBit(oldp+2418,((1U & (IData)((0x1fffffffffffff80ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 7U))))));
        bufp->chgBit(oldp+2419,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [3U])));
        bufp->chgBit(oldp+2420,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [3U] >> 1U))));
        bufp->chgBit(oldp+2421,((1U & (~ (IData)((0x1fffffffffffff80ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 7U)))))));
        bufp->chgBit(oldp+2422,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffffffff80ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 7U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffffffff80ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 7U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [3U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [3U]))));
        bufp->chgBit(oldp+2423,((1U & (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+2424,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x28U])));
        bufp->chgBit(oldp+2425,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x28U] >> 1U))));
        bufp->chgBit(oldp+2426,((1U & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+2427,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x1eU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x28U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x28U]))));
        bufp->chgBit(oldp+2428,((1U & (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+2429,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x29U])));
        bufp->chgBit(oldp+2430,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x29U] >> 1U))));
        bufp->chgBit(oldp+2431,((1U & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+2432,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x1fU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x29U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x29U]))));
        bufp->chgBit(oldp+2433,((1U & (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+2434,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x2aU])));
        bufp->chgBit(oldp+2435,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU] >> 1U))));
        bufp->chgBit(oldp+2436,((1U & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+2437,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x20U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x2aU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU]))));
        bufp->chgBit(oldp+2438,((1U & (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+2439,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x2bU])));
        bufp->chgBit(oldp+2440,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU] >> 1U))));
        bufp->chgBit(oldp+2441,((1U & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+2442,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x21U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x2bU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU]))));
        bufp->chgBit(oldp+2443,((1U & (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+2444,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x2cU])));
        bufp->chgBit(oldp+2445,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU] >> 1U))));
        bufp->chgBit(oldp+2446,((1U & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+2447,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x22U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x2cU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU]))));
        bufp->chgBit(oldp+2448,((1U & (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+2449,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x2dU])));
        bufp->chgBit(oldp+2450,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU] >> 1U))));
        bufp->chgBit(oldp+2451,((1U & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+2452,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x23U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x2dU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU]))));
        bufp->chgBit(oldp+2453,((1U & (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+2454,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x2eU])));
        bufp->chgBit(oldp+2455,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU] >> 1U))));
        bufp->chgBit(oldp+2456,((1U & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+2457,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x24U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x2eU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU]))));
        bufp->chgBit(oldp+2458,((1U & (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+2459,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x2fU])));
        bufp->chgBit(oldp+2460,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU] >> 1U))));
        bufp->chgBit(oldp+2461,((1U & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+2462,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x25U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x2fU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU]))));
        bufp->chgBit(oldp+2463,((1U & (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+2464,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x30U])));
        bufp->chgBit(oldp+2465,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x30U] >> 1U))));
        bufp->chgBit(oldp+2466,((1U & (~ (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+2467,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x26U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x30U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x30U]))));
        bufp->chgBit(oldp+2468,((1U & (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+2469,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x31U])));
        bufp->chgBit(oldp+2470,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x31U] >> 1U))));
        bufp->chgBit(oldp+2471,((1U & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+2472,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x27U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x31U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x31U]))));
        bufp->chgBit(oldp+2473,((1U & (IData)((0xfffffffffffffc0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 6U))))));
        bufp->chgBit(oldp+2474,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [4U])));
        bufp->chgBit(oldp+2475,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [4U] >> 1U))));
        bufp->chgBit(oldp+2476,((1U & (~ (IData)((0xfffffffffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 6U)))))));
        bufp->chgBit(oldp+2477,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 6U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffffffc0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 6U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [4U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [4U]))));
        bufp->chgBit(oldp+2478,((1U & (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+2479,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x32U])));
        bufp->chgBit(oldp+2480,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x32U] >> 1U))));
        bufp->chgBit(oldp+2481,((1U & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+2482,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x28U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x32U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x32U]))));
        bufp->chgBit(oldp+2483,((1U & (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+2484,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x33U])));
        bufp->chgBit(oldp+2485,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x33U] >> 1U))));
        bufp->chgBit(oldp+2486,((1U & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+2487,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x29U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x33U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x33U]))));
        bufp->chgBit(oldp+2488,((1U & (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+2489,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x34U])));
        bufp->chgBit(oldp+2490,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x34U] >> 1U))));
        bufp->chgBit(oldp+2491,((1U & (~ (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+2492,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x2aU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x34U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x34U]))));
        bufp->chgBit(oldp+2493,((1U & (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+2494,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x35U])));
        bufp->chgBit(oldp+2495,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x35U] >> 1U))));
        bufp->chgBit(oldp+2496,((1U & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+2497,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x2bU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x35U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x35U]))));
        bufp->chgBit(oldp+2498,((1U & (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+2499,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x36U])));
        bufp->chgBit(oldp+2500,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x36U] >> 1U))));
        bufp->chgBit(oldp+2501,((1U & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+2502,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x2cU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x36U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x36U]))));
        bufp->chgBit(oldp+2503,((1U & (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+2504,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x37U])));
        bufp->chgBit(oldp+2505,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x37U] >> 1U))));
        bufp->chgBit(oldp+2506,((1U & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+2507,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x2dU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x37U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x37U]))));
        bufp->chgBit(oldp+2508,((1U & (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+2509,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x38U])));
        bufp->chgBit(oldp+2510,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x38U] >> 1U))));
        bufp->chgBit(oldp+2511,((1U & (~ (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+2512,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2eU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x2eU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x38U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x38U]))));
        bufp->chgBit(oldp+2513,((1U & (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+2514,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x39U])));
        bufp->chgBit(oldp+2515,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x39U] >> 1U))));
        bufp->chgBit(oldp+2516,((1U & (~ (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+2517,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2fU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x2fU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x39U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x39U]))));
        bufp->chgBit(oldp+2518,((1U & (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+2519,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x3aU])));
        bufp->chgBit(oldp+2520,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU] >> 1U))));
        bufp->chgBit(oldp+2521,((1U & (~ (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+2522,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x30U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x30U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x3aU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU]))));
        bufp->chgBit(oldp+2523,((1U & (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+2524,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x3bU])));
        bufp->chgBit(oldp+2525,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU] >> 1U))));
        bufp->chgBit(oldp+2526,((1U & (~ (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+2527,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x31U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x31U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x3bU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU]))));
        bufp->chgBit(oldp+2528,((1U & (IData)((0x7ffffffffffffe0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 5U))))));
        bufp->chgBit(oldp+2529,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [5U])));
        bufp->chgBit(oldp+2530,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [5U] >> 1U))));
        bufp->chgBit(oldp+2531,((1U & (~ (IData)((0x7ffffffffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 5U)))))));
        bufp->chgBit(oldp+2532,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 5U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffffffe0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 5U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [5U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [5U]))));
        bufp->chgBit(oldp+2533,((1U & (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+2534,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x3cU])));
        bufp->chgBit(oldp+2535,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU] >> 1U))));
        bufp->chgBit(oldp+2536,((1U & (~ (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+2537,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x32U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x32U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x3cU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU]))));
        bufp->chgBit(oldp+2538,((1U & (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+2539,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x3dU])));
        bufp->chgBit(oldp+2540,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU] >> 1U))));
        bufp->chgBit(oldp+2541,((1U & (~ (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+2542,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x33U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((7ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x33U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x3dU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU]))));
        bufp->chgBit(oldp+2543,((1U & (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+2544,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x3eU])));
        bufp->chgBit(oldp+2545,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU] >> 1U))));
        bufp->chgBit(oldp+2546,((1U & (~ (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+2547,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x34U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((3ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x34U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x3eU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU]))));
        bufp->chgBit(oldp+2548,((1U & (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+2549,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x3fU])));
        bufp->chgBit(oldp+2550,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU] >> 1U))));
        bufp->chgBit(oldp+2551,((1U & (~ (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+2552,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x35U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x35U))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x3fU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU]))));
        bufp->chgBit(oldp+2553,((1U & (IData)((0x3fffffffffffff0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 4U))))));
        bufp->chgBit(oldp+2554,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [6U])));
        bufp->chgBit(oldp+2555,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [6U] >> 1U))));
        bufp->chgBit(oldp+2556,((1U & (~ (IData)((0x3fffffffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 4U)))))));
        bufp->chgBit(oldp+2557,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 4U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffffffff0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 4U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [6U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [6U]))));
        bufp->chgBit(oldp+2558,((1U & (IData)((0x1fffffffffffff8ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 3U))))));
        bufp->chgBit(oldp+2559,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [7U])));
        bufp->chgBit(oldp+2560,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [7U] >> 1U))));
        bufp->chgBit(oldp+2561,((1U & (~ (IData)((0x1fffffffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 3U)))))));
        bufp->chgBit(oldp+2562,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 3U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffffffff8ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 3U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [7U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [7U]))));
        bufp->chgBit(oldp+2563,((1U & (IData)((0xfffffffffffffcULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 2U))))));
        bufp->chgBit(oldp+2564,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [8U])));
        bufp->chgBit(oldp+2565,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [8U] >> 1U))));
        bufp->chgBit(oldp+2566,((1U & (~ (IData)((0xfffffffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 2U)))))));
        bufp->chgBit(oldp+2567,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 2U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffffffcULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 2U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [8U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [8U]))));
        bufp->chgBit(oldp+2568,((1U & (IData)((0x7ffffffffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 1U))))));
        bufp->chgBit(oldp+2569,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [9U])));
        bufp->chgBit(oldp+2570,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [9U] >> 1U))));
        bufp->chgBit(oldp+2571,((1U & (~ (IData)((0x7ffffffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 1U)))))));
        bufp->chgBit(oldp+2572,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 1U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffffffeULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 1U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [9U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [9U]))));
        bufp->chgBit(oldp+2573,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+2574,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+2575,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                               >> 9U)))));
        bufp->chgCData(oldp+2576,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                 >> 0xbU)))),3);
        bufp->chgQData(oldp+2577,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   << 0xcU)),64);
        bufp->chgQData(oldp+2579,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__12__KET____DOT__ai__OutX),64);
        bufp->chgBit(oldp+2581,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x))));
        bufp->chgBit(oldp+2582,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx));
        bufp->chgBit(oldp+2583,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x));
        bufp->chgBit(oldp+2584,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x));
        bufp->chgBit(oldp+2585,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xcU)))));
        bufp->chgBit(oldp+2586,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xcU))))));
        bufp->chgBit(oldp+2587,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xcU)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                << 0xcU)))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x))));
        bufp->chgBit(oldp+2588,((1U & (IData)((0x3ffffffffffffcULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 2U))))));
        bufp->chgBit(oldp+2589,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0xaU])));
        bufp->chgBit(oldp+2590,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0xaU] >> 1U))));
        bufp->chgBit(oldp+2591,((1U & (~ (IData)((0x3ffffffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 2U)))))));
        bufp->chgBit(oldp+2592,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 2U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffffffcULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 2U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0xaU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0xaU]))));
        bufp->chgBit(oldp+2593,((1U & (IData)((0x1ffffffffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 1U))))));
        bufp->chgBit(oldp+2594,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0xbU])));
        bufp->chgBit(oldp+2595,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0xbU] >> 1U))));
        bufp->chgBit(oldp+2596,((1U & (~ (IData)((0x1ffffffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 1U)))))));
        bufp->chgBit(oldp+2597,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 1U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffffffeULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 1U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0xbU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0xbU]))));
        bufp->chgBit(oldp+2598,((1U & (IData)((0xfffffffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+2599,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0xcU])));
        bufp->chgBit(oldp+2600,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0xcU] >> 1U))));
        bufp->chgBit(oldp+2601,((1U & (~ (IData)((0xfffffffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+2602,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffffffULL 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0xcU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0xcU]))));
        bufp->chgBit(oldp+2603,((1U & (IData)((0x7ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))));
        bufp->chgBit(oldp+2604,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0xdU])));
        bufp->chgBit(oldp+2605,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0xdU] >> 1U))));
        bufp->chgBit(oldp+2606,((1U & (~ (IData)((0x7ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+2607,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 1U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0xdU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0xdU]))));
        bufp->chgBit(oldp+2608,((1U & (IData)((0x3ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))));
        bufp->chgBit(oldp+2609,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0xeU])));
        bufp->chgBit(oldp+2610,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0xeU] >> 1U))));
        bufp->chgBit(oldp+2611,((1U & (~ (IData)((0x3ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+2612,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 2U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0xeU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0xeU]))));
        bufp->chgBit(oldp+2613,((1U & (IData)((0x1ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))));
        bufp->chgBit(oldp+2614,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0xfU])));
        bufp->chgBit(oldp+2615,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+2616,((1U & (~ (IData)((0x1ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+2617,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 3U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 3U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0xfU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0xfU]))));
        bufp->chgBit(oldp+2618,((1U & (IData)((0xffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))));
        bufp->chgBit(oldp+2619,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x10U])));
        bufp->chgBit(oldp+2620,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+2621,((1U & (~ (IData)((0xffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+2622,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 4U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 4U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x10U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x10U]))));
        bufp->chgBit(oldp+2623,((1U & (IData)((0x7fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))));
        bufp->chgBit(oldp+2624,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x11U])));
        bufp->chgBit(oldp+2625,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x11U] >> 1U))));
        bufp->chgBit(oldp+2626,((1U & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+2627,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 5U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 5U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x11U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x11U]))));
        bufp->chgBit(oldp+2628,((1U & (IData)((0x3fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))));
        bufp->chgBit(oldp+2629,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x12U])));
        bufp->chgBit(oldp+2630,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x12U] >> 1U))));
        bufp->chgBit(oldp+2631,((1U & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+2632,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 6U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 6U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x12U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x12U]))));
        bufp->chgBit(oldp+2633,((1U & (IData)((0x1fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))));
        bufp->chgBit(oldp+2634,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x13U])));
        bufp->chgBit(oldp+2635,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x13U] >> 1U))));
        bufp->chgBit(oldp+2636,((1U & (~ (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+2637,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 7U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 7U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x13U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x13U]))));
        bufp->chgBit(oldp+2638,((1U & (IData)((0x7ffffffffffff800ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xbU))))));
        bufp->chgBit(oldp+2639,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [1U])));
        bufp->chgBit(oldp+2640,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [1U] >> 1U))));
        bufp->chgBit(oldp+2641,((1U & (~ (IData)((0x7ffffffffffff800ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xbU)))))));
        bufp->chgBit(oldp+2642,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffffff800ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xbU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffffff800ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 0xbU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [1U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [1U]))));
        bufp->chgBit(oldp+2643,((1U & (IData)((0xfffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))));
        bufp->chgBit(oldp+2644,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x14U])));
        bufp->chgBit(oldp+2645,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x14U] >> 1U))));
        bufp->chgBit(oldp+2646,((1U & (~ (IData)((0xfffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+2647,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 8U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 8U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x14U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x14U]))));
        bufp->chgBit(oldp+2648,((1U & (IData)((0x7ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))));
        bufp->chgBit(oldp+2649,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x15U])));
        bufp->chgBit(oldp+2650,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x15U] >> 1U))));
        bufp->chgBit(oldp+2651,((1U & (~ (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+2652,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 9U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 9U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x15U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x15U]))));
        bufp->chgBit(oldp+2653,((1U & (IData)((0x3ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+2654,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x16U])));
        bufp->chgBit(oldp+2655,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x16U] >> 1U))));
        bufp->chgBit(oldp+2656,((1U & (~ (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+2657,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xaU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x16U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x16U]))));
        bufp->chgBit(oldp+2658,((1U & (IData)((0x1ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+2659,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x17U])));
        bufp->chgBit(oldp+2660,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x17U] >> 1U))));
        bufp->chgBit(oldp+2661,((1U & (~ (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+2662,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xbU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x17U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x17U]))));
        bufp->chgBit(oldp+2663,((1U & (IData)((0xffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+2664,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x18U])));
        bufp->chgBit(oldp+2665,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x18U] >> 1U))));
        bufp->chgBit(oldp+2666,((1U & (~ (IData)((0xffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+2667,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xcU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x18U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x18U]))));
        bufp->chgBit(oldp+2668,((1U & (IData)((0x7fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+2669,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x19U])));
        bufp->chgBit(oldp+2670,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x19U] >> 1U))));
        bufp->chgBit(oldp+2671,((1U & (~ (IData)((0x7fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+2672,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xdU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x19U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x19U]))));
        bufp->chgBit(oldp+2673,((1U & (IData)((0x3fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+2674,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x1aU])));
        bufp->chgBit(oldp+2675,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU] >> 1U))));
        bufp->chgBit(oldp+2676,((1U & (~ (IData)((0x3fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+2677,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xeU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x1aU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU]))));
        bufp->chgBit(oldp+2678,((1U & (IData)((0x1fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+2679,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x1bU])));
        bufp->chgBit(oldp+2680,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU] >> 1U))));
        bufp->chgBit(oldp+2681,((1U & (~ (IData)((0x1fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+2682,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xfU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x1bU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU]))));
        bufp->chgBit(oldp+2683,((1U & (IData)((0xfffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+2684,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x1cU])));
        bufp->chgBit(oldp+2685,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU] >> 1U))));
        bufp->chgBit(oldp+2686,((1U & (~ (IData)((0xfffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+2687,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x10U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x1cU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU]))));
        bufp->chgBit(oldp+2688,((1U & (IData)((0x7ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+2689,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x1dU])));
        bufp->chgBit(oldp+2690,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU] >> 1U))));
        bufp->chgBit(oldp+2691,((1U & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+2692,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x11U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x1dU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU]))));
        bufp->chgBit(oldp+2693,((1U & (IData)((0x3ffffffffffffc00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xaU))))));
        bufp->chgBit(oldp+2694,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [2U])));
        bufp->chgBit(oldp+2695,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [2U] >> 1U))));
        bufp->chgBit(oldp+2696,((1U & (~ (IData)((0x3ffffffffffffc00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xaU)))))));
        bufp->chgBit(oldp+2697,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffffffc00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xaU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffffffc00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 0xaU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [2U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [2U]))));
        bufp->chgBit(oldp+2698,((1U & (IData)((0x3ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+2699,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x1eU])));
        bufp->chgBit(oldp+2700,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU] >> 1U))));
        bufp->chgBit(oldp+2701,((1U & (~ (IData)((0x3ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+2702,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x12U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x1eU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU]))));
        bufp->chgBit(oldp+2703,((1U & (IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+2704,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x1fU])));
        bufp->chgBit(oldp+2705,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU] >> 1U))));
        bufp->chgBit(oldp+2706,((1U & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+2707,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x13U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x1fU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU]))));
        bufp->chgBit(oldp+2708,((1U & (IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+2709,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x20U])));
        bufp->chgBit(oldp+2710,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x20U] >> 1U))));
        bufp->chgBit(oldp+2711,((1U & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+2712,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x14U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x20U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x20U]))));
        bufp->chgBit(oldp+2713,((1U & (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+2714,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x21U])));
        bufp->chgBit(oldp+2715,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x21U] >> 1U))));
        bufp->chgBit(oldp+2716,((1U & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+2717,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x15U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x21U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x21U]))));
        bufp->chgBit(oldp+2718,((1U & (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+2719,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x22U])));
        bufp->chgBit(oldp+2720,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x22U] >> 1U))));
        bufp->chgBit(oldp+2721,((1U & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+2722,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x16U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x22U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x22U]))));
        bufp->chgBit(oldp+2723,((1U & (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+2724,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x23U])));
        bufp->chgBit(oldp+2725,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x23U] >> 1U))));
        bufp->chgBit(oldp+2726,((1U & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+2727,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x17U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x23U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x23U]))));
        bufp->chgBit(oldp+2728,((1U & (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+2729,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x24U])));
        bufp->chgBit(oldp+2730,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x24U] >> 1U))));
        bufp->chgBit(oldp+2731,((1U & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+2732,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x18U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x24U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x24U]))));
        bufp->chgBit(oldp+2733,((1U & (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+2734,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x25U])));
        bufp->chgBit(oldp+2735,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x25U] >> 1U))));
        bufp->chgBit(oldp+2736,((1U & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+2737,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x19U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x25U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x25U]))));
        bufp->chgBit(oldp+2738,((1U & (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+2739,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x26U])));
        bufp->chgBit(oldp+2740,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x26U] >> 1U))));
        bufp->chgBit(oldp+2741,((1U & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+2742,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x1aU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x26U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x26U]))));
        bufp->chgBit(oldp+2743,((1U & (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+2744,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x27U])));
        bufp->chgBit(oldp+2745,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x27U] >> 1U))));
        bufp->chgBit(oldp+2746,((1U & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+2747,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x1bU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x27U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x27U]))));
        bufp->chgBit(oldp+2748,((1U & (IData)((0x1ffffffffffffe00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 9U))))));
        bufp->chgBit(oldp+2749,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [3U])));
        bufp->chgBit(oldp+2750,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [3U] >> 1U))));
        bufp->chgBit(oldp+2751,((1U & (~ (IData)((0x1ffffffffffffe00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 9U)))))));
        bufp->chgBit(oldp+2752,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffffffe00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 9U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffffffe00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 9U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [3U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [3U]))));
        bufp->chgBit(oldp+2753,((1U & (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+2754,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x28U])));
        bufp->chgBit(oldp+2755,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x28U] >> 1U))));
        bufp->chgBit(oldp+2756,((1U & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+2757,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x1cU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x28U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x28U]))));
        bufp->chgBit(oldp+2758,((1U & (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+2759,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x29U])));
        bufp->chgBit(oldp+2760,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x29U] >> 1U))));
        bufp->chgBit(oldp+2761,((1U & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+2762,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x1dU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x29U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x29U]))));
        bufp->chgBit(oldp+2763,((1U & (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+2764,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x2aU])));
        bufp->chgBit(oldp+2765,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU] >> 1U))));
        bufp->chgBit(oldp+2766,((1U & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+2767,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x1eU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x2aU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU]))));
        bufp->chgBit(oldp+2768,((1U & (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+2769,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x2bU])));
        bufp->chgBit(oldp+2770,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU] >> 1U))));
        bufp->chgBit(oldp+2771,((1U & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+2772,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x1fU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x2bU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU]))));
        bufp->chgBit(oldp+2773,((1U & (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+2774,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x2cU])));
        bufp->chgBit(oldp+2775,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU] >> 1U))));
        bufp->chgBit(oldp+2776,((1U & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+2777,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x20U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x2cU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU]))));
        bufp->chgBit(oldp+2778,((1U & (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+2779,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x2dU])));
        bufp->chgBit(oldp+2780,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU] >> 1U))));
        bufp->chgBit(oldp+2781,((1U & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+2782,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x21U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x2dU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU]))));
        bufp->chgBit(oldp+2783,((1U & (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+2784,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x2eU])));
        bufp->chgBit(oldp+2785,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU] >> 1U))));
        bufp->chgBit(oldp+2786,((1U & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+2787,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x22U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x2eU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU]))));
        bufp->chgBit(oldp+2788,((1U & (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+2789,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x2fU])));
        bufp->chgBit(oldp+2790,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU] >> 1U))));
        bufp->chgBit(oldp+2791,((1U & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+2792,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x23U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x2fU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU]))));
        bufp->chgBit(oldp+2793,((1U & (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+2794,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x30U])));
        bufp->chgBit(oldp+2795,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x30U] >> 1U))));
        bufp->chgBit(oldp+2796,((1U & (~ (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+2797,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x24U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x30U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x30U]))));
        bufp->chgBit(oldp+2798,((1U & (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+2799,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x31U])));
        bufp->chgBit(oldp+2800,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x31U] >> 1U))));
        bufp->chgBit(oldp+2801,((1U & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+2802,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x25U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x31U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x31U]))));
        bufp->chgBit(oldp+2803,((1U & (IData)((0xfffffffffffff00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 8U))))));
        bufp->chgBit(oldp+2804,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [4U])));
        bufp->chgBit(oldp+2805,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [4U] >> 1U))));
        bufp->chgBit(oldp+2806,((1U & (~ (IData)((0xfffffffffffff00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 8U)))))));
        bufp->chgBit(oldp+2807,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffffff00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 8U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffffff00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 8U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [4U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [4U]))));
        bufp->chgBit(oldp+2808,((1U & (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+2809,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x32U])));
        bufp->chgBit(oldp+2810,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x32U] >> 1U))));
        bufp->chgBit(oldp+2811,((1U & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+2812,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x26U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x32U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x32U]))));
        bufp->chgBit(oldp+2813,((1U & (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+2814,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x33U])));
        bufp->chgBit(oldp+2815,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x33U] >> 1U))));
        bufp->chgBit(oldp+2816,((1U & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+2817,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x27U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x33U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x33U]))));
        bufp->chgBit(oldp+2818,((1U & (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+2819,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x34U])));
        bufp->chgBit(oldp+2820,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x34U] >> 1U))));
        bufp->chgBit(oldp+2821,((1U & (~ (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+2822,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x28U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x34U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x34U]))));
        bufp->chgBit(oldp+2823,((1U & (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+2824,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x35U])));
        bufp->chgBit(oldp+2825,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x35U] >> 1U))));
        bufp->chgBit(oldp+2826,((1U & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+2827,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x29U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x35U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x35U]))));
        bufp->chgBit(oldp+2828,((1U & (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+2829,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x36U])));
        bufp->chgBit(oldp+2830,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x36U] >> 1U))));
        bufp->chgBit(oldp+2831,((1U & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+2832,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x2aU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x36U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x36U]))));
        bufp->chgBit(oldp+2833,((1U & (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+2834,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x37U])));
        bufp->chgBit(oldp+2835,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x37U] >> 1U))));
        bufp->chgBit(oldp+2836,((1U & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+2837,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x2bU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x37U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x37U]))));
        bufp->chgBit(oldp+2838,((1U & (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+2839,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x38U])));
        bufp->chgBit(oldp+2840,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x38U] >> 1U))));
        bufp->chgBit(oldp+2841,((1U & (~ (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+2842,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x2cU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x38U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x38U]))));
        bufp->chgBit(oldp+2843,((1U & (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+2844,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x39U])));
        bufp->chgBit(oldp+2845,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x39U] >> 1U))));
        bufp->chgBit(oldp+2846,((1U & (~ (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+2847,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x2dU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x39U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x39U]))));
        bufp->chgBit(oldp+2848,((1U & (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+2849,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x3aU])));
        bufp->chgBit(oldp+2850,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU] >> 1U))));
        bufp->chgBit(oldp+2851,((1U & (~ (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+2852,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2eU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x2eU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x3aU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU]))));
        bufp->chgBit(oldp+2853,((1U & (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+2854,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x3bU])));
        bufp->chgBit(oldp+2855,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU] >> 1U))));
        bufp->chgBit(oldp+2856,((1U & (~ (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+2857,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2fU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x2fU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x3bU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU]))));
        bufp->chgBit(oldp+2858,((1U & (IData)((0x7ffffffffffff80ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 7U))))));
        bufp->chgBit(oldp+2859,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [5U])));
        bufp->chgBit(oldp+2860,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [5U] >> 1U))));
        bufp->chgBit(oldp+2861,((1U & (~ (IData)((0x7ffffffffffff80ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 7U)))))));
        bufp->chgBit(oldp+2862,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffffff80ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 7U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffffff80ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 7U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [5U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [5U]))));
        bufp->chgBit(oldp+2863,((1U & (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+2864,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x3cU])));
        bufp->chgBit(oldp+2865,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU] >> 1U))));
        bufp->chgBit(oldp+2866,((1U & (~ (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+2867,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x30U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x30U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x3cU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU]))));
        bufp->chgBit(oldp+2868,((1U & (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+2869,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x3dU])));
        bufp->chgBit(oldp+2870,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU] >> 1U))));
        bufp->chgBit(oldp+2871,((1U & (~ (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+2872,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x31U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((7ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x31U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x3dU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU]))));
        bufp->chgBit(oldp+2873,((1U & (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+2874,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x3eU])));
        bufp->chgBit(oldp+2875,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU] >> 1U))));
        bufp->chgBit(oldp+2876,((1U & (~ (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+2877,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x32U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((3ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x32U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x3eU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU]))));
        bufp->chgBit(oldp+2878,((1U & (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+2879,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x3fU])));
        bufp->chgBit(oldp+2880,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU] >> 1U))));
        bufp->chgBit(oldp+2881,((1U & (~ (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+2882,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x33U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x33U))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x3fU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU]))));
        bufp->chgBit(oldp+2883,((1U & (IData)((0x3ffffffffffffc0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 6U))))));
        bufp->chgBit(oldp+2884,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [6U])));
        bufp->chgBit(oldp+2885,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [6U] >> 1U))));
        bufp->chgBit(oldp+2886,((1U & (~ (IData)((0x3ffffffffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 6U)))))));
        bufp->chgBit(oldp+2887,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 6U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffffffc0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 6U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [6U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [6U]))));
        bufp->chgBit(oldp+2888,((1U & (IData)((0x1ffffffffffffe0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 5U))))));
        bufp->chgBit(oldp+2889,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [7U])));
        bufp->chgBit(oldp+2890,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [7U] >> 1U))));
        bufp->chgBit(oldp+2891,((1U & (~ (IData)((0x1ffffffffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 5U)))))));
        bufp->chgBit(oldp+2892,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 5U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffffffe0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 5U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [7U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [7U]))));
        bufp->chgBit(oldp+2893,((1U & (IData)((0xfffffffffffff0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 4U))))));
        bufp->chgBit(oldp+2894,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [8U])));
        bufp->chgBit(oldp+2895,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [8U] >> 1U))));
        bufp->chgBit(oldp+2896,((1U & (~ (IData)((0xfffffffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 4U)))))));
        bufp->chgBit(oldp+2897,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 4U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffffff0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 4U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [8U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [8U]))));
        bufp->chgBit(oldp+2898,((1U & (IData)((0x7ffffffffffff8ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 3U))))));
        bufp->chgBit(oldp+2899,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [9U])));
        bufp->chgBit(oldp+2900,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [9U] >> 1U))));
        bufp->chgBit(oldp+2901,((1U & (~ (IData)((0x7ffffffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 3U)))))));
        bufp->chgBit(oldp+2902,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 3U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffffff8ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 3U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [9U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [9U]))));
        bufp->chgBit(oldp+2903,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+2904,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                               >> 0xcU)))));
        bufp->chgCData(oldp+2905,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                 >> 0xdU)))),3);
        bufp->chgQData(oldp+2906,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   << 0xeU)),64);
        bufp->chgQData(oldp+2908,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__14__KET____DOT__ai__OutX),64);
        bufp->chgBit(oldp+2910,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x))));
        bufp->chgBit(oldp+2911,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx));
        bufp->chgBit(oldp+2912,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x));
        bufp->chgBit(oldp+2913,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x));
        bufp->chgBit(oldp+2914,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xeU)))));
        bufp->chgBit(oldp+2915,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xeU))))));
        bufp->chgBit(oldp+2916,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xeU)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                << 0xeU)))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x))));
        bufp->chgBit(oldp+2917,((1U & (IData)((0x3ffffffffffff0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 4U))))));
        bufp->chgBit(oldp+2918,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0xaU])));
        bufp->chgBit(oldp+2919,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0xaU] >> 1U))));
        bufp->chgBit(oldp+2920,((1U & (~ (IData)((0x3ffffffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 4U)))))));
        bufp->chgBit(oldp+2921,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 4U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffffff0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 4U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0xaU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0xaU]))));
        bufp->chgBit(oldp+2922,((1U & (IData)((0x1ffffffffffff8ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 3U))))));
        bufp->chgBit(oldp+2923,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0xbU])));
        bufp->chgBit(oldp+2924,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0xbU] >> 1U))));
        bufp->chgBit(oldp+2925,((1U & (~ (IData)((0x1ffffffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 3U)))))));
        bufp->chgBit(oldp+2926,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 3U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffffff8ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 3U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0xbU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0xbU]))));
        bufp->chgBit(oldp+2927,((1U & (IData)((0xffffffffffffcULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 2U))))));
        bufp->chgBit(oldp+2928,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0xcU])));
        bufp->chgBit(oldp+2929,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0xcU] >> 1U))));
        bufp->chgBit(oldp+2930,((1U & (~ (IData)((0xffffffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 2U)))))));
        bufp->chgBit(oldp+2931,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 2U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffffffffcULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 2U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0xcU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0xcU]))));
        bufp->chgBit(oldp+2932,((1U & (IData)((0x7fffffffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 1U))))));
        bufp->chgBit(oldp+2933,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0xdU])));
        bufp->chgBit(oldp+2934,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0xdU] >> 1U))));
        bufp->chgBit(oldp+2935,((1U & (~ (IData)((0x7fffffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 1U)))))));
        bufp->chgBit(oldp+2936,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 1U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffffffeULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 1U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0xdU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0xdU]))));
        bufp->chgBit(oldp+2937,((1U & (IData)((0x3ffffffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+2938,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0xeU])));
        bufp->chgBit(oldp+2939,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0xeU] >> 1U))));
        bufp->chgBit(oldp+2940,((1U & (~ (IData)((0x3ffffffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+2941,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffffffULL 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0xeU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0xeU]))));
        bufp->chgBit(oldp+2942,((1U & (IData)((0x1ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))));
        bufp->chgBit(oldp+2943,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0xfU])));
        bufp->chgBit(oldp+2944,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+2945,((1U & (~ (IData)((0x1ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+2946,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 1U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0xfU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0xfU]))));
        bufp->chgBit(oldp+2947,((1U & (IData)((0xffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))));
        bufp->chgBit(oldp+2948,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x10U])));
        bufp->chgBit(oldp+2949,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+2950,((1U & (~ (IData)((0xffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+2951,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 2U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x10U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x10U]))));
        bufp->chgBit(oldp+2952,((1U & (IData)((0x7fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))));
        bufp->chgBit(oldp+2953,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x11U])));
        bufp->chgBit(oldp+2954,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x11U] >> 1U))));
        bufp->chgBit(oldp+2955,((1U & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+2956,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 3U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 3U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x11U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x11U]))));
        bufp->chgBit(oldp+2957,((1U & (IData)((0x3fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))));
        bufp->chgBit(oldp+2958,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x12U])));
        bufp->chgBit(oldp+2959,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x12U] >> 1U))));
        bufp->chgBit(oldp+2960,((1U & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+2961,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 4U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 4U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x12U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x12U]))));
        bufp->chgBit(oldp+2962,((1U & (IData)((0x1fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))));
        bufp->chgBit(oldp+2963,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x13U])));
        bufp->chgBit(oldp+2964,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x13U] >> 1U))));
        bufp->chgBit(oldp+2965,((1U & (~ (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+2966,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 5U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 5U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x13U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x13U]))));
        bufp->chgBit(oldp+2967,((1U & (IData)((0x7fffffffffffe000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xdU))))));
        bufp->chgBit(oldp+2968,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [1U])));
        bufp->chgBit(oldp+2969,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [1U] >> 1U))));
        bufp->chgBit(oldp+2970,((1U & (~ (IData)((0x7fffffffffffe000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xdU)))))));
        bufp->chgBit(oldp+2971,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffffffe000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xdU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffffffe000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 0xdU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [1U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [1U]))));
        bufp->chgBit(oldp+2972,((1U & (IData)((0xfffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))));
        bufp->chgBit(oldp+2973,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x14U])));
        bufp->chgBit(oldp+2974,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x14U] >> 1U))));
        bufp->chgBit(oldp+2975,((1U & (~ (IData)((0xfffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+2976,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 6U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 6U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x14U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x14U]))));
        bufp->chgBit(oldp+2977,((1U & (IData)((0x7ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))));
        bufp->chgBit(oldp+2978,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x15U])));
        bufp->chgBit(oldp+2979,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x15U] >> 1U))));
        bufp->chgBit(oldp+2980,((1U & (~ (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+2981,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 7U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 7U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x15U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x15U]))));
        bufp->chgBit(oldp+2982,((1U & (IData)((0x3ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))));
        bufp->chgBit(oldp+2983,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x16U])));
        bufp->chgBit(oldp+2984,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x16U] >> 1U))));
        bufp->chgBit(oldp+2985,((1U & (~ (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+2986,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 8U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 8U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x16U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x16U]))));
        bufp->chgBit(oldp+2987,((1U & (IData)((0x1ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))));
        bufp->chgBit(oldp+2988,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x17U])));
        bufp->chgBit(oldp+2989,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x17U] >> 1U))));
        bufp->chgBit(oldp+2990,((1U & (~ (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+2991,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 9U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 9U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x17U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x17U]))));
        bufp->chgBit(oldp+2992,((1U & (IData)((0xffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+2993,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x18U])));
        bufp->chgBit(oldp+2994,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x18U] >> 1U))));
        bufp->chgBit(oldp+2995,((1U & (~ (IData)((0xffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+2996,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xaU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x18U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x18U]))));
        bufp->chgBit(oldp+2997,((1U & (IData)((0x7fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+2998,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x19U])));
        bufp->chgBit(oldp+2999,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x19U] >> 1U))));
        bufp->chgBit(oldp+3000,((1U & (~ (IData)((0x7fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+3001,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xbU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x19U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x19U]))));
        bufp->chgBit(oldp+3002,((1U & (IData)((0x3fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+3003,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x1aU])));
        bufp->chgBit(oldp+3004,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU] >> 1U))));
        bufp->chgBit(oldp+3005,((1U & (~ (IData)((0x3fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+3006,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xcU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x1aU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU]))));
        bufp->chgBit(oldp+3007,((1U & (IData)((0x1fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+3008,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x1bU])));
        bufp->chgBit(oldp+3009,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU] >> 1U))));
        bufp->chgBit(oldp+3010,((1U & (~ (IData)((0x1fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+3011,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xdU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x1bU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU]))));
        bufp->chgBit(oldp+3012,((1U & (IData)((0xfffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+3013,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x1cU])));
        bufp->chgBit(oldp+3014,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU] >> 1U))));
        bufp->chgBit(oldp+3015,((1U & (~ (IData)((0xfffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+3016,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xeU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x1cU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU]))));
        bufp->chgBit(oldp+3017,((1U & (IData)((0x7ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+3018,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x1dU])));
        bufp->chgBit(oldp+3019,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU] >> 1U))));
        bufp->chgBit(oldp+3020,((1U & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+3021,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xfU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x1dU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU]))));
    }
}
