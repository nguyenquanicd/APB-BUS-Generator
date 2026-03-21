// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vm_vlsit_apbdec.h for the primary calling header

#include "Vm_vlsit_apbdec__pch.h"
#include "Vm_vlsit_apbdec__Syms.h"
#include "Vm_vlsit_apbdec___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vm_vlsit_apbdec___024root___dump_triggers__act(Vm_vlsit_apbdec___024root* vlSelf);
#endif  // VL_DEBUG

void Vm_vlsit_apbdec___024root___eval_triggers__act(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___eval_triggers__act\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtrigprevexpr_hea09e25c__0;
    __Vtrigprevexpr_hea09e25c__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h6ea4a6cb__0;
    __Vtrigprevexpr_h6ea4a6cb__0 = 0;
    // Body
    __Vtrigprevexpr_hea09e25c__0 = ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                                    & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)));
    __Vtrigprevexpr_h6ea4a6cb__0 = (1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)));
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__m_vlsit_apbdec_tb__DOT__i_clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__m_vlsit_apbdec_tb__DOT__i_rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_rst_n) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__m_vlsit_apbdec_tb__DOT__i_rst_n__0))));
    vlSelfRef.__VactTriggered.setBit(4U, ((IData)(__Vtrigprevexpr_hea09e25c__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_hea09e25c__1)));
    vlSelfRef.__VactTriggered.setBit(5U, ((IData)(__Vtrigprevexpr_h6ea4a6cb__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h6ea4a6cb__1)));
    vlSelfRef.__VactTriggered.setBit(6U, ((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__m_vlsit_apbdec_tb__DOT__i_clk__0 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__m_vlsit_apbdec_tb__DOT__i_rst_n__0 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__i_rst_n;
    vlSelfRef.__Vtrigprevexpr_hea09e25c__1 = __Vtrigprevexpr_hea09e25c__0;
    vlSelfRef.__Vtrigprevexpr_h6ea4a6cb__1 = __Vtrigprevexpr_h6ea4a6cb__0;
    vlSelfRef.__Vtrigprevexpr___TOP__m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done__0 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(4U, 1U);
        vlSelfRef.__VactTriggered.setBit(5U, 1U);
        vlSelfRef.__VactTriggered.setBit(6U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vm_vlsit_apbdec___024root___dump_triggers__act(vlSelf);
    }
#endif
}
