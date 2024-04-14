// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


void Vsimu_top___024root__traceChgSub0(Vsimu_top___024root* vlSelf, VerilatedFst* tracep);
void Vsimu_top___024root__traceChgSub1(Vsimu_top___024root* vlSelf, VerilatedFst* tracep);
void Vsimu_top___024root__traceChgSub2(Vsimu_top___024root* vlSelf, VerilatedFst* tracep);
void Vsimu_top___024root__traceChgSub3(Vsimu_top___024root* vlSelf, VerilatedFst* tracep);
void Vsimu_top___024root__traceChgSub4(Vsimu_top___024root* vlSelf, VerilatedFst* tracep);

void Vsimu_top___024root__traceChgTop0(void* voidSelf, VerilatedFst* tracep) {
    Vsimu_top___024root* const __restrict vlSelf = static_cast<Vsimu_top___024root*>(voidSelf);
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vsimu_top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
        Vsimu_top___024root__traceChgSub1((&vlSymsp->TOP), tracep);
        Vsimu_top___024root__traceChgSub2((&vlSymsp->TOP), tracep);
        Vsimu_top___024root__traceChgSub3((&vlSymsp->TOP), tracep);
        Vsimu_top___024root__traceChgSub4((&vlSymsp->TOP), tracep);
    }
}

void Vsimu_top___024root__traceChgSub0(Vsimu_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgCData(oldp+0,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[0]),2);
            tracep->chgCData(oldp+1,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[1]),2);
            tracep->chgCData(oldp+2,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[2]),2);
            tracep->chgCData(oldp+3,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[3]),2);
            tracep->chgCData(oldp+4,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[4]),2);
            tracep->chgCData(oldp+5,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[0]),2);
            tracep->chgCData(oldp+6,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[1]),2);
            tracep->chgCData(oldp+7,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[2]),2);
            tracep->chgCData(oldp+8,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[3]),2);
            tracep->chgCData(oldp+9,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[4]),2);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+10,(vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr),32);
            tracep->chgCData(oldp+11,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen))),4);
            tracep->chgCData(oldp+12,(vlSelf->simu_top__DOT__soc__DOT__cpu_awsize),3);
            tracep->chgBit(oldp+13,(vlSelf->simu_top__DOT__soc__DOT__cpu_awvalid));
            tracep->chgIData(oldp+14,(vlSelf->simu_top__DOT__soc__DOT__cpu_wdata),32);
            tracep->chgCData(oldp+15,(vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb),4);
            tracep->chgBit(oldp+16,(vlSelf->simu_top__DOT__soc__DOT__cpu_wlast));
            tracep->chgBit(oldp+17,(vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid));
            tracep->chgCData(oldp+18,(vlSelf->simu_top__DOT__soc__DOT__m0_bid),4);
            tracep->chgCData(oldp+19,(vlSelf->simu_top__DOT__soc__DOT__m0_bresp),2);
            tracep->chgBit(oldp+20,(vlSelf->simu_top__DOT__soc__DOT__cpu_bready));
            tracep->chgCData(oldp+21,(vlSelf->simu_top__DOT__soc__DOT__cpu_arid),4);
            tracep->chgIData(oldp+22,(vlSelf->simu_top__DOT__soc__DOT__cpu_araddr),32);
            tracep->chgCData(oldp+23,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen))),4);
            tracep->chgCData(oldp+24,(vlSelf->simu_top__DOT__soc__DOT__cpu_arsize),3);
            tracep->chgBit(oldp+25,(vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid));
            tracep->chgCData(oldp+26,(vlSelf->simu_top__DOT__soc__DOT__m0_rid),4);
            tracep->chgCData(oldp+27,(vlSelf->simu_top__DOT__soc__DOT__m0_rresp),2);
            tracep->chgBit(oldp+28,(vlSelf->simu_top__DOT__soc__DOT__m0_rlast));
            tracep->chgBit(oldp+29,(vlSelf->simu_top__DOT__soc__DOT__cpu_rready));
            tracep->chgBit(oldp+30,(vlSelf->simu_top__DOT__soc__DOT__m0_awready));
            tracep->chgBit(oldp+31,(vlSelf->simu_top__DOT__soc__DOT__m0_wready));
            tracep->chgBit(oldp+32,(vlSelf->simu_top__DOT__soc__DOT__m0_bvalid));
            tracep->chgBit(oldp+33,(vlSelf->simu_top__DOT__soc__DOT__m0_arready));
            tracep->chgBit(oldp+34,(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid));
            tracep->chgBit(oldp+35,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)))));
            tracep->chgBit(oldp+36,(vlSelf->simu_top__DOT__soc__DOT__s0_wready));
            tracep->chgCData(oldp+37,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data),4);
            tracep->chgBit(oldp+38,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid));
            tracep->chgBit(oldp+39,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)))));
            tracep->chgCData(oldp+40,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid),4);
            tracep->chgBit(oldp+41,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast));
            tracep->chgBit(oldp+42,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid));
            tracep->chgBit(oldp+43,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)))));
            tracep->chgBit(oldp+44,(vlSelf->simu_top__DOT__soc__DOT__conf_s_wready));
            tracep->chgCData(oldp+45,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data),4);
            tracep->chgBit(oldp+46,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid));
            tracep->chgBit(oldp+47,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)))));
            tracep->chgCData(oldp+48,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid),4);
            tracep->chgIData(oldp+49,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg),32);
            tracep->chgBit(oldp+50,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast));
            tracep->chgBit(oldp+51,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid));
            tracep->chgBit(oldp+52,(vlSelf->simu_top__DOT__soc__DOT__apb_s_awready));
            tracep->chgBit(oldp+53,(vlSelf->simu_top__DOT__soc__DOT__apb_s_wready));
            tracep->chgCData(oldp+54,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id),4);
            tracep->chgBit(oldp+55,(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid));
            tracep->chgBit(oldp+56,(vlSelf->simu_top__DOT__soc__DOT__apb_s_arready));
            tracep->chgCData(oldp+57,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id),4);
            tracep->chgIData(oldp+58,(((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                        ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32
                                        : ((1U == (3U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                            ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                               << 8U)
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                                ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                   << 0x10U)
                                                : (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                                    ? 
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                    << 0x18U)
                                                    : 0U))))),32);
            tracep->chgBit(oldp+59,(vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast));
            tracep->chgBit(oldp+60,(vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid));
            tracep->chgIData(oldp+61,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr),32);
            tracep->chgIData(oldp+62,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr),32);
            tracep->chgIData(oldp+63,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata),32);
            tracep->chgCData(oldp+64,(((IData)(vlSelf->simu_top__DOT__soc__DOT__uart0_int) 
                                       << 1U)),8);
            tracep->chgBit(oldp+65,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                           >> 1U))));
            tracep->chgBit(oldp+66,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))));
            tracep->chgBit(oldp+67,(vlSelf->simu_top__DOT__soc__DOT__uart0_int));
            tracep->chgBit(oldp+68,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                            >> 4U) 
                                           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out))))));
            tracep->chgBit(oldp+69,(vlSelf->simu_top__DOT__soc__DOT__uart0_txd_oe));
            tracep->chgBit(oldp+70,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg) 
                                           ^ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                              >> 3U)))));
            tracep->chgBit(oldp+71,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)))));
            tracep->chgCData(oldp+72,(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen),8);
            tracep->chgCData(oldp+73,(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen),8);
            tracep->chgBit(oldp+74,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_valid));
            tracep->chgCData(oldp+75,((0xfU & ((- (IData)(
                                                          (1U 
                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[3U] 
                                                              >> 5U)))) 
                                               & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_valid)))))),4);
            tracep->chgIData(oldp+76,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[0U]),32);
            tracep->chgWData(oldp+77,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus),71);
            tracep->chgQData(oldp+80,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_if_bus),37);
            tracep->chgBit(oldp+82,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr_ok));
            tracep->chgCData(oldp+83,(((3U == (3U & 
                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U]))
                                        ? 2U : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U]))
                                                 ? 1U
                                                 : 0U))),2);
            tracep->chgIData(oldp+84,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_wdata),32);
            tracep->chgBit(oldp+85,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__has_int));
            tracep->chgBit(oldp+86,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn));
            tracep->chgIData(oldp+87,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0]),32);
            tracep->chgIData(oldp+88,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[1]),32);
            tracep->chgIData(oldp+89,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[2]),32);
            tracep->chgIData(oldp+90,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[3]),32);
            tracep->chgIData(oldp+91,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[4]),32);
            tracep->chgIData(oldp+92,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[5]),32);
            tracep->chgIData(oldp+93,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[6]),32);
            tracep->chgIData(oldp+94,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[7]),32);
            tracep->chgIData(oldp+95,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[8]),32);
            tracep->chgIData(oldp+96,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[9]),32);
            tracep->chgIData(oldp+97,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[10]),32);
            tracep->chgIData(oldp+98,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[11]),32);
            tracep->chgIData(oldp+99,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[12]),32);
            tracep->chgIData(oldp+100,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[13]),32);
            tracep->chgIData(oldp+101,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[14]),32);
            tracep->chgIData(oldp+102,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[15]),32);
            tracep->chgIData(oldp+103,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[16]),32);
            tracep->chgIData(oldp+104,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[17]),32);
            tracep->chgIData(oldp+105,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[18]),32);
            tracep->chgIData(oldp+106,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[19]),32);
            tracep->chgIData(oldp+107,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[20]),32);
            tracep->chgIData(oldp+108,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[21]),32);
            tracep->chgIData(oldp+109,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[22]),32);
            tracep->chgIData(oldp+110,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[23]),32);
            tracep->chgIData(oldp+111,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[24]),32);
            tracep->chgIData(oldp+112,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[25]),32);
            tracep->chgIData(oldp+113,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[26]),32);
            tracep->chgIData(oldp+114,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[27]),32);
            tracep->chgIData(oldp+115,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[28]),32);
            tracep->chgIData(oldp+116,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[29]),32);
            tracep->chgIData(oldp+117,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[30]),32);
            tracep->chgIData(oldp+118,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[31]),32);
            tracep->chgBit(oldp+119,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en));
            tracep->chgBit(oldp+120,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcacop_en));
            tracep->chgCData(oldp+121,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                              >> 0x18U))),2);
            tracep->chgBit(oldp+122,(((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en))));
            tracep->chgBit(oldp+123,(((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en))));
            tracep->chgBit(oldp+124,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                       >> 0x10U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid))));
            tracep->chgBit(oldp+125,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                       >> 0xfU) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid))));
            tracep->chgCData(oldp+126,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__code),6);
            tracep->chgBit(oldp+127,((4U == (7U & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                   >> 0x1cU)))));
            tracep->chgIData(oldp+128,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi 
                                        >> 0xdU)),19);
            tracep->chgSData(oldp+129,((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid)),10);
            tracep->chgBit(oldp+130,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                            >> 3U))));
            tracep->chgBit(oldp+131,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                            >> 4U))));
            tracep->chgCData(oldp+132,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
                                        >> 0x1dU)),3);
            tracep->chgCData(oldp+133,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
                                        >> 0x1dU)),3);
            tracep->chgCData(oldp+134,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
                                              >> 0x19U))),3);
            tracep->chgCData(oldp+135,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
                                              >> 0x19U))),3);
            tracep->chgBit(oldp+136,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0)));
            tracep->chgBit(oldp+137,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
                                            >> 3U))));
            tracep->chgBit(oldp+138,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1)));
            tracep->chgBit(oldp+139,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
                                            >> 3U))));
            tracep->chgBit(oldp+140,((1U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                                   >> 7U)))));
            tracep->chgBit(oldp+141,((1U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
                                                   >> 4U)))));
            tracep->chgBit(oldp+142,((1U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
                                                   >> 4U)))));
            tracep->chgBit(oldp+143,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit));
            tracep->chgIData(oldp+144,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid),32);
            tracep->chgQData(oldp+145,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64),64);
            tracep->chgCData(oldp+147,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)),5);
            tracep->chgBit(oldp+148,((1U & ((0x3fU 
                                             == (0x3fU 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                                                    >> 0x10U))) 
                                            | (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx 
                                                  >> 0x1fU))))));
            tracep->chgCData(oldp+149,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx 
                                                 >> 0x18U))),6);
            tracep->chgIData(oldp+150,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0),32);
            tracep->chgIData(oldp+151,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1),32);
            tracep->chgIData(oldp+152,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era),32);
            tracep->chgIData(oldp+153,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry),32);
            tracep->chgIData(oldp+154,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry),32);
            tracep->chgBit(oldp+155,((1U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                                   >> 5U)))));
            tracep->chgIData(oldp+156,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd),32);
            tracep->chgIData(oldp+157,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd),32);
            tracep->chgIData(oldp+158,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ecfg),32);
            tracep->chgIData(oldp+159,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat),32);
            tracep->chgIData(oldp+160,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv),32);
            tracep->chgIData(oldp+161,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx),32);
            tracep->chgIData(oldp+162,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi),32);
            tracep->chgIData(oldp+163,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid),32);
            tracep->chgIData(oldp+164,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save0),32);
            tracep->chgIData(oldp+165,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save1),32);
            tracep->chgIData(oldp+166,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save2),32);
            tracep->chgIData(oldp+167,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save3),32);
            tracep->chgIData(oldp+168,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg),32);
            tracep->chgIData(oldp+169,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval),32);
            tracep->chgIData(oldp+170,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cpuid),32);
            tracep->chgIData(oldp+171,(((0xfffffffeU 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit))),32);
            tracep->chgIData(oldp+172,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0),32);
            tracep->chgIData(oldp+173,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1),32);
            tracep->chgIData(oldp+174,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl),32);
            tracep->chgIData(oldp+175,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh),32);
            tracep->chgBit(oldp+176,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_req));
            tracep->chgCData(oldp+177,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_type),3);
            tracep->chgIData(oldp+178,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_addr),32);
            tracep->chgBit(oldp+179,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last));
            tracep->chgBit(oldp+180,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_req));
            tracep->chgCData(oldp+181,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type),3);
            tracep->chgIData(oldp+182,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_addr),32);
            tracep->chgBit(oldp+183,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last));
            tracep->chgBit(oldp+184,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req));
            tracep->chgIData(oldp+185,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache)
                                         ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_tag 
                                             << 0xcU) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index) 
                                                << 4U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset)))
                                         : ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_replaceWay)
                                               ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__output_buffer 
                                                  >> 1U)
                                               : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__output_buffer 
                                                  >> 1U)) 
                                             << 0xcU) 
                                            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index) 
                                               << 4U)))),32);
            tracep->chgCData(oldp+186,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache)
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb)
                                         : 0xfU)),4);
            tracep->chgWData(oldp+187,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data),128);
            tracep->chgBit(oldp+191,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state))));
            tracep->chgBit(oldp+192,((0U != (3U & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                      >> 0x1fU))))));
            tracep->chgCData(oldp+193,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
                                                 >> 0xbU))),8);
            tracep->chgIData(oldp+194,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
                                         << 0x1fU) 
                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[0U] 
                                           >> 1U))),32);
            tracep->chgIData(oldp+195,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                                         << 0x1cU) 
                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                           >> 4U))),32);
            tracep->chgCData(oldp+196,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
                                                 >> 3U))),8);
            tracep->chgIData(oldp+197,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[2U] 
                                         << 0xdU) | 
                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
                                         >> 0x13U))),32);
            tracep->chgBit(oldp+198,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
                                            >> 2U))));
            tracep->chgBit(oldp+199,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_valid));
            tracep->chgBit(oldp+200,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_cnt_inst));
            tracep->chgQData(oldp+201,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_timer_64),64);
            tracep->chgCData(oldp+203,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst_ld_en),8);
            tracep->chgIData(oldp+204,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_paddr),32);
            tracep->chgIData(oldp+205,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_vaddr),32);
            tracep->chgCData(oldp+206,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst_st_en),8);
            tracep->chgIData(oldp+207,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_paddr),32);
            tracep->chgIData(oldp+208,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_vaddr),32);
            tracep->chgIData(oldp+209,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_data),32);
            tracep->chgBit(oldp+210,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_rstat_en));
            tracep->chgIData(oldp+211,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_data),32);
            tracep->chgBit(oldp+212,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wen));
            tracep->chgCData(oldp+213,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdest),8);
            tracep->chgIData(oldp+214,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdata),32);
            tracep->chgIData(oldp+215,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_pc),32);
            tracep->chgIData(oldp+216,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst),32);
            tracep->chgBit(oldp+217,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_excp_flush));
            tracep->chgBit(oldp+218,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ertn));
            tracep->chgCData(oldp+219,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_ecode),6);
            tracep->chgBit(oldp+220,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_tlbfill_en));
            tracep->chgCData(oldp+221,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_rand_index),5);
            tracep->chgBit(oldp+222,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__trap));
            tracep->chgCData(oldp+223,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__trap_code),8);
            tracep->chgQData(oldp+224,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cycleCnt),64);
            tracep->chgQData(oldp+226,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__instrCnt),64);
            tracep->chgBit(oldp+228,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_valid));
            tracep->chgIData(oldp+229,(((IData)(4U) 
                                        + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_pc)),32);
            tracep->chgBit(oldp+230,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__excp));
            tracep->chgBit(oldp+231,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__ertn));
            tracep->chgBit(oldp+232,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__tlb_excp));
            tracep->chgBit(oldp+233,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__refetch));
            tracep->chgBit(oldp+234,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__idle));
            tracep->chgIData(oldp+235,((IData)((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid)
                                                  ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r
                                                  : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_if_bus) 
                                                >> 5U))),32);
            tracep->chgIData(oldp+236,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_pc),32);
            tracep->chgBit(oldp+237,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_ADEF_EXCP));
            tracep->chgBit(oldp+238,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_tlbr));
            tracep->chgBit(oldp+239,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_ppi));
            tracep->chgBit(oldp+240,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_pif));
            tracep->chgBit(oldp+241,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_reflush));
            tracep->chgBit(oldp+242,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__excp) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__ertn)) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__refetch)) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__tlb_excp)) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__idle))));
            tracep->chgIData(oldp+243,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__inst_sram_rdata_r),32);
            tracep->chgBit(oldp+244,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__inst_sram_rdata_r_valid));
            tracep->chgQData(oldp+245,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r),37);
            tracep->chgBit(oldp+247,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid));
            tracep->chgQData(oldp+248,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__id_to_if_bus_r),34);
            tracep->chgBit(oldp+250,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__id_to_if_bus_r_valid));
            tracep->chgBit(oldp+251,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__bd_done));
            tracep->chgBit(oldp+252,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__excp_reg));
            tracep->chgBit(oldp+253,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__idle_lock));
            tracep->chgIData(oldp+254,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0]),32);
            tracep->chgIData(oldp+255,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[1]),32);
            tracep->chgIData(oldp+256,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[2]),32);
            tracep->chgIData(oldp+257,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[3]),32);
            tracep->chgIData(oldp+258,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[4]),32);
            tracep->chgIData(oldp+259,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[5]),32);
            tracep->chgIData(oldp+260,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[6]),32);
            tracep->chgIData(oldp+261,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[7]),32);
            tracep->chgIData(oldp+262,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[8]),32);
            tracep->chgIData(oldp+263,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[9]),32);
            tracep->chgIData(oldp+264,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[10]),32);
            tracep->chgIData(oldp+265,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[11]),32);
            tracep->chgIData(oldp+266,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[12]),32);
            tracep->chgIData(oldp+267,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[13]),32);
            tracep->chgIData(oldp+268,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[14]),32);
            tracep->chgIData(oldp+269,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[15]),32);
            tracep->chgIData(oldp+270,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[16]),32);
            tracep->chgIData(oldp+271,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[17]),32);
            tracep->chgIData(oldp+272,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[18]),32);
            tracep->chgIData(oldp+273,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[19]),32);
            tracep->chgIData(oldp+274,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[20]),32);
            tracep->chgIData(oldp+275,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[21]),32);
            tracep->chgIData(oldp+276,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[22]),32);
            tracep->chgIData(oldp+277,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[23]),32);
            tracep->chgIData(oldp+278,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[24]),32);
            tracep->chgIData(oldp+279,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[25]),32);
            tracep->chgIData(oldp+280,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[26]),32);
            tracep->chgIData(oldp+281,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[27]),32);
            tracep->chgIData(oldp+282,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[28]),32);
            tracep->chgIData(oldp+283,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[29]),32);
            tracep->chgIData(oldp+284,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[30]),32);
            tracep->chgIData(oldp+285,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[31]),32);
            tracep->chgBit(oldp+286,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_valid));
            tracep->chgWData(oldp+287,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data),68);
            tracep->chgBit(oldp+290,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel_r));
            tracep->chgBit(oldp+291,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel_r_valid));
            tracep->chgIData(oldp+292,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[2U] 
                                         << 0x1cU) 
                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                           >> 4U))),32);
            tracep->chgIData(oldp+293,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                         << 0x1cU) 
                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                           >> 4U))),32);
            tracep->chgBit(oldp+294,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                            >> 3U))));
            tracep->chgBit(oldp+295,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+296,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+297,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U])));
            tracep->chgBit(oldp+298,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U] 
                                            >> 6U))));
            tracep->chgBit(oldp+299,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+300,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])),5);
            tracep->chgIData(oldp+301,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]),32);
            tracep->chgIData(oldp+302,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[0U]),32);
            tracep->chgCData(oldp+303,((0x3fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                  << 2U) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                    >> 0x1eU)))),6);
            tracep->chgCData(oldp+304,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 0x1aU))),4);
            tracep->chgCData(oldp+305,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                              >> 0x18U))),2);
            tracep->chgCData(oldp+306,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                 >> 0x13U))),5);
            tracep->chgCData(oldp+307,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                 >> 4U))),5);
            tracep->chgCData(oldp+308,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                 >> 9U))),5);
            tracep->chgCData(oldp+309,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                 >> 0xeU))),5);
            tracep->chgSData(oldp+310,((0xfffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                  >> 0xeU))),12);
            tracep->chgSData(oldp+311,((0x3fffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0xeU))),14);
            tracep->chgIData(oldp+312,((0xfffffU & 
                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                         >> 9U))),20);
            tracep->chgSData(oldp+313,((0xffffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0xeU))),16);
            tracep->chgIData(oldp+314,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__i26),26);
            tracep->chgQData(oldp+315,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d),64);
            tracep->chgSData(oldp+317,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d),16);
            tracep->chgCData(oldp+318,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d),4);
            tracep->chgIData(oldp+319,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d),32);
            tracep->chgBit(oldp+320,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntid));
            tracep->chgBit(oldp+321,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntvl));
            tracep->chgBit(oldp+322,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntvh));
            tracep->chgBit(oldp+323,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_add));
            tracep->chgBit(oldp+324,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sub));
            tracep->chgBit(oldp+325,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slt));
            tracep->chgBit(oldp+326,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sltu));
            tracep->chgBit(oldp+327,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_nor));
            tracep->chgBit(oldp+328,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_and));
            tracep->chgBit(oldp+329,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_or));
            tracep->chgBit(oldp+330,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_xor));
            tracep->chgBit(oldp+331,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_orn));
            tracep->chgBit(oldp+332,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_andn));
            tracep->chgBit(oldp+333,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sll));
            tracep->chgBit(oldp+334,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_srl));
            tracep->chgBit(oldp+335,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sra));
            tracep->chgBit(oldp+336,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mul));
            tracep->chgBit(oldp+337,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mulh));
            tracep->chgBit(oldp+338,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mulhu));
            tracep->chgBit(oldp+339,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_div));
            tracep->chgBit(oldp+340,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mod));
            tracep->chgBit(oldp+341,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_divu));
            tracep->chgBit(oldp+342,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_modu));
            tracep->chgBit(oldp+343,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_break));
            tracep->chgBit(oldp+344,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_syscall));
            tracep->chgBit(oldp+345,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slli));
            tracep->chgBit(oldp+346,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_srli));
            tracep->chgBit(oldp+347,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_srai));
            tracep->chgBit(oldp+348,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slti));
            tracep->chgBit(oldp+349,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sltui));
            tracep->chgBit(oldp+350,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_addi));
            tracep->chgBit(oldp+351,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_andi));
            tracep->chgBit(oldp+352,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ori));
            tracep->chgBit(oldp+353,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_xori));
            tracep->chgBit(oldp+354,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrrd));
            tracep->chgBit(oldp+355,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrwr));
            tracep->chgBit(oldp+356,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrxchg));
            tracep->chgBit(oldp+357,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_cacop));
            tracep->chgBit(oldp+358,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbsrch));
            tracep->chgBit(oldp+359,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbrd));
            tracep->chgBit(oldp+360,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbwr));
            tracep->chgBit(oldp+361,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbfill));
            tracep->chgBit(oldp+362,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ertn));
            tracep->chgBit(oldp+363,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_idle));
            tracep->chgBit(oldp+364,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_invtlb));
            tracep->chgBit(oldp+365,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i));
            tracep->chgBit(oldp+366,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll));
            tracep->chgBit(oldp+367,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sc));
            tracep->chgBit(oldp+368,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b));
            tracep->chgBit(oldp+369,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h));
            tracep->chgBit(oldp+370,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w));
            tracep->chgBit(oldp+371,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b));
            tracep->chgBit(oldp+372,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h));
            tracep->chgBit(oldp+373,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w));
            tracep->chgBit(oldp+374,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_bu));
            tracep->chgBit(oldp+375,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_hu));
            tracep->chgBit(oldp+376,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                    >> 0x13U)))));
            tracep->chgBit(oldp+377,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                    >> 0x14U)))));
            tracep->chgBit(oldp+378,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                    >> 0x15U)))));
            tracep->chgBit(oldp+379,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                    >> 0x16U)))));
            tracep->chgBit(oldp+380,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                    >> 0x17U)))));
            tracep->chgBit(oldp+381,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_lu12i));
            tracep->chgBit(oldp+382,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                    >> 0x18U)))));
            tracep->chgBit(oldp+383,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                    >> 0x19U)))));
            tracep->chgBit(oldp+384,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                    >> 0x1aU)))));
            tracep->chgBit(oldp+385,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                    >> 0x1bU)))));
            tracep->chgSData(oldp+386,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__alu_op),14);
            tracep->chgBit(oldp+387,(((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b)) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h)) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_bu)) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_hu)) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll))));
            tracep->chgBit(oldp+388,((1U & (((((((0ULL 
                                                  != 
                                                  (0xfc00000ULL 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w)) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b)) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h)) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrwr)) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrxchg)) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sc)))));
            tracep->chgBit(oldp+389,((1U & ((0ULL != 
                                             (0x280000ULL 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i)))));
            tracep->chgBit(oldp+390,((1U & ((((((((
                                                   ((((((((((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slli) 
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
                                                      | (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                                 >> 0x13U))) 
                                                     | (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                                >> 0x15U))) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slti)) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sltui)) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_andi)) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ori)) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_xori)) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i)) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_cacop)) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll)) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sc)))));
            tracep->chgBit(oldp+391,((IData)((0ULL 
                                              != (0x280000ULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)))));
            tracep->chgBit(oldp+392,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b)) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h)) 
                                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_excp)))));
            tracep->chgBit(oldp+393,((1U & ((((((((
                                                   (((((0U 
                                                        == 
                                                        (1U 
                                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w))) 
                                                       & (0U 
                                                          == 
                                                          (1U 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b)))) 
                                                      & (0U 
                                                         == 
                                                         (1U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h)))) 
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
                                            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_excp))))));
            tracep->chgBit(oldp+394,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slli) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_srli)) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_srai))));
            tracep->chgBit(oldp+395,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_andi) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ori)) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_xori))));
            tracep->chgBit(oldp+396,(((((((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_addi) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w)) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b)) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h)) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_bu)) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_hu)) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w)) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b)) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h)) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slti)) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sltui)) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_cacop))));
            tracep->chgBit(oldp+397,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sc))));
            tracep->chgBit(oldp+398,((IData)((0ULL 
                                              != (0xfc80000ULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)))));
            tracep->chgBit(oldp+399,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_lu12i) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i))));
            tracep->chgBit(oldp+400,((IData)((0ULL 
                                              != (0x300000ULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)))));
            tracep->chgBit(oldp+401,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__need_rj));
            tracep->chgBit(oldp+402,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__need_rkd));
            tracep->chgIData(oldp+403,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__imm),32);
            tracep->chgIData(oldp+404,(((IData)((0ULL 
                                                 != 
                                                 (0x300000ULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__i26 
                                                            >> 0x19U)))) 
                                             << 0x1cU) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__i26 
                                               << 2U))
                                         : (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                            >> 0x1dU)))) 
                                             << 0x12U) 
                                            | (0x3fffcU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                  >> 0xcU))))),32);
            tracep->chgIData(oldp+405,((((- (IData)(
                                                    (1U 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                        >> 0x13U)))) 
                                         << 0x12U) 
                                        | (0x3fffcU 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                              >> 0xcU)))),32);
            tracep->chgCData(oldp+406,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrA),5);
            tracep->chgCData(oldp+407,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrB),5);
            tracep->chgIData(oldp+408,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regDataA),32);
            tracep->chgIData(oldp+409,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regDataB),32);
            tracep->chgCData(oldp+410,((0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntid)
                                                  ? 
                                                 ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   << 0x17U) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                     >> 9U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                              >> 0x15U)))
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    & ((((IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                                  >> 0xeU)) 
                                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                                                            >> 1U)) 
                                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                                                           >> 3U)) 
                                                       & (0U 
                                                          != 
                                                          (0x30U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d))))
                                                    ? 0U
                                                    : 
                                                   ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                     << 0x1cU) 
                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                       >> 4U))))))),5);
            tracep->chgBit(oldp+411,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_div) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mod))));
            tracep->chgBit(oldp+412,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mul) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mulh))));
            tracep->chgBit(oldp+413,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mod) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_modu)) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_div)) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_divu))));
            tracep->chgCData(oldp+414,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mul)
                                         ? 1U : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mulh) 
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
                                                    : 0U))))),3);
            tracep->chgCData(oldp+415,((3U & (((1U 
                                                & (- (IData)(
                                                             (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b) 
                                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_bu)) 
                                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b))))) 
                                               | (2U 
                                                  & (- (IData)(
                                                               (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h) 
                                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_hu)) 
                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h)))))) 
                                              | (- (IData)(
                                                           ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w) 
                                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w)) 
                                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll)) 
                                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sc))))))),2);
            tracep->chgBit(oldp+416,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h)) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w)) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll))));
            tracep->chgCData(oldp+417,((3U & (((1U 
                                                & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrrd)))) 
                                               | (2U 
                                                  & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrwr))))) 
                                              | (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrxchg)))))),2);
            tracep->chgBit(oldp+418,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ine));
            tracep->chgBit(oldp+419,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__INE_EXCP));
            tracep->chgBit(oldp+420,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_excp));
            tracep->chgSData(oldp+421,(((0x2000U & 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                          << 0xaU)) 
                                        | ((0x1000U 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                               << 0xaU)) 
                                           | ((0x800U 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                  << 0xaU)) 
                                              | ((0x400U 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                     << 0xaU)) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_syscall) 
                                                     << 9U) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_break) 
                                                        << 8U) 
                                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__INE_EXCP) 
                                                           << 7U) 
                                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__has_int))))))))),14);
            tracep->chgCData(oldp+422,((3U & (((1U 
                                                & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntid)))) 
                                               | (2U 
                                                  & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntvl))))) 
                                              | (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntvh)))))),2);
            tracep->chgCData(oldp+423,((((((1U & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbsrch)))) 
                                           | (2U & 
                                              (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbrd))))) 
                                          | (3U & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbwr))))) 
                                         | (4U & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbfill))))) 
                                        | (5U & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_invtlb)))))),3);
            tracep->chgCData(oldp+424,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll) 
                                         << 5U) | (
                                                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_hu) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_bu) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b))))))),8);
            tracep->chgCData(oldp+425,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b)))),8);
            tracep->chgBit(oldp+426,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrrd) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrwr)) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrxchg)) 
                                      & (5U == (0x3fffU 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0xeU))))));
            tracep->chgIData(oldp+427,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0]),32);
            tracep->chgIData(oldp+428,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[1]),32);
            tracep->chgIData(oldp+429,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[2]),32);
            tracep->chgIData(oldp+430,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[3]),32);
            tracep->chgIData(oldp+431,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[4]),32);
            tracep->chgIData(oldp+432,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[5]),32);
            tracep->chgIData(oldp+433,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[6]),32);
            tracep->chgIData(oldp+434,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[7]),32);
            tracep->chgIData(oldp+435,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[8]),32);
            tracep->chgIData(oldp+436,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[9]),32);
            tracep->chgIData(oldp+437,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[10]),32);
            tracep->chgIData(oldp+438,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[11]),32);
            tracep->chgIData(oldp+439,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[12]),32);
            tracep->chgIData(oldp+440,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[13]),32);
            tracep->chgIData(oldp+441,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[14]),32);
            tracep->chgIData(oldp+442,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[15]),32);
            tracep->chgIData(oldp+443,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[16]),32);
            tracep->chgIData(oldp+444,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[17]),32);
            tracep->chgIData(oldp+445,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[18]),32);
            tracep->chgIData(oldp+446,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[19]),32);
            tracep->chgIData(oldp+447,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[20]),32);
            tracep->chgIData(oldp+448,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[21]),32);
            tracep->chgIData(oldp+449,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[22]),32);
            tracep->chgIData(oldp+450,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[23]),32);
            tracep->chgIData(oldp+451,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[24]),32);
            tracep->chgIData(oldp+452,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[25]),32);
            tracep->chgIData(oldp+453,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[26]),32);
            tracep->chgIData(oldp+454,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[27]),32);
            tracep->chgIData(oldp+455,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[28]),32);
            tracep->chgIData(oldp+456,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[29]),32);
            tracep->chgIData(oldp+457,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[30]),32);
            tracep->chgIData(oldp+458,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[31]),32);
            tracep->chgIData(oldp+459,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[0]),32);
            tracep->chgIData(oldp+460,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[1]),32);
            tracep->chgIData(oldp+461,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[2]),32);
            tracep->chgIData(oldp+462,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[3]),32);
            tracep->chgIData(oldp+463,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[4]),32);
            tracep->chgIData(oldp+464,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[5]),32);
            tracep->chgIData(oldp+465,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[6]),32);
            tracep->chgIData(oldp+466,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[7]),32);
            tracep->chgIData(oldp+467,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[8]),32);
            tracep->chgIData(oldp+468,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[9]),32);
            tracep->chgIData(oldp+469,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[10]),32);
            tracep->chgIData(oldp+470,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[11]),32);
            tracep->chgIData(oldp+471,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[12]),32);
            tracep->chgIData(oldp+472,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[13]),32);
            tracep->chgIData(oldp+473,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[14]),32);
            tracep->chgIData(oldp+474,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[15]),32);
            tracep->chgIData(oldp+475,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[16]),32);
            tracep->chgIData(oldp+476,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[17]),32);
            tracep->chgIData(oldp+477,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[18]),32);
            tracep->chgIData(oldp+478,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[19]),32);
            tracep->chgIData(oldp+479,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[20]),32);
            tracep->chgIData(oldp+480,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[21]),32);
            tracep->chgIData(oldp+481,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[22]),32);
            tracep->chgIData(oldp+482,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[23]),32);
            tracep->chgIData(oldp+483,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[24]),32);
            tracep->chgIData(oldp+484,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[25]),32);
            tracep->chgIData(oldp+485,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[26]),32);
            tracep->chgIData(oldp+486,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[27]),32);
            tracep->chgIData(oldp+487,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[28]),32);
            tracep->chgIData(oldp+488,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[29]),32);
            tracep->chgIData(oldp+489,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[30]),32);
            tracep->chgIData(oldp+490,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[31]),32);
            tracep->chgBit(oldp+491,((((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en)) 
                                      | ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en)))));
            tracep->chgBit(oldp+492,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_valid));
            tracep->chgWData(oldp+493,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data),254);
            tracep->chgSData(oldp+501,((0xfffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                                  >> 0x10U))),12);
            tracep->chgBit(oldp+502,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+503,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+504,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+505,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                                 >> 8U))),5);
            tracep->chgIData(oldp+506,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                         << 0x18U) 
                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                           >> 8U))),32);
            tracep->chgIData(oldp+507,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                         << 0x18U) 
                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                           >> 8U))),32);
            tracep->chgIData(oldp+508,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                         << 0x18U) 
                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                           >> 8U))),32);
            tracep->chgBit(oldp+509,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                            >> 7U))));
            tracep->chgBit(oldp+510,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                            >> 6U))));
            tracep->chgBit(oldp+511,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                            >> 5U))));
            tracep->chgCData(oldp+512,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                              >> 2U))),3);
            tracep->chgCData(oldp+513,((3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U])),2);
            tracep->chgSData(oldp+514,((0x3fffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[3U] 
                                                   >> 0x11U))),14);
            tracep->chgCData(oldp+515,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[3U] 
                                              >> 0xfU))),2);
            tracep->chgBit(oldp+516,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[3U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+517,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[3U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+518,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[3U] 
                                      >> 0x1fU)));
            tracep->chgSData(oldp+519,((0x3fffU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[3U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                                      >> 0x1fU)))),14);
            tracep->chgCData(oldp+520,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                              >> 0x1dU))),2);
            tracep->chgCData(oldp+521,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                                 >> 0x15U))),5);
            tracep->chgCData(oldp+522,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                              >> 0x1aU))),3);
            tracep->chgBit(oldp+523,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+524,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+525,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                            >> 0x12U))));
            tracep->chgIData(oldp+526,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                         << 0xeU) | 
                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[1U] 
                                         >> 0x12U))),32);
            tracep->chgIData(oldp+527,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[1U] 
                                         << 0xeU) | 
                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[0U] 
                                         >> 0x12U))),32);
            tracep->chgCData(oldp+528,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[0U] 
                                                 >> 0xaU))),8);
            tracep->chgCData(oldp+529,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[0U] 
                                                 >> 2U))),8);
            tracep->chgBit(oldp+530,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+531,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[0U])));
            tracep->chgIData(oldp+532,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult),32);
            tracep->chgIData(oldp+533,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__need_corr)
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q
                                         : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_q)),32);
            tracep->chgIData(oldp+534,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s4),32);
            tracep->chgBit(oldp+535,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q) 
                                            >> 5U))));
            tracep->chgBit(oldp+536,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q) 
                                            >> 5U))));
            tracep->chgBit(oldp+537,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))));
            tracep->chgBit(oldp+538,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__div_finish_ready_i));
            tracep->chgBit(oldp+539,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__cacop_load));
            tracep->chgBit(oldp+540,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__ALE_EXCP));
            tracep->chgBit(oldp+541,((((5U == (7U & 
                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                                >> 0x1aU))) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_valid)) 
                                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn)))));
            tracep->chgBit(oldp+542,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult 
                                            >> 0xcU))));
            tracep->chgBit(oldp+543,(((0U != (3U & 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[3U] 
                                               >> 0xfU))) 
                                      | (0U != (3U 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                                   >> 0x1dU))))));
            tracep->chgSData(oldp+544,((0xfffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                                  >> 0x10U))),14);
            tracep->chgBit(oldp+545,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+546,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+547,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+548,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+549,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+550,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+551,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+552,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+553,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+554,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+555,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+556,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+557,(0U));
            tracep->chgBit(oldp+558,(0U));
            tracep->chgIData(oldp+559,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_result),32);
            tracep->chgIData(oldp+560,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__slt_result),32);
            tracep->chgIData(oldp+561,((1U & (~ (IData)(
                                                        (1ULL 
                                                         & ((((QData)((IData)(
                                                                              ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                                                                << 0x18U) 
                                                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                                                >> 8U)))) 
                                                              + (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_b))) 
                                                             + (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_cin))) 
                                                            >> 0x20U)))))),32);
            tracep->chgIData(oldp+562,((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                          << 0x18U) 
                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                            >> 8U)) 
                                        & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                            << 0x18U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                              >> 8U)))),32);
            tracep->chgIData(oldp+563,((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                          << 0x18U) 
                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                            >> 8U)) 
                                        & (~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                               << 0x18U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                                 >> 8U))))),32);
            tracep->chgIData(oldp+564,((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                          << 0x18U) 
                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                            >> 8U)) 
                                        | (~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                               << 0x18U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                                 >> 8U))))),32);
            tracep->chgIData(oldp+565,((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__or_result)),32);
            tracep->chgIData(oldp+566,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__or_result),32);
            tracep->chgIData(oldp+567,((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                          << 0x18U) 
                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                            >> 8U)) 
                                        ^ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                            << 0x18U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                              >> 8U)))),32);
            tracep->chgIData(oldp+568,((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                          << 0x18U) 
                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                            >> 8U)) 
                                        << (0x1fU & 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                             >> 8U)))),32);
            tracep->chgQData(oldp+569,(((((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                                                          >> 0x1aU) 
                                                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                                                            >> 7U))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                                             << 0x18U) 
                                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                               >> 8U))))) 
                                        >> (0x1fU & 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                             >> 8U)))),64);
            tracep->chgIData(oldp+571,((IData)(((((QData)((IData)(
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                                                                >> 0x1aU) 
                                                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                                                                >> 7U))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                                                     << 0x18U) 
                                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                                       >> 8U))))) 
                                                >> 
                                                (0x1fU 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                                    >> 8U))))),32);
            tracep->chgIData(oldp+572,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_b),32);
            tracep->chgBit(oldp+573,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_cin));
            tracep->chgBit(oldp+574,((1U & (IData)(
                                                   (1ULL 
                                                    & ((((QData)((IData)(
                                                                         ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                                                           << 0x18U) 
                                                                          | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                                             >> 8U)))) 
                                                         + (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_b))) 
                                                        + (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_cin))) 
                                                       >> 0x20U))))));
            tracep->chgQData(oldp+575,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX),64);
            tracep->chgQData(oldp+577,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY),33);
            tracep->chgIData(oldp+579,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__Carry),17);
            tracep->chgQData(oldp+580,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[0]),64);
            tracep->chgQData(oldp+582,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[1]),64);
            tracep->chgQData(oldp+584,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[2]),64);
            tracep->chgQData(oldp+586,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[3]),64);
            tracep->chgQData(oldp+588,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[4]),64);
            tracep->chgQData(oldp+590,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[5]),64);
            tracep->chgQData(oldp+592,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[6]),64);
            tracep->chgQData(oldp+594,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[7]),64);
            tracep->chgQData(oldp+596,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[8]),64);
            tracep->chgQData(oldp+598,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[9]),64);
            tracep->chgQData(oldp+600,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[10]),64);
            tracep->chgQData(oldp+602,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[11]),64);
            tracep->chgQData(oldp+604,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[12]),64);
            tracep->chgQData(oldp+606,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[13]),64);
            tracep->chgQData(oldp+608,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[14]),64);
            tracep->chgQData(oldp+610,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[15]),64);
            tracep->chgQData(oldp+612,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[16]),64);
            tracep->chgCData(oldp+614,((6U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY) 
                                              << 1U))),3);
            tracep->chgQData(oldp+615,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir__OutX),64);
            tracep->chgBit(oldp+617,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x))));
            tracep->chgBit(oldp+618,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx));
            tracep->chgBit(oldp+619,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x));
            tracep->chgBit(oldp+620,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x));
            tracep->chgBit(oldp+621,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                    >> 1U)))));
            tracep->chgBit(oldp+622,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY))));
            tracep->chgBit(oldp+623,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))));
            tracep->chgBit(oldp+624,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))));
            tracep->chgBit(oldp+625,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x))));
            tracep->chgBit(oldp+626,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 1U)))));
            tracep->chgBit(oldp+627,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [1U])));
            tracep->chgBit(oldp+628,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [1U] >> 1U))));
            tracep->chgBit(oldp+629,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 1U))))));
            tracep->chgBit(oldp+630,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 1U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 1U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [1U] >> 1U)))));
            tracep->chgBit(oldp+631,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 2U)))));
            tracep->chgBit(oldp+632,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [2U])));
            tracep->chgBit(oldp+633,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [2U] >> 1U))));
            tracep->chgBit(oldp+634,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 2U))))));
            tracep->chgBit(oldp+635,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 2U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 2U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [2U] >> 1U)))));
            tracep->chgBit(oldp+636,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 3U)))));
            tracep->chgBit(oldp+637,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [3U])));
            tracep->chgBit(oldp+638,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [3U] >> 1U))));
            tracep->chgBit(oldp+639,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 3U))))));
            tracep->chgBit(oldp+640,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 3U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 3U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [3U] >> 1U)))));
            tracep->chgBit(oldp+641,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 4U)))));
            tracep->chgBit(oldp+642,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [4U])));
            tracep->chgBit(oldp+643,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [4U] >> 1U))));
            tracep->chgBit(oldp+644,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 4U))))));
            tracep->chgBit(oldp+645,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 4U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [4U] >> 1U)))));
            tracep->chgBit(oldp+646,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 5U)))));
            tracep->chgBit(oldp+647,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [5U])));
            tracep->chgBit(oldp+648,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [5U] >> 1U))));
            tracep->chgBit(oldp+649,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 5U))))));
            tracep->chgBit(oldp+650,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 5U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [5U] >> 1U)))));
            tracep->chgBit(oldp+651,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 6U)))));
            tracep->chgBit(oldp+652,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [6U])));
            tracep->chgBit(oldp+653,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [6U] >> 1U))));
            tracep->chgBit(oldp+654,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 6U))))));
            tracep->chgBit(oldp+655,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 6U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [6U] >> 1U)))));
            tracep->chgBit(oldp+656,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 7U)))));
            tracep->chgBit(oldp+657,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [7U])));
            tracep->chgBit(oldp+658,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [7U] >> 1U))));
            tracep->chgBit(oldp+659,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 7U))))));
            tracep->chgBit(oldp+660,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 7U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [7U] >> 1U)))));
            tracep->chgBit(oldp+661,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 8U)))));
            tracep->chgBit(oldp+662,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [8U])));
            tracep->chgBit(oldp+663,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [8U] >> 1U))));
            tracep->chgBit(oldp+664,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 8U))))));
            tracep->chgBit(oldp+665,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 8U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [8U] >> 1U)))));
            tracep->chgBit(oldp+666,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 9U)))));
            tracep->chgBit(oldp+667,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [9U])));
            tracep->chgBit(oldp+668,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [9U] >> 1U))));
            tracep->chgBit(oldp+669,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 9U))))));
            tracep->chgBit(oldp+670,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 9U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [9U] >> 1U)))));
            tracep->chgBit(oldp+671,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xaU)))));
            tracep->chgBit(oldp+672,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xaU])));
            tracep->chgBit(oldp+673,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xaU] 
                                            >> 1U))));
            tracep->chgBit(oldp+674,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xaU))))));
            tracep->chgBit(oldp+675,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0xaU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xaU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+676,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xbU)))));
            tracep->chgBit(oldp+677,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xbU])));
            tracep->chgBit(oldp+678,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xbU] 
                                            >> 1U))));
            tracep->chgBit(oldp+679,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xbU))))));
            tracep->chgBit(oldp+680,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0xbU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xbU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+681,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xcU)))));
            tracep->chgBit(oldp+682,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xcU])));
            tracep->chgBit(oldp+683,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xcU] 
                                            >> 1U))));
            tracep->chgBit(oldp+684,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xcU))))));
            tracep->chgBit(oldp+685,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0xcU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xcU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+686,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xdU)))));
            tracep->chgBit(oldp+687,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xdU])));
            tracep->chgBit(oldp+688,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xdU] 
                                            >> 1U))));
            tracep->chgBit(oldp+689,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xdU))))));
            tracep->chgBit(oldp+690,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0xdU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xdU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+691,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xeU)))));
            tracep->chgBit(oldp+692,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xeU])));
            tracep->chgBit(oldp+693,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xeU] 
                                            >> 1U))));
            tracep->chgBit(oldp+694,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xeU))))));
            tracep->chgBit(oldp+695,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0xeU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xeU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+696,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0xfU)))));
            tracep->chgBit(oldp+697,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xfU])));
            tracep->chgBit(oldp+698,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xfU] 
                                            >> 1U))));
            tracep->chgBit(oldp+699,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xfU))))));
            tracep->chgBit(oldp+700,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0xfU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xfU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+701,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x10U)))));
            tracep->chgBit(oldp+702,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x10U])));
            tracep->chgBit(oldp+703,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x10U] 
                                            >> 1U))));
            tracep->chgBit(oldp+704,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x10U))))));
            tracep->chgBit(oldp+705,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x10U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x10U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+706,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x11U)))));
            tracep->chgBit(oldp+707,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x11U])));
            tracep->chgBit(oldp+708,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x11U] 
                                            >> 1U))));
            tracep->chgBit(oldp+709,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x11U))))));
            tracep->chgBit(oldp+710,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x11U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x11U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+711,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x12U)))));
            tracep->chgBit(oldp+712,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x12U])));
            tracep->chgBit(oldp+713,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x12U] 
                                            >> 1U))));
            tracep->chgBit(oldp+714,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x12U))))));
            tracep->chgBit(oldp+715,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x12U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x12U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+716,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x13U)))));
            tracep->chgBit(oldp+717,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x13U])));
            tracep->chgBit(oldp+718,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x13U] 
                                            >> 1U))));
            tracep->chgBit(oldp+719,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x13U))))));
            tracep->chgBit(oldp+720,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x13U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x13U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+721,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x14U)))));
            tracep->chgBit(oldp+722,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x14U])));
            tracep->chgBit(oldp+723,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x14U] 
                                            >> 1U))));
            tracep->chgBit(oldp+724,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x14U))))));
            tracep->chgBit(oldp+725,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x14U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x14U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+726,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x15U)))));
            tracep->chgBit(oldp+727,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x15U])));
            tracep->chgBit(oldp+728,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x15U] 
                                            >> 1U))));
            tracep->chgBit(oldp+729,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x15U))))));
            tracep->chgBit(oldp+730,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x15U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x15U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+731,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x16U)))));
            tracep->chgBit(oldp+732,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x16U])));
            tracep->chgBit(oldp+733,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x16U] 
                                            >> 1U))));
            tracep->chgBit(oldp+734,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x16U))))));
            tracep->chgBit(oldp+735,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x16U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x16U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+736,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x17U)))));
            tracep->chgBit(oldp+737,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x17U])));
            tracep->chgBit(oldp+738,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x17U] 
                                            >> 1U))));
            tracep->chgBit(oldp+739,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x17U))))));
            tracep->chgBit(oldp+740,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x17U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x17U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+741,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x18U)))));
            tracep->chgBit(oldp+742,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x18U])));
            tracep->chgBit(oldp+743,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x18U] 
                                            >> 1U))));
            tracep->chgBit(oldp+744,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x18U))))));
            tracep->chgBit(oldp+745,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x18U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x18U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+746,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x19U)))));
            tracep->chgBit(oldp+747,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x19U])));
            tracep->chgBit(oldp+748,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x19U] 
                                            >> 1U))));
            tracep->chgBit(oldp+749,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x19U))))));
            tracep->chgBit(oldp+750,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x19U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x19U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+751,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x1aU)))));
            tracep->chgBit(oldp+752,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x1aU])));
            tracep->chgBit(oldp+753,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x1aU] 
                                            >> 1U))));
            tracep->chgBit(oldp+754,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1aU))))));
            tracep->chgBit(oldp+755,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x1aU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x1aU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+756,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x1bU)))));
            tracep->chgBit(oldp+757,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x1bU])));
            tracep->chgBit(oldp+758,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x1bU] 
                                            >> 1U))));
            tracep->chgBit(oldp+759,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1bU))))));
            tracep->chgBit(oldp+760,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x1bU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x1bU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+761,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x1cU)))));
            tracep->chgBit(oldp+762,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x1cU])));
            tracep->chgBit(oldp+763,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x1cU] 
                                            >> 1U))));
            tracep->chgBit(oldp+764,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1cU))))));
            tracep->chgBit(oldp+765,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x1cU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x1cU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+766,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x1dU)))));
            tracep->chgBit(oldp+767,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x1dU])));
            tracep->chgBit(oldp+768,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x1dU] 
                                            >> 1U))));
            tracep->chgBit(oldp+769,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1dU))))));
            tracep->chgBit(oldp+770,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x1dU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x1dU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+771,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x1eU)))));
            tracep->chgBit(oldp+772,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x1eU])));
            tracep->chgBit(oldp+773,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x1eU] 
                                            >> 1U))));
            tracep->chgBit(oldp+774,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1eU))))));
            tracep->chgBit(oldp+775,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x1eU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x1eU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+776,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x1fU)))));
            tracep->chgBit(oldp+777,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x1fU])));
            tracep->chgBit(oldp+778,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x1fU] 
                                            >> 1U))));
            tracep->chgBit(oldp+779,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1fU))))));
            tracep->chgBit(oldp+780,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x1fU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x1fU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+781,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x20U)))));
            tracep->chgBit(oldp+782,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x20U])));
            tracep->chgBit(oldp+783,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x20U] 
                                            >> 1U))));
            tracep->chgBit(oldp+784,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x20U))))));
            tracep->chgBit(oldp+785,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x20U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x20U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+786,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x21U)))));
            tracep->chgBit(oldp+787,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x21U])));
            tracep->chgBit(oldp+788,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x21U] 
                                            >> 1U))));
            tracep->chgBit(oldp+789,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x21U))))));
            tracep->chgBit(oldp+790,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x21U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x21U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+791,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x22U)))));
            tracep->chgBit(oldp+792,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x22U])));
            tracep->chgBit(oldp+793,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x22U] 
                                            >> 1U))));
            tracep->chgBit(oldp+794,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x22U))))));
            tracep->chgBit(oldp+795,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x22U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x22U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+796,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x23U)))));
            tracep->chgBit(oldp+797,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x23U])));
            tracep->chgBit(oldp+798,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x23U] 
                                            >> 1U))));
            tracep->chgBit(oldp+799,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x23U))))));
            tracep->chgBit(oldp+800,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x23U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x23U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+801,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x24U)))));
            tracep->chgBit(oldp+802,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x24U])));
            tracep->chgBit(oldp+803,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x24U] 
                                            >> 1U))));
            tracep->chgBit(oldp+804,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x24U))))));
            tracep->chgBit(oldp+805,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x24U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x24U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+806,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x25U)))));
            tracep->chgBit(oldp+807,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x25U])));
            tracep->chgBit(oldp+808,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x25U] 
                                            >> 1U))));
            tracep->chgBit(oldp+809,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x25U))))));
            tracep->chgBit(oldp+810,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x25U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x25U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+811,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x26U)))));
            tracep->chgBit(oldp+812,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x26U])));
            tracep->chgBit(oldp+813,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x26U] 
                                            >> 1U))));
            tracep->chgBit(oldp+814,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x26U))))));
            tracep->chgBit(oldp+815,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x26U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x26U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+816,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x27U)))));
            tracep->chgBit(oldp+817,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x27U])));
            tracep->chgBit(oldp+818,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x27U] 
                                            >> 1U))));
            tracep->chgBit(oldp+819,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x27U))))));
            tracep->chgBit(oldp+820,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x27U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x27U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+821,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x28U)))));
            tracep->chgBit(oldp+822,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x28U])));
            tracep->chgBit(oldp+823,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x28U] 
                                            >> 1U))));
            tracep->chgBit(oldp+824,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x28U))))));
            tracep->chgBit(oldp+825,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x28U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x28U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+826,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x29U)))));
            tracep->chgBit(oldp+827,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x29U])));
            tracep->chgBit(oldp+828,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x29U] 
                                            >> 1U))));
            tracep->chgBit(oldp+829,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x29U))))));
            tracep->chgBit(oldp+830,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x29U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x29U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+831,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x2aU)))));
            tracep->chgBit(oldp+832,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x2aU])));
            tracep->chgBit(oldp+833,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x2aU] 
                                            >> 1U))));
            tracep->chgBit(oldp+834,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x2aU))))));
            tracep->chgBit(oldp+835,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x2aU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x2aU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+836,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x2bU)))));
            tracep->chgBit(oldp+837,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x2bU])));
            tracep->chgBit(oldp+838,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x2bU] 
                                            >> 1U))));
            tracep->chgBit(oldp+839,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x2bU))))));
            tracep->chgBit(oldp+840,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x2bU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x2bU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+841,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x2cU)))));
            tracep->chgBit(oldp+842,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x2cU])));
            tracep->chgBit(oldp+843,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x2cU] 
                                            >> 1U))));
            tracep->chgBit(oldp+844,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x2cU))))));
            tracep->chgBit(oldp+845,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x2cU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x2cU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+846,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x2dU)))));
            tracep->chgBit(oldp+847,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x2dU])));
            tracep->chgBit(oldp+848,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x2dU] 
                                            >> 1U))));
            tracep->chgBit(oldp+849,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x2dU))))));
            tracep->chgBit(oldp+850,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x2dU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x2dU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+851,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x2eU)))));
            tracep->chgBit(oldp+852,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x2eU])));
            tracep->chgBit(oldp+853,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x2eU] 
                                            >> 1U))));
            tracep->chgBit(oldp+854,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x2eU))))));
            tracep->chgBit(oldp+855,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x2eU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2eU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x2eU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+856,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x2fU)))));
            tracep->chgBit(oldp+857,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x2fU])));
            tracep->chgBit(oldp+858,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x2fU] 
                                            >> 1U))));
            tracep->chgBit(oldp+859,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x2fU))))));
            tracep->chgBit(oldp+860,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x2fU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2fU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x2fU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+861,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+862,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x30U])));
            tracep->chgBit(oldp+863,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x30U] 
                                            >> 1U))));
            tracep->chgBit(oldp+864,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x30U))))));
            tracep->chgBit(oldp+865,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x30U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x30U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x30U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+866,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x31U)))));
            tracep->chgBit(oldp+867,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x31U])));
            tracep->chgBit(oldp+868,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x31U] 
                                            >> 1U))));
            tracep->chgBit(oldp+869,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x31U))))));
            tracep->chgBit(oldp+870,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x31U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x31U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x31U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+871,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x32U)))));
            tracep->chgBit(oldp+872,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x32U])));
            tracep->chgBit(oldp+873,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x32U] 
                                            >> 1U))));
            tracep->chgBit(oldp+874,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x32U))))));
            tracep->chgBit(oldp+875,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x32U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x32U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x32U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+876,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+877,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x33U])));
            tracep->chgBit(oldp+878,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x33U] 
                                            >> 1U))));
            tracep->chgBit(oldp+879,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x33U))))));
            tracep->chgBit(oldp+880,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x33U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x33U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x33U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+881,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x34U)))));
            tracep->chgBit(oldp+882,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x34U])));
            tracep->chgBit(oldp+883,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x34U] 
                                            >> 1U))));
            tracep->chgBit(oldp+884,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x34U))))));
            tracep->chgBit(oldp+885,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x34U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x34U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x34U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+886,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x35U)))));
            tracep->chgBit(oldp+887,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x35U])));
            tracep->chgBit(oldp+888,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x35U] 
                                            >> 1U))));
            tracep->chgBit(oldp+889,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x35U))))));
            tracep->chgBit(oldp+890,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x35U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x35U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x35U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+891,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x36U)))));
            tracep->chgBit(oldp+892,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x36U])));
            tracep->chgBit(oldp+893,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x36U] 
                                            >> 1U))));
            tracep->chgBit(oldp+894,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x36U))))));
            tracep->chgBit(oldp+895,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x36U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x36U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x36U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+896,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x37U)))));
            tracep->chgBit(oldp+897,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x37U])));
            tracep->chgBit(oldp+898,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x37U] 
                                            >> 1U))));
            tracep->chgBit(oldp+899,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x37U))))));
            tracep->chgBit(oldp+900,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x37U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x37U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x37U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+901,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x38U)))));
            tracep->chgBit(oldp+902,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x38U])));
            tracep->chgBit(oldp+903,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x38U] 
                                            >> 1U))));
            tracep->chgBit(oldp+904,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x38U))))));
            tracep->chgBit(oldp+905,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x38U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x38U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x38U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+906,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x39U)))));
            tracep->chgBit(oldp+907,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x39U])));
            tracep->chgBit(oldp+908,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x39U] 
                                            >> 1U))));
            tracep->chgBit(oldp+909,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x39U))))));
            tracep->chgBit(oldp+910,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x39U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x39U)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x39U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+911,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x3aU)))));
            tracep->chgBit(oldp+912,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x3aU])));
            tracep->chgBit(oldp+913,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x3aU] 
                                            >> 1U))));
            tracep->chgBit(oldp+914,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x3aU))))));
            tracep->chgBit(oldp+915,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x3aU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x3aU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x3aU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+916,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x3bU)))));
            tracep->chgBit(oldp+917,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x3bU])));
            tracep->chgBit(oldp+918,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x3bU] 
                                            >> 1U))));
            tracep->chgBit(oldp+919,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x3bU))))));
            tracep->chgBit(oldp+920,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x3bU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x3bU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x3bU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+921,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x3cU)))));
            tracep->chgBit(oldp+922,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x3cU])));
            tracep->chgBit(oldp+923,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x3cU] 
                                            >> 1U))));
            tracep->chgBit(oldp+924,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x3cU))))));
            tracep->chgBit(oldp+925,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x3cU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x3cU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x3cU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+926,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x3dU)))));
            tracep->chgBit(oldp+927,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x3dU])));
            tracep->chgBit(oldp+928,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x3dU] 
                                            >> 1U))));
            tracep->chgBit(oldp+929,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x3dU))))));
            tracep->chgBit(oldp+930,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x3dU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x3dU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x3dU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+931,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x3eU)))));
            tracep->chgBit(oldp+932,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x3eU])));
            tracep->chgBit(oldp+933,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x3eU] 
                                            >> 1U))));
            tracep->chgBit(oldp+934,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x3eU))))));
            tracep->chgBit(oldp+935,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x3eU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x3eU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x3eU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+936,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+937,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x3fU])));
            tracep->chgBit(oldp+938,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x3fU] 
                                            >> 1U))));
            tracep->chgBit(oldp+939,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x3fU))))));
            tracep->chgBit(oldp+940,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      >> 0x3fU)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x3fU)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x3fU] 
                                            >> 1U)))));
            tracep->chgCData(oldp+941,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellinp__las__y),3);
            tracep->chgQData(oldp+942,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0x20U)),64);
            tracep->chgQData(oldp+944,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__las__OutX),64);
            tracep->chgBit(oldp+946,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x))));
            tracep->chgBit(oldp+947,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx));
            tracep->chgBit(oldp+948,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x));
            tracep->chgBit(oldp+949,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x));
            tracep->chgBit(oldp+950,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellinp__las__y) 
                                            >> 2U))));
            tracep->chgBit(oldp+951,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellinp__las__y) 
                                            >> 1U))));
            tracep->chgBit(oldp+952,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellinp__las__y))));
            tracep->chgBit(oldp+953,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 0x20U)))));
            tracep->chgBit(oldp+954,((1U & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x20U))))));
            tracep->chgBit(oldp+955,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      << 0x20U)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x20U)))) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x))));
            tracep->chgBit(oldp+956,((1U & (IData)(
                                                   (0x7fffffff80000000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x1fU))))));
            tracep->chgBit(oldp+957,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [1U])));
            tracep->chgBit(oldp+958,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                            [1U] >> 1U))));
            tracep->chgBit(oldp+959,((1U & (~ (IData)(
                                                      (0x7fffffff80000000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x1fU)))))));
            tracep->chgBit(oldp+960,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7fffffff80000000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x1fU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                           & (IData)(
                                                     (0x7fffffff80000000ULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                         << 0x1fU))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [1U] >> 1U))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                         [1U]))));
            tracep->chgBit(oldp+961,((1U & (IData)(
                                                   (0x3fffffffc0000000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x1eU))))));
            tracep->chgBit(oldp+962,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [2U])));
            tracep->chgBit(oldp+963,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                            [2U] >> 1U))));
            tracep->chgBit(oldp+964,((1U & (~ (IData)(
                                                      (0x3fffffffc0000000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x1eU)))))));
            tracep->chgBit(oldp+965,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fffffffc0000000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x1eU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                           & (IData)(
                                                     (0x3fffffffc0000000ULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                         << 0x1eU))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [2U] >> 1U))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                         [2U]))));
            tracep->chgBit(oldp+966,((1U & (IData)(
                                                   (0x1fffffffe0000000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x1dU))))));
            tracep->chgBit(oldp+967,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [3U])));
            tracep->chgBit(oldp+968,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                            [3U] >> 1U))));
            tracep->chgBit(oldp+969,((1U & (~ (IData)(
                                                      (0x1fffffffe0000000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x1dU)))))));
            tracep->chgBit(oldp+970,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fffffffe0000000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x1dU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                           & (IData)(
                                                     (0x1fffffffe0000000ULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                         << 0x1dU))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [3U] >> 1U))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                         [3U]))));
            tracep->chgBit(oldp+971,((1U & (IData)(
                                                   (0xffffffff0000000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x1cU))))));
            tracep->chgBit(oldp+972,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [4U])));
            tracep->chgBit(oldp+973,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                            [4U] >> 1U))));
            tracep->chgBit(oldp+974,((1U & (~ (IData)(
                                                      (0xffffffff0000000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x1cU)))))));
            tracep->chgBit(oldp+975,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xffffffff0000000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x1cU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                           & (IData)(
                                                     (0xffffffff0000000ULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                         << 0x1cU))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [4U] >> 1U))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                         [4U]))));
            tracep->chgBit(oldp+976,((1U & (IData)(
                                                   (0x7fffffff8000000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x1bU))))));
            tracep->chgBit(oldp+977,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [5U])));
            tracep->chgBit(oldp+978,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                            [5U] >> 1U))));
            tracep->chgBit(oldp+979,((1U & (~ (IData)(
                                                      (0x7fffffff8000000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x1bU)))))));
            tracep->chgBit(oldp+980,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x7fffffff8000000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x1bU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                           & (IData)(
                                                     (0x7fffffff8000000ULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                         << 0x1bU))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [5U] >> 1U))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                         [5U]))));
            tracep->chgBit(oldp+981,((1U & (IData)(
                                                   (0x3fffffffc000000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x1aU))))));
            tracep->chgBit(oldp+982,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [6U])));
            tracep->chgBit(oldp+983,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                            [6U] >> 1U))));
            tracep->chgBit(oldp+984,((1U & (~ (IData)(
                                                      (0x3fffffffc000000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x1aU)))))));
            tracep->chgBit(oldp+985,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x3fffffffc000000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x1aU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                           & (IData)(
                                                     (0x3fffffffc000000ULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                         << 0x1aU))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [6U] >> 1U))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                         [6U]))));
            tracep->chgBit(oldp+986,((1U & (IData)(
                                                   (0x1fffffffe000000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x19U))))));
            tracep->chgBit(oldp+987,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [7U])));
            tracep->chgBit(oldp+988,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                            [7U] >> 1U))));
            tracep->chgBit(oldp+989,((1U & (~ (IData)(
                                                      (0x1fffffffe000000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x19U)))))));
            tracep->chgBit(oldp+990,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                         & (~ (IData)(
                                                      (0x1fffffffe000000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x19U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                           & (IData)(
                                                     (0x1fffffffe000000ULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                         << 0x19U))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [7U] >> 1U))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                         [7U]))));
            tracep->chgBit(oldp+991,((1U & (IData)(
                                                   (0xffffffff000000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x18U))))));
            tracep->chgBit(oldp+992,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [8U])));
            tracep->chgBit(oldp+993,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                            [8U] >> 1U))));
            tracep->chgBit(oldp+994,((1U & (~ (IData)(
                                                      (0xffffffff000000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x18U)))))));
            tracep->chgBit(oldp+995,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                         & (~ (IData)(
                                                      (0xffffffff000000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x18U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                           & (IData)(
                                                     (0xffffffff000000ULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                         << 0x18U))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [8U] >> 1U))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                         [8U]))));
            tracep->chgBit(oldp+996,((1U & (IData)(
                                                   (0x7fffffff800000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x17U))))));
            tracep->chgBit(oldp+997,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [9U])));
            tracep->chgBit(oldp+998,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                            [9U] >> 1U))));
            tracep->chgBit(oldp+999,((1U & (~ (IData)(
                                                      (0x7fffffff800000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x17U)))))));
            tracep->chgBit(oldp+1000,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffff800000ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0x17U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffff800000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x17U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [9U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [9U]))));
            tracep->chgBit(oldp+1001,((1U & (IData)(
                                                    (0x3fffffffc00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x16U))))));
            tracep->chgBit(oldp+1002,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0xaU])));
            tracep->chgBit(oldp+1003,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0xaU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1004,((1U & (~ (IData)(
                                                       (0x3fffffffc00000ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0x16U)))))));
            tracep->chgBit(oldp+1005,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffc00000ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0x16U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffc00000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x16U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0xaU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0xaU]))));
            tracep->chgBit(oldp+1006,((1U & (IData)(
                                                    (0x1fffffffe00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x15U))))));
            tracep->chgBit(oldp+1007,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0xbU])));
            tracep->chgBit(oldp+1008,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0xbU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1009,((1U & (~ (IData)(
                                                       (0x1fffffffe00000ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0x15U)))))));
            tracep->chgBit(oldp+1010,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffe00000ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0x15U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffe00000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x15U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0xbU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0xbU]))));
            tracep->chgBit(oldp+1011,((1U & (IData)(
                                                    (0xffffffff00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x14U))))));
            tracep->chgBit(oldp+1012,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0xcU])));
            tracep->chgBit(oldp+1013,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0xcU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1014,((1U & (~ (IData)(
                                                       (0xffffffff00000ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0x14U)))))));
            tracep->chgBit(oldp+1015,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffff00000ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0x14U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xffffffff00000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x14U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0xcU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0xcU]))));
            tracep->chgBit(oldp+1016,((1U & (IData)(
                                                    (0x7fffffff80000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x13U))))));
            tracep->chgBit(oldp+1017,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0xdU])));
            tracep->chgBit(oldp+1018,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0xdU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1019,((1U & (~ (IData)(
                                                       (0x7fffffff80000ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0x13U)))))));
            tracep->chgBit(oldp+1020,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffff80000ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0x13U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffff80000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x13U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0xdU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0xdU]))));
            tracep->chgBit(oldp+1021,((1U & (IData)(
                                                    (0x3fffffffc0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x12U))))));
            tracep->chgBit(oldp+1022,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0xeU])));
            tracep->chgBit(oldp+1023,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0xeU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1024,((1U & (~ (IData)(
                                                       (0x3fffffffc0000ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0x12U)))))));
            tracep->chgBit(oldp+1025,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffc0000ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0x12U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffc0000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x12U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0xeU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0xeU]))));
            tracep->chgBit(oldp+1026,((1U & (IData)(
                                                    (0x1fffffffe0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x11U))))));
            tracep->chgBit(oldp+1027,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0xfU])));
            tracep->chgBit(oldp+1028,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0xfU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1029,((1U & (~ (IData)(
                                                       (0x1fffffffe0000ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0x11U)))))));
            tracep->chgBit(oldp+1030,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffe0000ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0x11U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffe0000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x11U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0xfU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0xfU]))));
            tracep->chgBit(oldp+1031,((1U & (IData)(
                                                    (0xffffffff0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x10U))))));
            tracep->chgBit(oldp+1032,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x10U])));
            tracep->chgBit(oldp+1033,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x10U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1034,((1U & (~ (IData)(
                                                       (0xffffffff0000ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0x10U)))))));
            tracep->chgBit(oldp+1035,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffff0000ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0x10U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xffffffff0000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0x10U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x10U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x10U]))));
            tracep->chgBit(oldp+1036,((1U & (IData)(
                                                    (0x7fffffff8000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xfU))))));
            tracep->chgBit(oldp+1037,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x11U])));
            tracep->chgBit(oldp+1038,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x11U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1039,((1U & (~ (IData)(
                                                       (0x7fffffff8000ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0xfU)))))));
            tracep->chgBit(oldp+1040,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffff8000ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0xfU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffff8000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0xfU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x11U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x11U]))));
            tracep->chgBit(oldp+1041,((1U & (IData)(
                                                    (0x3fffffffc000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xeU))))));
            tracep->chgBit(oldp+1042,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x12U])));
            tracep->chgBit(oldp+1043,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x12U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1044,((1U & (~ (IData)(
                                                       (0x3fffffffc000ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0xeU)))))));
            tracep->chgBit(oldp+1045,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffc000ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0xeU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffc000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0xeU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x12U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x12U]))));
            tracep->chgBit(oldp+1046,((1U & (IData)(
                                                    (0x1fffffffe000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xdU))))));
            tracep->chgBit(oldp+1047,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x13U])));
            tracep->chgBit(oldp+1048,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x13U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1049,((1U & (~ (IData)(
                                                       (0x1fffffffe000ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0xdU)))))));
            tracep->chgBit(oldp+1050,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffe000ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0xdU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffe000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0xdU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x13U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x13U]))));
            tracep->chgBit(oldp+1051,((1U & (IData)(
                                                    (0xffffffff000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xcU))))));
            tracep->chgBit(oldp+1052,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x14U])));
            tracep->chgBit(oldp+1053,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x14U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1054,((1U & (~ (IData)(
                                                       (0xffffffff000ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0xcU)))))));
            tracep->chgBit(oldp+1055,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffff000ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0xcU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xffffffff000ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0xcU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x14U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x14U]))));
            tracep->chgBit(oldp+1056,((1U & (IData)(
                                                    (0x7fffffff800ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xbU))))));
            tracep->chgBit(oldp+1057,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x15U])));
            tracep->chgBit(oldp+1058,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x15U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1059,((1U & (~ (IData)(
                                                       (0x7fffffff800ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0xbU)))))));
            tracep->chgBit(oldp+1060,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffff800ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0xbU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffff800ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0xbU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x15U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x15U]))));
            tracep->chgBit(oldp+1061,((1U & (IData)(
                                                    (0x3fffffffc00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xaU))))));
            tracep->chgBit(oldp+1062,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x16U])));
            tracep->chgBit(oldp+1063,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x16U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1064,((1U & (~ (IData)(
                                                       (0x3fffffffc00ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0xaU)))))));
            tracep->chgBit(oldp+1065,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffc00ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 0xaU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffc00ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 0xaU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x16U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x16U]))));
            tracep->chgBit(oldp+1066,((1U & (IData)(
                                                    (0x1fffffffe00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 9U))))));
            tracep->chgBit(oldp+1067,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x17U])));
            tracep->chgBit(oldp+1068,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x17U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1069,((1U & (~ (IData)(
                                                       (0x1fffffffe00ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 9U)))))));
            tracep->chgBit(oldp+1070,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffe00ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 9U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffe00ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 9U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x17U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x17U]))));
            tracep->chgBit(oldp+1071,((1U & (IData)(
                                                    (0xffffffff00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 8U))))));
            tracep->chgBit(oldp+1072,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x18U])));
            tracep->chgBit(oldp+1073,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x18U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1074,((1U & (~ (IData)(
                                                       (0xffffffff00ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 8U)))))));
            tracep->chgBit(oldp+1075,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffff00ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 8U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xffffffff00ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 8U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x18U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x18U]))));
            tracep->chgBit(oldp+1076,((1U & (IData)(
                                                    (0x7fffffff80ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 7U))))));
            tracep->chgBit(oldp+1077,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x19U])));
            tracep->chgBit(oldp+1078,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x19U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1079,((1U & (~ (IData)(
                                                       (0x7fffffff80ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 7U)))))));
            tracep->chgBit(oldp+1080,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffff80ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 7U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffff80ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 7U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x19U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x19U]))));
            tracep->chgBit(oldp+1081,((1U & (IData)(
                                                    (0x3fffffffc0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 6U))))));
            tracep->chgBit(oldp+1082,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x1aU])));
            tracep->chgBit(oldp+1083,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x1aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1084,((1U & (~ (IData)(
                                                       (0x3fffffffc0ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 6U)))))));
            tracep->chgBit(oldp+1085,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffc0ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 6U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffc0ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 6U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x1aU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x1aU]))));
            tracep->chgBit(oldp+1086,((1U & (IData)(
                                                    (0x1fffffffe0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 5U))))));
            tracep->chgBit(oldp+1087,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x1bU])));
            tracep->chgBit(oldp+1088,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x1bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1089,((1U & (~ (IData)(
                                                       (0x1fffffffe0ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 5U)))))));
            tracep->chgBit(oldp+1090,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffe0ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 5U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffe0ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 5U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x1bU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x1bU]))));
            tracep->chgBit(oldp+1091,((1U & (IData)(
                                                    (0xffffffff0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 4U))))));
            tracep->chgBit(oldp+1092,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x1cU])));
            tracep->chgBit(oldp+1093,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x1cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1094,((1U & (~ (IData)(
                                                       (0xffffffff0ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 4U)))))));
            tracep->chgBit(oldp+1095,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffff0ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 4U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xffffffff0ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 4U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x1cU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x1cU]))));
            tracep->chgBit(oldp+1096,((1U & (IData)(
                                                    (0x7fffffff8ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 3U))))));
            tracep->chgBit(oldp+1097,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x1dU])));
            tracep->chgBit(oldp+1098,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x1dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1099,((1U & (~ (IData)(
                                                       (0x7fffffff8ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 3U)))))));
            tracep->chgBit(oldp+1100,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffff8ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 3U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffff8ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 3U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x1dU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x1dU]))));
            tracep->chgBit(oldp+1101,((1U & (IData)(
                                                    (0x3fffffffcULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 2U))))));
            tracep->chgBit(oldp+1102,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x1eU])));
            tracep->chgBit(oldp+1103,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x1eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1104,((1U & (~ (IData)(
                                                       (0x3fffffffcULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 2U)))))));
            tracep->chgBit(oldp+1105,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffcULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 2U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffcULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 2U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x1eU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x1eU]))));
            tracep->chgBit(oldp+1106,((1U & (IData)(
                                                    (0x1fffffffeULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 1U))))));
            tracep->chgBit(oldp+1107,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x1fU])));
            tracep->chgBit(oldp+1108,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x1fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1109,((1U & (~ (IData)(
                                                       (0x1fffffffeULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 1U)))))));
            tracep->chgBit(oldp+1110,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffeULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 1U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffeULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 1U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x1fU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x1fU]))));
            tracep->chgBit(oldp+1111,((1U & (IData)(
                                                    (0xffffffffULL 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))));
            tracep->chgBit(oldp+1112,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x20U])));
            tracep->chgBit(oldp+1113,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x20U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1114,((1U & (~ (IData)(
                                                       (0xffffffffULL 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))))));
            tracep->chgBit(oldp+1115,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffULL 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffULL 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x20U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x20U]))));
            tracep->chgBit(oldp+1116,((1U & (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))));
            tracep->chgBit(oldp+1117,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x21U])));
            tracep->chgBit(oldp+1118,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x21U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1119,((1U & (~ (IData)(
                                                       (0x7fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 1U)))))));
            tracep->chgBit(oldp+1120,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 1U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 1U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x21U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x21U]))));
            tracep->chgBit(oldp+1121,((1U & (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))));
            tracep->chgBit(oldp+1122,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x22U])));
            tracep->chgBit(oldp+1123,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x22U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1124,((1U & (~ (IData)(
                                                       (0x3fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 2U)))))));
            tracep->chgBit(oldp+1125,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 2U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 2U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x22U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x22U]))));
            tracep->chgBit(oldp+1126,((1U & (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))));
            tracep->chgBit(oldp+1127,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x23U])));
            tracep->chgBit(oldp+1128,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x23U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1129,((1U & (~ (IData)(
                                                       (0x1fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 3U)))))));
            tracep->chgBit(oldp+1130,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 3U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 3U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x23U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x23U]))));
            tracep->chgBit(oldp+1131,((1U & (IData)(
                                                    (0xfffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))));
            tracep->chgBit(oldp+1132,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x24U])));
            tracep->chgBit(oldp+1133,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x24U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1134,((1U & (~ (IData)(
                                                       (0xfffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 4U)))))));
            tracep->chgBit(oldp+1135,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 4U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 4U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x24U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x24U]))));
            tracep->chgBit(oldp+1136,((1U & (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))));
            tracep->chgBit(oldp+1137,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x25U])));
            tracep->chgBit(oldp+1138,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x25U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1139,((1U & (~ (IData)(
                                                       (0x7ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 5U)))))));
            tracep->chgBit(oldp+1140,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 5U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 5U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x25U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x25U]))));
            tracep->chgBit(oldp+1141,((1U & (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))));
            tracep->chgBit(oldp+1142,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x26U])));
            tracep->chgBit(oldp+1143,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x26U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1144,((1U & (~ (IData)(
                                                       (0x3ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 6U)))))));
            tracep->chgBit(oldp+1145,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 6U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 6U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x26U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x26U]))));
            tracep->chgBit(oldp+1146,((1U & (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))));
            tracep->chgBit(oldp+1147,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x27U])));
            tracep->chgBit(oldp+1148,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x27U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1149,((1U & (~ (IData)(
                                                       (0x1ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 7U)))))));
            tracep->chgBit(oldp+1150,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 7U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 7U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x27U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x27U]))));
            tracep->chgBit(oldp+1151,((1U & (IData)(
                                                    (0xffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))));
            tracep->chgBit(oldp+1152,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x28U])));
            tracep->chgBit(oldp+1153,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x28U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1154,((1U & (~ (IData)(
                                                       (0xffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 8U)))))));
            tracep->chgBit(oldp+1155,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 8U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 8U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x28U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x28U]))));
            tracep->chgBit(oldp+1156,((1U & (IData)(
                                                    (0x7fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))));
            tracep->chgBit(oldp+1157,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x29U])));
            tracep->chgBit(oldp+1158,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x29U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1159,((1U & (~ (IData)(
                                                       (0x7fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 9U)))))));
            tracep->chgBit(oldp+1160,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 9U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 9U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x29U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x29U]))));
            tracep->chgBit(oldp+1161,((1U & (IData)(
                                                    (0x3fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))));
            tracep->chgBit(oldp+1162,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x2aU])));
            tracep->chgBit(oldp+1163,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x2aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1164,((1U & (~ (IData)(
                                                       (0x3fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xaU)))))));
            tracep->chgBit(oldp+1165,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xaU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xaU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x2aU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x2aU]))));
            tracep->chgBit(oldp+1166,((1U & (IData)(
                                                    (0x1fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))));
            tracep->chgBit(oldp+1167,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x2bU])));
            tracep->chgBit(oldp+1168,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x2bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1169,((1U & (~ (IData)(
                                                       (0x1fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xbU)))))));
            tracep->chgBit(oldp+1170,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xbU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xbU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x2bU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x2bU]))));
            tracep->chgBit(oldp+1171,((1U & (IData)(
                                                    (0xfffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))));
            tracep->chgBit(oldp+1172,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x2cU])));
            tracep->chgBit(oldp+1173,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x2cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1174,((1U & (~ (IData)(
                                                       (0xfffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xcU)))))));
            tracep->chgBit(oldp+1175,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xcU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xfffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xcU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x2cU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x2cU]))));
            tracep->chgBit(oldp+1176,((1U & (IData)(
                                                    (0x7ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))));
            tracep->chgBit(oldp+1177,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x2dU])));
            tracep->chgBit(oldp+1178,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x2dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1179,((1U & (~ (IData)(
                                                       (0x7ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xdU)))))));
            tracep->chgBit(oldp+1180,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xdU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xdU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x2dU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x2dU]))));
            tracep->chgBit(oldp+1181,((1U & (IData)(
                                                    (0x3ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))));
            tracep->chgBit(oldp+1182,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x2eU])));
            tracep->chgBit(oldp+1183,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x2eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1184,((1U & (~ (IData)(
                                                       (0x3ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xeU)))))));
            tracep->chgBit(oldp+1185,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xeU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xeU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x2eU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x2eU]))));
            tracep->chgBit(oldp+1186,((1U & (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))));
            tracep->chgBit(oldp+1187,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x2fU])));
            tracep->chgBit(oldp+1188,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x2fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1189,((1U & (~ (IData)(
                                                       (0x1ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xfU)))))));
            tracep->chgBit(oldp+1190,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xfU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xfU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x2fU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x2fU]))));
            tracep->chgBit(oldp+1191,((1U & (IData)(
                                                    (0xffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))));
            tracep->chgBit(oldp+1192,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x30U])));
            tracep->chgBit(oldp+1193,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x30U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1194,((1U & (~ (IData)(
                                                       (0xffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x10U)))))));
            tracep->chgBit(oldp+1195,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x10U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x10U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x30U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x30U]))));
            tracep->chgBit(oldp+1196,((1U & (IData)(
                                                    (0x7fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))));
            tracep->chgBit(oldp+1197,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x31U])));
            tracep->chgBit(oldp+1198,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x31U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1199,((1U & (~ (IData)(
                                                       (0x7fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x11U)))))));
            tracep->chgBit(oldp+1200,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x11U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7fffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x11U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x31U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x31U]))));
            tracep->chgBit(oldp+1201,((1U & (IData)(
                                                    (0x3fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))));
            tracep->chgBit(oldp+1202,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x32U])));
            tracep->chgBit(oldp+1203,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x32U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1204,((1U & (~ (IData)(
                                                       (0x3fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x12U)))))));
            tracep->chgBit(oldp+1205,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x12U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3fffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x12U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x32U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x32U]))));
            tracep->chgBit(oldp+1206,((1U & (IData)(
                                                    (0x1fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))));
            tracep->chgBit(oldp+1207,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x33U])));
            tracep->chgBit(oldp+1208,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x33U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1209,((1U & (~ (IData)(
                                                       (0x1fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x13U)))))));
            tracep->chgBit(oldp+1210,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x13U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1fffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x13U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x33U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x33U]))));
            tracep->chgBit(oldp+1211,((1U & (IData)(
                                                    (0xfffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))));
            tracep->chgBit(oldp+1212,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x34U])));
            tracep->chgBit(oldp+1213,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x34U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1214,((1U & (~ (IData)(
                                                       (0xfffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x14U)))))));
            tracep->chgBit(oldp+1215,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x14U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xfffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x14U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x34U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x34U]))));
            tracep->chgBit(oldp+1216,((1U & (IData)(
                                                    (0x7ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))));
            tracep->chgBit(oldp+1217,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x35U])));
            tracep->chgBit(oldp+1218,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x35U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1219,((1U & (~ (IData)(
                                                       (0x7ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x15U)))))));
            tracep->chgBit(oldp+1220,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x15U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7ffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x15U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x35U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x35U]))));
            tracep->chgBit(oldp+1221,((1U & (IData)(
                                                    (0x3ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))));
            tracep->chgBit(oldp+1222,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x36U])));
            tracep->chgBit(oldp+1223,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x36U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1224,((1U & (~ (IData)(
                                                       (0x3ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+1225,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x16U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3ffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x16U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x36U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x36U]))));
            tracep->chgBit(oldp+1226,((1U & (IData)(
                                                    (0x1ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))));
            tracep->chgBit(oldp+1227,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x37U])));
            tracep->chgBit(oldp+1228,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x37U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1229,((1U & (~ (IData)(
                                                       (0x1ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x17U)))))));
            tracep->chgBit(oldp+1230,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x17U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1ffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x17U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x37U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x37U]))));
            tracep->chgBit(oldp+1231,((1U & (IData)(
                                                    (0xffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))));
            tracep->chgBit(oldp+1232,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x38U])));
            tracep->chgBit(oldp+1233,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x38U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1234,((1U & (~ (IData)(
                                                       (0xffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x18U)))))));
            tracep->chgBit(oldp+1235,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x18U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x18U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x38U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x38U]))));
            tracep->chgBit(oldp+1236,((1U & (IData)(
                                                    (0x7fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))));
            tracep->chgBit(oldp+1237,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x39U])));
            tracep->chgBit(oldp+1238,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x39U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1239,((1U & (~ (IData)(
                                                       (0x7fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x19U)))))));
            tracep->chgBit(oldp+1240,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x19U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7fULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x19U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x39U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x39U]))));
            tracep->chgBit(oldp+1241,((1U & (IData)(
                                                    (0x3fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))));
            tracep->chgBit(oldp+1242,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x3aU])));
            tracep->chgBit(oldp+1243,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x3aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1244,((1U & (~ (IData)(
                                                       (0x3fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1aU)))))));
            tracep->chgBit(oldp+1245,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1aU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3fULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x1aU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x3aU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x3aU]))));
            tracep->chgBit(oldp+1246,((1U & (IData)(
                                                    (0x1fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))));
            tracep->chgBit(oldp+1247,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x3bU])));
            tracep->chgBit(oldp+1248,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x3bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1249,((1U & (~ (IData)(
                                                       (0x1fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1bU)))))));
            tracep->chgBit(oldp+1250,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1bU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1fULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x1bU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x3bU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x3bU]))));
            tracep->chgBit(oldp+1251,((1U & (IData)(
                                                    (0xfULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))));
            tracep->chgBit(oldp+1252,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x3cU])));
            tracep->chgBit(oldp+1253,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x3cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1254,((1U & (~ (IData)(
                                                       (0xfULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1cU)))))));
            tracep->chgBit(oldp+1255,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1cU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xfULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x1cU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x3cU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x3cU]))));
            tracep->chgBit(oldp+1256,((1U & (IData)(
                                                    (7ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))));
            tracep->chgBit(oldp+1257,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x3dU])));
            tracep->chgBit(oldp+1258,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x3dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1259,((1U & (~ (IData)(
                                                       (7ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1dU)))))));
            tracep->chgBit(oldp+1260,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (7ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1dU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x1dU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x3dU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x3dU]))));
            tracep->chgBit(oldp+1261,((1U & (IData)(
                                                    (3ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))));
            tracep->chgBit(oldp+1262,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x3eU])));
            tracep->chgBit(oldp+1263,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x3eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1264,((1U & (~ (IData)(
                                                       (3ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1eU)))))));
            tracep->chgBit(oldp+1265,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (3ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1eU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (3ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x1eU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x3eU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x3eU]))));
            tracep->chgBit(oldp+1266,((1U & (IData)(
                                                    (1ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))));
            tracep->chgBit(oldp+1267,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x3fU])));
            tracep->chgBit(oldp+1268,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x3fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1269,((1U & (~ (IData)(
                                                       (1ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1fU)))))));
            tracep->chgBit(oldp+1270,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (1ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1fU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (1ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x1fU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x3fU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x3fU]))));
            tracep->chgCData(oldp+1271,((7U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                       >> 1U)))),3);
            tracep->chgQData(oldp+1272,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 2U)),64);
            tracep->chgQData(oldp+1274,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__2__KET____DOT__ai__OutX),64);
            tracep->chgBit(oldp+1276,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x))));
            tracep->chgBit(oldp+1277,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx));
            tracep->chgBit(oldp+1278,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x));
            tracep->chgBit(oldp+1279,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x));
            tracep->chgBit(oldp+1280,((1U & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1281,((1U & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1282,((1U & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 2U)))));
            tracep->chgBit(oldp+1283,((1U & (~ (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 2U))))));
            tracep->chgBit(oldp+1284,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 2U)))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      << 2U)))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x))));
            tracep->chgBit(oldp+1285,((1U & (IData)(
                                                    (0x7ffffffffffffffeULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 1U))))));
            tracep->chgBit(oldp+1286,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [1U])));
            tracep->chgBit(oldp+1287,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [1U] >> 1U))));
            tracep->chgBit(oldp+1288,((1U & (~ (IData)(
                                                       (0x7ffffffffffffffeULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 1U)))))));
            tracep->chgBit(oldp+1289,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffffffeULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 1U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffffffeULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 1U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [1U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [1U]))));
            tracep->chgBit(oldp+1290,((1U & (IData)(
                                                    (0x3fffffffffffffffULL 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))));
            tracep->chgBit(oldp+1291,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [2U])));
            tracep->chgBit(oldp+1292,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [2U] >> 1U))));
            tracep->chgBit(oldp+1293,((1U & (~ (IData)(
                                                       (0x3fffffffffffffffULL 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))))));
            tracep->chgBit(oldp+1294,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffffffffffULL 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffffffffffULL 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [2U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [2U]))));
            tracep->chgBit(oldp+1295,((1U & (IData)(
                                                    (0x1fffffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))));
            tracep->chgBit(oldp+1296,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [3U])));
            tracep->chgBit(oldp+1297,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [3U] >> 1U))));
            tracep->chgBit(oldp+1298,((1U & (~ (IData)(
                                                       (0x1fffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 1U)))))));
            tracep->chgBit(oldp+1299,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 1U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 1U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [3U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [3U]))));
            tracep->chgBit(oldp+1300,((1U & (IData)(
                                                    (0xfffffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))));
            tracep->chgBit(oldp+1301,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [4U])));
            tracep->chgBit(oldp+1302,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [4U] >> 1U))));
            tracep->chgBit(oldp+1303,((1U & (~ (IData)(
                                                       (0xfffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 2U)))))));
            tracep->chgBit(oldp+1304,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 2U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 2U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [4U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [4U]))));
            tracep->chgBit(oldp+1305,((1U & (IData)(
                                                    (0x7ffffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))));
            tracep->chgBit(oldp+1306,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [5U])));
            tracep->chgBit(oldp+1307,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [5U] >> 1U))));
            tracep->chgBit(oldp+1308,((1U & (~ (IData)(
                                                       (0x7ffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 3U)))))));
            tracep->chgBit(oldp+1309,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 3U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 3U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [5U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [5U]))));
            tracep->chgBit(oldp+1310,((1U & (IData)(
                                                    (0x3ffffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))));
            tracep->chgBit(oldp+1311,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [6U])));
            tracep->chgBit(oldp+1312,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [6U] >> 1U))));
            tracep->chgBit(oldp+1313,((1U & (~ (IData)(
                                                       (0x3ffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 4U)))))));
            tracep->chgBit(oldp+1314,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 4U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 4U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [6U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [6U]))));
            tracep->chgBit(oldp+1315,((1U & (IData)(
                                                    (0x1ffffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))));
            tracep->chgBit(oldp+1316,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [7U])));
            tracep->chgBit(oldp+1317,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [7U] >> 1U))));
            tracep->chgBit(oldp+1318,((1U & (~ (IData)(
                                                       (0x1ffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 5U)))))));
            tracep->chgBit(oldp+1319,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 5U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 5U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [7U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [7U]))));
            tracep->chgBit(oldp+1320,((1U & (IData)(
                                                    (0xffffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))));
            tracep->chgBit(oldp+1321,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [8U])));
            tracep->chgBit(oldp+1322,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [8U] >> 1U))));
            tracep->chgBit(oldp+1323,((1U & (~ (IData)(
                                                       (0xffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 6U)))))));
            tracep->chgBit(oldp+1324,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 6U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 6U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [8U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [8U]))));
            tracep->chgBit(oldp+1325,((1U & (IData)(
                                                    (0x7fffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))));
            tracep->chgBit(oldp+1326,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [9U])));
            tracep->chgBit(oldp+1327,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [9U] >> 1U))));
            tracep->chgBit(oldp+1328,((1U & (~ (IData)(
                                                       (0x7fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 7U)))))));
            tracep->chgBit(oldp+1329,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 7U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 7U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [9U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [9U]))));
            tracep->chgBit(oldp+1330,((1U & (IData)(
                                                    (0x3fffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))));
            tracep->chgBit(oldp+1331,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0xaU])));
            tracep->chgBit(oldp+1332,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0xaU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1333,((1U & (~ (IData)(
                                                       (0x3fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 8U)))))));
            tracep->chgBit(oldp+1334,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 8U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 8U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0xaU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0xaU]))));
            tracep->chgBit(oldp+1335,((1U & (IData)(
                                                    (0x1fffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))));
            tracep->chgBit(oldp+1336,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0xbU])));
            tracep->chgBit(oldp+1337,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0xbU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1338,((1U & (~ (IData)(
                                                       (0x1fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 9U)))))));
            tracep->chgBit(oldp+1339,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 9U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 9U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0xbU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0xbU]))));
            tracep->chgBit(oldp+1340,((1U & (IData)(
                                                    (0xfffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))));
            tracep->chgBit(oldp+1341,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0xcU])));
            tracep->chgBit(oldp+1342,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0xcU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1343,((1U & (~ (IData)(
                                                       (0xfffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xaU)))))));
            tracep->chgBit(oldp+1344,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xaU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xaU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0xcU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0xcU]))));
            tracep->chgBit(oldp+1345,((1U & (IData)(
                                                    (0x7ffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))));
            tracep->chgBit(oldp+1346,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0xdU])));
            tracep->chgBit(oldp+1347,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0xdU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1348,((1U & (~ (IData)(
                                                       (0x7ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xbU)))))));
            tracep->chgBit(oldp+1349,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xbU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xbU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0xdU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0xdU]))));
            tracep->chgBit(oldp+1350,((1U & (IData)(
                                                    (0x3ffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))));
            tracep->chgBit(oldp+1351,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0xeU])));
            tracep->chgBit(oldp+1352,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0xeU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1353,((1U & (~ (IData)(
                                                       (0x3ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xcU)))))));
            tracep->chgBit(oldp+1354,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xcU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xcU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0xeU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0xeU]))));
            tracep->chgBit(oldp+1355,((1U & (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))));
            tracep->chgBit(oldp+1356,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0xfU])));
            tracep->chgBit(oldp+1357,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0xfU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1358,((1U & (~ (IData)(
                                                       (0x1ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xdU)))))));
            tracep->chgBit(oldp+1359,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xdU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xdU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0xfU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0xfU]))));
            tracep->chgBit(oldp+1360,((1U & (IData)(
                                                    (0xffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))));
            tracep->chgBit(oldp+1361,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x10U])));
            tracep->chgBit(oldp+1362,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x10U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1363,((1U & (~ (IData)(
                                                       (0xffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xeU)))))));
            tracep->chgBit(oldp+1364,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xeU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xeU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x10U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x10U]))));
            tracep->chgBit(oldp+1365,((1U & (IData)(
                                                    (0x7fffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))));
            tracep->chgBit(oldp+1366,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x11U])));
            tracep->chgBit(oldp+1367,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x11U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1368,((1U & (~ (IData)(
                                                       (0x7fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xfU)))))));
            tracep->chgBit(oldp+1369,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xfU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xfU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x11U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x11U]))));
            tracep->chgBit(oldp+1370,((1U & (IData)(
                                                    (0x3fffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))));
            tracep->chgBit(oldp+1371,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x12U])));
            tracep->chgBit(oldp+1372,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x12U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1373,((1U & (~ (IData)(
                                                       (0x3fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x10U)))))));
            tracep->chgBit(oldp+1374,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x10U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x10U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x12U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x12U]))));
            tracep->chgBit(oldp+1375,((1U & (IData)(
                                                    (0x1fffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))));
            tracep->chgBit(oldp+1376,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x13U])));
            tracep->chgBit(oldp+1377,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x13U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1378,((1U & (~ (IData)(
                                                       (0x1fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x11U)))))));
            tracep->chgBit(oldp+1379,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x11U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x11U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x13U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x13U]))));
            tracep->chgBit(oldp+1380,((1U & (IData)(
                                                    (0xfffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))));
            tracep->chgBit(oldp+1381,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x14U])));
            tracep->chgBit(oldp+1382,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x14U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1383,((1U & (~ (IData)(
                                                       (0xfffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x12U)))))));
            tracep->chgBit(oldp+1384,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x12U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x12U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x14U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x14U]))));
            tracep->chgBit(oldp+1385,((1U & (IData)(
                                                    (0x7ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))));
            tracep->chgBit(oldp+1386,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x15U])));
            tracep->chgBit(oldp+1387,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x15U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1388,((1U & (~ (IData)(
                                                       (0x7ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x13U)))))));
            tracep->chgBit(oldp+1389,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x13U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x13U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x15U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x15U]))));
            tracep->chgBit(oldp+1390,((1U & (IData)(
                                                    (0x3ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))));
            tracep->chgBit(oldp+1391,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x16U])));
            tracep->chgBit(oldp+1392,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x16U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1393,((1U & (~ (IData)(
                                                       (0x3ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x14U)))))));
            tracep->chgBit(oldp+1394,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x14U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x14U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x16U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x16U]))));
            tracep->chgBit(oldp+1395,((1U & (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))));
            tracep->chgBit(oldp+1396,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x17U])));
            tracep->chgBit(oldp+1397,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x17U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1398,((1U & (~ (IData)(
                                                       (0x1ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x15U)))))));
            tracep->chgBit(oldp+1399,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x15U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x15U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x17U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x17U]))));
            tracep->chgBit(oldp+1400,((1U & (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))));
            tracep->chgBit(oldp+1401,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x18U])));
            tracep->chgBit(oldp+1402,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x18U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1403,((1U & (~ (IData)(
                                                       (0xffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+1404,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x16U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x16U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x18U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x18U]))));
            tracep->chgBit(oldp+1405,((1U & (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))));
            tracep->chgBit(oldp+1406,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x19U])));
            tracep->chgBit(oldp+1407,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x19U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1408,((1U & (~ (IData)(
                                                       (0x7fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x17U)))))));
            tracep->chgBit(oldp+1409,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x17U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x17U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x19U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x19U]))));
            tracep->chgBit(oldp+1410,((1U & (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))));
            tracep->chgBit(oldp+1411,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU])));
            tracep->chgBit(oldp+1412,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x1aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1413,((1U & (~ (IData)(
                                                       (0x3fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x18U)))))));
            tracep->chgBit(oldp+1414,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x18U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x18U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x1aU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x1aU]))));
            tracep->chgBit(oldp+1415,((1U & (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))));
            tracep->chgBit(oldp+1416,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU])));
            tracep->chgBit(oldp+1417,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x1bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1418,((1U & (~ (IData)(
                                                       (0x1fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x19U)))))));
            tracep->chgBit(oldp+1419,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x19U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x19U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x1bU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x1bU]))));
            tracep->chgBit(oldp+1420,((1U & (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))));
            tracep->chgBit(oldp+1421,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU])));
            tracep->chgBit(oldp+1422,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x1cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1423,((1U & (~ (IData)(
                                                       (0xfffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1aU)))))));
            tracep->chgBit(oldp+1424,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1aU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x1aU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x1cU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x1cU]))));
            tracep->chgBit(oldp+1425,((1U & (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))));
            tracep->chgBit(oldp+1426,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU])));
            tracep->chgBit(oldp+1427,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x1dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1428,((1U & (~ (IData)(
                                                       (0x7ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1bU)))))));
            tracep->chgBit(oldp+1429,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1bU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x1bU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x1dU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x1dU]))));
            tracep->chgBit(oldp+1430,((1U & (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))));
            tracep->chgBit(oldp+1431,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU])));
            tracep->chgBit(oldp+1432,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x1eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1433,((1U & (~ (IData)(
                                                       (0x3ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1cU)))))));
            tracep->chgBit(oldp+1434,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1cU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x1cU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x1eU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x1eU]))));
            tracep->chgBit(oldp+1435,((1U & (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))));
            tracep->chgBit(oldp+1436,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU])));
            tracep->chgBit(oldp+1437,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x1fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1438,((1U & (~ (IData)(
                                                       (0x1ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1dU)))))));
            tracep->chgBit(oldp+1439,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1dU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x1dU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x1fU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x1fU]))));
            tracep->chgBit(oldp+1440,((1U & (IData)(
                                                    (0xffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))));
            tracep->chgBit(oldp+1441,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x20U])));
            tracep->chgBit(oldp+1442,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x20U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1443,((1U & (~ (IData)(
                                                       (0xffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1eU)))))));
            tracep->chgBit(oldp+1444,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1eU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x1eU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x20U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x20U]))));
            tracep->chgBit(oldp+1445,((1U & (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))));
            tracep->chgBit(oldp+1446,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x21U])));
            tracep->chgBit(oldp+1447,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x21U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1448,((1U & (~ (IData)(
                                                       (0x7fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1fU)))))));
            tracep->chgBit(oldp+1449,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1fU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x1fU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x21U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x21U]))));
            tracep->chgBit(oldp+1450,((1U & (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U))))));
            tracep->chgBit(oldp+1451,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x22U])));
            tracep->chgBit(oldp+1452,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x22U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1453,((1U & (~ (IData)(
                                                       (0x3fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x20U)))))));
            tracep->chgBit(oldp+1454,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x20U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x20U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x22U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x22U]))));
            tracep->chgBit(oldp+1455,((1U & (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U))))));
            tracep->chgBit(oldp+1456,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x23U])));
            tracep->chgBit(oldp+1457,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x23U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1458,((1U & (~ (IData)(
                                                       (0x1fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x21U)))))));
            tracep->chgBit(oldp+1459,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x21U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x21U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x23U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x23U]))));
            tracep->chgBit(oldp+1460,((1U & (IData)(
                                                    (0xfffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U))))));
            tracep->chgBit(oldp+1461,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x24U])));
            tracep->chgBit(oldp+1462,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x24U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1463,((1U & (~ (IData)(
                                                       (0xfffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x22U)))))));
            tracep->chgBit(oldp+1464,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x22U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x22U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x24U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x24U]))));
            tracep->chgBit(oldp+1465,((1U & (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U))))));
            tracep->chgBit(oldp+1466,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x25U])));
            tracep->chgBit(oldp+1467,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x25U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1468,((1U & (~ (IData)(
                                                       (0x7ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x23U)))))));
            tracep->chgBit(oldp+1469,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x23U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x23U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x25U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x25U]))));
            tracep->chgBit(oldp+1470,((1U & (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U))))));
            tracep->chgBit(oldp+1471,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x26U])));
            tracep->chgBit(oldp+1472,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x26U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1473,((1U & (~ (IData)(
                                                       (0x3ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x24U)))))));
            tracep->chgBit(oldp+1474,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x24U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x24U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x26U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x26U]))));
            tracep->chgBit(oldp+1475,((1U & (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U))))));
            tracep->chgBit(oldp+1476,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x27U])));
            tracep->chgBit(oldp+1477,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x27U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1478,((1U & (~ (IData)(
                                                       (0x1ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x25U)))))));
            tracep->chgBit(oldp+1479,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x25U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x25U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x27U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x27U]))));
            tracep->chgBit(oldp+1480,((1U & (IData)(
                                                    (0xffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U))))));
            tracep->chgBit(oldp+1481,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x28U])));
            tracep->chgBit(oldp+1482,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x28U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1483,((1U & (~ (IData)(
                                                       (0xffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x26U)))))));
            tracep->chgBit(oldp+1484,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x26U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x26U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x28U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x28U]))));
            tracep->chgBit(oldp+1485,((1U & (IData)(
                                                    (0x7fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U))))));
            tracep->chgBit(oldp+1486,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x29U])));
            tracep->chgBit(oldp+1487,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x29U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1488,((1U & (~ (IData)(
                                                       (0x7fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x27U)))))));
            tracep->chgBit(oldp+1489,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x27U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x27U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x29U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x29U]))));
            tracep->chgBit(oldp+1490,((1U & (IData)(
                                                    (0x3fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U))))));
            tracep->chgBit(oldp+1491,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU])));
            tracep->chgBit(oldp+1492,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x2aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1493,((1U & (~ (IData)(
                                                       (0x3fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x28U)))))));
            tracep->chgBit(oldp+1494,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x28U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x28U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x2aU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x2aU]))));
            tracep->chgBit(oldp+1495,((1U & (IData)(
                                                    (0x1fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U))))));
            tracep->chgBit(oldp+1496,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU])));
            tracep->chgBit(oldp+1497,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x2bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1498,((1U & (~ (IData)(
                                                       (0x1fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x29U)))))));
            tracep->chgBit(oldp+1499,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x29U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x29U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x2bU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x2bU]))));
            tracep->chgBit(oldp+1500,((1U & (IData)(
                                                    (0xfffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2aU))))));
            tracep->chgBit(oldp+1501,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU])));
            tracep->chgBit(oldp+1502,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x2cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1503,((1U & (~ (IData)(
                                                       (0xfffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2aU)))))));
            tracep->chgBit(oldp+1504,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2aU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x2aU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x2cU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x2cU]))));
            tracep->chgBit(oldp+1505,((1U & (IData)(
                                                    (0x7ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2bU))))));
            tracep->chgBit(oldp+1506,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU])));
            tracep->chgBit(oldp+1507,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x2dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1508,((1U & (~ (IData)(
                                                       (0x7ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2bU)))))));
            tracep->chgBit(oldp+1509,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2bU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x2bU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x2dU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x2dU]))));
            tracep->chgBit(oldp+1510,((1U & (IData)(
                                                    (0x3ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2cU))))));
            tracep->chgBit(oldp+1511,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU])));
            tracep->chgBit(oldp+1512,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x2eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1513,((1U & (~ (IData)(
                                                       (0x3ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2cU)))))));
            tracep->chgBit(oldp+1514,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2cU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x2cU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x2eU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x2eU]))));
            tracep->chgBit(oldp+1515,((1U & (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2dU))))));
            tracep->chgBit(oldp+1516,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU])));
            tracep->chgBit(oldp+1517,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x2fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1518,((1U & (~ (IData)(
                                                       (0x1ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2dU)))))));
            tracep->chgBit(oldp+1519,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2dU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x2dU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x2fU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x2fU]))));
            tracep->chgBit(oldp+1520,((1U & (IData)(
                                                    (0xffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2eU))))));
            tracep->chgBit(oldp+1521,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x30U])));
            tracep->chgBit(oldp+1522,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x30U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1523,((1U & (~ (IData)(
                                                       (0xffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2eU)))))));
            tracep->chgBit(oldp+1524,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2eU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x2eU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x30U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x30U]))));
            tracep->chgBit(oldp+1525,((1U & (IData)(
                                                    (0x7fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2fU))))));
            tracep->chgBit(oldp+1526,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x31U])));
            tracep->chgBit(oldp+1527,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x31U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1528,((1U & (~ (IData)(
                                                       (0x7fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2fU)))))));
            tracep->chgBit(oldp+1529,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2fU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x2fU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x31U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x31U]))));
            tracep->chgBit(oldp+1530,((1U & (IData)(
                                                    (0x3fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x30U))))));
            tracep->chgBit(oldp+1531,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x32U])));
            tracep->chgBit(oldp+1532,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x32U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1533,((1U & (~ (IData)(
                                                       (0x3fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x30U)))))));
            tracep->chgBit(oldp+1534,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x30U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x30U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x32U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x32U]))));
            tracep->chgBit(oldp+1535,((1U & (IData)(
                                                    (0x1fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x31U))))));
            tracep->chgBit(oldp+1536,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x33U])));
            tracep->chgBit(oldp+1537,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x33U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1538,((1U & (~ (IData)(
                                                       (0x1fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x31U)))))));
            tracep->chgBit(oldp+1539,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x31U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x31U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x33U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x33U]))));
            tracep->chgBit(oldp+1540,((1U & (IData)(
                                                    (0xfffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x32U))))));
            tracep->chgBit(oldp+1541,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x34U])));
            tracep->chgBit(oldp+1542,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x34U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1543,((1U & (~ (IData)(
                                                       (0xfffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x32U)))))));
            tracep->chgBit(oldp+1544,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x32U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x32U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x34U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x34U]))));
            tracep->chgBit(oldp+1545,((1U & (IData)(
                                                    (0x7ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x33U))))));
            tracep->chgBit(oldp+1546,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x35U])));
            tracep->chgBit(oldp+1547,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x35U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1548,((1U & (~ (IData)(
                                                       (0x7ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x33U)))))));
            tracep->chgBit(oldp+1549,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x33U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x33U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x35U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x35U]))));
            tracep->chgBit(oldp+1550,((1U & (IData)(
                                                    (0x3ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x34U))))));
            tracep->chgBit(oldp+1551,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x36U])));
            tracep->chgBit(oldp+1552,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x36U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1553,((1U & (~ (IData)(
                                                       (0x3ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x34U)))))));
            tracep->chgBit(oldp+1554,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x34U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x34U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x36U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x36U]))));
            tracep->chgBit(oldp+1555,((1U & (IData)(
                                                    (0x1ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x35U))))));
            tracep->chgBit(oldp+1556,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x37U])));
            tracep->chgBit(oldp+1557,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x37U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1558,((1U & (~ (IData)(
                                                       (0x1ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x35U)))))));
            tracep->chgBit(oldp+1559,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x35U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x35U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x37U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x37U]))));
            tracep->chgBit(oldp+1560,((1U & (IData)(
                                                    (0xffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x36U))))));
            tracep->chgBit(oldp+1561,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x38U])));
            tracep->chgBit(oldp+1562,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x38U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1563,((1U & (~ (IData)(
                                                       (0xffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x36U)))))));
            tracep->chgBit(oldp+1564,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x36U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x36U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x38U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x38U]))));
            tracep->chgBit(oldp+1565,((1U & (IData)(
                                                    (0x7fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x37U))))));
            tracep->chgBit(oldp+1566,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x39U])));
            tracep->chgBit(oldp+1567,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x39U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1568,((1U & (~ (IData)(
                                                       (0x7fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x37U)))))));
            tracep->chgBit(oldp+1569,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x37U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x37U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x39U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x39U]))));
            tracep->chgBit(oldp+1570,((1U & (IData)(
                                                    (0x3fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x38U))))));
            tracep->chgBit(oldp+1571,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU])));
            tracep->chgBit(oldp+1572,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x3aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1573,((1U & (~ (IData)(
                                                       (0x3fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x38U)))))));
            tracep->chgBit(oldp+1574,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x38U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x38U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x3aU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x3aU]))));
            tracep->chgBit(oldp+1575,((1U & (IData)(
                                                    (0x1fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x39U))))));
            tracep->chgBit(oldp+1576,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU])));
            tracep->chgBit(oldp+1577,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x3bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1578,((1U & (~ (IData)(
                                                       (0x1fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x39U)))))));
            tracep->chgBit(oldp+1579,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x39U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x39U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x3bU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x3bU]))));
            tracep->chgBit(oldp+1580,((1U & (IData)(
                                                    (0xfULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x3aU))))));
            tracep->chgBit(oldp+1581,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU])));
            tracep->chgBit(oldp+1582,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x3cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1583,((1U & (~ (IData)(
                                                       (0xfULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x3aU)))))));
            tracep->chgBit(oldp+1584,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x3aU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x3aU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x3cU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x3cU]))));
            tracep->chgBit(oldp+1585,((1U & (IData)(
                                                    (7ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x3bU))))));
            tracep->chgBit(oldp+1586,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU])));
            tracep->chgBit(oldp+1587,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x3dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1588,((1U & (~ (IData)(
                                                       (7ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x3bU)))))));
            tracep->chgBit(oldp+1589,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (7ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x3bU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x3bU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x3dU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x3dU]))));
            tracep->chgBit(oldp+1590,((1U & (IData)(
                                                    (3ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x3cU))))));
            tracep->chgBit(oldp+1591,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU])));
            tracep->chgBit(oldp+1592,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x3eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1593,((1U & (~ (IData)(
                                                       (3ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x3cU)))))));
            tracep->chgBit(oldp+1594,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (3ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x3cU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (3ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x3cU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x3eU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x3eU]))));
            tracep->chgBit(oldp+1595,((1U & (IData)(
                                                    (1ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x3dU))))));
            tracep->chgBit(oldp+1596,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU])));
            tracep->chgBit(oldp+1597,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x3fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1598,((1U & (~ (IData)(
                                                       (1ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x3dU)))))));
            tracep->chgBit(oldp+1599,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (1ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x3dU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (1ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x3dU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x3fU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x3fU]))));
            tracep->chgCData(oldp+1600,((7U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                       >> 3U)))),3);
            tracep->chgQData(oldp+1601,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 4U)),64);
            tracep->chgQData(oldp+1603,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__4__KET____DOT__ai__OutX),64);
            tracep->chgBit(oldp+1605,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x))));
            tracep->chgBit(oldp+1606,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx));
            tracep->chgBit(oldp+1607,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x));
            tracep->chgBit(oldp+1608,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x));
            tracep->chgBit(oldp+1609,((1U & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1610,((1U & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1611,((1U & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 4U)))));
            tracep->chgBit(oldp+1612,((1U & (~ (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 4U))))));
            tracep->chgBit(oldp+1613,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 4U)))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      << 4U)))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x))));
            tracep->chgBit(oldp+1614,((1U & (IData)(
                                                    (0x7ffffffffffffff8ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 3U))))));
            tracep->chgBit(oldp+1615,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [1U])));
            tracep->chgBit(oldp+1616,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [1U] >> 1U))));
            tracep->chgBit(oldp+1617,((1U & (~ (IData)(
                                                       (0x7ffffffffffffff8ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 3U)))))));
            tracep->chgBit(oldp+1618,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffffff8ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 3U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffffff8ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 3U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [1U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [1U]))));
            tracep->chgBit(oldp+1619,((1U & (IData)(
                                                    (0x3ffffffffffffffcULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 2U))))));
            tracep->chgBit(oldp+1620,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [2U])));
            tracep->chgBit(oldp+1621,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [2U] >> 1U))));
            tracep->chgBit(oldp+1622,((1U & (~ (IData)(
                                                       (0x3ffffffffffffffcULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 2U)))))));
            tracep->chgBit(oldp+1623,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffffffcULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 2U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffffffcULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 2U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [2U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [2U]))));
            tracep->chgBit(oldp+1624,((1U & (IData)(
                                                    (0x1ffffffffffffffeULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 1U))))));
            tracep->chgBit(oldp+1625,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [3U])));
            tracep->chgBit(oldp+1626,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [3U] >> 1U))));
            tracep->chgBit(oldp+1627,((1U & (~ (IData)(
                                                       (0x1ffffffffffffffeULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 1U)))))));
            tracep->chgBit(oldp+1628,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffffffeULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 1U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffffffeULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 1U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [3U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [3U]))));
            tracep->chgBit(oldp+1629,((1U & (IData)(
                                                    (0xfffffffffffffffULL 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))));
            tracep->chgBit(oldp+1630,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [4U])));
            tracep->chgBit(oldp+1631,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [4U] >> 1U))));
            tracep->chgBit(oldp+1632,((1U & (~ (IData)(
                                                       (0xfffffffffffffffULL 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))))));
            tracep->chgBit(oldp+1633,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffffffffULL 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffffffffULL 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [4U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [4U]))));
            tracep->chgBit(oldp+1634,((1U & (IData)(
                                                    (0x7ffffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))));
            tracep->chgBit(oldp+1635,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [5U])));
            tracep->chgBit(oldp+1636,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [5U] >> 1U))));
            tracep->chgBit(oldp+1637,((1U & (~ (IData)(
                                                       (0x7ffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 1U)))))));
            tracep->chgBit(oldp+1638,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 1U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 1U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [5U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [5U]))));
            tracep->chgBit(oldp+1639,((1U & (IData)(
                                                    (0x3ffffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))));
            tracep->chgBit(oldp+1640,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [6U])));
            tracep->chgBit(oldp+1641,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [6U] >> 1U))));
            tracep->chgBit(oldp+1642,((1U & (~ (IData)(
                                                       (0x3ffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 2U)))))));
            tracep->chgBit(oldp+1643,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 2U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 2U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [6U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [6U]))));
            tracep->chgBit(oldp+1644,((1U & (IData)(
                                                    (0x1ffffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))));
            tracep->chgBit(oldp+1645,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [7U])));
            tracep->chgBit(oldp+1646,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [7U] >> 1U))));
            tracep->chgBit(oldp+1647,((1U & (~ (IData)(
                                                       (0x1ffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 3U)))))));
            tracep->chgBit(oldp+1648,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 3U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 3U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [7U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [7U]))));
            tracep->chgBit(oldp+1649,((1U & (IData)(
                                                    (0xffffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))));
            tracep->chgBit(oldp+1650,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [8U])));
            tracep->chgBit(oldp+1651,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [8U] >> 1U))));
            tracep->chgBit(oldp+1652,((1U & (~ (IData)(
                                                       (0xffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 4U)))))));
            tracep->chgBit(oldp+1653,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 4U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 4U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [8U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [8U]))));
            tracep->chgBit(oldp+1654,((1U & (IData)(
                                                    (0x7fffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))));
            tracep->chgBit(oldp+1655,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [9U])));
            tracep->chgBit(oldp+1656,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [9U] >> 1U))));
            tracep->chgBit(oldp+1657,((1U & (~ (IData)(
                                                       (0x7fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 5U)))))));
            tracep->chgBit(oldp+1658,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 5U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 5U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [9U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [9U]))));
            tracep->chgBit(oldp+1659,((1U & (IData)(
                                                    (0x3fffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))));
            tracep->chgBit(oldp+1660,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0xaU])));
            tracep->chgBit(oldp+1661,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0xaU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1662,((1U & (~ (IData)(
                                                       (0x3fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 6U)))))));
            tracep->chgBit(oldp+1663,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 6U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 6U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0xaU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0xaU]))));
            tracep->chgBit(oldp+1664,((1U & (IData)(
                                                    (0x1fffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))));
            tracep->chgBit(oldp+1665,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0xbU])));
            tracep->chgBit(oldp+1666,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0xbU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1667,((1U & (~ (IData)(
                                                       (0x1fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 7U)))))));
            tracep->chgBit(oldp+1668,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 7U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 7U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0xbU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0xbU]))));
            tracep->chgBit(oldp+1669,((1U & (IData)(
                                                    (0xfffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))));
            tracep->chgBit(oldp+1670,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0xcU])));
            tracep->chgBit(oldp+1671,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0xcU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1672,((1U & (~ (IData)(
                                                       (0xfffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 8U)))))));
            tracep->chgBit(oldp+1673,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 8U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 8U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0xcU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0xcU]))));
            tracep->chgBit(oldp+1674,((1U & (IData)(
                                                    (0x7ffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))));
            tracep->chgBit(oldp+1675,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0xdU])));
            tracep->chgBit(oldp+1676,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0xdU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1677,((1U & (~ (IData)(
                                                       (0x7ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 9U)))))));
            tracep->chgBit(oldp+1678,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 9U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 9U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0xdU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0xdU]))));
            tracep->chgBit(oldp+1679,((1U & (IData)(
                                                    (0x3ffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))));
            tracep->chgBit(oldp+1680,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0xeU])));
            tracep->chgBit(oldp+1681,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0xeU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1682,((1U & (~ (IData)(
                                                       (0x3ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xaU)))))));
            tracep->chgBit(oldp+1683,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xaU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xaU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0xeU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0xeU]))));
            tracep->chgBit(oldp+1684,((1U & (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))));
            tracep->chgBit(oldp+1685,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0xfU])));
            tracep->chgBit(oldp+1686,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0xfU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1687,((1U & (~ (IData)(
                                                       (0x1ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xbU)))))));
            tracep->chgBit(oldp+1688,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xbU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xbU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0xfU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0xfU]))));
            tracep->chgBit(oldp+1689,((1U & (IData)(
                                                    (0xffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))));
            tracep->chgBit(oldp+1690,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x10U])));
            tracep->chgBit(oldp+1691,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x10U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1692,((1U & (~ (IData)(
                                                       (0xffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xcU)))))));
            tracep->chgBit(oldp+1693,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xcU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xcU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x10U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x10U]))));
            tracep->chgBit(oldp+1694,((1U & (IData)(
                                                    (0x7fffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))));
            tracep->chgBit(oldp+1695,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x11U])));
            tracep->chgBit(oldp+1696,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x11U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1697,((1U & (~ (IData)(
                                                       (0x7fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xdU)))))));
            tracep->chgBit(oldp+1698,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xdU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xdU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x11U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x11U]))));
            tracep->chgBit(oldp+1699,((1U & (IData)(
                                                    (0x3fffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))));
            tracep->chgBit(oldp+1700,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x12U])));
            tracep->chgBit(oldp+1701,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x12U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1702,((1U & (~ (IData)(
                                                       (0x3fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xeU)))))));
            tracep->chgBit(oldp+1703,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xeU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xeU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x12U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x12U]))));
            tracep->chgBit(oldp+1704,((1U & (IData)(
                                                    (0x1fffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))));
            tracep->chgBit(oldp+1705,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x13U])));
            tracep->chgBit(oldp+1706,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x13U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1707,((1U & (~ (IData)(
                                                       (0x1fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xfU)))))));
            tracep->chgBit(oldp+1708,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xfU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xfU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x13U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x13U]))));
            tracep->chgBit(oldp+1709,((1U & (IData)(
                                                    (0xfffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))));
            tracep->chgBit(oldp+1710,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x14U])));
            tracep->chgBit(oldp+1711,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x14U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1712,((1U & (~ (IData)(
                                                       (0xfffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x10U)))))));
            tracep->chgBit(oldp+1713,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x10U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x10U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x14U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x14U]))));
            tracep->chgBit(oldp+1714,((1U & (IData)(
                                                    (0x7ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))));
            tracep->chgBit(oldp+1715,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x15U])));
            tracep->chgBit(oldp+1716,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x15U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1717,((1U & (~ (IData)(
                                                       (0x7ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x11U)))))));
            tracep->chgBit(oldp+1718,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x11U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x11U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x15U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x15U]))));
            tracep->chgBit(oldp+1719,((1U & (IData)(
                                                    (0x3ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))));
            tracep->chgBit(oldp+1720,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x16U])));
            tracep->chgBit(oldp+1721,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x16U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1722,((1U & (~ (IData)(
                                                       (0x3ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x12U)))))));
            tracep->chgBit(oldp+1723,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x12U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x12U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x16U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x16U]))));
            tracep->chgBit(oldp+1724,((1U & (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))));
            tracep->chgBit(oldp+1725,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x17U])));
            tracep->chgBit(oldp+1726,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x17U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1727,((1U & (~ (IData)(
                                                       (0x1ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x13U)))))));
            tracep->chgBit(oldp+1728,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x13U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x13U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x17U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x17U]))));
            tracep->chgBit(oldp+1729,((1U & (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))));
            tracep->chgBit(oldp+1730,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x18U])));
            tracep->chgBit(oldp+1731,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x18U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1732,((1U & (~ (IData)(
                                                       (0xffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x14U)))))));
            tracep->chgBit(oldp+1733,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x14U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x14U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x18U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x18U]))));
            tracep->chgBit(oldp+1734,((1U & (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))));
            tracep->chgBit(oldp+1735,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x19U])));
            tracep->chgBit(oldp+1736,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x19U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1737,((1U & (~ (IData)(
                                                       (0x7fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x15U)))))));
            tracep->chgBit(oldp+1738,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x15U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x15U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x19U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x19U]))));
            tracep->chgBit(oldp+1739,((1U & (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))));
            tracep->chgBit(oldp+1740,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU])));
            tracep->chgBit(oldp+1741,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x1aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1742,((1U & (~ (IData)(
                                                       (0x3fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+1743,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x16U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x16U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x1aU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x1aU]))));
            tracep->chgBit(oldp+1744,((1U & (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))));
            tracep->chgBit(oldp+1745,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU])));
            tracep->chgBit(oldp+1746,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x1bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1747,((1U & (~ (IData)(
                                                       (0x1fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x17U)))))));
            tracep->chgBit(oldp+1748,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x17U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x17U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x1bU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x1bU]))));
            tracep->chgBit(oldp+1749,((1U & (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))));
            tracep->chgBit(oldp+1750,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU])));
            tracep->chgBit(oldp+1751,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x1cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1752,((1U & (~ (IData)(
                                                       (0xfffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x18U)))))));
            tracep->chgBit(oldp+1753,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x18U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x18U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x1cU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x1cU]))));
            tracep->chgBit(oldp+1754,((1U & (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))));
            tracep->chgBit(oldp+1755,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU])));
            tracep->chgBit(oldp+1756,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x1dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1757,((1U & (~ (IData)(
                                                       (0x7ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x19U)))))));
            tracep->chgBit(oldp+1758,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x19U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x19U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x1dU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x1dU]))));
            tracep->chgBit(oldp+1759,((1U & (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))));
            tracep->chgBit(oldp+1760,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU])));
            tracep->chgBit(oldp+1761,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x1eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1762,((1U & (~ (IData)(
                                                       (0x3ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1aU)))))));
            tracep->chgBit(oldp+1763,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1aU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x1aU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x1eU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x1eU]))));
            tracep->chgBit(oldp+1764,((1U & (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))));
            tracep->chgBit(oldp+1765,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU])));
            tracep->chgBit(oldp+1766,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x1fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1767,((1U & (~ (IData)(
                                                       (0x1ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1bU)))))));
            tracep->chgBit(oldp+1768,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1bU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x1bU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x1fU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x1fU]))));
            tracep->chgBit(oldp+1769,((1U & (IData)(
                                                    (0xffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))));
            tracep->chgBit(oldp+1770,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x20U])));
            tracep->chgBit(oldp+1771,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x20U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1772,((1U & (~ (IData)(
                                                       (0xffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1cU)))))));
            tracep->chgBit(oldp+1773,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1cU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x1cU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x20U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x20U]))));
            tracep->chgBit(oldp+1774,((1U & (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))));
            tracep->chgBit(oldp+1775,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x21U])));
            tracep->chgBit(oldp+1776,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x21U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1777,((1U & (~ (IData)(
                                                       (0x7fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1dU)))))));
            tracep->chgBit(oldp+1778,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1dU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x1dU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x21U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x21U]))));
            tracep->chgBit(oldp+1779,((1U & (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))));
            tracep->chgBit(oldp+1780,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x22U])));
            tracep->chgBit(oldp+1781,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x22U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1782,((1U & (~ (IData)(
                                                       (0x3fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1eU)))))));
            tracep->chgBit(oldp+1783,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1eU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x1eU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x22U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x22U]))));
            tracep->chgBit(oldp+1784,((1U & (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))));
            tracep->chgBit(oldp+1785,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x23U])));
            tracep->chgBit(oldp+1786,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x23U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1787,((1U & (~ (IData)(
                                                       (0x1fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1fU)))))));
            tracep->chgBit(oldp+1788,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x1fU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x1fU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x23U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x23U]))));
            tracep->chgBit(oldp+1789,((1U & (IData)(
                                                    (0xfffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U))))));
            tracep->chgBit(oldp+1790,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x24U])));
            tracep->chgBit(oldp+1791,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x24U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1792,((1U & (~ (IData)(
                                                       (0xfffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x20U)))))));
            tracep->chgBit(oldp+1793,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x20U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x20U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x24U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x24U]))));
            tracep->chgBit(oldp+1794,((1U & (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U))))));
            tracep->chgBit(oldp+1795,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x25U])));
            tracep->chgBit(oldp+1796,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x25U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1797,((1U & (~ (IData)(
                                                       (0x7ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x21U)))))));
            tracep->chgBit(oldp+1798,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x21U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x21U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x25U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x25U]))));
            tracep->chgBit(oldp+1799,((1U & (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U))))));
            tracep->chgBit(oldp+1800,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x26U])));
            tracep->chgBit(oldp+1801,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x26U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1802,((1U & (~ (IData)(
                                                       (0x3ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x22U)))))));
            tracep->chgBit(oldp+1803,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x22U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x22U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x26U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x26U]))));
            tracep->chgBit(oldp+1804,((1U & (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U))))));
            tracep->chgBit(oldp+1805,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x27U])));
            tracep->chgBit(oldp+1806,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x27U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1807,((1U & (~ (IData)(
                                                       (0x1ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x23U)))))));
            tracep->chgBit(oldp+1808,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x23U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x23U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x27U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x27U]))));
            tracep->chgBit(oldp+1809,((1U & (IData)(
                                                    (0xffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U))))));
            tracep->chgBit(oldp+1810,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x28U])));
            tracep->chgBit(oldp+1811,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x28U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1812,((1U & (~ (IData)(
                                                       (0xffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x24U)))))));
            tracep->chgBit(oldp+1813,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x24U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x24U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x28U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x28U]))));
            tracep->chgBit(oldp+1814,((1U & (IData)(
                                                    (0x7fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U))))));
            tracep->chgBit(oldp+1815,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x29U])));
            tracep->chgBit(oldp+1816,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x29U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1817,((1U & (~ (IData)(
                                                       (0x7fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x25U)))))));
            tracep->chgBit(oldp+1818,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x25U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x25U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x29U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x29U]))));
            tracep->chgBit(oldp+1819,((1U & (IData)(
                                                    (0x3fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U))))));
            tracep->chgBit(oldp+1820,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU])));
            tracep->chgBit(oldp+1821,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x2aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1822,((1U & (~ (IData)(
                                                       (0x3fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x26U)))))));
            tracep->chgBit(oldp+1823,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x26U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x26U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x2aU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x2aU]))));
            tracep->chgBit(oldp+1824,((1U & (IData)(
                                                    (0x1fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U))))));
            tracep->chgBit(oldp+1825,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU])));
            tracep->chgBit(oldp+1826,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x2bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1827,((1U & (~ (IData)(
                                                       (0x1fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x27U)))))));
            tracep->chgBit(oldp+1828,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x27U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x27U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x2bU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x2bU]))));
            tracep->chgBit(oldp+1829,((1U & (IData)(
                                                    (0xfffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U))))));
            tracep->chgBit(oldp+1830,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU])));
            tracep->chgBit(oldp+1831,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x2cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1832,((1U & (~ (IData)(
                                                       (0xfffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x28U)))))));
            tracep->chgBit(oldp+1833,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x28U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x28U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x2cU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x2cU]))));
            tracep->chgBit(oldp+1834,((1U & (IData)(
                                                    (0x7ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U))))));
            tracep->chgBit(oldp+1835,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU])));
            tracep->chgBit(oldp+1836,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x2dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1837,((1U & (~ (IData)(
                                                       (0x7ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x29U)))))));
            tracep->chgBit(oldp+1838,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x29U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x29U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x2dU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x2dU]))));
            tracep->chgBit(oldp+1839,((1U & (IData)(
                                                    (0x3ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2aU))))));
            tracep->chgBit(oldp+1840,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU])));
            tracep->chgBit(oldp+1841,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x2eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1842,((1U & (~ (IData)(
                                                       (0x3ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2aU)))))));
            tracep->chgBit(oldp+1843,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2aU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x2aU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x2eU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x2eU]))));
            tracep->chgBit(oldp+1844,((1U & (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2bU))))));
            tracep->chgBit(oldp+1845,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU])));
            tracep->chgBit(oldp+1846,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x2fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1847,((1U & (~ (IData)(
                                                       (0x1ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2bU)))))));
            tracep->chgBit(oldp+1848,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2bU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x2bU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x2fU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x2fU]))));
            tracep->chgBit(oldp+1849,((1U & (IData)(
                                                    (0xffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2cU))))));
            tracep->chgBit(oldp+1850,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x30U])));
            tracep->chgBit(oldp+1851,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x30U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1852,((1U & (~ (IData)(
                                                       (0xffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2cU)))))));
            tracep->chgBit(oldp+1853,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2cU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x2cU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x30U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x30U]))));
            tracep->chgBit(oldp+1854,((1U & (IData)(
                                                    (0x7fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2dU))))));
            tracep->chgBit(oldp+1855,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x31U])));
            tracep->chgBit(oldp+1856,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x31U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1857,((1U & (~ (IData)(
                                                       (0x7fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2dU)))))));
            tracep->chgBit(oldp+1858,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2dU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x2dU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x31U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x31U]))));
            tracep->chgBit(oldp+1859,((1U & (IData)(
                                                    (0x3fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2eU))))));
            tracep->chgBit(oldp+1860,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x32U])));
            tracep->chgBit(oldp+1861,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x32U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1862,((1U & (~ (IData)(
                                                       (0x3fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2eU)))))));
            tracep->chgBit(oldp+1863,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2eU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x2eU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x32U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x32U]))));
            tracep->chgBit(oldp+1864,((1U & (IData)(
                                                    (0x1fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2fU))))));
            tracep->chgBit(oldp+1865,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x33U])));
            tracep->chgBit(oldp+1866,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x33U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1867,((1U & (~ (IData)(
                                                       (0x1fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2fU)))))));
            tracep->chgBit(oldp+1868,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x2fU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x2fU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x33U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x33U]))));
            tracep->chgBit(oldp+1869,((1U & (IData)(
                                                    (0xfffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x30U))))));
            tracep->chgBit(oldp+1870,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x34U])));
            tracep->chgBit(oldp+1871,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x34U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1872,((1U & (~ (IData)(
                                                       (0xfffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x30U)))))));
            tracep->chgBit(oldp+1873,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x30U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x30U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x34U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x34U]))));
            tracep->chgBit(oldp+1874,((1U & (IData)(
                                                    (0x7ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x31U))))));
            tracep->chgBit(oldp+1875,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x35U])));
            tracep->chgBit(oldp+1876,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x35U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1877,((1U & (~ (IData)(
                                                       (0x7ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x31U)))))));
            tracep->chgBit(oldp+1878,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x31U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x31U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x35U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x35U]))));
            tracep->chgBit(oldp+1879,((1U & (IData)(
                                                    (0x3ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x32U))))));
            tracep->chgBit(oldp+1880,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x36U])));
            tracep->chgBit(oldp+1881,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x36U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1882,((1U & (~ (IData)(
                                                       (0x3ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x32U)))))));
            tracep->chgBit(oldp+1883,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x32U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x32U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x36U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x36U]))));
            tracep->chgBit(oldp+1884,((1U & (IData)(
                                                    (0x1ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x33U))))));
            tracep->chgBit(oldp+1885,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x37U])));
            tracep->chgBit(oldp+1886,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x37U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1887,((1U & (~ (IData)(
                                                       (0x1ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x33U)))))));
            tracep->chgBit(oldp+1888,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x33U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x33U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x37U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x37U]))));
            tracep->chgBit(oldp+1889,((1U & (IData)(
                                                    (0xffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x34U))))));
            tracep->chgBit(oldp+1890,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x38U])));
            tracep->chgBit(oldp+1891,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x38U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1892,((1U & (~ (IData)(
                                                       (0xffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x34U)))))));
            tracep->chgBit(oldp+1893,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x34U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x34U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x38U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x38U]))));
            tracep->chgBit(oldp+1894,((1U & (IData)(
                                                    (0x7fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x35U))))));
            tracep->chgBit(oldp+1895,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x39U])));
            tracep->chgBit(oldp+1896,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x39U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1897,((1U & (~ (IData)(
                                                       (0x7fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x35U)))))));
            tracep->chgBit(oldp+1898,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x35U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x35U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x39U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x39U]))));
            tracep->chgBit(oldp+1899,((1U & (IData)(
                                                    (0x3fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x36U))))));
            tracep->chgBit(oldp+1900,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU])));
            tracep->chgBit(oldp+1901,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x3aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1902,((1U & (~ (IData)(
                                                       (0x3fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x36U)))))));
            tracep->chgBit(oldp+1903,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x36U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x36U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x3aU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x3aU]))));
            tracep->chgBit(oldp+1904,((1U & (IData)(
                                                    (0x1fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x37U))))));
            tracep->chgBit(oldp+1905,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU])));
            tracep->chgBit(oldp+1906,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x3bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1907,((1U & (~ (IData)(
                                                       (0x1fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x37U)))))));
            tracep->chgBit(oldp+1908,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x37U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x37U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x3bU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x3bU]))));
            tracep->chgBit(oldp+1909,((1U & (IData)(
                                                    (0xfULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x38U))))));
            tracep->chgBit(oldp+1910,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU])));
            tracep->chgBit(oldp+1911,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x3cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1912,((1U & (~ (IData)(
                                                       (0xfULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x38U)))))));
            tracep->chgBit(oldp+1913,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x38U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x38U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x3cU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x3cU]))));
            tracep->chgBit(oldp+1914,((1U & (IData)(
                                                    (7ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x39U))))));
            tracep->chgBit(oldp+1915,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU])));
            tracep->chgBit(oldp+1916,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x3dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1917,((1U & (~ (IData)(
                                                       (7ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x39U)))))));
            tracep->chgBit(oldp+1918,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (7ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x39U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x39U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x3dU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x3dU]))));
            tracep->chgBit(oldp+1919,((1U & (IData)(
                                                    (3ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x3aU))))));
            tracep->chgBit(oldp+1920,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU])));
            tracep->chgBit(oldp+1921,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x3eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1922,((1U & (~ (IData)(
                                                       (3ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x3aU)))))));
            tracep->chgBit(oldp+1923,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (3ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x3aU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (3ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x3aU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x3eU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x3eU]))));
            tracep->chgBit(oldp+1924,((1U & (IData)(
                                                    (1ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x3bU))))));
            tracep->chgBit(oldp+1925,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU])));
            tracep->chgBit(oldp+1926,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x3fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1927,((1U & (~ (IData)(
                                                       (1ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x3bU)))))));
            tracep->chgBit(oldp+1928,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (1ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x3bU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (1ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x3bU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x3fU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x3fU]))));
            tracep->chgCData(oldp+1929,((7U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                       >> 5U)))),3);
            tracep->chgQData(oldp+1930,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 6U)),64);
            tracep->chgQData(oldp+1932,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__6__KET____DOT__ai__OutX),64);
            tracep->chgBit(oldp+1934,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x))));
            tracep->chgBit(oldp+1935,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx));
            tracep->chgBit(oldp+1936,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x));
            tracep->chgBit(oldp+1937,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x));
            tracep->chgBit(oldp+1938,((1U & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1939,((1U & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1940,((1U & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 6U)))));
            tracep->chgBit(oldp+1941,((1U & (~ (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 6U))))));
            tracep->chgBit(oldp+1942,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 6U)))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                      << 6U)))) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x))));
            tracep->chgBit(oldp+1943,((1U & (IData)(
                                                    (0x7fffffffffffffe0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 5U))))));
            tracep->chgBit(oldp+1944,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [1U])));
            tracep->chgBit(oldp+1945,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [1U] >> 1U))));
            tracep->chgBit(oldp+1946,((1U & (~ (IData)(
                                                       (0x7fffffffffffffe0ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 5U)))))));
            tracep->chgBit(oldp+1947,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffffffe0ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 5U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffffffe0ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 5U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [1U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [1U]))));
            tracep->chgBit(oldp+1948,((1U & (IData)(
                                                    (0x3ffffffffffffff0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 4U))))));
            tracep->chgBit(oldp+1949,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [2U])));
            tracep->chgBit(oldp+1950,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [2U] >> 1U))));
            tracep->chgBit(oldp+1951,((1U & (~ (IData)(
                                                       (0x3ffffffffffffff0ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 4U)))))));
            tracep->chgBit(oldp+1952,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffffff0ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 4U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffffff0ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 4U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [2U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [2U]))));
            tracep->chgBit(oldp+1953,((1U & (IData)(
                                                    (0x1ffffffffffffff8ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 3U))))));
            tracep->chgBit(oldp+1954,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [3U])));
            tracep->chgBit(oldp+1955,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [3U] >> 1U))));
            tracep->chgBit(oldp+1956,((1U & (~ (IData)(
                                                       (0x1ffffffffffffff8ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 3U)))))));
            tracep->chgBit(oldp+1957,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffffff8ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 3U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffffff8ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 3U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [3U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [3U]))));
            tracep->chgBit(oldp+1958,((1U & (IData)(
                                                    (0xffffffffffffffcULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 2U))))));
            tracep->chgBit(oldp+1959,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [4U])));
            tracep->chgBit(oldp+1960,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [4U] >> 1U))));
            tracep->chgBit(oldp+1961,((1U & (~ (IData)(
                                                       (0xffffffffffffffcULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 2U)))))));
            tracep->chgBit(oldp+1962,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffffffffcULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 2U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffffffffcULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 2U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [4U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [4U]))));
            tracep->chgBit(oldp+1963,((1U & (IData)(
                                                    (0x7fffffffffffffeULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 1U))))));
            tracep->chgBit(oldp+1964,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [5U])));
            tracep->chgBit(oldp+1965,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [5U] >> 1U))));
            tracep->chgBit(oldp+1966,((1U & (~ (IData)(
                                                       (0x7fffffffffffffeULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 1U)))))));
            tracep->chgBit(oldp+1967,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffffffeULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           << 1U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffffffeULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          << 1U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [5U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [5U]))));
            tracep->chgBit(oldp+1968,((1U & (IData)(
                                                    (0x3ffffffffffffffULL 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))));
            tracep->chgBit(oldp+1969,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [6U])));
            tracep->chgBit(oldp+1970,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [6U] >> 1U))));
            tracep->chgBit(oldp+1971,((1U & (~ (IData)(
                                                       (0x3ffffffffffffffULL 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))))));
            tracep->chgBit(oldp+1972,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffffffULL 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffffffULL 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [6U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [6U]))));
            tracep->chgBit(oldp+1973,((1U & (IData)(
                                                    (0x1ffffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))));
            tracep->chgBit(oldp+1974,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [7U])));
            tracep->chgBit(oldp+1975,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [7U] >> 1U))));
            tracep->chgBit(oldp+1976,((1U & (~ (IData)(
                                                       (0x1ffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 1U)))))));
            tracep->chgBit(oldp+1977,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 1U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 1U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [7U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [7U]))));
            tracep->chgBit(oldp+1978,((1U & (IData)(
                                                    (0xffffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))));
            tracep->chgBit(oldp+1979,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [8U])));
            tracep->chgBit(oldp+1980,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [8U] >> 1U))));
            tracep->chgBit(oldp+1981,((1U & (~ (IData)(
                                                       (0xffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 2U)))))));
            tracep->chgBit(oldp+1982,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 2U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 2U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [8U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [8U]))));
            tracep->chgBit(oldp+1983,((1U & (IData)(
                                                    (0x7fffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))));
            tracep->chgBit(oldp+1984,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [9U])));
            tracep->chgBit(oldp+1985,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [9U] >> 1U))));
            tracep->chgBit(oldp+1986,((1U & (~ (IData)(
                                                       (0x7fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 3U)))))));
            tracep->chgBit(oldp+1987,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 3U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 3U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [9U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [9U]))));
            tracep->chgBit(oldp+1988,((1U & (IData)(
                                                    (0x3fffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))));
            tracep->chgBit(oldp+1989,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0xaU])));
            tracep->chgBit(oldp+1990,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0xaU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1991,((1U & (~ (IData)(
                                                       (0x3fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 4U)))))));
            tracep->chgBit(oldp+1992,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 4U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 4U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [0xaU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [0xaU]))));
            tracep->chgBit(oldp+1993,((1U & (IData)(
                                                    (0x1fffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))));
            tracep->chgBit(oldp+1994,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0xbU])));
            tracep->chgBit(oldp+1995,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0xbU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1996,((1U & (~ (IData)(
                                                       (0x1fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 5U)))))));
            tracep->chgBit(oldp+1997,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 5U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 5U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [0xbU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [0xbU]))));
            tracep->chgBit(oldp+1998,((1U & (IData)(
                                                    (0xfffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))));
            tracep->chgBit(oldp+1999,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0xcU])));
            tracep->chgBit(oldp+2000,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0xcU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2001,((1U & (~ (IData)(
                                                       (0xfffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 6U)))))));
            tracep->chgBit(oldp+2002,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 6U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 6U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [0xcU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [0xcU]))));
            tracep->chgBit(oldp+2003,((1U & (IData)(
                                                    (0x7ffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))));
            tracep->chgBit(oldp+2004,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0xdU])));
            tracep->chgBit(oldp+2005,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0xdU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2006,((1U & (~ (IData)(
                                                       (0x7ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 7U)))))));
            tracep->chgBit(oldp+2007,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 7U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 7U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [0xdU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [0xdU]))));
            tracep->chgBit(oldp+2008,((1U & (IData)(
                                                    (0x3ffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))));
            tracep->chgBit(oldp+2009,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0xeU])));
            tracep->chgBit(oldp+2010,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0xeU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2011,((1U & (~ (IData)(
                                                       (0x3ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 8U)))))));
            tracep->chgBit(oldp+2012,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 8U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 8U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [0xeU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [0xeU]))));
            tracep->chgBit(oldp+2013,((1U & (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))));
            tracep->chgBit(oldp+2014,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0xfU])));
            tracep->chgBit(oldp+2015,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0xfU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2016,((1U & (~ (IData)(
                                                       (0x1ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 9U)))))));
            tracep->chgBit(oldp+2017,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 9U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 9U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [0xfU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [0xfU]))));
            tracep->chgBit(oldp+2018,((1U & (IData)(
                                                    (0xffffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))));
            tracep->chgBit(oldp+2019,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x10U])));
            tracep->chgBit(oldp+2020,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x10U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2021,((1U & (~ (IData)(
                                                       (0xffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xaU)))))));
            tracep->chgBit(oldp+2022,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xaU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xaU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [0x10U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [0x10U]))));
            tracep->chgBit(oldp+2023,((1U & (IData)(
                                                    (0x7fffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))));
            tracep->chgBit(oldp+2024,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x11U])));
            tracep->chgBit(oldp+2025,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x11U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2026,((1U & (~ (IData)(
                                                       (0x7fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xbU)))))));
            tracep->chgBit(oldp+2027,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xbU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xbU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [0x11U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [0x11U]))));
            tracep->chgBit(oldp+2028,((1U & (IData)(
                                                    (0x3fffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))));
            tracep->chgBit(oldp+2029,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x12U])));
            tracep->chgBit(oldp+2030,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x12U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2031,((1U & (~ (IData)(
                                                       (0x3fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xcU)))))));
            tracep->chgBit(oldp+2032,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xcU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xcU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [0x12U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [0x12U]))));
            tracep->chgBit(oldp+2033,((1U & (IData)(
                                                    (0x1fffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))));
            tracep->chgBit(oldp+2034,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x13U])));
            tracep->chgBit(oldp+2035,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x13U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2036,((1U & (~ (IData)(
                                                       (0x1fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xdU)))))));
            tracep->chgBit(oldp+2037,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xdU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xdU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [0x13U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [0x13U]))));
            tracep->chgBit(oldp+2038,((1U & (IData)(
                                                    (0xfffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))));
            tracep->chgBit(oldp+2039,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x14U])));
            tracep->chgBit(oldp+2040,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x14U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2041,((1U & (~ (IData)(
                                                       (0xfffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xeU)))))));
            tracep->chgBit(oldp+2042,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xeU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xeU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [0x14U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [0x14U]))));
            tracep->chgBit(oldp+2043,((1U & (IData)(
                                                    (0x7ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))));
            tracep->chgBit(oldp+2044,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x15U])));
            tracep->chgBit(oldp+2045,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x15U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2046,((1U & (~ (IData)(
                                                       (0x7ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xfU)))))));
            tracep->chgBit(oldp+2047,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0xfU))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0xfU))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [0x15U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [0x15U]))));
            tracep->chgBit(oldp+2048,((1U & (IData)(
                                                    (0x3ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))));
            tracep->chgBit(oldp+2049,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x16U])));
            tracep->chgBit(oldp+2050,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x16U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2051,((1U & (~ (IData)(
                                                       (0x3ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x10U)))))));
            tracep->chgBit(oldp+2052,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x10U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x10U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [0x16U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [0x16U]))));
            tracep->chgBit(oldp+2053,((1U & (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))));
            tracep->chgBit(oldp+2054,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x17U])));
            tracep->chgBit(oldp+2055,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x17U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2056,((1U & (~ (IData)(
                                                       (0x1ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x11U)))))));
            tracep->chgBit(oldp+2057,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x11U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x11U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [0x17U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [0x17U]))));
            tracep->chgBit(oldp+2058,((1U & (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))));
            tracep->chgBit(oldp+2059,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x18U])));
            tracep->chgBit(oldp+2060,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x18U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2061,((1U & (~ (IData)(
                                                       (0xffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x12U)))))));
            tracep->chgBit(oldp+2062,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x12U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x12U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [0x18U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [0x18U]))));
            tracep->chgBit(oldp+2063,((1U & (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))));
            tracep->chgBit(oldp+2064,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x19U])));
            tracep->chgBit(oldp+2065,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x19U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2066,((1U & (~ (IData)(
                                                       (0x7fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x13U)))))));
            tracep->chgBit(oldp+2067,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x13U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x13U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [0x19U] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [0x19U]))));
            tracep->chgBit(oldp+2068,((1U & (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))));
            tracep->chgBit(oldp+2069,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU])));
            tracep->chgBit(oldp+2070,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x1aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2071,((1U & (~ (IData)(
                                                       (0x3fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x14U)))))));
            tracep->chgBit(oldp+2072,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x14U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x14U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [0x1aU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [0x1aU]))));
            tracep->chgBit(oldp+2073,((1U & (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))));
            tracep->chgBit(oldp+2074,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU])));
            tracep->chgBit(oldp+2075,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x1bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2076,((1U & (~ (IData)(
                                                       (0x1fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x15U)))))));
            tracep->chgBit(oldp+2077,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x15U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x15U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [0x1bU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [0x1bU]))));
            tracep->chgBit(oldp+2078,((1U & (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))));
            tracep->chgBit(oldp+2079,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU])));
            tracep->chgBit(oldp+2080,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x1cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2081,((1U & (~ (IData)(
                                                       (0xfffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+2082,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x16U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x16U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [0x1cU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [0x1cU]))));
            tracep->chgBit(oldp+2083,((1U & (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))));
            tracep->chgBit(oldp+2084,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU])));
            tracep->chgBit(oldp+2085,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x1dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2086,((1U & (~ (IData)(
                                                       (0x7ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x17U)))))));
            tracep->chgBit(oldp+2087,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x17U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x17U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [0x1dU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [0x1dU]))));
            tracep->chgBit(oldp+2088,((1U & (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))));
            tracep->chgBit(oldp+2089,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU])));
            tracep->chgBit(oldp+2090,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                             [0x1eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2091,((1U & (~ (IData)(
                                                       (0x3ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x18U)))))));
            tracep->chgBit(oldp+2092,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                           >> 0x18U))))) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                          >> 0x18U))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                              [0x1eU] 
                                              >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                          [0x1eU]))));
            tracep->chgBit(oldp+2093,((1U & (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))));
            tracep->chgBit(oldp+2094,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU])));
        }
    }
}
