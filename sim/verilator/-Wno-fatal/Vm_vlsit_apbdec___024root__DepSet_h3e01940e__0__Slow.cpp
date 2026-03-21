// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vm_vlsit_apbdec.h for the primary calling header

#include "Vm_vlsit_apbdec__pch.h"
#include "Vm_vlsit_apbdec___024root.h"

VL_ATTR_COLD void Vm_vlsit_apbdec___024root___eval_static__TOP(Vm_vlsit_apbdec___024root* vlSelf);
VL_ATTR_COLD void Vm_vlsit_apbdec___024root____Vm_traceActivitySetAll(Vm_vlsit_apbdec___024root* vlSelf);

VL_ATTR_COLD void Vm_vlsit_apbdec___024root___eval_static(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___eval_static\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vm_vlsit_apbdec___024root___eval_static__TOP(vlSelf);
    Vm_vlsit_apbdec___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__m_vlsit_apbdec_tb__DOT__i_clk__0 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__m_vlsit_apbdec_tb__DOT__i_rst_n__0 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_rst_n;
    vlSelfRef.__Vtrigprevexpr_hea09e25c__1 = (0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state));
    vlSelfRef.__Vtrigprevexpr_h6ea4a6cb__1 = (1U & 
                                              (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)));
    vlSelfRef.__Vtrigprevexpr___TOP__m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done__0 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done;
}

VL_ATTR_COLD void Vm_vlsit_apbdec___024root___eval_static__TOP(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___eval_static__TOP\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
}

VL_ATTR_COLD void Vm_vlsit_apbdec___024root___eval_final(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___eval_final\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vm_vlsit_apbdec___024root___dump_triggers__stl(Vm_vlsit_apbdec___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vm_vlsit_apbdec___024root___eval_phase__stl(Vm_vlsit_apbdec___024root* vlSelf);

VL_ATTR_COLD void Vm_vlsit_apbdec___024root___eval_settle(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___eval_settle\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vm_vlsit_apbdec___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/link/work/real_work/APB-DEC-Generator/output/m_vlsit_apbdec_tb.sv", 24, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vm_vlsit_apbdec___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vm_vlsit_apbdec___024root___dump_triggers__stl(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___dump_triggers__stl\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vm_vlsit_apbdec___024root___stl_sequent__TOP__0(Vm_vlsit_apbdec___024root* vlSelf);

VL_ATTR_COLD void Vm_vlsit_apbdec___024root___eval_stl(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___eval_stl\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vm_vlsit_apbdec___024root___stl_sequent__TOP__0(vlSelf);
        Vm_vlsit_apbdec___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vm_vlsit_apbdec___024root___stl_sequent__TOP__0(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___stl_sequent__TOP__0\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_uart 
        = ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr) 
           & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_psel));
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_read_data 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem
        [(0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_addr), 2U))];
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_read_data 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem
        [(0x0000000fU & VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_addr), 2U))];
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_read_data 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem
        [(0x00000fffU & VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_addr), 2U))];
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_read_data 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem
        [(0x00007fffU & VL_SHIFTR_III(15,15,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_addr), 2U))];
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_read_data 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem
        [(0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_addr), 2U))];
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_read_data 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem
        [(0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_addr), 2U))];
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_can_sel 
        = ((0x00002000U <= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr) 
           & (0x00009fffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr));
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_gyro_sel 
        = ((0x0000b000U <= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr) 
           & (0x0000b3ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr));
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_i2c_sel 
        = ((0x00000100U <= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr) 
           & (0x0000010fU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr));
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_pwm_sel 
        = ((0x0000a000U <= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr) 
           & (0x0000a0ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr));
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_spi_sel 
        = ((0x00001000U <= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr) 
           & (0x00001fffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr));
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_can 
        = ((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_can_sel) 
           & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_psel));
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_gyro 
        = ((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_gyro_sel) 
           & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_psel));
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_i2c 
        = ((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_i2c_sel) 
           & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_psel));
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_pwm 
        = ((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_pwm_sel) 
           & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_psel));
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_spi 
        = ((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_spi_sel) 
           & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_psel));
    if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_gyro_sel) {
        if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_pwm_sel) {
            if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_can_sel) {
                if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_spi_sel) {
                    if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_i2c_sel) {
                        if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
                        } else {
                            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_i2c;
                            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_i2c;
                            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_i2c;
                        }
                    } else if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
                    } else {
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_spi;
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_spi;
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_spi;
                    }
                } else if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_i2c_sel) {
                    if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
                    } else {
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_i2c;
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_i2c;
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_i2c;
                    }
                } else if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
                } else {
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_can;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_can;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_can;
                }
            } else if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_spi_sel) {
                if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_i2c_sel) {
                    if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
                    } else {
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_i2c;
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_i2c;
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_i2c;
                    }
                } else if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
                } else {
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_spi;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_spi;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_spi;
                }
            } else if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_i2c_sel) {
                if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
                } else {
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_i2c;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_i2c;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_i2c;
                }
            } else if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
            } else {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_pwm;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_pwm;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_pwm;
            }
        } else if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_can_sel) {
            if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_spi_sel) {
                if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_i2c_sel) {
                    if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
                    } else {
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_i2c;
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_i2c;
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_i2c;
                    }
                } else if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
                } else {
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_spi;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_spi;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_spi;
                }
            } else if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_i2c_sel) {
                if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
                } else {
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_i2c;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_i2c;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_i2c;
                }
            } else if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
            } else {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_can;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_can;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_can;
            }
        } else if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_spi_sel) {
            if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_i2c_sel) {
                if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
                } else {
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_i2c;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_i2c;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_i2c;
                }
            } else if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
            } else {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_spi;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_spi;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_spi;
            }
        } else if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_i2c_sel) {
            if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
            } else {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_i2c;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_i2c;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_i2c;
            }
        } else if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
        } else {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_gyro;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_gyro;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_gyro;
        }
    } else if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_pwm_sel) {
        if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_can_sel) {
            if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_spi_sel) {
                if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_i2c_sel) {
                    if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
                    } else {
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_i2c;
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_i2c;
                        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                            = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_i2c;
                    }
                } else if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
                } else {
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_spi;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_spi;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_spi;
                }
            } else if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_i2c_sel) {
                if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
                } else {
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_i2c;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_i2c;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_i2c;
                }
            } else if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
            } else {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_can;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_can;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_can;
            }
        } else if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_spi_sel) {
            if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_i2c_sel) {
                if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
                } else {
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_i2c;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_i2c;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_i2c;
                }
            } else if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
            } else {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_spi;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_spi;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_spi;
            }
        } else if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_i2c_sel) {
            if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
            } else {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_i2c;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_i2c;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_i2c;
            }
        } else if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
        } else {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_pwm;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_pwm;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_pwm;
        }
    } else if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_can_sel) {
        if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_spi_sel) {
            if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_i2c_sel) {
                if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
                } else {
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_i2c;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_i2c;
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_i2c;
                }
            } else if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
            } else {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_spi;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_spi;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_spi;
            }
        } else if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_i2c_sel) {
            if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
            } else {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_i2c;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_i2c;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_i2c;
            }
        } else if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
        } else {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_can;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_can;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_can;
        }
    } else if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_spi_sel) {
        if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_i2c_sel) {
            if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
            } else {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_i2c;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_i2c;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_i2c;
            }
        } else if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
        } else {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_spi;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_spi;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_spi;
        }
    } else if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_i2c_sel) {
        if ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)) {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart;
        } else {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_i2c;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_i2c;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_i2c;
        }
    } else {
        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata 
            = ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)
                ? vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart
                : 0U);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr 
            = ((0x000000ffU < vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr) 
               || (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart));
        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready 
            = ((0x000000ffU < vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr) 
               || (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart));
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__next_state 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state;
    if ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state))) {
        if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid) {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__next_state = 1U;
        }
    } else {
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__next_state 
            = ((1U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state))
                ? 2U : ((2U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state))
                         ? (VL_LTS_III(32, 0U, vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__wait_cnt)
                             ? 2U : ((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready)
                                      ? 0U : 2U)) : 0U));
    }
}

VL_ATTR_COLD void Vm_vlsit_apbdec___024root___eval_triggers__stl(Vm_vlsit_apbdec___024root* vlSelf);

VL_ATTR_COLD bool Vm_vlsit_apbdec___024root___eval_phase__stl(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___eval_phase__stl\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vm_vlsit_apbdec___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vm_vlsit_apbdec___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vm_vlsit_apbdec___024root___dump_triggers__act(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___dump_triggers__act\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge m_vlsit_apbdec_tb.i_clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge m_vlsit_apbdec_tb.i_rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge m_vlsit_apbdec_tb.i_rst_n)\n");
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))\n");
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))\n");
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @( m_vlsit_apbdec_tb.u_master_bfm.trans_done)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vm_vlsit_apbdec___024root___dump_triggers__nba(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___dump_triggers__nba\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge m_vlsit_apbdec_tb.i_clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge m_vlsit_apbdec_tb.i_rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge m_vlsit_apbdec_tb.i_rst_n)\n");
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))\n");
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))\n");
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @( m_vlsit_apbdec_tb.u_master_bfm.trans_done)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vm_vlsit_apbdec___024root____Vm_traceActivitySetAll(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root____Vm_traceActivitySetAll\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vm_vlsit_apbdec___024root___ctor_var_reset(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___ctor_var_reset\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->m_vlsit_apbdec_tb__DOT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10502492092638029004ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__i_rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4567064241852834576ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__m_paddr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1919234313609410973ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__m_pwdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1344455146262991728ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__m_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16917256112137325316ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__m_pwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5219367782981318213ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__m_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1158397595341196541ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__m_penable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9523408754011854722ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__m_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4337158318933060193ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__m_pslverr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12810702076001805337ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__m_pstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10967934316296102621ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__m_pprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13621454635947169198ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__i_pready_uart = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3062748549564995235ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__i_pslverr_uart = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7111303556442113518ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__i_prdata_uart = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3254429380839105480ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__i_pready_i2c = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17501023521354275291ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__i_pslverr_i2c = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3827477742560469465ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__i_prdata_i2c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1346742356207923201ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__i_pready_spi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10626630814338966332ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__i_pslverr_spi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15731109353780665700ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__i_prdata_spi = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9072910145672018519ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__i_pready_can = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3091491001649044536ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__i_pslverr_can = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1205358667387803505ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__i_prdata_can = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8115756352565783567ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__i_pready_pwm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17614563090012191242ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__i_pslverr_pwm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4935736197287165294ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__i_prdata_pwm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 519332221245458581ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__i_pready_gyro = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17327636757116394955ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__i_pslverr_gyro = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10158175482098736460ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__i_prdata_gyro = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13844040015460780480ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11468328882313509036ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1411733867854543908ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5351653672690327666ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14523227184071143757ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_uart = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6486758556097995637ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_i2c = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8451620682705547500ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_spi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14226939982339063547ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_can = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6777865426542126015ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_pwm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13709800510607857939ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_gyro = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10632100465112425232ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_i2c_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7179343224123829329ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_spi_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10285272927231975377ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_can_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9255325028756032535ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_pwm_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1631319228924742778ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_gyro_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4404787882225790247ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14251668986748676525ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11586675229493696794ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6095887475290343385ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10485346406868974016ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4610580858133416152ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13639420914245476990ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3537771050505740715ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10264955479789305142ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4102874610418069604ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14247051819572523177ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__wait_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11700532625447320136ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5957299770283426939ull);
    }
    vlSelf->m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_wait_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3589848709949230412ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17844537458778171466ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14193535355627048498ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6996286788896392694ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4232438364138681846ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_strb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5101852642669108283ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_prot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15431017425254107952ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8753893882508267962ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_slave_seq__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12641056832876005196ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2103637438044315425ull);
    }
    vlSelf->m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_wait_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15085819333112271753ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10844691472898040224ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4598506287094121874ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 594568371815973013ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11888540747234884860ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_strb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18259145336005499000ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_prot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10769668677610622310ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13992187285170632683ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_slave_seq__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12753174601311654816ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15444602316517545374ull);
    }
    vlSelf->m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_wait_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14263086325270201403ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5319619051211555577ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1118179896399628475ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12793345564866929651ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9472466362516507259ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_strb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2727430888073542726ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_prot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6941874304355794334ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6158051393602615669ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_slave_seq__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13278620317210388238ull);
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2297034412966866374ull);
    }
    vlSelf->m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_wait_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1775068482964957787ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4043242064950551485ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2702104102487063392ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_addr = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7522268364982240087ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13307487118654196123ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_strb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3048188101297086750ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_prot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 543278534435112280ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2334694249592954827ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_slave_seq__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1694701280084071606ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2800790231593808525ull);
    }
    vlSelf->m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_wait_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1475196911002081301ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 83482533718065311ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8279118097646670564ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18231441475505405889ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8260234454203587837ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_strb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15784535631555649695ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_prot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6119732361428906435ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1411817553135582582ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_slave_seq__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14740972684311046417ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10029681094048445360ull);
    }
    vlSelf->m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_wait_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7111845044375272982ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3633825250753094006ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18233013075598744801ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_addr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3786446660740709832ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17137986294168864259ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_strb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15191446956665320949ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_prot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7924459224637223519ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3169815447107485243ull);
    vlSelf->m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_slave_seq__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16386552557088403862ull);
    vlSelf->__Vtrigprevexpr___TOP__m_vlsit_apbdec_tb__DOT__i_clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1447266174054557776ull);
    vlSelf->__Vtrigprevexpr___TOP__m_vlsit_apbdec_tb__DOT__i_rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1334969296099970052ull);
    vlSelf->__Vtrigprevexpr_hea09e25c__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1944004370952414755ull);
    vlSelf->__Vtrigprevexpr_h6ea4a6cb__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4685052914559596671ull);
    vlSelf->__Vtrigprevexpr___TOP__m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15899491005722676314ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
