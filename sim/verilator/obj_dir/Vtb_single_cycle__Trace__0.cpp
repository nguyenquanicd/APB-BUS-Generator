// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_single_cycle__Syms.h"


void Vtb_single_cycle___024root__trace_chg_0_sub_0(Vtb_single_cycle___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_single_cycle___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root__trace_chg_0\n"); );
    // Init
    Vtb_single_cycle___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_single_cycle___024root*>(voidSelf);

    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;

    // Body
    Vtb_single_cycle___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_single_cycle___024root__trace_chg_0_sub_0(Vtb_single_cycle___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root__trace_chg_0_sub_0\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);

    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_single_cycle__DOT__rst_ni));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_single_cycle__DOT__interrupt_i));
        bufp->chgIData(oldp+2,(vlSelfRef.tb_single_cycle__DOT__timeout),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_single_cycle__DOT__interrupt_wait),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_single_cycle__DOT__tests_passed),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_single_cycle__DOT__tests_failed),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+6,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_single_cycle__DOT__paddr),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_single_cycle__DOT__pwdata),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_single_cycle__DOT__prdata),32);
        bufp->chgBit(oldp+10,(vlSelfRef.tb_single_cycle__DOT__pwrite));
        bufp->chgBit(oldp+11,(vlSelfRef.tb_single_cycle__DOT__psel));
        bufp->chgBit(oldp+12,(vlSelfRef.tb_single_cycle__DOT__penable));
        bufp->chgBit(oldp+13,(vlSelfRef.tb_single_cycle__DOT__pready));
        bufp->chgIData(oldp+14,(vlSelfRef.tb_single_cycle__DOT__pc_prev),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_single_cycle__DOT__interrupt_return_pc_expected),32);
        bufp->chgBit(oldp+16,(vlSelfRef.tb_single_cycle__DOT__interrupt_vector_hit));
        bufp->chgBit(oldp+17,(vlSelfRef.tb_single_cycle__DOT__interrupt_entry_captured));
        bufp->chgIData(oldp+18,(((IData)(4U) + vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc)),32);
        bufp->chgIData(oldp+19,(((2U & (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_pc_sel))
                                  ? vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc
                                  : ((1U & (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_pc_sel))
                                      ? vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__o_data
                                      : ((IData)(4U) 
                                         + vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc)))),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__o_data),32);
        bufp->chgIData(oldp+22,(((1U == (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_wb_sel))
                                  ? vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__o_data
                                  : ((2U == (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_wb_sel))
                                      ? ((IData)(4U) 
                                         + vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc)
                                      : ((3U == (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_wb_sel))
                                          ? vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc
                                          : vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__reg_data_r)))),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_immgen_0__DOT__o_imm),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__reg_data_r),32);
        bufp->chgCData(oldp+25,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_pc_sel),2);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_brcomp_0__DOT__i_rs1_data),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__i_data_w),32);
        bufp->chgBit(oldp+28,((1U & (~ (0U != (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_brcomp_0__DOT__i_rs1_data 
                                               ^ vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__i_data_w))))));
        bufp->chgBit(oldp+29,((8U == (0x0000001fU & 
                                      (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                       >> 2U)))));
        bufp->chgBit(oldp+30,((1U & (~ (0U != (0x0000001fU 
                                               & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                  >> 2U)))))));
        bufp->chgBit(oldp+31,(((0x18U == (0x0000001fU 
                                          & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                             >> 2U))) 
                               | ((0x1bU == (0x0000001fU 
                                             & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                >> 2U))) 
                                  | (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__w_u_type)))));
        bufp->chgBit(oldp+32,((0x0cU != (0x0000001fU 
                                         & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                            >> 2U)))));
        bufp->chgBit(oldp+33,((1U & (~ ((0x18U == (0x0000001fU 
                                                   & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                      >> 2U))) 
                                        | (8U == (0x0000001fU 
                                                  & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                     >> 2U))))))));
        bufp->chgCData(oldp+34,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_sel),4);
        bufp->chgCData(oldp+35,(((((0x1bU == (0x0000001fU 
                                              & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                 >> 2U))) 
                                   << 4U) | (((IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__w_u_type) 
                                              << 3U) 
                                             | ((0x18U 
                                                 == 
                                                 (0x0000001fU 
                                                  & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                     >> 2U))) 
                                                << 2U))) 
                                 | (((8U == (0x0000001fU 
                                             & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                >> 2U))) 
                                     << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))),5);
        bufp->chgCData(oldp+36,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_wb_sel),2);
        bufp->chgBit(oldp+37,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__w_biu_stall));
        bufp->chgBit(oldp+38,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_interrupt_meta));
        bufp->chgBit(oldp+39,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_interrupt_sync));
        bufp->chgBit(oldp+40,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_interrupt_sync_d));
        bufp->chgBit(oldp+41,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_interrupt));
        bufp->chgIData(oldp+42,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_a),32);
        bufp->chgIData(oldp+43,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_b),32);
        bufp->chgIData(oldp+44,((vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_a 
                                 + ((8U & (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_sel))
                                     ? ((IData)(1U) 
                                        + (~ vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_b))
                                     : vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_b))),32);
        bufp->chgIData(oldp+45,(((8U & (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_sel))
                                  ? ((IData)(1U) + 
                                     (~ vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_b))
                                  : vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_b)),32);
        bufp->chgIData(oldp+46,((vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_a 
                                 | vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_b)),32);
        bufp->chgIData(oldp+47,((vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_a 
                                 & vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_b)),32);
        bufp->chgCData(oldp+48,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__reg_state),2);
        bufp->chgCData(oldp+49,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__w_next_state),2);
        bufp->chgCData(oldp+50,((0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                >> 2U))),5);
        bufp->chgCData(oldp+51,((7U & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                       >> 0x0000000cU))),3);
        bufp->chgBit(oldp+52,((1U & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                     >> 0x0000001eU))));
        bufp->chgBit(oldp+53,((IData)(((0U == (0x00007000U 
                                               & vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst)) 
                                       & (~ (0U != 
                                             (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_brcomp_0__DOT__i_rs1_data 
                                              ^ vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__i_data_w)))))));
        bufp->chgBit(oldp+54,((0x0cU == (0x0000001fU 
                                         & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                            >> 2U)))));
        bufp->chgBit(oldp+55,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__w_i_type));
        bufp->chgBit(oldp+56,((0x18U == (0x0000001fU 
                                         & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                            >> 2U)))));
        bufp->chgBit(oldp+57,((0x1bU == (0x0000001fU 
                                         & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                            >> 2U)))));
        bufp->chgBit(oldp+58,((0x19U == (0x0000001fU 
                                         & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                            >> 2U)))));
        bufp->chgBit(oldp+59,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__w_u_type));
        bufp->chgIData(oldp+60,(((0x00400000U & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                 >> 9U)) 
                                 | ((0x003fff80U & 
                                     (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                      >> 8U)) | ((0x0000007cU 
                                                  & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                     >> 5U)) 
                                                 | (3U 
                                                    & vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst))))),23);
        bufp->chgIData(oldp+61,((vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                 >> 7U)),25);
        bufp->chgCData(oldp+62,((0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                >> 7U))),5);
        bufp->chgCData(oldp+63,((0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+64,((0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                >> 0x00000014U))),5);
        bufp->chgWData(oldp+65,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array),1024);
        bufp->chgIData(oldp+97,(vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_wait_cnt),32);
        bufp->chgBit(oldp+98,(vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_valid));
        bufp->chgBit(oldp+99,(vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_write));
        bufp->chgIData(oldp+100,(vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_addr),32);
        bufp->chgIData(oldp+101,(vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_wdata),32);
        bufp->chgIData(oldp+102,(VL_SHIFTR_III(32,32,32, vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_addr, 2U)),32);
        bufp->chgCData(oldp+103,((0x000000ffU & (vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_addr 
                                                 >> 2U))),8);
        bufp->chgBit(oldp+104,((0x00000100U > VL_SHIFTR_III(32,32,32, vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_addr, 2U))));
        bufp->chgIData(oldp+105,(((0x00000100U > VL_SHIFTR_III(32,32,32, vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_addr, 2U))
                                   ? vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
                                  [(0x000000ffU & (vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_addr 
                                                   >> 2U))]
                                   : 0xdeadbeefU)),32);
        bufp->chgIData(oldp+106,(vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_slave_seq__DOT__i),32);
        bufp->chgSData(oldp+107,((0x00001fffU & vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc)),13);
        bufp->chgSData(oldp+108,((0x000007ffU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc 
                                                 >> 2U))),11);
    }
    bufp->chgBit(oldp+109,(vlSelfRef.tb_single_cycle__DOT__clk_i));
    bufp->chgIData(oldp+110,(vlSelfRef.tb_single_cycle__DOT__u_imem_0__DOT__mem_array
                             [(0x000007ffU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc 
                                              >> 2U))]),32);
    bufp->chgIData(oldp+111,(vlSelfRef.tb_single_cycle__DOT__u_imem_0__DOT__unnamedblk1__DOT__i),32);
}

void Vtb_single_cycle___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root__trace_cleanup\n"); );
    // Init
    Vtb_single_cycle___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_single_cycle___024root*>(voidSelf);

    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
