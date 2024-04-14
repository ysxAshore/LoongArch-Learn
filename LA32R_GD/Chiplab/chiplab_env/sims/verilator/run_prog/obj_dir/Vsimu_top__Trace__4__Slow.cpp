// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


void Vsimu_top___024root__traceFullSub4(Vsimu_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<5>/*159:0*/ __Vtemp567;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+7911,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0x8010U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+7912,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0x8020U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+7913,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0x8030U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+7914,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0x8040U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+7915,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0x8050U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+7916,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0x8060U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+7917,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0x8070U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+7918,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0xff00U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+7919,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0xff30U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+7920,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0xff40U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+7921,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0xf020U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+7922,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0xf030U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+7923,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0xf040U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+7924,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0xf050U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+7925,(vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid));
        tracep->fullBit(oldp+7926,(vlSelf->simu_top__DOT__soc__DOT__cpu_arready));
        tracep->fullIData(oldp+7927,(vlSelf->simu_top__DOT__soc__DOT__m0_rdata),32);
        tracep->fullBit(oldp+7928,(vlSelf->simu_top__DOT__soc__DOT__cpu_rvalid));
        tracep->fullBit(oldp+7929,(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
        tracep->fullBit(oldp+7930,(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid));
        tracep->fullBit(oldp+7931,(vlSelf->simu_top__DOT__soc__DOT__m0_bready));
        tracep->fullBit(oldp+7932,(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
        tracep->fullBit(oldp+7933,(vlSelf->simu_top__DOT__soc__DOT__m0_rready));
        tracep->fullBit(oldp+7934,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid))));
        tracep->fullBit(oldp+7935,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid))));
        tracep->fullBit(oldp+7936,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))));
        tracep->fullBit(oldp+7937,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid))));
        tracep->fullBit(oldp+7938,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready))));
        tracep->fullBit(oldp+7939,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                          >> 3U))));
        tracep->fullBit(oldp+7940,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                          >> 3U))));
        tracep->fullBit(oldp+7941,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                          >> 3U))));
        tracep->fullBit(oldp+7942,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                          >> 3U))));
        tracep->fullBit(oldp+7943,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                          >> 3U))));
        tracep->fullBit(oldp+7944,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                          >> 2U))));
        tracep->fullBit(oldp+7945,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                          >> 2U))));
        tracep->fullBit(oldp+7946,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                          >> 2U))));
        tracep->fullBit(oldp+7947,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                          >> 2U))));
        tracep->fullBit(oldp+7948,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                          >> 2U))));
        tracep->fullBit(oldp+7949,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en));
        tracep->fullCData(oldp+7950,(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen),4);
        tracep->fullIData(oldp+7951,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataA),32);
        tracep->fullBit(oldp+7952,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_allowin));
        tracep->fullBit(oldp+7953,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_allowin));
        tracep->fullBit(oldp+7954,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_allowin));
        tracep->fullBit(oldp+7955,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_id_valid));
        tracep->fullBit(oldp+7956,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_to_exe_valid));
        tracep->fullBit(oldp+7957,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_mem_valid));
        tracep->fullBit(oldp+7958,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_valid));
        tracep->fullQData(oldp+7959,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_to_if_bus),34);
        tracep->fullWData(oldp+7961,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_mem_bus),300);
        tracep->fullWData(oldp+7971,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_bus),102);
        tracep->fullQData(oldp+7975,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus),41);
        tracep->fullWData(oldp+7977,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus),72);
        tracep->fullWData(oldp+7980,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus),254);
        tracep->fullWData(oldp+7988,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus),222);
        tracep->fullWData(oldp+7995,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus),129);
        tracep->fullQData(oldp+8000,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus),52);
        tracep->fullQData(oldp+8002,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus),36);
        tracep->fullWData(oldp+8004,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus),89);
        tracep->fullWData(oldp+8007,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus),100);
        tracep->fullQData(oldp+8011,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus),38);
        tracep->fullIData(oldp+8013,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus),30);
        tracep->fullQData(oldp+8014,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus),38);
        tracep->fullBit(oldp+8016,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_req));
        tracep->fullIData(oldp+8017,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr),32);
        tracep->fullIData(oldp+8018,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_rdata),32);
        tracep->fullBit(oldp+8019,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_data_ok));
        tracep->fullBit(oldp+8020,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_req));
        tracep->fullBit(oldp+8021,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_wr));
        tracep->fullCData(oldp+8022,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_wstrb),4);
        tracep->fullIData(oldp+8023,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr),32);
        tracep->fullIData(oldp+8024,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_rdata),32);
        tracep->fullBit(oldp+8025,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr_ok));
        tracep->fullBit(oldp+8026,((1U & ((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                                  >> 0x16U) 
                                                 & (~ 
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                                     >> 0x15U))))
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
                                                          >> 7U)))))));
        tracep->fullBit(oldp+8027,((1U & ((IData)((0x800000ULL 
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
                                                          >> 7U)))))));
        tracep->fullCData(oldp+8028,((0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[3U] 
                                                << 2U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[2U] 
                                                  >> 0x1eU)))),5);
        tracep->fullSData(oldp+8029,((0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                 >> 0x10U))),14);
        tracep->fullBit(oldp+8030,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                          >> 0xfU))));
        tracep->fullSData(oldp+8031,((0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                 >> 1U))),14);
        tracep->fullIData(oldp+8032,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                       << 0x1fU) | 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+8033,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U])));
        tracep->fullBit(oldp+8034,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[5U] 
                                    >> 0x1fU)));
        tracep->fullSData(oldp+8035,((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[4U] 
                                                >> 0x16U))),9);
        tracep->fullCData(oldp+8036,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[4U] 
                                               >> 0x10U))),6);
        tracep->fullIData(oldp+8037,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[5U] 
                                       << 1U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[4U] 
                                                 >> 0x1fU))),32);
        tracep->fullIData(oldp+8038,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[4U] 
                                       << 0x11U) | 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[3U] 
                                       >> 0xfU))),32);
        tracep->fullBit(oldp+8039,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[4U] 
                                          >> 0xfU))));
        tracep->fullSData(oldp+8040,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[3U] 
                                                >> 5U))),10);
        tracep->fullIData(oldp+8041,((0x7ffffU & ((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[3U] 
                                                   << 0xeU) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[2U] 
                                                     >> 0x12U)))),19);
        tracep->fullIData(oldp+8042,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[2U] 
                                       << 0xeU) | (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[1U] 
                                                   >> 0x12U))),32);
        tracep->fullIData(oldp+8043,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[1U] 
                                       << 0xeU) | (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                                   >> 0x12U))),32);
        tracep->fullCData(oldp+8044,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                               >> 0xdU))),5);
        tracep->fullCData(oldp+8045,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                               >> 7U))),6);
        tracep->fullBit(oldp+8046,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                          >> 6U))));
        tracep->fullBit(oldp+8047,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                          >> 4U))));
        tracep->fullBit(oldp+8048,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                          >> 5U))));
        tracep->fullBit(oldp+8049,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                          >> 3U))));
        tracep->fullBit(oldp+8050,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                          >> 2U))));
        tracep->fullBit(oldp+8051,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
                                          >> 1U))));
        tracep->fullBit(oldp+8052,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U])));
        tracep->fullCData(oldp+8053,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cur_plv),2);
        tracep->fullIData(oldp+8054,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csrRData),32);
        tracep->fullIData(oldp+8055,((0x7ffffU & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U)))),19);
        tracep->fullSData(oldp+8056,((0x3ffU & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                        >> 7U)))),10);
        tracep->fullBit(oldp+8057,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                  >> 6U)))));
        tracep->fullBit(oldp+8058,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                  >> 5U)))));
        tracep->fullCData(oldp+8059,((0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus))),5);
        tracep->fullCData(oldp+8060,((0x1fU & (IData)(
                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                                                      [0x1fU]))),5);
        tracep->fullBit(oldp+8061,((0U != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1)));
        tracep->fullCData(oldp+8062,((0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                << 1U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                  >> 0x1fU)))),5);
        tracep->fullBit(oldp+8063,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                          >> 0x1eU))));
        tracep->fullCData(oldp+8064,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                               >> 0x19U))),5);
        tracep->fullBit(oldp+8065,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                          >> 0x18U))));
        tracep->fullIData(oldp+8066,((0x7ffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                  >> 5U))),19);
        tracep->fullCData(oldp+8067,((0x3fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                << 1U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[1U] 
                                                  >> 0x1fU)))),6);
        tracep->fullSData(oldp+8068,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[1U] 
                                                >> 0x15U))),10);
        tracep->fullBit(oldp+8069,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[1U] 
                                          >> 0x14U))));
        tracep->fullIData(oldp+8070,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[1U])),20);
        tracep->fullCData(oldp+8071,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                      >> 0x1eU)),2);
        tracep->fullCData(oldp+8072,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                            >> 0x1cU))),2);
        tracep->fullBit(oldp+8073,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+8074,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                          >> 0x1aU))));
        tracep->fullIData(oldp+8075,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                                  >> 6U))),20);
        tracep->fullCData(oldp+8076,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                            >> 4U))),2);
        tracep->fullCData(oldp+8077,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                            >> 2U))),2);
        tracep->fullBit(oldp+8078,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U] 
                                          >> 1U))));
        tracep->fullBit(oldp+8079,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[0U])));
        tracep->fullBit(oldp+8080,((0U != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0)));
        tracep->fullIData(oldp+8081,((0xfffffU & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                                                          [0x1fU] 
                                                          >> 0x11U)))),20);
        tracep->fullCData(oldp+8082,((0x3fU & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                                                       [0x1fU] 
                                                       >> 0xbU)))),6);
        tracep->fullCData(oldp+8083,((3U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                                                    [0x1fU] 
                                                    >> 9U)))),2);
        tracep->fullCData(oldp+8084,((3U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                                                    [0x1fU] 
                                                    >> 7U)))),2);
        tracep->fullBit(oldp+8085,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                                                  [0x1fU] 
                                                  >> 6U)))));
        tracep->fullBit(oldp+8086,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                                                  [0x1fU] 
                                                  >> 5U)))));
        tracep->fullCData(oldp+8087,((0x1fU & (IData)(
                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                                                      [0x1fU]))),5);
        tracep->fullIData(oldp+8088,((0x7ffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                  >> 0xbU))),19);
        tracep->fullBit(oldp+8089,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus)));
        tracep->fullSData(oldp+8090,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                >> 1U))),10);
        tracep->fullIData(oldp+8091,((0xfffffU & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                                                          [0x1fU] 
                                                          >> 0x11U)))),20);
        tracep->fullCData(oldp+8092,((0x3fU & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                                                       [0x1fU] 
                                                       >> 0xbU)))),6);
        tracep->fullCData(oldp+8093,((3U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                                                    [0x1fU] 
                                                    >> 9U)))),2);
        tracep->fullCData(oldp+8094,((3U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                                                    [0x1fU] 
                                                    >> 7U)))),2);
        tracep->fullBit(oldp+8095,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                                                  [0x1fU] 
                                                  >> 6U)))));
        tracep->fullBit(oldp+8096,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                                                  [0x1fU] 
                                                  >> 5U)))));
        tracep->fullBit(oldp+8097,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid));
        tracep->fullBit(oldp+8098,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__rd_requst_can_receive));
        tracep->fullBit(oldp+8099,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid));
        tracep->fullQData(oldp+8100,((((QData)((IData)(
                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[4U])) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[3U])) 
                                        << 2U) | ((QData)((IData)(
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[2U])) 
                                                  >> 0x1eU)))),64);
        tracep->fullBit(oldp+8102,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_ready_go));
        tracep->fullBit(oldp+8103,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_allowin));
        tracep->fullBit(oldp+8104,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__preIf_to_if_valid));
        tracep->fullBit(oldp+8105,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__preIF_ready_go));
        tracep->fullIData(oldp+8106,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc),32);
        tracep->fullBit(oldp+8107,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__br_taken));
        tracep->fullIData(oldp+8108,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[3U] 
                                       << 0x1fU) | 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[2U] 
                                       >> 1U))),32);
        tracep->fullIData(oldp+8109,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[4U] 
                                       << 0x1fU) | 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[3U] 
                                       >> 1U))),32);
        tracep->fullIData(oldp+8110,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[2U] 
                                       << 0x1fU) | 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[1U] 
                                       >> 1U))),32);
        tracep->fullSData(oldp+8111,((0x3ffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[1U] 
                                                 << 9U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                                   >> 0x17U)))),10);
        tracep->fullBit(oldp+8112,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+8113,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+8114,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+8115,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+8116,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+8117,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                            >> 9U))),3);
        tracep->fullBit(oldp+8118,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                          >> 8U))));
        tracep->fullBit(oldp+8119,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                          >> 6U))));
        tracep->fullBit(oldp+8120,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                          >> 7U))));
        tracep->fullBit(oldp+8121,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                          >> 5U))));
        tracep->fullBit(oldp+8122,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                          >> 2U))));
        tracep->fullBit(oldp+8123,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                          >> 1U))));
        tracep->fullCData(oldp+8124,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                            >> 3U))),2);
        tracep->fullBit(oldp+8125,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U])));
        tracep->fullBit(oldp+8126,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                  >> 0x25U)))));
        tracep->fullIData(oldp+8127,((0xfffffU & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                          >> 0x11U)))),20);
        tracep->fullCData(oldp+8128,((0x3fU & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                       >> 0xbU)))),6);
        tracep->fullCData(oldp+8129,((3U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                    >> 9U)))),2);
        tracep->fullCData(oldp+8130,((3U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                    >> 7U)))),2);
        tracep->fullBit(oldp+8131,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                  >> 6U)))));
        tracep->fullBit(oldp+8132,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                  >> 5U)))));
        tracep->fullCData(oldp+8133,((0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus))),5);
        tracep->fullBit(oldp+8134,((0U != (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc))));
        tracep->fullBit(oldp+8135,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__TLBR));
        tracep->fullBit(oldp+8136,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__PPI));
        tracep->fullBit(oldp+8137,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__PIF));
        tracep->fullIData(oldp+8138,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc 
                                      >> 0xdU)),19);
        tracep->fullBit(oldp+8139,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc 
                                          >> 0xcU))));
        tracep->fullIData(oldp+8140,((((- (IData)((1U 
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
        tracep->fullCData(oldp+8141,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select),2);
        tracep->fullIData(oldp+8142,(((0x21U == (0x3fU 
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
        tracep->fullBit(oldp+8143,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_ready_go));
        tracep->fullBit(oldp+8144,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_taken));
        tracep->fullBit(oldp+8145,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel));
        tracep->fullBit(oldp+8146,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                  >> 0x28U)))));
        tracep->fullBit(oldp+8147,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                  >> 0x26U)))));
        tracep->fullBit(oldp+8148,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                  >> 0x27U)))));
        tracep->fullCData(oldp+8149,((0x1fU & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                       >> 0x21U)))),5);
        tracep->fullIData(oldp+8150,((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                              >> 1U))),32);
        tracep->fullBit(oldp+8151,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus))));
        tracep->fullBit(oldp+8152,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[2U] 
                                          >> 7U))));
        tracep->fullBit(oldp+8153,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[2U] 
                                          >> 6U))));
        tracep->fullBit(oldp+8154,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[2U] 
                                          >> 5U))));
        tracep->fullCData(oldp+8155,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[2U])),5);
        tracep->fullIData(oldp+8156,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[1U]),32);
        tracep->fullIData(oldp+8157,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[0U]),32);
        tracep->fullIData(oldp+8158,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB),32);
        tracep->fullBit(oldp+8159,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__load_delay));
        tracep->fullIData(oldp+8160,((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB)),32);
        tracep->fullIData(oldp+8161,(((IData)(1U) + 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataA 
                                       + (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB)))),32);
        tracep->fullBit(oldp+8162,((1U & (IData)((1ULL 
                                                  & ((1ULL 
                                                      + 
                                                      ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataA)) 
                                                       + (QData)((IData)(
                                                                         (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB))))) 
                                                     >> 0x20U))))));
        tracep->fullBit(oldp+8163,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__rj_eq_rd));
        tracep->fullBit(oldp+8164,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__rj_lt_rd));
        tracep->fullBit(oldp+8165,((1U & (~ (IData)(
                                                    (1ULL 
                                                     & ((1ULL 
                                                         + 
                                                         ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataA)) 
                                                          + (QData)((IData)(
                                                                            (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB))))) 
                                                        >> 0x20U)))))));
        tracep->fullBit(oldp+8166,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_ready_go));
        tracep->fullBit(oldp+8167,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_memW));
        tracep->fullIData(oldp+8168,((0x7ffffU & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                          >> 0x22U)))),19);
        tracep->fullSData(oldp+8169,((0x3ffU & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                        >> 0x18U)))),10);
        tracep->fullBit(oldp+8170,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                  >> 0x17U)))));
        tracep->fullBit(oldp+8171,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                  >> 0x16U)))));
        tracep->fullCData(oldp+8172,((7U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                    >> 0x13U)))),3);
        tracep->fullCData(oldp+8173,((7U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                    >> 0x10U)))),3);
        tracep->fullCData(oldp+8174,((7U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                    >> 0xdU)))),3);
        tracep->fullCData(oldp+8175,((7U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                    >> 0xaU)))),3);
        tracep->fullBit(oldp+8176,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                  >> 9U)))));
        tracep->fullBit(oldp+8177,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                  >> 7U)))));
        tracep->fullBit(oldp+8178,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                  >> 8U)))));
        tracep->fullBit(oldp+8179,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                  >> 6U)))));
        tracep->fullCData(oldp+8180,((3U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                    >> 4U)))),2);
        tracep->fullBit(oldp+8181,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                  >> 3U)))));
        tracep->fullBit(oldp+8182,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                  >> 2U)))));
        tracep->fullBit(oldp+8183,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8184,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus))));
        tracep->fullBit(oldp+8185,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                  >> 0x25U)))));
        tracep->fullIData(oldp+8186,((0xfffffU & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                          >> 0x11U)))),20);
        tracep->fullCData(oldp+8187,((0x3fU & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                       >> 0xbU)))),6);
        tracep->fullCData(oldp+8188,((3U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                    >> 9U)))),2);
        tracep->fullCData(oldp+8189,((3U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                    >> 7U)))),2);
        tracep->fullBit(oldp+8190,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                  >> 6U)))));
        tracep->fullBit(oldp+8191,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                  >> 5U)))));
        tracep->fullCData(oldp+8192,((0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus))),5);
        tracep->fullQData(oldp+8193,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_mulResult),64);
        tracep->fullBit(oldp+8195,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__TLBR));
        tracep->fullBit(oldp+8196,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PIL));
        tracep->fullBit(oldp+8197,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PIS));
        tracep->fullBit(oldp+8198,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PPI));
        tracep->fullBit(oldp+8199,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PME));
        tracep->fullBit(oldp+8200,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_regW));
        tracep->fullBit(oldp+8201,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_excp));
        tracep->fullCData(oldp+8202,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select),2);
        tracep->fullIData(oldp+8203,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_finalResult),32);
        tracep->fullBit(oldp+8204,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT____Vcellinp__u_mul__resetn));
        tracep->fullQData(oldp+8205,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[0]),64);
        tracep->fullQData(oldp+8207,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[1]),64);
        tracep->fullQData(oldp+8209,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[2]),64);
        tracep->fullQData(oldp+8211,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[3]),64);
        tracep->fullQData(oldp+8213,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[4]),64);
        tracep->fullQData(oldp+8215,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[5]),64);
        tracep->fullQData(oldp+8217,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[6]),64);
        tracep->fullQData(oldp+8219,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[7]),64);
        tracep->fullQData(oldp+8221,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[8]),64);
        tracep->fullQData(oldp+8223,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[9]),64);
        tracep->fullQData(oldp+8225,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[10]),64);
        tracep->fullQData(oldp+8227,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[11]),64);
        tracep->fullQData(oldp+8229,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[12]),64);
        tracep->fullQData(oldp+8231,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[13]),64);
        tracep->fullQData(oldp+8233,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[14]),64);
        tracep->fullQData(oldp+8235,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[15]),64);
        tracep->fullQData(oldp+8237,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[16]),64);
        tracep->fullIData(oldp+8239,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__p),32);
        tracep->fullQData(oldp+8240,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__COut),64);
        tracep->fullQData(oldp+8242,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SOut),64);
        tracep->fullQData(oldp+8244,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig[0]),64);
        tracep->fullQData(oldp+8246,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig[1]),64);
        tracep->fullQData(oldp+8248,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig[2]),64);
        tracep->fullQData(oldp+8250,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig[3]),64);
        tracep->fullQData(oldp+8252,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig[4]),64);
        tracep->fullQData(oldp+8254,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC[0]),64);
        tracep->fullQData(oldp+8256,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC[1]),64);
        tracep->fullQData(oldp+8258,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC[2]),64);
        tracep->fullQData(oldp+8260,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC[3]),64);
        tracep->fullQData(oldp+8262,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC[4]),64);
        tracep->fullQData(oldp+8264,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig[0]),64);
        tracep->fullQData(oldp+8266,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig[1]),64);
        tracep->fullQData(oldp+8268,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig[2]),64);
        tracep->fullQData(oldp+8270,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig[3]),64);
        tracep->fullQData(oldp+8272,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC[0]),64);
        tracep->fullQData(oldp+8274,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC[1]),64);
        tracep->fullQData(oldp+8276,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC[2]),64);
        tracep->fullQData(oldp+8278,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC[3]),64);
        tracep->fullQData(oldp+8280,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig[0]),64);
        tracep->fullQData(oldp+8282,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig[1]),64);
        tracep->fullQData(oldp+8284,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC[0]),64);
        tracep->fullQData(oldp+8286,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC[1]),64);
        tracep->fullQData(oldp+8288,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forSig[0]),64);
        tracep->fullQData(oldp+8290,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forSig[1]),64);
        tracep->fullQData(oldp+8292,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forC[0]),64);
        tracep->fullQData(oldp+8294,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forC[1]),64);
        tracep->fullQData(oldp+8296,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fifSig),64);
        tracep->fullQData(oldp+8298,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fifC),64);
        tracep->fullQData(oldp+8300,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                     [0U]),64);
        tracep->fullQData(oldp+8302,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                     [1U]),64);
        tracep->fullQData(oldp+8304,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                     [2U]),64);
        tracep->fullQData(oldp+8306,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir1__Carry),64);
        tracep->fullQData(oldp+8308,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir1__S),64);
        tracep->fullQData(oldp+8310,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                     [3U]),64);
        tracep->fullQData(oldp+8312,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                     [4U]),64);
        tracep->fullQData(oldp+8314,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                     [5U]),64);
        tracep->fullQData(oldp+8316,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir2__Carry),64);
        tracep->fullQData(oldp+8318,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir2__S),64);
        tracep->fullQData(oldp+8320,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                     [6U]),64);
        tracep->fullQData(oldp+8322,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                     [7U]),64);
        tracep->fullQData(oldp+8324,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                     [8U]),64);
        tracep->fullQData(oldp+8326,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir3__Carry),64);
        tracep->fullQData(oldp+8328,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir3__S),64);
        tracep->fullQData(oldp+8330,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                     [9U]),64);
        tracep->fullQData(oldp+8332,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xaU]),64);
        tracep->fullQData(oldp+8334,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xbU]),64);
        tracep->fullQData(oldp+8336,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir4__Carry),64);
        tracep->fullQData(oldp+8338,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir4__S),64);
        tracep->fullQData(oldp+8340,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xcU]),64);
        tracep->fullQData(oldp+8342,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU]),64);
        tracep->fullQData(oldp+8344,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xeU]),64);
        tracep->fullQData(oldp+8346,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__Carry),64);
        tracep->fullQData(oldp+8348,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S),64);
        tracep->fullQData(oldp+8350,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xfU]),64);
        tracep->fullQData(oldp+8352,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                     [0x10U]),64);
        tracep->fullQData(oldp+8354,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                     [0U]),64);
        tracep->fullQData(oldp+8356,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry),64);
        tracep->fullQData(oldp+8358,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S),64);
        tracep->fullQData(oldp+8360,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                      [0U] << 1U)),64);
        tracep->fullQData(oldp+8362,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                     [1U]),64);
        tracep->fullQData(oldp+8364,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                      [1U] << 1U)),64);
        tracep->fullQData(oldp+8366,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry),64);
        tracep->fullQData(oldp+8368,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S),64);
        tracep->fullQData(oldp+8370,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                     [2U]),64);
        tracep->fullQData(oldp+8372,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                      [2U] << 1U)),64);
        tracep->fullQData(oldp+8374,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                     [3U]),64);
        tracep->fullQData(oldp+8376,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry),64);
        tracep->fullQData(oldp+8378,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S),64);
        tracep->fullQData(oldp+8380,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                      [3U] << 1U)),64);
        tracep->fullQData(oldp+8382,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                     [4U]),64);
        tracep->fullQData(oldp+8384,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                      [4U] << 1U)),64);
        tracep->fullQData(oldp+8386,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry),64);
        tracep->fullQData(oldp+8388,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S),64);
        tracep->fullQData(oldp+8390,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                      [0U] << 1U)),64);
        tracep->fullQData(oldp+8392,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                     [0U]),64);
        tracep->fullQData(oldp+8394,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                      [1U] << 1U)),64);
        tracep->fullQData(oldp+8396,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry),64);
        tracep->fullQData(oldp+8398,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S),64);
        tracep->fullQData(oldp+8400,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                     [1U]),64);
        tracep->fullQData(oldp+8402,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                      [2U] << 1U)),64);
        tracep->fullQData(oldp+8404,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                     [2U]),64);
        tracep->fullQData(oldp+8406,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry),64);
        tracep->fullQData(oldp+8408,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S),64);
        tracep->fullQData(oldp+8410,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                      [3U] << 1U)),64);
        tracep->fullQData(oldp+8412,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                     [3U]),64);
        tracep->fullQData(oldp+8414,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                      [0U] << 1U)),64);
        tracep->fullQData(oldp+8416,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry),64);
        tracep->fullQData(oldp+8418,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__S),64);
        tracep->fullQData(oldp+8420,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                     [0U]),64);
        tracep->fullQData(oldp+8422,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                      [1U] << 1U)),64);
        tracep->fullQData(oldp+8424,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                     [1U]),64);
        tracep->fullQData(oldp+8426,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry),64);
        tracep->fullQData(oldp+8428,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S),64);
        tracep->fullQData(oldp+8430,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forC
                                      [0U] << 1U)),64);
        tracep->fullQData(oldp+8432,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forSig
                                     [0U]),64);
        tracep->fullQData(oldp+8434,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forC
                                      [1U] << 1U)),64);
        tracep->fullQData(oldp+8436,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forSig
                                     [1U]),64);
        tracep->fullQData(oldp+8438,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fifC 
                                      << 1U)),64);
        tracep->fullCData(oldp+8440,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc),6);
        tracep->fullCData(oldp+8441,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc),6);
        tracep->fullCData(oldp+8442,((0x3fU & ((0x1fU 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc)) 
                                               - (0x1fU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc))))),6);
        tracep->fullBit(oldp+8443,((1U & ((1U & (((0x1fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc)) 
                                                  - 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc))) 
                                                 >> 5U)) 
                                          | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc) 
                                             >> 5U)))));
        tracep->fullBit(oldp+8444,((0x1fU == (0x1fU 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc)))));
        tracep->fullBit(oldp+8445,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_ready_go));
        tracep->fullIData(oldp+8446,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[6U] 
                                       << 2U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[5U] 
                                                 >> 0x1eU))),32);
        tracep->fullIData(oldp+8447,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[5U] 
                                       << 2U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[4U] 
                                                 >> 0x1eU))),32);
        tracep->fullIData(oldp+8448,((0x7ffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[2U] 
                                                  >> 0xbU))),19);
        tracep->fullSData(oldp+8449,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[2U] 
                                                >> 1U))),10);
        tracep->fullCData(oldp+8450,((0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[2U] 
                                                << 4U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[1U] 
                                                  >> 0x1cU)))),5);
        tracep->fullBit(oldp+8451,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[1U] 
                                          >> 0x1bU))));
        tracep->fullCData(oldp+8452,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[1U] 
                                               >> 0x15U))),6);
        tracep->fullBit(oldp+8453,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[1U] 
                                          >> 0x14U))));
        tracep->fullIData(oldp+8454,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[1U])),20);
        tracep->fullCData(oldp+8455,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                      >> 0x1eU)),2);
        tracep->fullCData(oldp+8456,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                            >> 0x1cU))),2);
        tracep->fullBit(oldp+8457,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+8458,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                          >> 0x1aU))));
        tracep->fullIData(oldp+8459,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                                  >> 6U))),20);
        tracep->fullCData(oldp+8460,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                            >> 4U))),2);
        tracep->fullCData(oldp+8461,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                            >> 2U))),2);
        tracep->fullBit(oldp+8462,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U] 
                                          >> 1U))));
        tracep->fullBit(oldp+8463,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[0U])));
        tracep->fullBit(oldp+8464,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U] 
                                          >> 0x18U))));
        tracep->fullIData(oldp+8465,((0x7ffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U] 
                                                  >> 5U))),19);
        tracep->fullCData(oldp+8466,((0x3fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U] 
                                                << 1U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                                  >> 0x1fU)))),6);
        tracep->fullSData(oldp+8467,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                                >> 0x15U))),10);
        tracep->fullBit(oldp+8468,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                          >> 0x14U))));
        tracep->fullIData(oldp+8469,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U])),20);
        tracep->fullCData(oldp+8470,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                      >> 0x1eU)),2);
        tracep->fullCData(oldp+8471,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                            >> 0x1cU))),2);
        tracep->fullBit(oldp+8472,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+8473,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                          >> 0x1aU))));
        tracep->fullIData(oldp+8474,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                  >> 6U))),20);
        tracep->fullCData(oldp+8475,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                            >> 4U))),2);
        tracep->fullCData(oldp+8476,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                            >> 2U))),2);
        tracep->fullBit(oldp+8477,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                          >> 1U))));
        tracep->fullBit(oldp+8478,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U])));
        tracep->fullCData(oldp+8479,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__byteReadData),8);
        tracep->fullSData(oldp+8480,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__halfReadData),16);
        tracep->fullIData(oldp+8481,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_regWData),32);
        tracep->fullIData(oldp+8482,(((0x1000000U & 
                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
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
        tracep->fullIData(oldp+8483,(((0x1000000U & 
                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                       ? (0x80U | (
                                                   (0xfffff00U 
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
        tracep->fullSData(oldp+8484,(((0x1000000U & 
                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                       ? (0x3ffU & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                           >> 0x15U))
                                       : 0U)),10);
        tracep->fullIData(oldp+8485,(((0x1000000U & 
                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                       ? (0x7ffffU 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U] 
                                             >> 5U))
                                       : 0U)),19);
        tracep->fullCData(oldp+8486,(((0x1000000U & 
                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                       ? (0x3fU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                                      >> 0x1fU)))
                                       : 0U)),6);
        tracep->fullBit(oldp+8487,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen));
        tracep->fullBit(oldp+8488,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (1U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8489,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (2U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8490,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (4U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8491,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (5U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8492,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (6U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8493,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (7U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8494,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (0xcU 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8495,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (0x10U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8496,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (0x11U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8497,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (0x12U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8498,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (0x13U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8499,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (0x18U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8500,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (0x19U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8501,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (0x1aU 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8502,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (0x30U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8503,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (0x31U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8504,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (0x32U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8505,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (0x33U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8506,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (0x40U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8507,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tcfg_wen));
        tracep->fullBit(oldp+8508,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (0x43U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8509,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (0x44U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8510,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (0x60U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8511,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (0x88U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8512,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (0x98U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8513,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (0x180U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8514,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (0x181U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8515,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (0x100U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+8516,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                     >> 0xfU) & (0x101U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
                                                     >> 1U))))));
        tracep->fullIData(oldp+8517,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0),32);
        tracep->fullIData(oldp+8518,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1),32);
        tracep->fullQData(oldp+8519,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0]),37);
        tracep->fullQData(oldp+8521,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[1]),37);
        tracep->fullQData(oldp+8523,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[2]),37);
        tracep->fullQData(oldp+8525,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[3]),37);
        tracep->fullQData(oldp+8527,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[4]),37);
        tracep->fullQData(oldp+8529,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[5]),37);
        tracep->fullQData(oldp+8531,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[6]),37);
        tracep->fullQData(oldp+8533,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[7]),37);
        tracep->fullQData(oldp+8535,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[8]),37);
        tracep->fullQData(oldp+8537,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[9]),37);
        tracep->fullQData(oldp+8539,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[10]),37);
        tracep->fullQData(oldp+8541,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[11]),37);
        tracep->fullQData(oldp+8543,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[12]),37);
        tracep->fullQData(oldp+8545,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[13]),37);
        tracep->fullQData(oldp+8547,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[14]),37);
        tracep->fullQData(oldp+8549,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[15]),37);
        tracep->fullQData(oldp+8551,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[16]),37);
        tracep->fullQData(oldp+8553,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[17]),37);
        tracep->fullQData(oldp+8555,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[18]),37);
        tracep->fullQData(oldp+8557,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[19]),37);
        tracep->fullQData(oldp+8559,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[20]),37);
        tracep->fullQData(oldp+8561,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[21]),37);
        tracep->fullQData(oldp+8563,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[22]),37);
        tracep->fullQData(oldp+8565,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[23]),37);
        tracep->fullQData(oldp+8567,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[24]),37);
        tracep->fullQData(oldp+8569,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[25]),37);
        tracep->fullQData(oldp+8571,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[26]),37);
        tracep->fullQData(oldp+8573,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[27]),37);
        tracep->fullQData(oldp+8575,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[28]),37);
        tracep->fullQData(oldp+8577,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[29]),37);
        tracep->fullQData(oldp+8579,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[30]),37);
        tracep->fullQData(oldp+8581,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[31]),37);
        tracep->fullQData(oldp+8583,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0]),37);
        tracep->fullQData(oldp+8585,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[1]),37);
        tracep->fullQData(oldp+8587,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[2]),37);
        tracep->fullQData(oldp+8589,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[3]),37);
        tracep->fullQData(oldp+8591,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[4]),37);
        tracep->fullQData(oldp+8593,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[5]),37);
        tracep->fullQData(oldp+8595,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[6]),37);
        tracep->fullQData(oldp+8597,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[7]),37);
        tracep->fullQData(oldp+8599,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[8]),37);
        tracep->fullQData(oldp+8601,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[9]),37);
        tracep->fullQData(oldp+8603,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[10]),37);
        tracep->fullQData(oldp+8605,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[11]),37);
        tracep->fullQData(oldp+8607,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[12]),37);
        tracep->fullQData(oldp+8609,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[13]),37);
        tracep->fullQData(oldp+8611,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[14]),37);
        tracep->fullQData(oldp+8613,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[15]),37);
        tracep->fullQData(oldp+8615,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[16]),37);
        tracep->fullQData(oldp+8617,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[17]),37);
        tracep->fullQData(oldp+8619,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[18]),37);
        tracep->fullQData(oldp+8621,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[19]),37);
        tracep->fullQData(oldp+8623,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[20]),37);
        tracep->fullQData(oldp+8625,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[21]),37);
        tracep->fullQData(oldp+8627,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[22]),37);
        tracep->fullQData(oldp+8629,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[23]),37);
        tracep->fullQData(oldp+8631,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[24]),37);
        tracep->fullQData(oldp+8633,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[25]),37);
        tracep->fullQData(oldp+8635,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[26]),37);
        tracep->fullQData(oldp+8637,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[27]),37);
        tracep->fullQData(oldp+8639,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[28]),37);
        tracep->fullQData(oldp+8641,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[29]),37);
        tracep->fullQData(oldp+8643,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[30]),37);
        tracep->fullQData(oldp+8645,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[31]),37);
        tracep->fullCData(oldp+8647,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr 
                                               >> 4U))),8);
        tracep->fullIData(oldp+8648,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr 
                                      >> 0xcU)),20);
        tracep->fullCData(oldp+8649,((0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr)),4);
        tracep->fullBit(oldp+8650,((1U & (~ ((1U & 
                                              ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
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
                                                             >> 7U))))))));
        tracep->fullIData(oldp+8651,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr 
                                      >> 0xcU)),20);
        tracep->fullCData(oldp+8652,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr 
                                               >> 4U))),8);
        tracep->fullCData(oldp+8653,((0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr)),4);
        tracep->fullBit(oldp+8654,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv_wea));
        tracep->fullCData(oldp+8655,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv_addra),8);
        tracep->fullBit(oldp+8656,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv_wea));
        tracep->fullCData(oldp+8657,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_wea),4);
        tracep->fullCData(oldp+8658,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_addr),8);
        tracep->fullIData(oldp+8659,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina),32);
        tracep->fullCData(oldp+8660,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_wea),4);
        tracep->fullCData(oldp+8661,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_addr),8);
        tracep->fullCData(oldp+8662,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_wea),4);
        tracep->fullCData(oldp+8663,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_addr),8);
        tracep->fullCData(oldp+8664,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_wea),4);
        tracep->fullCData(oldp+8665,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_addr),8);
        tracep->fullCData(oldp+8666,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_wea),4);
        tracep->fullCData(oldp+8667,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_addr),8);
        tracep->fullCData(oldp+8668,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_wea),4);
        tracep->fullCData(oldp+8669,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_addr),8);
        tracep->fullCData(oldp+8670,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_wea),4);
        tracep->fullCData(oldp+8671,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_addr),8);
        tracep->fullCData(oldp+8672,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_wea),4);
        tracep->fullCData(oldp+8673,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_addr),8);
        tracep->fullBit(oldp+8674,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__refill_write_way0));
        tracep->fullBit(oldp+8675,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__refill_write_way1));
        tracep->fullBit(oldp+8676,((1U & (~ ((IData)(
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
                                                             >> 7U))))))));
        tracep->fullBit(oldp+8677,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv_wea));
        tracep->fullCData(oldp+8678,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv_addra),8);
        tracep->fullBit(oldp+8679,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv_wea));
        tracep->fullCData(oldp+8680,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv_addra),8);
        tracep->fullCData(oldp+8681,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0_wea),4);
        tracep->fullCData(oldp+8682,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0_addr),8);
        tracep->fullIData(oldp+8683,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina),32);
        tracep->fullCData(oldp+8684,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1_wea),4);
        tracep->fullCData(oldp+8685,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1_addr),8);
        tracep->fullCData(oldp+8686,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2_wea),4);
        tracep->fullCData(oldp+8687,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2_addr),8);
        tracep->fullCData(oldp+8688,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_wea),4);
        tracep->fullCData(oldp+8689,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_addr),8);
        tracep->fullCData(oldp+8690,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0_wea),4);
        tracep->fullCData(oldp+8691,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0_addr),8);
        tracep->fullCData(oldp+8692,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1_wea),4);
        tracep->fullCData(oldp+8693,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1_addr),8);
        tracep->fullCData(oldp+8694,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2_wea),4);
        tracep->fullCData(oldp+8695,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2_addr),8);
        tracep->fullCData(oldp+8696,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3_wea),4);
        tracep->fullCData(oldp+8697,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3_addr),8);
        tracep->fullBit(oldp+8698,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__idle2lookup_able));
        tracep->fullBit(oldp+8699,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lookup2lookup_able));
        tracep->fullBit(oldp+8700,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__refill_write_way0));
        tracep->fullBit(oldp+8701,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__refill_write_way1));
        tracep->fullBit(oldp+8702,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                          >> 1U))));
        tracep->fullBit(oldp+8703,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                          >> 1U))));
        tracep->fullBit(oldp+8704,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                          >> 1U))));
        tracep->fullBit(oldp+8705,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                          >> 1U))));
        tracep->fullBit(oldp+8706,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                          >> 1U))));
        tracep->fullBit(oldp+8707,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                          >> 4U))));
        tracep->fullBit(oldp+8708,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                          >> 4U))));
        tracep->fullBit(oldp+8709,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                          >> 4U))));
        tracep->fullBit(oldp+8710,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                          >> 4U))));
        tracep->fullBit(oldp+8711,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                          >> 4U))));
        tracep->fullCData(oldp+8712,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid),5);
        tracep->fullCData(oldp+8713,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid),5);
        tracep->fullCData(oldp+8714,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready),5);
        tracep->fullCData(oldp+8715,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid),5);
        tracep->fullCData(oldp+8716,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready),5);
        tracep->fullBit(oldp+8717,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins));
        tracep->fullBit(oldp+8718,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins));
        tracep->fullBit(oldp+8719,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu));
        tracep->fullCData(oldp+8720,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt),4);
        tracep->fullBit(oldp+8721,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag));
        tracep->fullBit(oldp+8722,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push));
        tracep->fullBit(oldp+8723,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop));
        tracep->fullBit(oldp+8724,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push));
        tracep->fullBit(oldp+8725,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push));
        tracep->fullBit(oldp+8726,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push));
        tracep->fullBit(oldp+8727,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop));
        tracep->fullBit(oldp+8728,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push));
        tracep->fullBit(oldp+8729,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push));
        tracep->fullBit(oldp+8730,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop));
        tracep->fullBit(oldp+8731,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push));
        tracep->fullBit(oldp+8732,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en));
        tracep->fullBit(oldp+8733,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go));
        tracep->fullBit(oldp+8734,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push));
        tracep->fullBit(oldp+8735,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop));
        tracep->fullBit(oldp+8736,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push));
        tracep->fullBit(oldp+8737,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push));
        tracep->fullBit(oldp+8738,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en));
        tracep->fullBit(oldp+8739,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push));
        tracep->fullBit(oldp+8740,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop));
        tracep->fullBit(oldp+8741,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push));
        tracep->fullBit(oldp+8742,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push));
        tracep->fullBit(oldp+8743,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop));
        tracep->fullBit(oldp+8744,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push));
        tracep->fullBit(oldp+8745,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en));
        tracep->fullBit(oldp+8746,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go));
        tracep->fullBit(oldp+8747,((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen))));
        tracep->fullBit(oldp+8748,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer));
        tracep->fullBit(oldp+8749,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid));
        tracep->fullCData(oldp+8750,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state),3);
        tracep->fullSData(oldp+8751,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp),16);
        tracep->fullBit(oldp+8752,(vlSelf->aclk));
        tracep->fullBit(oldp+8753,(vlSelf->aresetn));
        tracep->fullBit(oldp+8754,(vlSelf->enable_delay));
        tracep->fullIData(oldp+8755,(vlSelf->random_seed),23);
        tracep->fullBit(oldp+8756,(vlSelf->ram_ren));
        tracep->fullIData(oldp+8757,(vlSelf->ram_raddr),32);
        tracep->fullIData(oldp+8758,(vlSelf->ram_rdata),32);
        tracep->fullCData(oldp+8759,(vlSelf->ram_wen),4);
        tracep->fullIData(oldp+8760,(vlSelf->ram_waddr),32);
        tracep->fullIData(oldp+8761,(vlSelf->ram_wdata),32);
        tracep->fullIData(oldp+8762,(vlSelf->debug0_wb_pc),32);
        tracep->fullBit(oldp+8763,(vlSelf->debug0_wb_rf_wen));
        tracep->fullCData(oldp+8764,(vlSelf->debug0_wb_rf_wnum),5);
        tracep->fullIData(oldp+8765,(vlSelf->debug0_wb_rf_wdata),32);
        tracep->fullIData(oldp+8766,(vlSelf->num_data),32);
        tracep->fullBit(oldp+8767,(vlSelf->open_trace));
        tracep->fullBit(oldp+8768,(vlSelf->num_monitor));
        tracep->fullCData(oldp+8769,(vlSelf->confreg_uart_data),8);
        tracep->fullBit(oldp+8770,(vlSelf->write_uart_valid));
        tracep->fullWData(oldp+8771,(vlSelf->uart_ctr_bus),128);
        tracep->fullBit(oldp+8775,(vlSelf->uart_rx));
        tracep->fullBit(oldp+8776,(vlSelf->uart_tx));
        tracep->fullSData(oldp+8777,(vlSelf->led),16);
        tracep->fullCData(oldp+8778,(vlSelf->led_rg0),2);
        tracep->fullCData(oldp+8779,(vlSelf->led_rg1),2);
        tracep->fullCData(oldp+8780,(vlSelf->num_csn),8);
        tracep->fullCData(oldp+8781,(vlSelf->num_a_g),7);
        tracep->fullCData(oldp+8782,(vlSelf->btn_key_col),4);
        tracep->fullCData(oldp+8783,(vlSelf->btn_key_row),4);
        tracep->fullCData(oldp+8784,(vlSelf->btn_step),2);
        tracep->fullCData(oldp+8785,(vlSelf->__SYM__switch),8);
        tracep->fullBit(oldp+8786,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw) 
                                       | (~ (IData)(vlSelf->enable_delay))))));
        tracep->fullBit(oldp+8787,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready) 
                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w) 
                                       | (~ (IData)(vlSelf->enable_delay))))));
        tracep->fullBit(oldp+8788,((1U & (~ (IData)(vlSelf->aresetn)))));
        tracep->fullBit(oldp+8789,(((IData)(vlSelf->aresetn) 
                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn)))));
        tracep->fullBit(oldp+8790,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)
                                           ? ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en)) 
                                              | (IData)(vlSelf->uart_tx))
                                           : (IData)(vlSelf->uart_rx)))));
        tracep->fullBit(oldp+8791,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)))));
        tracep->fullBit(oldp+8792,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)))));
        tracep->fullIData(oldp+8793,(vlSelf->__SYM__switch),32);
        tracep->fullIData(oldp+8794,(((0x8000U & ((IData)(vlSelf->__SYM__switch) 
                                                  << 8U)) 
                                      | ((0x2000U & 
                                          ((IData)(vlSelf->__SYM__switch) 
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
                                                              << 1U)))))))))),32);
        tracep->fullBit(oldp+8795,(((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                    & (~ (0xfU == (IData)(vlSelf->btn_key_row))))));
        tracep->fullBit(oldp+8796,(((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                    & (0xfU == (IData)(vlSelf->btn_key_row)))));
        tracep->fullBit(oldp+8797,(((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r) 
                                    & (~ (IData)(vlSelf->btn_step)))));
        tracep->fullBit(oldp+8798,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                          & (IData)(vlSelf->btn_step)))));
        tracep->fullBit(oldp+8799,(((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r) 
                                    & (~ ((IData)(vlSelf->btn_step) 
                                          >> 1U)))));
        tracep->fullBit(oldp+8800,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)) 
                                          & ((IData)(vlSelf->btn_step) 
                                             >> 1U)))));
        tracep->fullIData(oldp+8801,(0x20U),32);
        tracep->fullCData(oldp+8802,(1U),4);
        tracep->fullCData(oldp+8803,(1U),2);
        tracep->fullCData(oldp+8804,(0U),2);
        tracep->fullCData(oldp+8805,(0U),4);
        tracep->fullCData(oldp+8806,(0U),3);
        tracep->fullBit(oldp+8807,(0U));
        tracep->fullBit(oldp+8808,(vlSelf->simu_top__DOT__soc__DOT__UART_RI));
        tracep->fullCData(oldp+8809,(0U),5);
        tracep->fullBit(oldp+8810,(1U));
        tracep->fullCData(oldp+8811,(2U),2);
        tracep->fullIData(oldp+8812,(0U),32);
        tracep->fullIData(oldp+8813,(6U),32);
        tracep->fullIData(oldp+8814,(0U),32);
        tracep->fullIData(oldp+8815,(1U),32);
        tracep->fullIData(oldp+8816,(2U),32);
        tracep->fullIData(oldp+8817,(3U),32);
        tracep->fullIData(oldp+8818,(4U),32);
        tracep->fullIData(oldp+8819,(5U),32);
        tracep->fullCData(oldp+8820,(1U),6);
        tracep->fullCData(oldp+8821,(2U),6);
        tracep->fullCData(oldp+8822,(4U),6);
        tracep->fullCData(oldp+8823,(8U),6);
        tracep->fullCData(oldp+8824,(0x10U),6);
        tracep->fullCData(oldp+8825,(0x20U),6);
        tracep->fullIData(oldp+8826,(0x24U),32);
        tracep->fullCData(oldp+8827,(1U),5);
        tracep->fullCData(oldp+8828,(2U),5);
        tracep->fullCData(oldp+8829,(4U),5);
        tracep->fullCData(oldp+8830,(8U),5);
        tracep->fullCData(oldp+8831,(0x10U),5);
        tracep->fullBit(oldp+8832,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_r_shift_num));
        tracep->fullQData(oldp+8833,(0ULL),36);
        tracep->fullIData(oldp+8835,(0x20U),32);
        tracep->fullBit(oldp+8836,(1U));
        tracep->fullIData(oldp+8837,(5U),32);
        __Vtemp567[0U] = 0x8a418820U;
        __Vtemp567[1U] = 0xc5a92839U;
        __Vtemp567[2U] = 0xca307b9aU;
        __Vtemp567[3U] = 0x38bdab49U;
        __Vtemp567[4U] = 0xffbbcdebU;
        tracep->fullWData(oldp+8838,(__Vtemp567),160);
        tracep->fullCData(oldp+8843,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__data_index_diff),8);
        tracep->fullIData(oldp+8844,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__data_tag_diff),20);
        tracep->fullCData(oldp+8845,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__data_offset_diff),4);
        tracep->fullSData(oldp+8846,(0U),9);
        tracep->fullSData(oldp+8847,(0U),14);
        tracep->fullSData(oldp+8848,(1U),14);
        tracep->fullSData(oldp+8849,(2U),14);
        tracep->fullSData(oldp+8850,(4U),14);
        tracep->fullSData(oldp+8851,(5U),14);
        tracep->fullSData(oldp+8852,(6U),14);
        tracep->fullSData(oldp+8853,(7U),14);
        tracep->fullSData(oldp+8854,(0xcU),14);
        tracep->fullSData(oldp+8855,(0x10U),14);
        tracep->fullSData(oldp+8856,(0x11U),14);
        tracep->fullSData(oldp+8857,(0x12U),14);
        tracep->fullSData(oldp+8858,(0x13U),14);
        tracep->fullSData(oldp+8859,(0x18U),14);
        tracep->fullSData(oldp+8860,(0x19U),14);
        tracep->fullSData(oldp+8861,(0x1aU),14);
        tracep->fullSData(oldp+8862,(0x1bU),14);
        tracep->fullSData(oldp+8863,(0x20U),14);
        tracep->fullSData(oldp+8864,(0x30U),14);
        tracep->fullSData(oldp+8865,(0x31U),14);
        tracep->fullSData(oldp+8866,(0x32U),14);
        tracep->fullSData(oldp+8867,(0x33U),14);
        tracep->fullSData(oldp+8868,(0x40U),14);
        tracep->fullSData(oldp+8869,(0x41U),14);
        tracep->fullSData(oldp+8870,(0x42U),14);
        tracep->fullSData(oldp+8871,(0x43U),14);
        tracep->fullSData(oldp+8872,(0x44U),14);
        tracep->fullSData(oldp+8873,(0x60U),14);
        tracep->fullSData(oldp+8874,(0x88U),14);
        tracep->fullSData(oldp+8875,(0x98U),14);
        tracep->fullSData(oldp+8876,(0x100U),14);
        tracep->fullSData(oldp+8877,(0x101U),14);
        tracep->fullSData(oldp+8878,(0x180U),14);
        tracep->fullSData(oldp+8879,(0x181U),14);
        tracep->fullIData(oldp+8880,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_brk),32);
        tracep->fullIData(oldp+8881,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_disable_cache),32);
        tracep->fullIData(oldp+8882,(0x13U),32);
        tracep->fullIData(oldp+8883,(0x25U),32);
        tracep->fullCData(oldp+8884,(2U),3);
        tracep->fullCData(oldp+8885,(1U),3);
        tracep->fullCData(oldp+8886,(3U),3);
        tracep->fullCData(oldp+8887,(4U),3);
        tracep->fullBit(oldp+8888,(0U));
        tracep->fullBit(oldp+8889,(1U));
        tracep->fullIData(oldp+8890,(0x100U),32);
        tracep->fullIData(oldp+8891,(0x15U),32);
        tracep->fullCData(oldp+8892,(5U),3);
        tracep->fullCData(oldp+8893,(6U),3);
        tracep->fullCData(oldp+8894,(0U),8);
        tracep->fullQData(oldp+8895,(0ULL),64);
        tracep->fullCData(oldp+8897,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bid),4);
        tracep->fullCData(oldp+8898,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bresp),2);
        tracep->fullCData(oldp+8899,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rid),4);
        tracep->fullIData(oldp+8900,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rdata),32);
        tracep->fullCData(oldp+8901,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rresp),2);
        tracep->fullBit(oldp+8902,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rlast));
        tracep->fullCData(oldp+8903,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bid),4);
        tracep->fullCData(oldp+8904,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bresp),2);
        tracep->fullCData(oldp+8905,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rid),4);
        tracep->fullIData(oldp+8906,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rdata),32);
        tracep->fullCData(oldp+8907,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rresp),2);
        tracep->fullBit(oldp+8908,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rlast));
        tracep->fullCData(oldp+8909,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[0]),5);
        tracep->fullCData(oldp+8910,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[1]),5);
        tracep->fullCData(oldp+8911,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[2]),5);
        tracep->fullCData(oldp+8912,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[3]),5);
        tracep->fullCData(oldp+8913,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[4]),5);
        tracep->fullCData(oldp+8914,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_0),3);
        tracep->fullCData(oldp+8915,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_1),3);
        tracep->fullIData(oldp+8916,(5U),32);
        tracep->fullIData(oldp+8917,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit_int),32);
        tracep->fullIData(oldp+8918,(0x14U),32);
        tracep->fullIData(oldp+8919,(8U),32);
        tracep->fullIData(oldp+8920,(0x40U),32);
        tracep->fullIData(oldp+8921,(0x80U),32);
        tracep->fullIData(oldp+8922,(0x10U),32);
        tracep->fullBit(oldp+8923,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_rw_dma));
        tracep->fullBit(oldp+8924,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_dma));
        tracep->fullBit(oldp+8925,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_dma));
        tracep->fullIData(oldp+8926,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_addr_dma),20);
        tracep->fullIData(oldp+8927,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma),32);
        tracep->fullBit(oldp+8928,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma));
        tracep->fullBit(oldp+8929,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_ack_i));
        tracep->fullBit(oldp+8930,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_clk_dma));
        tracep->fullBit(oldp+8931,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_reset_n_dma));
        tracep->fullCData(oldp+8932,(2U),4);
        tracep->fullCData(oldp+8933,(8U),4);
        tracep->fullCData(oldp+8934,(((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                      << 1U)),4);
        tracep->fullBit(oldp+8935,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                          >> 2U))));
        tracep->fullBit(oldp+8936,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                          >> 1U))));
        tracep->fullBit(oldp+8937,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI))));
        tracep->fullBit(oldp+8938,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                          << 1U))));
        tracep->fullBit(oldp+8939,((1U & (~ (0x1fffffffU 
                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                >> 2U))))));
        tracep->fullBit(oldp+8940,((1U & (~ (0x3fffffffU 
                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                >> 1U))))));
        tracep->fullBit(oldp+8941,((1U & (~ (0x7fffffffU 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI))))));
        tracep->fullBit(oldp+8942,((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                             << 1U)))));
        tracep->fullCData(oldp+8943,(3U),4);
        tracep->fullCData(oldp+8944,(4U),4);
        tracep->fullCData(oldp+8945,(5U),4);
        tracep->fullCData(oldp+8946,(6U),4);
        tracep->fullCData(oldp+8947,(7U),4);
        tracep->fullCData(oldp+8948,(9U),4);
        tracep->fullCData(oldp+8949,(0xaU),4);
        tracep->fullIData(oldp+8950,(0xbU),32);
        tracep->fullCData(oldp+8951,(0xaU),5);
        tracep->fullCData(oldp+8952,(3U),5);
        tracep->fullCData(oldp+8953,(6U),5);
        tracep->fullCData(oldp+8954,(7U),5);
        tracep->fullCData(oldp+8955,(0x11U),5);
        tracep->fullCData(oldp+8956,(0x12U),5);
        tracep->fullCData(oldp+8957,(0x13U),5);
        tracep->fullCData(oldp+8958,(0x14U),5);
        tracep->fullCData(oldp+8959,(0x15U),5);
        tracep->fullCData(oldp+8960,(0x16U),5);
        tracep->fullCData(oldp+8961,(0x17U),5);
        tracep->fullCData(oldp+8962,(0x18U),5);
        tracep->fullCData(oldp+8963,(0x19U),5);
        tracep->fullCData(oldp+8964,(0x1aU),5);
        tracep->fullCData(oldp+8965,(0x1bU),5);
    }
}
