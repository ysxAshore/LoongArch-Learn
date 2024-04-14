// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


void Vsimu_top___024root__traceChgSub4(Vsimu_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 7908);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+0,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
                                       | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid))))));
            tracep->chgBit(oldp+1,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid))));
            tracep->chgBit(oldp+2,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0x8000U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+3,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0x8010U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+4,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0x8020U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+5,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0x8030U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+6,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0x8040U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+7,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0x8050U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+8,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0x8060U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+9,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0x8070U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+10,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                     & (0xff00U == 
                                        (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+11,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                     & (0xff30U == 
                                        (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+12,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                     & (0xff40U == 
                                        (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+13,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                     & (0xf020U == 
                                        (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+14,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                     & (0xf030U == 
                                        (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+15,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                     & (0xf040U == 
                                        (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+16,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                     & (0xf050U == 
                                        (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+17,(vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid));
            tracep->chgBit(oldp+18,(vlSelf->simu_top__DOT__soc__DOT__cpu_arready));
            tracep->chgIData(oldp+19,(vlSelf->simu_top__DOT__soc__DOT__m0_rdata),32);
            tracep->chgBit(oldp+20,(vlSelf->simu_top__DOT__soc__DOT__cpu_rvalid));
            tracep->chgBit(oldp+21,(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
            tracep->chgBit(oldp+22,(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid));
            tracep->chgBit(oldp+23,(vlSelf->simu_top__DOT__soc__DOT__m0_bready));
            tracep->chgBit(oldp+24,(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
            tracep->chgBit(oldp+25,(vlSelf->simu_top__DOT__soc__DOT__m0_rready));
            tracep->chgBit(oldp+26,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid))));
            tracep->chgBit(oldp+27,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid))));
            tracep->chgBit(oldp+28,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))));
            tracep->chgBit(oldp+29,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid))));
            tracep->chgBit(oldp+30,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready))));
            tracep->chgBit(oldp+31,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                           >> 3U))));
            tracep->chgBit(oldp+32,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                           >> 3U))));
            tracep->chgBit(oldp+33,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                           >> 3U))));
            tracep->chgBit(oldp+34,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                           >> 3U))));
            tracep->chgBit(oldp+35,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                           >> 3U))));
            tracep->chgBit(oldp+36,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                           >> 2U))));
            tracep->chgBit(oldp+37,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                           >> 2U))));
            tracep->chgBit(oldp+38,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                           >> 2U))));
            tracep->chgBit(oldp+39,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                           >> 2U))));
            tracep->chgBit(oldp+40,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                           >> 2U))));
            tracep->chgBit(oldp+41,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en));
            tracep->chgCData(oldp+42,(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen),4);
            tracep->chgIData(oldp+43,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataA),32);
            tracep->chgBit(oldp+44,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_allowin));
            tracep->chgBit(oldp+45,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_allowin));
            tracep->chgBit(oldp+46,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_allowin));
            tracep->chgBit(oldp+47,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_id_valid));
            tracep->chgBit(oldp+48,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_to_exe_valid));
            tracep->chgBit(oldp+49,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_mem_valid));
            tracep->chgBit(oldp+50,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_valid));
            tracep->chgQData(oldp+51,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_to_if_bus),34);
            tracep->chgWData(oldp+53,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_mem_bus),300);
            tracep->chgWData(oldp+63,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_bus),102);
            tracep->chgQData(oldp+67,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus),41);
            tracep->chgWData(oldp+69,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus),72);
            tracep->chgWData(oldp+72,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus),254);
            tracep->chgWData(oldp+80,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus),222);
            tracep->chgWData(oldp+87,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus),129);
            tracep->chgQData(oldp+92,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus),52);
            tracep->chgQData(oldp+94,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus),36);
            tracep->chgWData(oldp+96,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus),89);
            tracep->chgWData(oldp+99,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus),100);
            tracep->chgQData(oldp+103,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus),38);
            tracep->chgIData(oldp+105,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus),30);
            tracep->chgQData(oldp+106,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus),38);
            tracep->chgBit(oldp+108,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_req));
            tracep->chgIData(oldp+109,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr),32);
            tracep->chgIData(oldp+110,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_rdata),32);
            tracep->chgBit(oldp+111,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_data_ok));
            tracep->chgBit(oldp+112,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_req));
            tracep->chgBit(oldp+113,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_wr));
            tracep->chgCData(oldp+114,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_wstrb),4);
            tracep->chgIData(oldp+115,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr),32);
            tracep->chgIData(oldp+116,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_rdata),32);
            tracep->chgBit(oldp+117,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr_ok));
            tracep->chgBit(oldp+118,((1U & ((1U & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                                    >> 0x16U) 
                                                   & (~ 
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                                       >> 0x15U))))
                                             ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U]
                                             : ((0U 
                                                 != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select))
                                                  ? 
                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                                  >> 2U)
                                                  : 
                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                                  >> 1U))
                                                 : (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                            >> 7U)))))));
            tracep->chgBit(oldp+119,((1U & ((IData)(
                                                    (0x800000ULL 
                                                     == 
                                                     (0xc00000ULL 
                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus)))
                                             ? (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                        >> 3U))
                                             : ((0U 
                                                 != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select))
                                                  ? (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                             >> 2U))
                                                  : (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                             >> 1U)))
                                                 : (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                            >> 7U)))))));
            tracep->chgCData(oldp+120,((0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[3U] 
                                                  << 2U) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[2U] 
                                                    >> 0x1eU)))),5);
            tracep->chgSData(oldp+121,((0x3fffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                   >> 0x10U))),14);
            tracep->chgBit(oldp+122,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                            >> 0xfU))));
            tracep->chgSData(oldp+123,((0x3fffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                   >> 1U))),14);
            tracep->chgIData(oldp+124,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                         << 0x1fU) 
                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+125,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U])));
            tracep->chgBit(oldp+126,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[5U] 
                                      >> 0x1fU)));
            tracep->chgSData(oldp+127,((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[4U] 
                                                  >> 0x16U))),9);
            tracep->chgCData(oldp+128,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[4U] 
                                                 >> 0x10U))),6);
            tracep->chgIData(oldp+129,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[5U] 
                                         << 1U) | (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[4U] 
                                                   >> 0x1fU))),32);
            tracep->chgIData(oldp+130,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[4U] 
                                         << 0x11U) 
                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[3U] 
                                           >> 0xfU))),32);
            tracep->chgBit(oldp+131,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[4U] 
                                            >> 0xfU))));
            tracep->chgSData(oldp+132,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[3U] 
                                                  >> 5U))),10);
            tracep->chgIData(oldp+133,((0x7ffffU & 
                                        ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[3U] 
                                          << 0xeU) 
                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[2U] 
                                            >> 0x12U)))),19);
            tracep->chgIData(oldp+134,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[2U] 
                                         << 0xeU) | 
                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[1U] 
                                         >> 0x12U))),32);
            tracep->chgIData(oldp+135,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[1U] 
                                         << 0xeU) | 
                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                         >> 0x12U))),32);
            tracep->chgCData(oldp+136,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                                 >> 0xdU))),5);
            tracep->chgCData(oldp+137,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                                 >> 7U))),6);
            tracep->chgBit(oldp+138,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+139,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                            >> 4U))));
            tracep->chgBit(oldp+140,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                            >> 5U))));
            tracep->chgBit(oldp+141,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                            >> 3U))));
            tracep->chgBit(oldp+142,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+143,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+144,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U])));
            tracep->chgCData(oldp+145,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cur_plv),2);
            tracep->chgIData(oldp+146,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csrRData),32);
            tracep->chgIData(oldp+147,((0x7ffffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 0x11U)))),19);
            tracep->chgSData(oldp+148,((0x3ffU & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 7U)))),10);
            tracep->chgBit(oldp+149,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                    >> 6U)))));
            tracep->chgBit(oldp+150,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                    >> 5U)))));
            tracep->chgCData(oldp+151,((0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))),5);
            tracep->chgCData(oldp+152,((0x1fU & (IData)(
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                                                        [0x1fU]))),5);
            tracep->chgBit(oldp+153,((0U != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1)));
            tracep->chgCData(oldp+154,((0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                  << 1U) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                    >> 0x1fU)))),5);
            tracep->chgBit(oldp+155,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+156,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                 >> 0x19U))),5);
            tracep->chgBit(oldp+157,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                            >> 0x18U))));
            tracep->chgIData(oldp+158,((0x7ffffU & 
                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                         >> 5U))),19);
            tracep->chgCData(oldp+159,((0x3fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                  << 1U) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[1U] 
                                                    >> 0x1fU)))),6);
            tracep->chgSData(oldp+160,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[1U] 
                                                  >> 0x15U))),10);
            tracep->chgBit(oldp+161,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[1U] 
                                            >> 0x14U))));
            tracep->chgIData(oldp+162,((0xfffffU & 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[1U])),20);
            tracep->chgCData(oldp+163,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                        >> 0x1eU)),2);
            tracep->chgCData(oldp+164,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+165,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+166,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                            >> 0x1aU))));
            tracep->chgIData(oldp+167,((0xfffffU & 
                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                         >> 6U))),20);
            tracep->chgCData(oldp+168,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                              >> 4U))),2);
            tracep->chgCData(oldp+169,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+170,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+171,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U])));
            tracep->chgBit(oldp+172,((0U != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0)));
            tracep->chgIData(oldp+173,((0xfffffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                                                            [0x1fU] 
                                                            >> 0x11U)))),20);
            tracep->chgCData(oldp+174,((0x3fU & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                                                         [0x1fU] 
                                                         >> 0xbU)))),6);
            tracep->chgCData(oldp+175,((3U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                                                      [0x1fU] 
                                                      >> 9U)))),2);
            tracep->chgCData(oldp+176,((3U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                                                      [0x1fU] 
                                                      >> 7U)))),2);
            tracep->chgBit(oldp+177,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                                                    [0x1fU] 
                                                    >> 6U)))));
            tracep->chgBit(oldp+178,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                                                    [0x1fU] 
                                                    >> 5U)))));
            tracep->chgCData(oldp+179,((0x1fU & (IData)(
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                                                        [0x1fU]))),5);
            tracep->chgIData(oldp+180,((0x7ffffU & 
                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                         >> 0xbU))),19);
            tracep->chgBit(oldp+181,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus)));
            tracep->chgSData(oldp+182,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                  >> 1U))),10);
            tracep->chgIData(oldp+183,((0xfffffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                                                            [0x1fU] 
                                                            >> 0x11U)))),20);
            tracep->chgCData(oldp+184,((0x3fU & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                                                         [0x1fU] 
                                                         >> 0xbU)))),6);
            tracep->chgCData(oldp+185,((3U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                                                      [0x1fU] 
                                                      >> 9U)))),2);
            tracep->chgCData(oldp+186,((3U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                                                      [0x1fU] 
                                                      >> 7U)))),2);
            tracep->chgBit(oldp+187,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                                                    [0x1fU] 
                                                    >> 6U)))));
            tracep->chgBit(oldp+188,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                                                    [0x1fU] 
                                                    >> 5U)))));
            tracep->chgBit(oldp+189,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid));
            tracep->chgBit(oldp+190,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__rd_requst_can_receive));
            tracep->chgBit(oldp+191,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid));
            tracep->chgQData(oldp+192,((((QData)((IData)(
                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[4U])) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[3U])) 
                                            << 2U) 
                                           | ((QData)((IData)(
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[2U])) 
                                              >> 0x1eU)))),64);
            tracep->chgBit(oldp+194,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_ready_go));
            tracep->chgBit(oldp+195,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_allowin));
            tracep->chgBit(oldp+196,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__preIf_to_if_valid));
            tracep->chgBit(oldp+197,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__preIF_ready_go));
            tracep->chgIData(oldp+198,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc),32);
            tracep->chgBit(oldp+199,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__br_taken));
            tracep->chgIData(oldp+200,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[3U] 
                                         << 0x1fU) 
                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[2U] 
                                           >> 1U))),32);
            tracep->chgIData(oldp+201,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[4U] 
                                         << 0x1fU) 
                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[3U] 
                                           >> 1U))),32);
            tracep->chgIData(oldp+202,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[2U] 
                                         << 0x1fU) 
                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[1U] 
                                           >> 1U))),32);
            tracep->chgSData(oldp+203,((0x3ffU & ((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[1U] 
                                                   << 9U) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                                     >> 0x17U)))),10);
            tracep->chgBit(oldp+204,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+205,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+206,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+207,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+208,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+209,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                              >> 9U))),3);
            tracep->chgBit(oldp+210,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                            >> 8U))));
            tracep->chgBit(oldp+211,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+212,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                            >> 7U))));
            tracep->chgBit(oldp+213,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                            >> 5U))));
            tracep->chgBit(oldp+214,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+215,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                            >> 1U))));
            tracep->chgCData(oldp+216,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+217,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U])));
            tracep->chgBit(oldp+218,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                    >> 0x25U)))));
            tracep->chgIData(oldp+219,((0xfffffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                            >> 0x11U)))),20);
            tracep->chgCData(oldp+220,((0x3fU & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                         >> 0xbU)))),6);
            tracep->chgCData(oldp+221,((3U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                      >> 9U)))),2);
            tracep->chgCData(oldp+222,((3U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                      >> 7U)))),2);
            tracep->chgBit(oldp+223,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                    >> 6U)))));
            tracep->chgBit(oldp+224,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                    >> 5U)))));
            tracep->chgCData(oldp+225,((0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus))),5);
            tracep->chgBit(oldp+226,((0U != (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc))));
            tracep->chgBit(oldp+227,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__TLBR));
            tracep->chgBit(oldp+228,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__PPI));
            tracep->chgBit(oldp+229,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__PIF));
            tracep->chgIData(oldp+230,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc 
                                        >> 0xdU)),19);
            tracep->chgBit(oldp+231,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc 
                                            >> 0xcU))));
            tracep->chgIData(oldp+232,((((- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select)))) 
                                         & ((0xe0000000U 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                                << 0x11U)) 
                                            | (0x1fffffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc))) 
                                        | ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select) 
                                                          >> 1U)))) 
                                           & ((0xe0000000U 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                                  << 0x14U)) 
                                              | (0x1fffffffU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc))))),32);
            tracep->chgCData(oldp+233,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select),2);
            tracep->chgIData(oldp+234,(((0x21U == (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                              >> 0xbU))))
                                         ? (((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                      >> 0x1aU)) 
                                             << 0x15U) 
                                            | (0x1fffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc))
                                         : (((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                      >> 0x11U)) 
                                             << 0xcU) 
                                            | (0xfffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc)))),32);
            tracep->chgBit(oldp+235,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_ready_go));
            tracep->chgBit(oldp+236,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_taken));
            tracep->chgBit(oldp+237,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel));
            tracep->chgBit(oldp+238,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                    >> 0x28U)))));
            tracep->chgBit(oldp+239,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                    >> 0x26U)))));
            tracep->chgBit(oldp+240,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                    >> 0x27U)))));
            tracep->chgCData(oldp+241,((0x1fU & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                         >> 0x21U)))),5);
            tracep->chgIData(oldp+242,((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                >> 1U))),32);
            tracep->chgBit(oldp+243,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus))));
            tracep->chgBit(oldp+244,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[2U] 
                                            >> 7U))));
            tracep->chgBit(oldp+245,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[2U] 
                                            >> 6U))));
            tracep->chgBit(oldp+246,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+247,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[2U])),5);
            tracep->chgIData(oldp+248,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[1U]),32);
            tracep->chgIData(oldp+249,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[0U]),32);
            tracep->chgIData(oldp+250,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB),32);
            tracep->chgBit(oldp+251,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__load_delay));
            tracep->chgIData(oldp+252,((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB)),32);
            tracep->chgIData(oldp+253,(((IData)(1U) 
                                        + (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataA 
                                           + (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB)))),32);
            tracep->chgBit(oldp+254,((1U & (IData)(
                                                   (1ULL 
                                                    & ((1ULL 
                                                        + 
                                                        ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataA)) 
                                                         + (QData)((IData)(
                                                                           (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB))))) 
                                                       >> 0x20U))))));
            tracep->chgBit(oldp+255,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__rj_eq_rd));
            tracep->chgBit(oldp+256,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__rj_lt_rd));
            tracep->chgBit(oldp+257,((1U & (~ (IData)(
                                                      (1ULL 
                                                       & ((1ULL 
                                                           + 
                                                           ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataA)) 
                                                            + (QData)((IData)(
                                                                              (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB))))) 
                                                          >> 0x20U)))))));
            tracep->chgBit(oldp+258,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_ready_go));
            tracep->chgBit(oldp+259,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_memW));
            tracep->chgIData(oldp+260,((0x7ffffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                            >> 0x22U)))),19);
            tracep->chgSData(oldp+261,((0x3ffU & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                          >> 0x18U)))),10);
            tracep->chgBit(oldp+262,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                    >> 0x17U)))));
            tracep->chgBit(oldp+263,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                    >> 0x16U)))));
            tracep->chgCData(oldp+264,((7U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                      >> 0x13U)))),3);
            tracep->chgCData(oldp+265,((7U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                      >> 0x10U)))),3);
            tracep->chgCData(oldp+266,((7U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                      >> 0xdU)))),3);
            tracep->chgCData(oldp+267,((7U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                      >> 0xaU)))),3);
            tracep->chgBit(oldp+268,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                    >> 9U)))));
            tracep->chgBit(oldp+269,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                    >> 7U)))));
            tracep->chgBit(oldp+270,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                    >> 8U)))));
            tracep->chgBit(oldp+271,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                    >> 6U)))));
            tracep->chgCData(oldp+272,((3U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                      >> 4U)))),2);
            tracep->chgBit(oldp+273,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                    >> 3U)))));
            tracep->chgBit(oldp+274,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                    >> 2U)))));
            tracep->chgBit(oldp+275,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                    >> 1U)))));
            tracep->chgBit(oldp+276,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus))));
            tracep->chgBit(oldp+277,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                    >> 0x25U)))));
            tracep->chgIData(oldp+278,((0xfffffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                            >> 0x11U)))),20);
            tracep->chgCData(oldp+279,((0x3fU & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                         >> 0xbU)))),6);
            tracep->chgCData(oldp+280,((3U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                      >> 9U)))),2);
            tracep->chgCData(oldp+281,((3U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                      >> 7U)))),2);
            tracep->chgBit(oldp+282,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                    >> 6U)))));
            tracep->chgBit(oldp+283,((1U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                    >> 5U)))));
            tracep->chgCData(oldp+284,((0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus))),5);
            tracep->chgQData(oldp+285,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_mulResult),64);
            tracep->chgBit(oldp+287,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__TLBR));
            tracep->chgBit(oldp+288,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PIL));
            tracep->chgBit(oldp+289,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PIS));
            tracep->chgBit(oldp+290,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PPI));
            tracep->chgBit(oldp+291,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PME));
            tracep->chgBit(oldp+292,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_regW));
            tracep->chgBit(oldp+293,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_excp));
            tracep->chgCData(oldp+294,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select),2);
            tracep->chgIData(oldp+295,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_finalResult),32);
            tracep->chgBit(oldp+296,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT____Vcellinp__u_mul__resetn));
            tracep->chgQData(oldp+297,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[0]),64);
            tracep->chgQData(oldp+299,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[1]),64);
            tracep->chgQData(oldp+301,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[2]),64);
            tracep->chgQData(oldp+303,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[3]),64);
            tracep->chgQData(oldp+305,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[4]),64);
            tracep->chgQData(oldp+307,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[5]),64);
            tracep->chgQData(oldp+309,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[6]),64);
            tracep->chgQData(oldp+311,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[7]),64);
            tracep->chgQData(oldp+313,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[8]),64);
            tracep->chgQData(oldp+315,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[9]),64);
            tracep->chgQData(oldp+317,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[10]),64);
            tracep->chgQData(oldp+319,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[11]),64);
            tracep->chgQData(oldp+321,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[12]),64);
            tracep->chgQData(oldp+323,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[13]),64);
            tracep->chgQData(oldp+325,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[14]),64);
            tracep->chgQData(oldp+327,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[15]),64);
            tracep->chgQData(oldp+329,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[16]),64);
            tracep->chgIData(oldp+331,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__p),32);
            tracep->chgQData(oldp+332,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__COut),64);
            tracep->chgQData(oldp+334,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SOut),64);
            tracep->chgQData(oldp+336,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig[0]),64);
            tracep->chgQData(oldp+338,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig[1]),64);
            tracep->chgQData(oldp+340,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig[2]),64);
            tracep->chgQData(oldp+342,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig[3]),64);
            tracep->chgQData(oldp+344,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig[4]),64);
            tracep->chgQData(oldp+346,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC[0]),64);
            tracep->chgQData(oldp+348,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC[1]),64);
            tracep->chgQData(oldp+350,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC[2]),64);
            tracep->chgQData(oldp+352,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC[3]),64);
            tracep->chgQData(oldp+354,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC[4]),64);
            tracep->chgQData(oldp+356,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig[0]),64);
            tracep->chgQData(oldp+358,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig[1]),64);
            tracep->chgQData(oldp+360,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig[2]),64);
            tracep->chgQData(oldp+362,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig[3]),64);
            tracep->chgQData(oldp+364,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC[0]),64);
            tracep->chgQData(oldp+366,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC[1]),64);
            tracep->chgQData(oldp+368,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC[2]),64);
            tracep->chgQData(oldp+370,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC[3]),64);
            tracep->chgQData(oldp+372,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig[0]),64);
            tracep->chgQData(oldp+374,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig[1]),64);
            tracep->chgQData(oldp+376,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC[0]),64);
            tracep->chgQData(oldp+378,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC[1]),64);
            tracep->chgQData(oldp+380,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forSig[0]),64);
            tracep->chgQData(oldp+382,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forSig[1]),64);
            tracep->chgQData(oldp+384,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forC[0]),64);
            tracep->chgQData(oldp+386,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forC[1]),64);
            tracep->chgQData(oldp+388,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fifSig),64);
            tracep->chgQData(oldp+390,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fifC),64);
            tracep->chgQData(oldp+392,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                       [0U]),64);
            tracep->chgQData(oldp+394,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                       [1U]),64);
            tracep->chgQData(oldp+396,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                       [2U]),64);
            tracep->chgQData(oldp+398,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir1__Carry),64);
            tracep->chgQData(oldp+400,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir1__S),64);
            tracep->chgQData(oldp+402,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                       [3U]),64);
            tracep->chgQData(oldp+404,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                       [4U]),64);
            tracep->chgQData(oldp+406,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                       [5U]),64);
            tracep->chgQData(oldp+408,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir2__Carry),64);
            tracep->chgQData(oldp+410,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir2__S),64);
            tracep->chgQData(oldp+412,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                       [6U]),64);
            tracep->chgQData(oldp+414,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                       [7U]),64);
            tracep->chgQData(oldp+416,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                       [8U]),64);
            tracep->chgQData(oldp+418,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir3__Carry),64);
            tracep->chgQData(oldp+420,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir3__S),64);
            tracep->chgQData(oldp+422,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                       [9U]),64);
            tracep->chgQData(oldp+424,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xaU]),64);
            tracep->chgQData(oldp+426,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xbU]),64);
            tracep->chgQData(oldp+428,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir4__Carry),64);
            tracep->chgQData(oldp+430,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir4__S),64);
            tracep->chgQData(oldp+432,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xcU]),64);
            tracep->chgQData(oldp+434,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xdU]),64);
            tracep->chgQData(oldp+436,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU]),64);
            tracep->chgQData(oldp+438,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__Carry),64);
            tracep->chgQData(oldp+440,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S),64);
            tracep->chgQData(oldp+442,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xfU]),64);
            tracep->chgQData(oldp+444,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                       [0x10U]),64);
            tracep->chgQData(oldp+446,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                       [0U]),64);
            tracep->chgQData(oldp+448,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry),64);
            tracep->chgQData(oldp+450,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S),64);
            tracep->chgQData(oldp+452,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                        [0U] << 1U)),64);
            tracep->chgQData(oldp+454,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                       [1U]),64);
            tracep->chgQData(oldp+456,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                        [1U] << 1U)),64);
            tracep->chgQData(oldp+458,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry),64);
            tracep->chgQData(oldp+460,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S),64);
            tracep->chgQData(oldp+462,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                       [2U]),64);
            tracep->chgQData(oldp+464,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                        [2U] << 1U)),64);
            tracep->chgQData(oldp+466,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                       [3U]),64);
            tracep->chgQData(oldp+468,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry),64);
            tracep->chgQData(oldp+470,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S),64);
            tracep->chgQData(oldp+472,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                        [3U] << 1U)),64);
            tracep->chgQData(oldp+474,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                       [4U]),64);
            tracep->chgQData(oldp+476,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                        [4U] << 1U)),64);
            tracep->chgQData(oldp+478,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry),64);
            tracep->chgQData(oldp+480,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S),64);
            tracep->chgQData(oldp+482,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                        [0U] << 1U)),64);
            tracep->chgQData(oldp+484,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                       [0U]),64);
            tracep->chgQData(oldp+486,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                        [1U] << 1U)),64);
            tracep->chgQData(oldp+488,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry),64);
            tracep->chgQData(oldp+490,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S),64);
            tracep->chgQData(oldp+492,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                       [1U]),64);
            tracep->chgQData(oldp+494,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                        [2U] << 1U)),64);
            tracep->chgQData(oldp+496,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                       [2U]),64);
            tracep->chgQData(oldp+498,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry),64);
            tracep->chgQData(oldp+500,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S),64);
            tracep->chgQData(oldp+502,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                        [3U] << 1U)),64);
            tracep->chgQData(oldp+504,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                       [3U]),64);
            tracep->chgQData(oldp+506,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                        [0U] << 1U)),64);
            tracep->chgQData(oldp+508,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry),64);
            tracep->chgQData(oldp+510,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__S),64);
            tracep->chgQData(oldp+512,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                       [0U]),64);
            tracep->chgQData(oldp+514,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                        [1U] << 1U)),64);
            tracep->chgQData(oldp+516,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                       [1U]),64);
            tracep->chgQData(oldp+518,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry),64);
            tracep->chgQData(oldp+520,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S),64);
            tracep->chgQData(oldp+522,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forC
                                        [0U] << 1U)),64);
            tracep->chgQData(oldp+524,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forSig
                                       [0U]),64);
            tracep->chgQData(oldp+526,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forC
                                        [1U] << 1U)),64);
            tracep->chgQData(oldp+528,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forSig
                                       [1U]),64);
            tracep->chgQData(oldp+530,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fifC 
                                        << 1U)),64);
            tracep->chgCData(oldp+532,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc),6);
            tracep->chgCData(oldp+533,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc),6);
            tracep->chgCData(oldp+534,((0x3fU & ((0x1fU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc)) 
                                                 - 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc))))),6);
            tracep->chgBit(oldp+535,((1U & ((1U & (
                                                   ((0x1fU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc)) 
                                                    - 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc))) 
                                                   >> 5U)) 
                                            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc) 
                                               >> 5U)))));
            tracep->chgBit(oldp+536,((0x1fU == (0x1fU 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc)))));
            tracep->chgBit(oldp+537,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_ready_go));
            tracep->chgIData(oldp+538,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[6U] 
                                         << 2U) | (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[5U] 
                                                   >> 0x1eU))),32);
            tracep->chgIData(oldp+539,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[5U] 
                                         << 2U) | (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[4U] 
                                                   >> 0x1eU))),32);
            tracep->chgIData(oldp+540,((0x7ffffU & 
                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[2U] 
                                         >> 0xbU))),19);
            tracep->chgSData(oldp+541,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[2U] 
                                                  >> 1U))),10);
            tracep->chgCData(oldp+542,((0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[2U] 
                                                  << 4U) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[1U] 
                                                    >> 0x1cU)))),5);
            tracep->chgBit(oldp+543,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[1U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+544,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[1U] 
                                                 >> 0x15U))),6);
            tracep->chgBit(oldp+545,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[1U] 
                                            >> 0x14U))));
            tracep->chgIData(oldp+546,((0xfffffU & 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[1U])),20);
            tracep->chgCData(oldp+547,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                        >> 0x1eU)),2);
            tracep->chgCData(oldp+548,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+549,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+550,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                            >> 0x1aU))));
            tracep->chgIData(oldp+551,((0xfffffU & 
                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                         >> 6U))),20);
            tracep->chgCData(oldp+552,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                              >> 4U))),2);
            tracep->chgCData(oldp+553,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+554,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+555,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U])));
            tracep->chgBit(oldp+556,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U] 
                                            >> 0x18U))));
            tracep->chgIData(oldp+557,((0x7ffffU & 
                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U] 
                                         >> 5U))),19);
            tracep->chgCData(oldp+558,((0x3fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U] 
                                                  << 1U) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                                    >> 0x1fU)))),6);
            tracep->chgSData(oldp+559,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                                  >> 0x15U))),10);
            tracep->chgBit(oldp+560,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                            >> 0x14U))));
            tracep->chgIData(oldp+561,((0xfffffU & 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U])),20);
            tracep->chgCData(oldp+562,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                        >> 0x1eU)),2);
            tracep->chgCData(oldp+563,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+564,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+565,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                            >> 0x1aU))));
            tracep->chgIData(oldp+566,((0xfffffU & 
                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                         >> 6U))),20);
            tracep->chgCData(oldp+567,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                              >> 4U))),2);
            tracep->chgCData(oldp+568,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+569,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+570,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U])));
            tracep->chgCData(oldp+571,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__byteReadData),8);
            tracep->chgSData(oldp+572,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__halfReadData),16);
            tracep->chgIData(oldp+573,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_regWData),32);
            tracep->chgIData(oldp+574,(((0x1000000U 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                         ? ((0xfffff00U 
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
                                         : 0U)),32);
            tracep->chgIData(oldp+575,(((0x1000000U 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                         ? (0x80U | 
                                            ((0xfffff00U 
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
            tracep->chgSData(oldp+576,(((0x1000000U 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                         ? (0x3ffU 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                               >> 0x15U))
                                         : 0U)),10);
            tracep->chgIData(oldp+577,(((0x1000000U 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                         ? (0x7ffffU 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U] 
                                               >> 5U))
                                         : 0U)),19);
            tracep->chgCData(oldp+578,(((0x1000000U 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                         ? (0x3fU & 
                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U] 
                                              << 1U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                                >> 0x1fU)))
                                         : 0U)),6);
            tracep->chgBit(oldp+579,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen));
            tracep->chgBit(oldp+580,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (1U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+581,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (2U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+582,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (4U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+583,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (5U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+584,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (6U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+585,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (7U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+586,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (0xcU 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+587,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (0x10U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+588,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (0x11U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+589,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (0x12U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+590,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (0x13U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+591,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (0x18U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+592,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (0x19U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+593,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (0x1aU 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+594,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (0x30U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+595,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (0x31U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+596,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (0x32U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+597,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (0x33U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+598,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (0x40U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+599,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tcfg_wen));
            tracep->chgBit(oldp+600,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (0x43U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+601,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (0x44U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+602,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (0x60U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+603,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (0x88U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+604,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (0x98U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+605,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (0x180U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+606,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (0x181U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+607,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (0x100U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgBit(oldp+608,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       >> 0xfU) & (0x101U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                       >> 1U))))));
            tracep->chgIData(oldp+609,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0),32);
            tracep->chgIData(oldp+610,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1),32);
            tracep->chgQData(oldp+611,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0]),37);
            tracep->chgQData(oldp+613,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[1]),37);
            tracep->chgQData(oldp+615,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[2]),37);
            tracep->chgQData(oldp+617,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[3]),37);
            tracep->chgQData(oldp+619,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[4]),37);
            tracep->chgQData(oldp+621,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[5]),37);
            tracep->chgQData(oldp+623,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[6]),37);
            tracep->chgQData(oldp+625,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[7]),37);
            tracep->chgQData(oldp+627,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[8]),37);
            tracep->chgQData(oldp+629,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[9]),37);
            tracep->chgQData(oldp+631,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[10]),37);
            tracep->chgQData(oldp+633,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[11]),37);
            tracep->chgQData(oldp+635,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[12]),37);
            tracep->chgQData(oldp+637,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[13]),37);
            tracep->chgQData(oldp+639,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[14]),37);
            tracep->chgQData(oldp+641,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[15]),37);
            tracep->chgQData(oldp+643,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[16]),37);
            tracep->chgQData(oldp+645,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[17]),37);
            tracep->chgQData(oldp+647,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[18]),37);
            tracep->chgQData(oldp+649,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[19]),37);
            tracep->chgQData(oldp+651,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[20]),37);
            tracep->chgQData(oldp+653,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[21]),37);
            tracep->chgQData(oldp+655,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[22]),37);
            tracep->chgQData(oldp+657,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[23]),37);
            tracep->chgQData(oldp+659,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[24]),37);
            tracep->chgQData(oldp+661,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[25]),37);
            tracep->chgQData(oldp+663,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[26]),37);
            tracep->chgQData(oldp+665,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[27]),37);
            tracep->chgQData(oldp+667,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[28]),37);
            tracep->chgQData(oldp+669,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[29]),37);
            tracep->chgQData(oldp+671,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[30]),37);
            tracep->chgQData(oldp+673,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[31]),37);
            tracep->chgQData(oldp+675,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0]),37);
            tracep->chgQData(oldp+677,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[1]),37);
            tracep->chgQData(oldp+679,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[2]),37);
            tracep->chgQData(oldp+681,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[3]),37);
            tracep->chgQData(oldp+683,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[4]),37);
            tracep->chgQData(oldp+685,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[5]),37);
            tracep->chgQData(oldp+687,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[6]),37);
            tracep->chgQData(oldp+689,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[7]),37);
            tracep->chgQData(oldp+691,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[8]),37);
            tracep->chgQData(oldp+693,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[9]),37);
            tracep->chgQData(oldp+695,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[10]),37);
            tracep->chgQData(oldp+697,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[11]),37);
            tracep->chgQData(oldp+699,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[12]),37);
            tracep->chgQData(oldp+701,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[13]),37);
            tracep->chgQData(oldp+703,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[14]),37);
            tracep->chgQData(oldp+705,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[15]),37);
            tracep->chgQData(oldp+707,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[16]),37);
            tracep->chgQData(oldp+709,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[17]),37);
            tracep->chgQData(oldp+711,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[18]),37);
            tracep->chgQData(oldp+713,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[19]),37);
            tracep->chgQData(oldp+715,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[20]),37);
            tracep->chgQData(oldp+717,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[21]),37);
            tracep->chgQData(oldp+719,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[22]),37);
            tracep->chgQData(oldp+721,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[23]),37);
            tracep->chgQData(oldp+723,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[24]),37);
            tracep->chgQData(oldp+725,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[25]),37);
            tracep->chgQData(oldp+727,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[26]),37);
            tracep->chgQData(oldp+729,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[27]),37);
            tracep->chgQData(oldp+731,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[28]),37);
            tracep->chgQData(oldp+733,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[29]),37);
            tracep->chgQData(oldp+735,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[30]),37);
            tracep->chgQData(oldp+737,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[31]),37);
            tracep->chgCData(oldp+739,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr 
                                                 >> 4U))),8);
            tracep->chgIData(oldp+740,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr 
                                        >> 0xcU)),20);
            tracep->chgCData(oldp+741,((0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr)),4);
            tracep->chgBit(oldp+742,((1U & (~ ((1U 
                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                                    >> 0x16U) 
                                                   & (~ 
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                                       >> 0x15U))))
                                                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U]
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select))
                                                    ? 
                                                   ((1U 
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
            tracep->chgIData(oldp+743,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr 
                                        >> 0xcU)),20);
            tracep->chgCData(oldp+744,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr 
                                                 >> 4U))),8);
            tracep->chgCData(oldp+745,((0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr)),4);
            tracep->chgBit(oldp+746,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv_wea));
            tracep->chgCData(oldp+747,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv_addra),8);
            tracep->chgBit(oldp+748,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv_wea));
            tracep->chgCData(oldp+749,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_wea),4);
            tracep->chgCData(oldp+750,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_addr),8);
            tracep->chgIData(oldp+751,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina),32);
            tracep->chgCData(oldp+752,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_wea),4);
            tracep->chgCData(oldp+753,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_addr),8);
            tracep->chgCData(oldp+754,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_wea),4);
            tracep->chgCData(oldp+755,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_addr),8);
            tracep->chgCData(oldp+756,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_wea),4);
            tracep->chgCData(oldp+757,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_addr),8);
            tracep->chgCData(oldp+758,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_wea),4);
            tracep->chgCData(oldp+759,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_addr),8);
            tracep->chgCData(oldp+760,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_wea),4);
            tracep->chgCData(oldp+761,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_addr),8);
            tracep->chgCData(oldp+762,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_wea),4);
            tracep->chgCData(oldp+763,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_addr),8);
            tracep->chgCData(oldp+764,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_wea),4);
            tracep->chgCData(oldp+765,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_addr),8);
            tracep->chgBit(oldp+766,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__refill_write_way0));
            tracep->chgBit(oldp+767,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__refill_write_way1));
            tracep->chgBit(oldp+768,((1U & (~ ((IData)(
                                                       (0x800000ULL 
                                                        == 
                                                        (0xc00000ULL 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus)))
                                                ? (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                           >> 3U))
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select))
                                                    ? 
                                                   ((1U 
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
            tracep->chgBit(oldp+769,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv_wea));
            tracep->chgCData(oldp+770,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv_addra),8);
            tracep->chgBit(oldp+771,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv_wea));
            tracep->chgCData(oldp+772,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv_addra),8);
            tracep->chgCData(oldp+773,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0_wea),4);
            tracep->chgCData(oldp+774,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0_addr),8);
            tracep->chgIData(oldp+775,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina),32);
            tracep->chgCData(oldp+776,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1_wea),4);
            tracep->chgCData(oldp+777,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1_addr),8);
            tracep->chgCData(oldp+778,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2_wea),4);
            tracep->chgCData(oldp+779,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2_addr),8);
            tracep->chgCData(oldp+780,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_wea),4);
            tracep->chgCData(oldp+781,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_addr),8);
            tracep->chgCData(oldp+782,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0_wea),4);
            tracep->chgCData(oldp+783,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0_addr),8);
            tracep->chgCData(oldp+784,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1_wea),4);
            tracep->chgCData(oldp+785,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1_addr),8);
            tracep->chgCData(oldp+786,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2_wea),4);
            tracep->chgCData(oldp+787,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2_addr),8);
            tracep->chgCData(oldp+788,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3_wea),4);
            tracep->chgCData(oldp+789,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3_addr),8);
            tracep->chgBit(oldp+790,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__idle2lookup_able));
            tracep->chgBit(oldp+791,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lookup2lookup_able));
            tracep->chgBit(oldp+792,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__refill_write_way0));
            tracep->chgBit(oldp+793,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__refill_write_way1));
            tracep->chgBit(oldp+794,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                            >> 1U))));
            tracep->chgBit(oldp+795,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                            >> 1U))));
            tracep->chgBit(oldp+796,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                            >> 1U))));
            tracep->chgBit(oldp+797,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                            >> 1U))));
            tracep->chgBit(oldp+798,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                            >> 1U))));
            tracep->chgBit(oldp+799,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                            >> 4U))));
            tracep->chgBit(oldp+800,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                            >> 4U))));
            tracep->chgBit(oldp+801,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                            >> 4U))));
            tracep->chgBit(oldp+802,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                            >> 4U))));
            tracep->chgBit(oldp+803,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                            >> 4U))));
            tracep->chgCData(oldp+804,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid),5);
            tracep->chgCData(oldp+805,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid),5);
            tracep->chgCData(oldp+806,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready),5);
            tracep->chgCData(oldp+807,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid),5);
            tracep->chgCData(oldp+808,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready),5);
            tracep->chgBit(oldp+809,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins));
            tracep->chgBit(oldp+810,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins));
            tracep->chgBit(oldp+811,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu));
            tracep->chgCData(oldp+812,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt),4);
            tracep->chgBit(oldp+813,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag));
            tracep->chgBit(oldp+814,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push));
            tracep->chgBit(oldp+815,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop));
            tracep->chgBit(oldp+816,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push));
            tracep->chgBit(oldp+817,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push));
            tracep->chgBit(oldp+818,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push));
            tracep->chgBit(oldp+819,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop));
            tracep->chgBit(oldp+820,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push));
            tracep->chgBit(oldp+821,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push));
            tracep->chgBit(oldp+822,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop));
            tracep->chgBit(oldp+823,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push));
            tracep->chgBit(oldp+824,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en));
            tracep->chgBit(oldp+825,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go));
            tracep->chgBit(oldp+826,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push));
            tracep->chgBit(oldp+827,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop));
            tracep->chgBit(oldp+828,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push));
            tracep->chgBit(oldp+829,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push));
            tracep->chgBit(oldp+830,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en));
            tracep->chgBit(oldp+831,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push));
            tracep->chgBit(oldp+832,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop));
            tracep->chgBit(oldp+833,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push));
            tracep->chgBit(oldp+834,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push));
            tracep->chgBit(oldp+835,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop));
            tracep->chgBit(oldp+836,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push));
            tracep->chgBit(oldp+837,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en));
            tracep->chgBit(oldp+838,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go));
            tracep->chgBit(oldp+839,((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen))));
            tracep->chgBit(oldp+840,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer));
            tracep->chgBit(oldp+841,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid));
            tracep->chgCData(oldp+842,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state),3);
            tracep->chgSData(oldp+843,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp),16);
        }
        tracep->chgBit(oldp+844,(vlSelf->aclk));
        tracep->chgBit(oldp+845,(vlSelf->aresetn));
        tracep->chgBit(oldp+846,(vlSelf->enable_delay));
        tracep->chgIData(oldp+847,(vlSelf->random_seed),23);
        tracep->chgBit(oldp+848,(vlSelf->ram_ren));
        tracep->chgIData(oldp+849,(vlSelf->ram_raddr),32);
        tracep->chgIData(oldp+850,(vlSelf->ram_rdata),32);
        tracep->chgCData(oldp+851,(vlSelf->ram_wen),4);
        tracep->chgIData(oldp+852,(vlSelf->ram_waddr),32);
        tracep->chgIData(oldp+853,(vlSelf->ram_wdata),32);
        tracep->chgIData(oldp+854,(vlSelf->debug0_wb_pc),32);
        tracep->chgBit(oldp+855,(vlSelf->debug0_wb_rf_wen));
        tracep->chgCData(oldp+856,(vlSelf->debug0_wb_rf_wnum),5);
        tracep->chgIData(oldp+857,(vlSelf->debug0_wb_rf_wdata),32);
        tracep->chgIData(oldp+858,(vlSelf->num_data),32);
        tracep->chgBit(oldp+859,(vlSelf->open_trace));
        tracep->chgBit(oldp+860,(vlSelf->num_monitor));
        tracep->chgCData(oldp+861,(vlSelf->confreg_uart_data),8);
        tracep->chgBit(oldp+862,(vlSelf->write_uart_valid));
        tracep->chgWData(oldp+863,(vlSelf->uart_ctr_bus),128);
        tracep->chgBit(oldp+867,(vlSelf->uart_rx));
        tracep->chgBit(oldp+868,(vlSelf->uart_tx));
        tracep->chgSData(oldp+869,(vlSelf->led),16);
        tracep->chgCData(oldp+870,(vlSelf->led_rg0),2);
        tracep->chgCData(oldp+871,(vlSelf->led_rg1),2);
        tracep->chgCData(oldp+872,(vlSelf->num_csn),8);
        tracep->chgCData(oldp+873,(vlSelf->num_a_g),7);
        tracep->chgCData(oldp+874,(vlSelf->btn_key_col),4);
        tracep->chgCData(oldp+875,(vlSelf->btn_key_row),4);
        tracep->chgCData(oldp+876,(vlSelf->btn_step),2);
        tracep->chgCData(oldp+877,(vlSelf->__SYM__switch),8);
        tracep->chgBit(oldp+878,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw) 
                                     | (~ (IData)(vlSelf->enable_delay))))));
        tracep->chgBit(oldp+879,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w) 
                                     | (~ (IData)(vlSelf->enable_delay))))));
        tracep->chgBit(oldp+880,((1U & (~ (IData)(vlSelf->aresetn)))));
        tracep->chgBit(oldp+881,(((IData)(vlSelf->aresetn) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn)))));
        tracep->chgBit(oldp+882,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)
                                         ? ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en)) 
                                            | (IData)(vlSelf->uart_tx))
                                         : (IData)(vlSelf->uart_rx)))));
        tracep->chgBit(oldp+883,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)))));
        tracep->chgBit(oldp+884,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)))));
        tracep->chgIData(oldp+885,(vlSelf->__SYM__switch),32);
        tracep->chgIData(oldp+886,(((0x8000U & ((IData)(vlSelf->__SYM__switch) 
                                                << 8U)) 
                                    | ((0x2000U & ((IData)(vlSelf->__SYM__switch) 
                                                   << 7U)) 
                                       | ((0x800U & 
                                           ((IData)(vlSelf->__SYM__switch) 
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
                                                            << 1U)))))))))),32);
        tracep->chgBit(oldp+887,(((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                  & (~ (0xfU == (IData)(vlSelf->btn_key_row))))));
        tracep->chgBit(oldp+888,(((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                  & (0xfU == (IData)(vlSelf->btn_key_row)))));
        tracep->chgBit(oldp+889,(((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r) 
                                  & (~ (IData)(vlSelf->btn_step)))));
        tracep->chgBit(oldp+890,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                        & (IData)(vlSelf->btn_step)))));
        tracep->chgBit(oldp+891,(((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r) 
                                  & (~ ((IData)(vlSelf->btn_step) 
                                        >> 1U)))));
        tracep->chgBit(oldp+892,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)) 
                                        & ((IData)(vlSelf->btn_step) 
                                           >> 1U)))));
    }
}

void Vsimu_top___024root__traceCleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    Vsimu_top___024root* const __restrict vlSelf = static_cast<Vsimu_top___024root*>(voidSelf);
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
