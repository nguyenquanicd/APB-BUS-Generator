// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_single_cycle.h for the primary calling header

#include "Vtb_single_cycle__pch.h"
#include "Vtb_single_cycle___024root.h"

VL_ATTR_COLD void Vtb_single_cycle___024root___eval_static__TOP(Vtb_single_cycle___024root* vlSelf);
VL_ATTR_COLD void Vtb_single_cycle___024root____Vm_traceActivitySetAll(Vtb_single_cycle___024root* vlSelf);

VL_ATTR_COLD void Vtb_single_cycle___024root___eval_static(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___eval_static\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_single_cycle___024root___eval_static__TOP(vlSelf);
    Vtb_single_cycle___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_single_cycle__DOT__clk_i__0 
        = vlSelfRef.tb_single_cycle__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_single_cycle__DOT__rst_ni__0 
        = vlSelfRef.tb_single_cycle__DOT__rst_ni;
}

VL_ATTR_COLD void Vtb_single_cycle___024root___eval_static__TOP(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___eval_static__TOP\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_single_cycle__DOT__tests_passed = 0U;
    vlSelfRef.tb_single_cycle__DOT__tests_failed = 0U;
}

VL_ATTR_COLD void Vtb_single_cycle___024root___eval_final(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___eval_final\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_single_cycle___024root___dump_triggers__stl(Vtb_single_cycle___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_single_cycle___024root___eval_phase__stl(Vtb_single_cycle___024root* vlSelf);

VL_ATTR_COLD void Vtb_single_cycle___024root___eval_settle(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___eval_settle\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_single_cycle___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/link/work/real_work/MRV-CPU/sim/tests/fibonacci/tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_single_cycle___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_single_cycle___024root___dump_triggers__stl(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___dump_triggers__stl\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_single_cycle___024root___stl_sequent__TOP__0(Vtb_single_cycle___024root* vlSelf);

VL_ATTR_COLD void Vtb_single_cycle___024root___eval_stl(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___eval_stl\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_single_cycle___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_single_cycle___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> Vtb_single_cycle__ConstPool__TABLE_h9db0caf6_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_single_cycle__ConstPool__TABLE_hfac81aa6_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_single_cycle__ConstPool__TABLE_hfcef27fe_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_single_cycle__ConstPool__TABLE_hbdba5ef2_0;

VL_ATTR_COLD void Vtb_single_cycle___024root___stl_sequent__TOP__0(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___stl_sequent__TOP__0\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT____VdfgRegularize_h6ebf9eb7_0_1;
    tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT____VdfgRegularize_h6ebf9eb7_0_1 = 0;
    CData/*3:0*/ tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT____VdfgRegularize_h6ebf9eb7_0_2;
    tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT____VdfgRegularize_h6ebf9eb7_0_2 = 0;
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_read_data 
        = ((0x00000100U > VL_SHIFTR_III(32,32,32, vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_addr, 2U))
            ? vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
           [(0x000000ffU & (vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_addr 
                            >> 2U))] : 0xdeadbeefU);
    vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_interrupt 
        = ((~ (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_interrupt_sync_d)) 
           & (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_interrupt_sync));
    vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
        = ((IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_interrupt)
            ? 0x100000e7U : vlSelfRef.tb_single_cycle__DOT__u_imem_0__DOT__mem_array
           [(0x000007ffU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc 
                            >> 2U))]);
    __Vtableidx1 = (((8U == (0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                            >> 2U))) 
                     << 4U) | ((8U & ((~ (0U != (0x0000001fU 
                                                 & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                    >> 2U)))) 
                                      << 3U)) | (((IData)(vlSelfRef.tb_single_cycle__DOT__pready) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__reg_state))));
    vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__w_next_state 
        = Vtb_single_cycle__ConstPool__TABLE_h9db0caf6_0
        [__Vtableidx1];
    tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT____VdfgRegularize_h6ebf9eb7_0_2 
        = ((8U & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                  >> 0x0000001bU)) | (7U & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                            >> 0x0000000cU)));
    tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT____VdfgRegularize_h6ebf9eb7_0_1 
        = ((0x1bU == (0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                     >> 2U))) | (0x19U 
                                                 == 
                                                 (0x0000001fU 
                                                  & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                     >> 2U))));
    vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_wb_sel 
        = ((IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_interrupt)
            ? 3U : ((0U != (0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                           >> 2U)))
                     ? ((IData)(tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT____VdfgRegularize_h6ebf9eb7_0_1)
                         ? 2U : 1U) : 0U));
    __Vtableidx2 = (((8U == (0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                            >> 2U))) 
                     << 3U) | ((4U & ((~ (0U != (0x0000001fU 
                                                 & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                    >> 2U)))) 
                                      << 2U)) | (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__reg_state)));
    vlSelfRef.tb_single_cycle__DOT__psel = Vtb_single_cycle__ConstPool__TABLE_hfac81aa6_0
        [__Vtableidx2];
    vlSelfRef.tb_single_cycle__DOT__penable = Vtb_single_cycle__ConstPool__TABLE_hfcef27fe_0
        [__Vtableidx2];
    vlSelfRef.tb_single_cycle__DOT__dut__DOT__w_biu_stall 
        = Vtb_single_cycle__ConstPool__TABLE_hbdba5ef2_0
        [__Vtableidx2];
    vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__i_data_w 
        = (((0U == (0x0000001fU & VL_SHIFTL_III(10,10,32, 
                                                (0x0000001fU 
                                                 & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                    >> 0x00000014U)), 5U)))
             ? 0U : (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[
                     (((IData)(0x0000001fU) + (0x000003ffU 
                                               & VL_SHIFTL_III(10,10,32, 
                                                               (0x0000001fU 
                                                                & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                                   >> 0x00000014U)), 5U))) 
                      >> 5U)] << ((IData)(0x00000020U) 
                                  - (0x0000001fU & 
                                     VL_SHIFTL_III(10,10,32, 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                       >> 0x00000014U)), 5U))))) 
           | (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[
              (0x0000001fU & (VL_SHIFTL_III(10,10,32, 
                                            (0x0000001fU 
                                             & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                >> 0x00000014U)), 5U) 
                              >> 5U))] >> (0x0000001fU 
                                           & VL_SHIFTL_III(10,10,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                               >> 0x00000014U)), 5U))));
    vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_brcomp_0__DOT__i_rs1_data 
        = (((0U == (0x0000001fU & VL_SHIFTL_III(10,10,32, 
                                                (0x0000001fU 
                                                 & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                    >> 0x0000000fU)), 5U)))
             ? 0U : (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[
                     (((IData)(0x0000001fU) + (0x000003ffU 
                                               & VL_SHIFTL_III(10,10,32, 
                                                               (0x0000001fU 
                                                                & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                                   >> 0x0000000fU)), 5U))) 
                      >> 5U)] << ((IData)(0x00000020U) 
                                  - (0x0000001fU & 
                                     VL_SHIFTL_III(10,10,32, 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                       >> 0x0000000fU)), 5U))))) 
           | (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[
              (0x0000001fU & (VL_SHIFTL_III(10,10,32, 
                                            (0x0000001fU 
                                             & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                >> 0x0000000fU)), 5U) 
                              >> 5U))] >> (0x0000001fU 
                                           & VL_SHIFTL_III(10,10,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                               >> 0x0000000fU)), 5U))));
    vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__w_u_type 
        = (5U == ((8U & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                         >> 3U)) | (7U & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                          >> 2U))));
    vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__w_i_type 
        = (0U == ((0x0000000cU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                  >> 3U)) | (3U & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                   >> 2U))));
    vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_pc_sel 
        = ((IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__w_biu_stall)
            ? 2U : ((IData)(tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT____VdfgRegularize_h6ebf9eb7_0_1) 
                    | (IData)(((0x00000060U == (0x0000707cU 
                                                & vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst)) 
                               & (~ (0U != (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_brcomp_0__DOT__i_rs1_data 
                                            ^ vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__i_data_w)))))));
    vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_a 
        = (((0x18U == (0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                      >> 2U))) | ((0x1bU 
                                                   == 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                       >> 2U))) 
                                                  | (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__w_u_type)))
            ? vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc
            : vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_brcomp_0__DOT__i_rs1_data);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__w_i_type) 
                                                | (0x19U 
                                                   == 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                       >> 2U))));
    vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_immgen_0__DOT__o_imm 
        = ((0x1bU == (0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                     >> 2U))) ? ((IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__w_u_type)
                                                  ? 0U
                                                  : 
                                                 ((0x18U 
                                                   == 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                       >> 2U)))
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x0000001fU 
                                                     & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                        >> 2U)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                                     ? 0U
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                                  >> 0x0000001fU))) 
                                                      << 0x00000014U) 
                                                     | ((((0x000001feU 
                                                           & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                              >> 0x0000000bU)) 
                                                          | (1U 
                                                             & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                                >> 0x00000014U))) 
                                                         << 0x0000000bU) 
                                                        | (0x000007feU 
                                                           & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                              >> 0x00000014U))))))))
            : ((IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__w_u_type)
                ? ((0x18U == (0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                             >> 2U)))
                    ? 0U : ((8U == (0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                   >> 2U)))
                             ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                      ? 0U : (0xfffff000U 
                                              & vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst))))
                : ((0x18U == (0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                             >> 2U)))
                    ? ((8U == (0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                              >> 2U)))
                        ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                 ? 0U : (((- (IData)(
                                                     (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                      >> 0x0000001fU))) 
                                          << 0x0000000cU) 
                                         | ((0x00000800U 
                                             & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                << 4U)) 
                                            | ((0x000007e0U 
                                                & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                   >> 0x00000014U)) 
                                               | (0x0000001eU 
                                                  & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                     >> 7U)))))))
                    : ((8U == (0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                              >> 2U)))
                        ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                            ? 0U : (((- (IData)((vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                 >> 0x0000001fU))) 
                                     << 0x0000000bU) 
                                    | ((0x000007e0U 
                                        & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                           >> 0x00000014U)) 
                                       | (0x0000001fU 
                                          & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                             >> 7U)))))
                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                            ? (((- (IData)((vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                            >> 0x0000001fU))) 
                                << 0x0000000bU) | (0x000007ffU 
                                                   & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                      >> 0x00000014U)))
                            : 0U)))));
    if ((0x0cU == (0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                  >> 2U)))) {
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_sel 
            = tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT____VdfgRegularize_h6ebf9eb7_0_2;
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_b 
            = vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__i_data_w;
    } else {
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_sel 
            = (((0U != (0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                       >> 2U))) & (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__w_i_type))
                ? ((5U == (7U & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                 >> 0x0000000cU))) ? (IData)(tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT____VdfgRegularize_h6ebf9eb7_0_2)
                    : (7U & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                             >> 0x0000000cU))) : ((0x0dU 
                                                   == 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                       >> 2U)))
                                                   ? 9U
                                                   : 0U));
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_b 
            = vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_immgen_0__DOT__o_imm;
    }
    vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__o_data 
        = ((4U & (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_sel))
            ? ((2U & (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_sel))
                ? ((1U & (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_sel))
                    ? (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_a 
                       & vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_b)
                    : (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_a 
                       | vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_b))
                : 0U) : ((2U & (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_sel))
                          ? 0U : ((1U & (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_sel))
                                   ? vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_b
                                   : (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_a 
                                      + ((8U & (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_sel))
                                          ? ((IData)(1U) 
                                             + (~ vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_b))
                                          : vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_b)))));
    vlSelfRef.tb_single_cycle__DOT__dut__DOT__w_pc_new 
        = ((2U & (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_pc_sel))
            ? vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc
            : ((1U & (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_pc_sel))
                ? vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__o_data
                : ((IData)(4U) + vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc)));
}

VL_ATTR_COLD void Vtb_single_cycle___024root___eval_triggers__stl(Vtb_single_cycle___024root* vlSelf);

VL_ATTR_COLD bool Vtb_single_cycle___024root___eval_phase__stl(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___eval_phase__stl\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_single_cycle___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_single_cycle___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_single_cycle___024root___dump_triggers__act(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___dump_triggers__act\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_single_cycle.clk_i)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_single_cycle.rst_ni)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_single_cycle.clk_i)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_single_cycle___024root___dump_triggers__nba(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___dump_triggers__nba\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_single_cycle.clk_i)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_single_cycle.rst_ni)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_single_cycle.clk_i)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_single_cycle___024root____Vm_traceActivitySetAll(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root____Vm_traceActivitySetAll\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtb_single_cycle___024root___ctor_var_reset(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___ctor_var_reset\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_single_cycle__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9537167892280777626ull);
    vlSelf->tb_single_cycle__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2107212351257757456ull);
    vlSelf->tb_single_cycle__DOT__interrupt_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3308778188980046590ull);
    vlSelf->tb_single_cycle__DOT__paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1327653995010070982ull);
    vlSelf->tb_single_cycle__DOT__pwdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7238352593767690997ull);
    vlSelf->tb_single_cycle__DOT__prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16468824465152541369ull);
    vlSelf->tb_single_cycle__DOT__pwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1263275660246480056ull);
    vlSelf->tb_single_cycle__DOT__psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1833316174939544659ull);
    vlSelf->tb_single_cycle__DOT__penable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10169382951439724329ull);
    vlSelf->tb_single_cycle__DOT__pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8328476467682571034ull);
    vlSelf->tb_single_cycle__DOT__timeout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9130387799873795774ull);
    vlSelf->tb_single_cycle__DOT__interrupt_wait = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17842180967078995286ull);
    vlSelf->tb_single_cycle__DOT__tests_passed = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2884066442108658957ull);
    vlSelf->tb_single_cycle__DOT__tests_failed = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10665047515070163208ull);
    vlSelf->tb_single_cycle__DOT__pc_prev = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5967308141210785099ull);
    vlSelf->tb_single_cycle__DOT__interrupt_return_pc_expected = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12251654727718367808ull);
    vlSelf->tb_single_cycle__DOT__interrupt_vector_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5581518451908391143ull);
    vlSelf->tb_single_cycle__DOT__interrupt_entry_captured = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12591729924478329551ull);
    vlSelf->tb_single_cycle__DOT__dut__DOT__reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16792644259382867550ull);
    vlSelf->tb_single_cycle__DOT__dut__DOT__w_pc_new = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8633858636390443907ull);
    vlSelf->tb_single_cycle__DOT__dut__DOT__w_biu_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5404009938475136901ull);
    vlSelf->tb_single_cycle__DOT__dut__DOT__reg_interrupt_meta = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7938970290572781355ull);
    vlSelf->tb_single_cycle__DOT__dut__DOT__reg_interrupt_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3014743598180646838ull);
    vlSelf->tb_single_cycle__DOT__dut__DOT__reg_interrupt_sync_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4679330534747422752ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array, __VscopeHash, 14293840292025340488ull);
    vlSelf->tb_single_cycle__DOT__dut__DOT__u_brcomp_0__DOT__i_rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12411150986101047276ull);
    vlSelf->tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17791450815218316464ull);
    vlSelf->tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_interrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14161268549941830458ull);
    vlSelf->tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_pc_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10884729836091787134ull);
    vlSelf->tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_wb_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4097866391926336158ull);
    vlSelf->tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__w_i_type = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11507349518643199918ull);
    vlSelf->tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__w_u_type = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9095948440261079421ull);
    vlSelf->tb_single_cycle__DOT__dut__DOT__u_immgen_0__DOT__o_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7660462772780936622ull);
    vlSelf->tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11230557802144220247ull);
    vlSelf->tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4948322245510835882ull);
    vlSelf->tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16364928054721656362ull);
    vlSelf->tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__o_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10671103959052135000ull);
    vlSelf->tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__i_data_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 992750636960829632ull);
    vlSelf->tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__reg_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13577395678273604074ull);
    vlSelf->tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__w_next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 57912615474837153ull);
    vlSelf->tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__reg_data_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17605210707826523905ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17806957566082038137ull);
    }
    vlSelf->tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_wait_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15819150410548175784ull);
    vlSelf->tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4828124284258104760ull);
    vlSelf->tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7607472474466220461ull);
    vlSelf->tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5902540031397851772ull);
    vlSelf->tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6289401004333250188ull);
    vlSelf->tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7202035261815616360ull);
    vlSelf->tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_slave_seq__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10387973713612902227ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_single_cycle__DOT__u_imem_0__DOT__mem_array[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10101948144812582331ull);
    }
    vlSelf->tb_single_cycle__DOT__u_imem_0__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5905814147067497110ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_single_cycle__DOT__clk_i__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6521098384490179528ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_single_cycle__DOT__rst_ni__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2846616406959086962ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
