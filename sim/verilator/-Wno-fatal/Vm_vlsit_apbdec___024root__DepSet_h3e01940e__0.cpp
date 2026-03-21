// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vm_vlsit_apbdec.h for the primary calling header

#include "Vm_vlsit_apbdec__pch.h"
#include "Vm_vlsit_apbdec___024root.h"

VL_ATTR_COLD void Vm_vlsit_apbdec___024root___eval_initial__TOP(Vm_vlsit_apbdec___024root* vlSelf);
VlCoroutine Vm_vlsit_apbdec___024root___eval_initial__TOP__Vtiming__0(Vm_vlsit_apbdec___024root* vlSelf);
VlCoroutine Vm_vlsit_apbdec___024root___eval_initial__TOP__Vtiming__1(Vm_vlsit_apbdec___024root* vlSelf);
VlCoroutine Vm_vlsit_apbdec___024root___eval_initial__TOP__Vtiming__2(Vm_vlsit_apbdec___024root* vlSelf);

void Vm_vlsit_apbdec___024root___eval_initial(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___eval_initial\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vm_vlsit_apbdec___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vm_vlsit_apbdec___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vm_vlsit_apbdec___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vm_vlsit_apbdec___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vm_vlsit_apbdec___024root___eval_initial__TOP__Vtiming__0(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.m_vlsit_apbdec_tb__DOT__i_clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/home/link/work/real_work/APB-DEC-Generator/output/m_vlsit_apbdec_tb.sv", 
                                             184);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_clk = (1U 
                                                   & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_clk)));
    }
}

VlCoroutine Vm_vlsit_apbdec___024root___eval_initial__TOP__Vtiming__1(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.m_vlsit_apbdec_tb__DOT__i_rst_n = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000c350ULL, 
                                         nullptr, "/home/link/work/real_work/APB-DEC-Generator/output/m_vlsit_apbdec_tb.sv", 
                                         190);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__i_rst_n = 1U;
}

VlCoroutine Vm_vlsit_apbdec___024root___eval_initial__TOP__Vtiming__2(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__0__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__0__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__0__rdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__0__rdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__0__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__0__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__1__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__1__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__1__wdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__1__wdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__1__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__1__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__2__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__2__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__2__rdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__2__rdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__2__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__2__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__3__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__3__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__3__rdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__3__rdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__3__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__3__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__4__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__4__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__4__wdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__4__wdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__4__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__4__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__5__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__5__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__5__rdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__5__rdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__5__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__5__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__6__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__6__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__6__rdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__6__rdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__6__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__6__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__7__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__7__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__7__wdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__7__wdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__7__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__7__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__8__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__8__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__8__rdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__8__rdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__8__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__8__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__9__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__9__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__9__rdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__9__rdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__9__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__9__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__10__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__10__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__10__wdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__10__wdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__10__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__10__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__11__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__11__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__11__rdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__11__rdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__11__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__11__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__12__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__12__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__12__rdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__12__rdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__12__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__12__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__13__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__13__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__13__wdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__13__wdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__13__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__13__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__14__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__14__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__14__rdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__14__rdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__14__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__14__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__15__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__15__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__15__rdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__15__rdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__15__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__15__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__16__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__16__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__16__wdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__16__wdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__16__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__16__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__17__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__17__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__17__rdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__17__rdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__17__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__17__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__18__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__18__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__18__wdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__18__wdata = 0;
    CData/*3:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__18__strb;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__18__strb = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__18__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__18__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__19__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__19__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__19__wdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__19__wdata = 0;
    CData/*3:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__19__strb;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__19__strb = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__19__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__19__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__20__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__20__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__20__rdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__20__rdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__20__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__20__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__21__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__21__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__21__wdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__21__wdata = 0;
    CData/*3:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__21__strb;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__21__strb = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__21__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__21__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__22__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__22__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__22__wdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__22__wdata = 0;
    CData/*3:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__22__strb;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__22__strb = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__22__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__22__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__23__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__23__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__23__rdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__23__rdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__23__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__23__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__24__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__24__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__24__wdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__24__wdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__24__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__24__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__25__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__25__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__25__wdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__25__wdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__25__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__25__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__26__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__26__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__26__rdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__26__rdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__26__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__26__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__27__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__27__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__27__wdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__27__wdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__27__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__27__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__28__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__28__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__28__rdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__28__rdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__28__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__28__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__29__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__29__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__29__rdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__29__rdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__29__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__29__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__30__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__30__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__30__wdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__30__wdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__30__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__30__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__31__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__31__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__31__rdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__31__rdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__31__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__31__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__32__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__32__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__32__rdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__32__rdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__32__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__32__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__33__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__33__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__33__wdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__33__wdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__33__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__33__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__34__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__34__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__34__wdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__34__wdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__34__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__34__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__35__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__35__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__35__wdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__35__wdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__35__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__35__prot = 0;
    IData/*23:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__36__addr;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__36__addr = 0;
    IData/*31:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__36__rdata;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__36__rdata = 0;
    CData/*2:0*/ __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__36__prot;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__36__prot = 0;
    // Body
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail = 0U;
    co_await vlSelfRef.__VtrigSched_h0556a2fd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge m_vlsit_apbdec_tb.i_rst_n)", 
                                                         "/home/link/work/real_work/APB-DEC-Generator/output/m_vlsit_apbdec_tb.sv", 
                                                         356);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n========================================\nAPB Decoder Testbench\n========================================\n\n",0);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Read from UART (offset 0x0000)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__0__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__0__addr = 0U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             177);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             178);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__0__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__0__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             185);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__0__rdata 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__0__rdata;
    VL_WRITEF_NX("[TB] Read data: 0x%08x (expected: 0x00000000 - cleared memory)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Write to UART (offset 0x0000)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__1__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__1__wdata = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__1__addr = 0U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             140);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             141);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__1__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__1__wdata;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 1U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0x0fU;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__1__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             148);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    VL_WRITEF_NX("[TB] Wrote: 32'h00000000\n",0);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Read back from UART to verify\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__2__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__2__addr = 0U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             177);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             178);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__2__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__2__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             185);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__2__rdata 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__2__rdata;
    VL_WRITEF_NX("[TB] Read data: 0x%08x (expected: 32'h00000000)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata);
    if ((0U == vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata)) {
        VL_WRITEF_NX("[TB] \342\234\223 PASS: UART data match!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    } else {
        VL_WRITEF_NX("[TB] \342\234\227 FAIL: UART data mismatch!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail);
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Read from I2C (offset 0x0100)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__3__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__3__addr = 0x00000100U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             177);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             178);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__3__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__3__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             185);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__3__rdata 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__3__rdata;
    VL_WRITEF_NX("[TB] Read data: 0x%08x (expected: 0x00000000 - cleared memory)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Write to I2C (offset 0x0100)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__4__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__4__wdata = 0x01010101U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__4__addr = 0x00000100U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             140);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             141);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__4__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__4__wdata;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 1U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0x0fU;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__4__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             148);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    VL_WRITEF_NX("[TB] Wrote: 32'h01010101\n",0);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Read back from I2C to verify\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__5__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__5__addr = 0x00000100U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             177);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             178);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__5__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__5__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             185);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__5__rdata 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__5__rdata;
    VL_WRITEF_NX("[TB] Read data: 0x%08x (expected: 32'h01010101)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata);
    if ((0x01010101U == vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata)) {
        VL_WRITEF_NX("[TB] \342\234\223 PASS: I2C data match!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    } else {
        VL_WRITEF_NX("[TB] \342\234\227 FAIL: I2C data mismatch!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail);
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Read from SPI (offset 0x1000)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__6__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__6__addr = 0x00001000U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             177);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             178);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__6__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__6__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             185);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__6__rdata 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__6__rdata;
    VL_WRITEF_NX("[TB] Read data: 0x%08x (expected: 0x00000000 - cleared memory)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Write to SPI (offset 0x1000)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__7__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__7__wdata = 0x02020202U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__7__addr = 0x00001000U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             140);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             141);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__7__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__7__wdata;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 1U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0x0fU;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__7__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             148);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    VL_WRITEF_NX("[TB] Wrote: 32'h02020202\n",0);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Read back from SPI to verify\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__8__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__8__addr = 0x00001000U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             177);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             178);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__8__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__8__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             185);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__8__rdata 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__8__rdata;
    VL_WRITEF_NX("[TB] Read data: 0x%08x (expected: 32'h02020202)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata);
    if ((0x02020202U == vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata)) {
        VL_WRITEF_NX("[TB] \342\234\223 PASS: SPI data match!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    } else {
        VL_WRITEF_NX("[TB] \342\234\227 FAIL: SPI data mismatch!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail);
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Read from CAN (offset 0x2000)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__9__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__9__addr = 0x00002000U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             177);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             178);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__9__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__9__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             185);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__9__rdata 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__9__rdata;
    VL_WRITEF_NX("[TB] Read data: 0x%08x (expected: 0x00000000 - cleared memory)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Write to CAN (offset 0x2000)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__10__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__10__wdata = 0x03030303U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__10__addr = 0x00002000U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             140);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             141);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__10__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__10__wdata;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 1U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0x0fU;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__10__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             148);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    VL_WRITEF_NX("[TB] Wrote: 32'h03030303\n",0);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Read back from CAN to verify\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__11__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__11__addr = 0x00002000U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             177);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             178);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__11__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__11__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             185);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__11__rdata 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__11__rdata;
    VL_WRITEF_NX("[TB] Read data: 0x%08x (expected: 32'h03030303)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata);
    if ((0x03030303U == vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata)) {
        VL_WRITEF_NX("[TB] \342\234\223 PASS: CAN data match!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    } else {
        VL_WRITEF_NX("[TB] \342\234\227 FAIL: CAN data mismatch!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail);
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Read from PWM (offset 0xA000)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__12__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__12__addr = 0x0000a000U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             177);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             178);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__12__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__12__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             185);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__12__rdata 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__12__rdata;
    VL_WRITEF_NX("[TB] Read data: 0x%08x (expected: 0x00000000 - cleared memory)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Write to PWM (offset 0xA000)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__13__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__13__wdata = 0x04040404U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__13__addr = 0x0000a000U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             140);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             141);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__13__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__13__wdata;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 1U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0x0fU;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__13__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             148);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    VL_WRITEF_NX("[TB] Wrote: 32'h04040404\n",0);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Read back from PWM to verify\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__14__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__14__addr = 0x0000a000U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             177);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             178);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__14__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__14__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             185);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__14__rdata 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__14__rdata;
    VL_WRITEF_NX("[TB] Read data: 0x%08x (expected: 32'h04040404)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata);
    if ((0x04040404U == vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata)) {
        VL_WRITEF_NX("[TB] \342\234\223 PASS: PWM data match!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    } else {
        VL_WRITEF_NX("[TB] \342\234\227 FAIL: PWM data mismatch!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail);
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Read from GYRO (offset 0xB000)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__15__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__15__addr = 0x0000b000U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             177);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             178);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__15__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__15__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             185);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__15__rdata 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__15__rdata;
    VL_WRITEF_NX("[TB] Read data: 0x%08x (expected: 0x00000000 - cleared memory)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Write to GYRO (offset 0xB000)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__16__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__16__wdata = 0x05050505U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__16__addr = 0x0000b000U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             140);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             141);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__16__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__16__wdata;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 1U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0x0fU;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__16__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             148);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    VL_WRITEF_NX("[TB] Wrote: 32'h05050505\n",0);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Read back from GYRO to verify\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__17__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__17__addr = 0x0000b000U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             177);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             178);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__17__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__17__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             185);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__17__rdata 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__17__rdata;
    VL_WRITEF_NX("[TB] Read data: 0x%08x (expected: 32'h05050505)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata);
    if ((0x05050505U == vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata)) {
        VL_WRITEF_NX("[TB] \342\234\223 PASS: GYRO data match!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    } else {
        VL_WRITEF_NX("[TB] \342\234\227 FAIL: GYRO data mismatch!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail);
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Byte-lane write to UART (lower byte only)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__18__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__18__strb = 0x0fU;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__18__wdata = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__18__addr = 0U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             159);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             160);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__18__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__18__wdata;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 1U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__18__strb;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__18__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             167);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__19__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__19__strb = 1U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__19__wdata = 0x12345678U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__19__addr = 0U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             159);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             160);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__19__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__19__wdata;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 1U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__19__strb;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__19__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             167);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__20__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__20__addr = 0U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             177);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             178);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__20__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__20__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             185);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__20__rdata 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__20__rdata;
    VL_WRITEF_NX("[TB] Read data: 0x%08x (expected: 0x00000078)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata);
    if ((0x00000078U == vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata)) {
        VL_WRITEF_NX("[TB] \342\234\223 PASS: Lower byte write correct!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    } else {
        VL_WRITEF_NX("[TB] \342\234\227 FAIL: Lower byte write incorrect!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail);
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Byte-lane write to UART (upper byte only)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__21__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__21__strb = 0x0fU;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__21__wdata = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__21__addr = 0U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             159);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             160);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__21__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__21__wdata;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 1U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__21__strb;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__21__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             167);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__22__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__22__strb = 8U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__22__wdata = 0x12345678U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__22__addr = 0U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             159);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             160);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__22__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__22__wdata;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 1U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__22__strb;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write_strb__22__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             167);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__23__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__23__addr = 0U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             177);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             178);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__23__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__23__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             185);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__23__rdata 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__23__rdata;
    VL_WRITEF_NX("[TB] Read data: 0x%08x (expected: 0x12000000)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata);
    if ((0x12000000U == vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata)) {
        VL_WRITEF_NX("[TB] \342\234\223 PASS: Upper byte write correct!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    } else {
        VL_WRITEF_NX("[TB] \342\234\227 FAIL: Upper byte write incorrect!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail);
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Verify slave isolation\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__24__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__24__wdata = 0xffffffffU;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__24__addr = 0x00000100U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             140);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             141);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__24__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__24__wdata;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 1U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0x0fU;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__24__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             148);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__25__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__25__wdata = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__25__addr = 0U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             140);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             141);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__25__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__25__wdata;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 1U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0x0fU;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__25__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             148);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__26__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__26__addr = 0x00000100U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             177);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             178);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__26__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__26__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             185);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__26__rdata 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__26__rdata;
    VL_WRITEF_NX("[TB] I2C data after UART write: 0x%08x (expected: 0xFFFFFFFF)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata);
    if ((0xffffffffU == vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata)) {
        VL_WRITEF_NX("[TB] \342\234\223 PASS: Slaves are isolated!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    } else {
        VL_WRITEF_NX("[TB] \342\234\227 FAIL: Slave isolation broken!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail);
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Access at UART boundary (0x0000FF)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__27__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__27__wdata = 0xfedcba98U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__27__addr = 0x000000ffU;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             140);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             141);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__27__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__27__wdata;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 1U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0x0fU;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__27__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             148);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__28__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__28__addr = 0x000000ffU;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             177);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             178);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__28__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__28__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             185);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__28__rdata 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__28__rdata;
    VL_WRITEF_NX("[TB] Read data: 0x%08x (expected: 0xFEDCBA98)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata);
    if ((0xfedcba98U == vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata)) {
        VL_WRITEF_NX("[TB] \342\234\223 PASS: Boundary access correct!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    } else {
        VL_WRITEF_NX("[TB] \342\234\227 FAIL: Boundary access incorrect!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail);
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Unmapped address access (0xFFFF - outside all slaves)\n[TB] Expected: PSLVERR should be asserted, no hang\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__29__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__29__addr = 0x0000ffffU;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             177);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             178);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__29__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__29__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             185);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__29__rdata 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__29__rdata;
    VL_WRITEF_NX("[TB] Read from unmapped 0xFFFF: 0x%08x, PSLVERR = %b\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata,
                 1,(IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr));
    if (vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr) {
        VL_WRITEF_NX("[TB] \342\234\223 PASS: PSLVERR correct for unmapped access!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    } else {
        VL_WRITEF_NX("[TB] \342\234\227 FAIL: PSLVERR mismatch for unmapped access!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail);
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Verify PSLVERR deasserted for valid access\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__30__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__30__wdata = 0xfacefaceU;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__30__addr = 0U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             140);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             141);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__30__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__30__wdata;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 1U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0x0fU;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__30__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             148);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__31__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__31__addr = 0U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             177);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             178);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__31__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__31__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             185);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__31__rdata 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__31__rdata;
    VL_WRITEF_NX("[TB] Valid UART access: 0x%08x, PSLVERR = %b\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata,
                 1,(IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr));
    if (vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr) {
        VL_WRITEF_NX("[TB] \342\234\227 FAIL: PSLVERR asserted for valid access!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail);
    } else {
        VL_WRITEF_NX("[TB] \342\234\223 PASS: PSLVERR deasserted for valid access!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Unmapped address in gap (0x0110 - between I2C and SPI)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__32__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__32__addr = 0x00000110U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             177);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             178);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__32__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__32__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             185);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__32__rdata 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__32__rdata;
    VL_WRITEF_NX("[TB] Read from gap 0x0110: 0x%08x, PSLVERR = %b\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata,
                 1,(IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr));
    if (vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr) {
        VL_WRITEF_NX("[TB] \342\234\223 PASS: PSLVERR correct for gap access!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    } else {
        VL_WRITEF_NX("[TB] \342\234\227 FAIL: PSLVERR mismatch for gap access!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail);
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num 
        = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    VL_WRITEF_NX("[TB] Test %0d: Back-to-back writes to UART\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num);
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__33__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__33__wdata = 0x11111111U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__33__addr = 0U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             140);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             141);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__33__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__33__wdata;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 1U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0x0fU;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__33__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             148);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__34__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__34__wdata = 0x22222222U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__34__addr = 0U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             140);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             141);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__34__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__34__wdata;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 1U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0x0fU;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__34__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             148);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__35__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__35__wdata = 0x33333333U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__35__addr = 0U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             140);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             141);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__35__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__35__wdata;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 1U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0x0fU;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__write__35__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             148);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__36__prot = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__36__addr = 0U;
    while ((1U & (~ ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state)) 
                     & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid)))))) {
        co_await vlSelfRef.__VtrigSched_h3dbdaa7b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             177);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done) {
        co_await vlSelfRef.__VtrigSched_hf69376cc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             178);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__36__addr;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb = 0U;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__36__prot;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 1U;
    while ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done)))) {
        co_await vlSelfRef.__VtrigSched_h5ddb4d39__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)", 
                                                             "/home/link/work/real_work/APB-DEC-Generator/sim/lib/apb_master_bfm.sv", 
                                                             185);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid = 0U;
    __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__36__rdata 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata 
        = __Vtask_m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read__36__rdata;
    VL_WRITEF_NX("[TB] Read data: 0x%08x (expected: 0x33333333)\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata);
    if ((0x33333333U == vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata)) {
        VL_WRITEF_NX("[TB] \342\234\223 PASS: Back-to-back writes correct!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass);
    } else {
        VL_WRITEF_NX("[TB] \342\234\227 FAIL: Back-to-back writes incorrect!\n",0);
        vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail 
            = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail);
    }
    VL_WRITEF_NX("\n========================================\n[TB] Test Summary\n========================================\n[TB] Total Tests: %0d\n[TB] Passed:      %0d\n[TB] Failed:      %0d\n========================================\n",0,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass,
                 32,vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail);
    if (VL_LTS_III(32, 0U, vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail)) {
        VL_WRITEF_NX("[TB] \342\234\227 OVERALL RESULT: FAIL\n",0);
        VL_FINISH_MT("/home/link/work/real_work/APB-DEC-Generator/output/m_vlsit_apbdec_tb.sv", 708, "");
    } else {
        VL_WRITEF_NX("[TB] \342\234\223 OVERALL RESULT: PASS\n",0);
        VL_FINISH_MT("/home/link/work/real_work/APB-DEC-Generator/output/m_vlsit_apbdec_tb.sv", 711, "");
    }
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vm_vlsit_apbdec___024root___act_comb__TOP__0(Vm_vlsit_apbdec___024root* vlSelf);

void Vm_vlsit_apbdec___024root___eval_act(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___eval_act\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000078ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vm_vlsit_apbdec___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vm_vlsit_apbdec___024root___act_comb__TOP__0(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___act_comb__TOP__0\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vm_vlsit_apbdec___024root___nba_sequent__TOP__0(Vm_vlsit_apbdec___024root* vlSelf);

void Vm_vlsit_apbdec___024root___eval_nba(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___eval_nba\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vm_vlsit_apbdec___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x000000000000007bULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vm_vlsit_apbdec___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vm_vlsit_apbdec___024root___nba_sequent__TOP__0(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___nba_sequent__TOP__0\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__wait_cnt;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__wait_cnt = 0;
    CData/*0:0*/ __Vdly__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_valid;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_valid = 0;
    IData/*31:0*/ __Vdly__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_wait_cnt;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_wait_cnt = 0;
    CData/*0:0*/ __Vdly__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_valid;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_valid = 0;
    IData/*31:0*/ __Vdly__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_wait_cnt;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_wait_cnt = 0;
    CData/*0:0*/ __Vdly__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_valid;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_valid = 0;
    IData/*31:0*/ __Vdly__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_wait_cnt;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_wait_cnt = 0;
    CData/*0:0*/ __Vdly__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_valid;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_valid = 0;
    IData/*31:0*/ __Vdly__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_wait_cnt;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_wait_cnt = 0;
    CData/*0:0*/ __Vdly__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_valid;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_valid = 0;
    IData/*31:0*/ __Vdly__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_wait_cnt;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_wait_cnt = 0;
    CData/*0:0*/ __Vdly__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_valid;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_valid = 0;
    IData/*31:0*/ __Vdly__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_wait_cnt;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_wait_cnt = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v0;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v0;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v0 = 0;
    IData/*31:0*/ __VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v0;
    __VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v0 = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v1;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v1 = 0;
    CData/*7:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v1;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v1 = 0;
    IData/*31:0*/ __VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v1;
    __VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v1 = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v2;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v2 = 0;
    CData/*7:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v2;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v2 = 0;
    IData/*31:0*/ __VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v2;
    __VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v2 = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v3;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v3 = 0;
    CData/*7:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v3;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v3 = 0;
    IData/*31:0*/ __VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v3;
    __VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v3 = 0;
    CData/*7:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v4;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v4 = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v0;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v0;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v0 = 0;
    CData/*0:0*/ __VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v0;
    __VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v0 = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v1;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v1 = 0;
    CData/*3:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v1;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v1 = 0;
    CData/*0:0*/ __VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v1;
    __VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v1 = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v2;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v2 = 0;
    CData/*3:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v2;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v2 = 0;
    CData/*0:0*/ __VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v2;
    __VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v2 = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v3;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v3 = 0;
    CData/*3:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v3;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v3 = 0;
    CData/*0:0*/ __VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v3;
    __VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v3 = 0;
    CData/*0:0*/ __VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v4;
    __VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v4 = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v0;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v0 = 0;
    SData/*11:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v0;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v0 = 0;
    IData/*31:0*/ __VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v0;
    __VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v0 = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v1;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v1 = 0;
    SData/*11:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v1;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v1 = 0;
    IData/*31:0*/ __VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v1;
    __VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v1 = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v2;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v2 = 0;
    SData/*11:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v2;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v2 = 0;
    IData/*31:0*/ __VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v2;
    __VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v2 = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v3;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v3 = 0;
    SData/*11:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v3;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v3 = 0;
    IData/*31:0*/ __VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v3;
    __VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v3 = 0;
    SData/*11:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v4;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v4 = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v0;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v0 = 0;
    SData/*14:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v0;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v0 = 0;
    IData/*31:0*/ __VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v0;
    __VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v0 = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v1;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v1 = 0;
    SData/*14:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v1;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v1 = 0;
    IData/*31:0*/ __VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v1;
    __VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v1 = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v2;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v2 = 0;
    SData/*14:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v2;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v2 = 0;
    IData/*31:0*/ __VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v2;
    __VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v2 = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v3;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v3 = 0;
    SData/*14:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v3;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v3 = 0;
    IData/*31:0*/ __VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v3;
    __VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v3 = 0;
    SData/*14:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v4;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v4 = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v0;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v0;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v0 = 0;
    IData/*31:0*/ __VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v0;
    __VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v0 = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v1;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v1 = 0;
    CData/*7:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v1;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v1 = 0;
    IData/*31:0*/ __VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v1;
    __VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v1 = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v2;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v2 = 0;
    CData/*7:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v2;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v2 = 0;
    IData/*31:0*/ __VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v2;
    __VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v2 = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v3;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v3 = 0;
    CData/*7:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v3;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v3 = 0;
    IData/*31:0*/ __VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v3;
    __VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v3 = 0;
    CData/*7:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v4;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v4 = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v0;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v0;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v0 = 0;
    IData/*31:0*/ __VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v0;
    __VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v0 = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v1;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v1 = 0;
    SData/*9:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v1;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v1 = 0;
    IData/*31:0*/ __VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v1;
    __VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v1 = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v2;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v2 = 0;
    SData/*9:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v2;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v2 = 0;
    IData/*31:0*/ __VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v2;
    __VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v2 = 0;
    CData/*7:0*/ __VdlyVal__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v3;
    __VdlyVal__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v3 = 0;
    SData/*9:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v3;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v3 = 0;
    IData/*31:0*/ __VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v3;
    __VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v3 = 0;
    SData/*9:0*/ __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v4;
    __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v4 = 0;
    // Body
    __Vdly__m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__wait_cnt 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__wait_cnt;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_valid 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_valid;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_wait_cnt 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_wait_cnt;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_valid 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_valid;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_wait_cnt 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_wait_cnt;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_valid 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_valid;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_wait_cnt 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_wait_cnt;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_valid 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_valid;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_wait_cnt 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_wait_cnt;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_valid 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_valid;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_wait_cnt 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_wait_cnt;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_valid 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_valid;
    __Vdly__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_wait_cnt 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_wait_cnt;
    __VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v0 = 0U;
    __VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v1 = 0U;
    __VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v2 = 0U;
    __VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v3 = 0U;
    __VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v4 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_rst_n)))) {
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_slave_seq__DOT__i = 0x00000010U;
    }
    if (vlSelfRef.m_vlsit_apbdec_tb__DOT__i_rst_n) {
        if (((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_uart) 
             & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable)))) {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_prot = 0U;
        }
        if (((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_i2c) 
             & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable)))) {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_prot = 0U;
        }
        if (((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_spi) 
             & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable)))) {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_prot = 0U;
        }
        if (((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_can) 
             & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable)))) {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_prot = 0U;
        }
        if (((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_pwm) 
             & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable)))) {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_prot = 0U;
        }
        if (((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_gyro) 
             & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable)))) {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_prot = 0U;
        }
    } else {
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_prot = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_prot = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_prot = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_prot = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_prot = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_prot = 0U;
    }
    if (vlSelfRef.m_vlsit_apbdec_tb__DOT__i_rst_n) {
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart = 0U;
        if (((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_uart) 
             & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable)))) {
            __Vdly__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_valid = 1U;
            __Vdly__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_wait_cnt = 0U;
        }
        if ((((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_valid) 
              & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_uart)) 
             & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable))) {
            if (VL_LTS_III(32, 0U, vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_wait_cnt)) {
                __Vdly__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_wait_cnt 
                    = (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_wait_cnt 
                       - (IData)(1U));
            } else {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart = 1U;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_read_data;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart = 0U;
                if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_write) {
                    if ((1U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v0 
                            = (0x000000ffU & vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_wdata);
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v0 
                            = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v0 = 0U;
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v0 
                            = ((0xffffff00U & __VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v0) 
                               | (IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v0));
                        vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem.enqueue(__VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v0, 0x000000ffU, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v0));
                    }
                    if ((2U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v1 
                            = (0x000000ffU & (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_wdata 
                                              >> 8U));
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v1 
                            = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v1 = 0U;
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v1 
                            = ((0xffff00ffU & __VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v1) 
                               | ((IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v1) 
                                  << 8U));
                        vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem.enqueue(__VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v1, 0x0000ff00U, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v1));
                    }
                    if ((4U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v2 
                            = (0x000000ffU & (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_wdata 
                                              >> 0x10U));
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v2 
                            = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v2 = 0U;
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v2 
                            = ((0xff00ffffU & __VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v2) 
                               | ((IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v2) 
                                  << 0x00000010U));
                        vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem.enqueue(__VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v2, 0x00ff0000U, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v2));
                    }
                    if ((8U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v3 
                            = (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_wdata 
                               >> 0x18U);
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v3 
                            = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v3 = 0U;
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v3 
                            = ((0x00ffffffU & __VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v3) 
                               | ((IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v3) 
                                  << 0x00000018U));
                        vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem.enqueue(__VdlyElem__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v3, 0xff000000U, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v3));
                    }
                }
                __Vdly__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_valid = 0U;
            }
        }
    } else {
        __Vdly__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_valid = 0U;
        __Vdly__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_wait_cnt = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_slave_seq__DOT__i = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart = 0U;
        while (VL_GTS_III(32, 0x00000100U, vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_slave_seq__DOT__i)) {
            __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v4 
                = (0x000000ffU & vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_slave_seq__DOT__i);
            vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem.enqueue(0U, 0xffffffffU, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem__v4));
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_slave_seq__DOT__i 
                = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_slave_seq__DOT__i);
        }
    }
    if (vlSelfRef.m_vlsit_apbdec_tb__DOT__i_rst_n) {
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_spi = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_spi = 0U;
        if (((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_spi) 
             & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable)))) {
            __Vdly__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_valid = 1U;
            __Vdly__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_wait_cnt = 0U;
        }
        if ((((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_valid) 
              & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_spi)) 
             & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable))) {
            if (VL_LTS_III(32, 0U, vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_wait_cnt)) {
                __Vdly__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_wait_cnt 
                    = (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_wait_cnt 
                       - (IData)(1U));
            } else {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_spi = 1U;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_spi 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_read_data;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_spi = 0U;
                if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_write) {
                    if ((1U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v0 
                            = (0x000000ffU & vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_wdata);
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v0 
                            = (0x00000fffU & VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v0 = 0U;
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v0 
                            = ((0xffffff00U & __VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v0) 
                               | (IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v0));
                        vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem.enqueue(__VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v0, 0x000000ffU, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v0));
                    }
                    if ((2U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v1 
                            = (0x000000ffU & (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_wdata 
                                              >> 8U));
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v1 
                            = (0x00000fffU & VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v1 = 0U;
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v1 
                            = ((0xffff00ffU & __VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v1) 
                               | ((IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v1) 
                                  << 8U));
                        vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem.enqueue(__VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v1, 0x0000ff00U, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v1));
                    }
                    if ((4U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v2 
                            = (0x000000ffU & (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_wdata 
                                              >> 0x10U));
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v2 
                            = (0x00000fffU & VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v2 = 0U;
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v2 
                            = ((0xff00ffffU & __VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v2) 
                               | ((IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v2) 
                                  << 0x00000010U));
                        vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem.enqueue(__VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v2, 0x00ff0000U, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v2));
                    }
                    if ((8U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v3 
                            = (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_wdata 
                               >> 0x18U);
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v3 
                            = (0x00000fffU & VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v3 = 0U;
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v3 
                            = ((0x00ffffffU & __VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v3) 
                               | ((IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v3) 
                                  << 0x00000018U));
                        vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem.enqueue(__VdlyElem__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v3, 0xff000000U, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v3));
                    }
                }
                __Vdly__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_valid = 0U;
            }
        }
    } else {
        __Vdly__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_valid = 0U;
        __Vdly__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_wait_cnt = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_slave_seq__DOT__i = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_spi = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_spi = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_spi = 0U;
        while (VL_GTS_III(32, 0x00001000U, vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_slave_seq__DOT__i)) {
            __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v4 
                = (0x00000fffU & vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_slave_seq__DOT__i);
            vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem.enqueue(0U, 0xffffffffU, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem__v4));
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_slave_seq__DOT__i 
                = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_slave_seq__DOT__i);
        }
    }
    if (vlSelfRef.m_vlsit_apbdec_tb__DOT__i_rst_n) {
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_can = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_can = 0U;
        if (((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_can) 
             & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable)))) {
            __Vdly__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_valid = 1U;
            __Vdly__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_wait_cnt = 0U;
        }
        if ((((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_valid) 
              & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_can)) 
             & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable))) {
            if (VL_LTS_III(32, 0U, vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_wait_cnt)) {
                __Vdly__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_wait_cnt 
                    = (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_wait_cnt 
                       - (IData)(1U));
            } else {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_can = 1U;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_can 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_read_data;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_can = 0U;
                if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_write) {
                    if ((1U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v0 
                            = (0x000000ffU & vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_wdata);
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v0 
                            = (0x00007fffU & VL_SHIFTR_III(15,15,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v0 = 0U;
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v0 
                            = ((0xffffff00U & __VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v0) 
                               | (IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v0));
                        vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem.enqueue(__VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v0, 0x000000ffU, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v0));
                    }
                    if ((2U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v1 
                            = (0x000000ffU & (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_wdata 
                                              >> 8U));
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v1 
                            = (0x00007fffU & VL_SHIFTR_III(15,15,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v1 = 0U;
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v1 
                            = ((0xffff00ffU & __VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v1) 
                               | ((IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v1) 
                                  << 8U));
                        vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem.enqueue(__VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v1, 0x0000ff00U, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v1));
                    }
                    if ((4U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v2 
                            = (0x000000ffU & (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_wdata 
                                              >> 0x10U));
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v2 
                            = (0x00007fffU & VL_SHIFTR_III(15,15,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v2 = 0U;
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v2 
                            = ((0xff00ffffU & __VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v2) 
                               | ((IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v2) 
                                  << 0x00000010U));
                        vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem.enqueue(__VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v2, 0x00ff0000U, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v2));
                    }
                    if ((8U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v3 
                            = (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_wdata 
                               >> 0x18U);
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v3 
                            = (0x00007fffU & VL_SHIFTR_III(15,15,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v3 = 0U;
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v3 
                            = ((0x00ffffffU & __VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v3) 
                               | ((IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v3) 
                                  << 0x00000018U));
                        vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem.enqueue(__VdlyElem__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v3, 0xff000000U, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v3));
                    }
                }
                __Vdly__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_valid = 0U;
            }
        }
    } else {
        __Vdly__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_valid = 0U;
        __Vdly__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_wait_cnt = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_slave_seq__DOT__i = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_can = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_can = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_can = 0U;
        while (VL_GTS_III(32, 0x00008000U, vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_slave_seq__DOT__i)) {
            __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v4 
                = (0x00007fffU & vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_slave_seq__DOT__i);
            vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem.enqueue(0U, 0xffffffffU, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem__v4));
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_slave_seq__DOT__i 
                = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_slave_seq__DOT__i);
        }
    }
    if (vlSelfRef.m_vlsit_apbdec_tb__DOT__i_rst_n) {
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_pwm = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_pwm = 0U;
        if (((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_pwm) 
             & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable)))) {
            __Vdly__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_valid = 1U;
            __Vdly__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_wait_cnt = 0U;
        }
        if ((((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_valid) 
              & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_pwm)) 
             & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable))) {
            if (VL_LTS_III(32, 0U, vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_wait_cnt)) {
                __Vdly__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_wait_cnt 
                    = (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_wait_cnt 
                       - (IData)(1U));
            } else {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_pwm = 1U;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_pwm 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_read_data;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_pwm = 0U;
                if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_write) {
                    if ((1U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v0 
                            = (0x000000ffU & vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_wdata);
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v0 
                            = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v0 = 0U;
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v0 
                            = ((0xffffff00U & __VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v0) 
                               | (IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v0));
                        vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem.enqueue(__VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v0, 0x000000ffU, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v0));
                    }
                    if ((2U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v1 
                            = (0x000000ffU & (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_wdata 
                                              >> 8U));
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v1 
                            = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v1 = 0U;
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v1 
                            = ((0xffff00ffU & __VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v1) 
                               | ((IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v1) 
                                  << 8U));
                        vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem.enqueue(__VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v1, 0x0000ff00U, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v1));
                    }
                    if ((4U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v2 
                            = (0x000000ffU & (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_wdata 
                                              >> 0x10U));
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v2 
                            = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v2 = 0U;
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v2 
                            = ((0xff00ffffU & __VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v2) 
                               | ((IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v2) 
                                  << 0x00000010U));
                        vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem.enqueue(__VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v2, 0x00ff0000U, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v2));
                    }
                    if ((8U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v3 
                            = (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_wdata 
                               >> 0x18U);
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v3 
                            = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v3 = 0U;
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v3 
                            = ((0x00ffffffU & __VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v3) 
                               | ((IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v3) 
                                  << 0x00000018U));
                        vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem.enqueue(__VdlyElem__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v3, 0xff000000U, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v3));
                    }
                }
                __Vdly__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_valid = 0U;
            }
        }
    } else {
        __Vdly__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_valid = 0U;
        __Vdly__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_wait_cnt = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_slave_seq__DOT__i = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_pwm = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_pwm = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_pwm = 0U;
        while (VL_GTS_III(32, 0x00000100U, vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_slave_seq__DOT__i)) {
            __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v4 
                = (0x000000ffU & vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_slave_seq__DOT__i);
            vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem.enqueue(0U, 0xffffffffU, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem__v4));
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_slave_seq__DOT__i 
                = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_slave_seq__DOT__i);
        }
    }
    if (vlSelfRef.m_vlsit_apbdec_tb__DOT__i_rst_n) {
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_gyro = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_gyro = 0U;
        if (((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_gyro) 
             & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable)))) {
            __Vdly__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_valid = 1U;
            __Vdly__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_wait_cnt = 0U;
        }
        if ((((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_valid) 
              & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_gyro)) 
             & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable))) {
            if (VL_LTS_III(32, 0U, vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_wait_cnt)) {
                __Vdly__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_wait_cnt 
                    = (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_wait_cnt 
                       - (IData)(1U));
            } else {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_gyro = 1U;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_gyro 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_read_data;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_gyro = 0U;
                if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_write) {
                    if ((1U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v0 
                            = (0x000000ffU & vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_wdata);
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v0 
                            = (0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v0 = 0U;
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v0 
                            = ((0xffffff00U & __VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v0) 
                               | (IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v0));
                        vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem.enqueue(__VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v0, 0x000000ffU, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v0));
                    }
                    if ((2U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v1 
                            = (0x000000ffU & (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_wdata 
                                              >> 8U));
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v1 
                            = (0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v1 = 0U;
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v1 
                            = ((0xffff00ffU & __VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v1) 
                               | ((IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v1) 
                                  << 8U));
                        vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem.enqueue(__VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v1, 0x0000ff00U, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v1));
                    }
                    if ((4U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v2 
                            = (0x000000ffU & (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_wdata 
                                              >> 0x10U));
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v2 
                            = (0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v2 = 0U;
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v2 
                            = ((0xff00ffffU & __VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v2) 
                               | ((IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v2) 
                                  << 0x00000010U));
                        vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem.enqueue(__VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v2, 0x00ff0000U, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v2));
                    }
                    if ((8U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v3 
                            = (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_wdata 
                               >> 0x18U);
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v3 
                            = (0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v3 = 0U;
                        __VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v3 
                            = ((0x00ffffffU & __VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v3) 
                               | ((IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v3) 
                                  << 0x00000018U));
                        vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem.enqueue(__VdlyElem__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v3, 0xff000000U, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v3));
                    }
                }
                __Vdly__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_valid = 0U;
            }
        }
    } else {
        __Vdly__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_valid = 0U;
        __Vdly__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_wait_cnt = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_slave_seq__DOT__i = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_gyro = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_gyro = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_gyro = 0U;
        while (VL_GTS_III(32, 0x00000400U, vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_slave_seq__DOT__i)) {
            __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v4 
                = (0x000003ffU & vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_slave_seq__DOT__i);
            vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem.enqueue(0U, 0xffffffffU, (IData)(__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem__v4));
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_slave_seq__DOT__i 
                = ((IData)(1U) + vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_slave_seq__DOT__i);
        }
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_valid 
        = __Vdly__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_valid;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_wait_cnt 
        = __Vdly__m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_wait_cnt;
    if (vlSelfRef.m_vlsit_apbdec_tb__DOT__i_rst_n) {
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_i2c = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_i2c = 0U;
        if (((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_i2c) 
             & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable)))) {
            __Vdly__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_valid = 1U;
            __Vdly__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_wait_cnt = 0U;
        }
        if ((((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_valid) 
              & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_i2c)) 
             & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable))) {
            if (VL_LTS_III(32, 0U, vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_wait_cnt)) {
                __Vdly__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_wait_cnt 
                    = (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_wait_cnt 
                       - (IData)(1U));
            } else {
                vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_i2c = 1U;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_i2c 
                    = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_read_data;
                vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_i2c = 0U;
                if (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_write) {
                    if ((1U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v0 
                            = (0x000000ffU & vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_wdata);
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v0 
                            = (0x0000000fU & VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v0 = 1U;
                    }
                    if ((2U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v1 
                            = (0x000000ffU & (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_wdata 
                                              >> 8U));
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v1 
                            = (0x0000000fU & VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v1 = 1U;
                    }
                    if ((4U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v2 
                            = (0x000000ffU & (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_wdata 
                                              >> 0x10U));
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v2 
                            = (0x0000000fU & VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v2 = 1U;
                    }
                    if ((8U & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_strb))) {
                        __VdlyVal__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v3 
                            = (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_wdata 
                               >> 0x18U);
                        __VdlyDim0__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v3 
                            = (0x0000000fU & VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_addr), 2U));
                        __VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v3 = 1U;
                    }
                }
                __Vdly__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_valid = 0U;
            }
        }
    } else {
        __Vdly__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_valid = 0U;
        __Vdly__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_wait_cnt = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_i2c = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_i2c = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_i2c = 0U;
        __VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v4 = 1U;
    }
    vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem.commit(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_valid 
        = __Vdly__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_valid;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_wait_cnt 
        = __Vdly__m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_wait_cnt;
    vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem.commit(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_valid 
        = __Vdly__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_valid;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_wait_cnt 
        = __Vdly__m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_wait_cnt;
    vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem.commit(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_valid 
        = __Vdly__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_valid;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_wait_cnt 
        = __Vdly__m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_wait_cnt;
    vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem.commit(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem);
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_valid 
        = __Vdly__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_valid;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_wait_cnt 
        = __Vdly__m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_wait_cnt;
    vlSelfRef.__VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem.commit(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem);
    if (vlSelfRef.m_vlsit_apbdec_tb__DOT__i_rst_n) {
        if (((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_uart) 
             & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable)))) {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_write 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pwrite;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_strb 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pstrb;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_wdata 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pwdata;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_addr 
                = (0x000000ffU & vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr);
        }
        if (((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_spi) 
             & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable)))) {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_write 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pwrite;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_strb 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pstrb;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_wdata 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pwdata;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_addr 
                = (0x00000fffU & vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr);
        }
        if (((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_can) 
             & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable)))) {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_write 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pwrite;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_strb 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pstrb;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_wdata 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pwdata;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_addr 
                = (0x00007fffU & vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr);
        }
        if (((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_pwm) 
             & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable)))) {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_write 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pwrite;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_strb 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pstrb;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_wdata 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pwdata;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_addr 
                = (0x000000ffU & vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr);
        }
        if (((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_gyro) 
             & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable)))) {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_write 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pwrite;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_strb 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pstrb;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_wdata 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pwdata;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_addr 
                = (0x000003ffU & vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr);
        }
        if (((IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_i2c) 
             & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable)))) {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_write 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pwrite;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_strb 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pstrb;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_wdata 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pwdata;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_addr 
                = (0x0000000fU & vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr);
        }
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done = 0U;
        if ((0U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state))) {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_psel = 0U;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable = 0U;
        } else if ((1U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state))) {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_psel = 1U;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable = 0U;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pwrite 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pwdata 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pstrb 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pprot 
                = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot;
            __Vdly__m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__wait_cnt = 0U;
        } else if ((2U == (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state))) {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_psel = 1U;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable = 1U;
            if (VL_LTS_III(32, 0U, vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__wait_cnt)) {
                __Vdly__m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__wait_cnt 
                    = (vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__wait_cnt 
                       - (IData)(1U));
            } else if (vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready) {
                if ((1U & (~ (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write)))) {
                    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data 
                        = vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata;
                }
                vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done = 1U;
            }
        } else {
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_psel = 0U;
            vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable = 0U;
        }
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state 
            = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__next_state;
    } else {
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_write = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_strb = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_wdata = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_addr = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_write = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_strb = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_wdata = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_addr = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_write = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_strb = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_wdata = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_addr = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_write = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_strb = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_wdata = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_addr = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_write = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_strb = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_wdata = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_addr = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_write = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_strb = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_wdata = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_addr = 0U;
        __Vdly__m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__wait_cnt = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_psel = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pwrite = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pwdata = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pstrb = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pprot = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state = 0U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_valid 
        = __Vdly__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_valid;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_wait_cnt 
        = __Vdly__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_wait_cnt;
    if (__VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v0) {
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v0] 
            = ((0xffffff00U & vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem
                [__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v0]) 
               | (IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v0));
    }
    if (__VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v1) {
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v1] 
            = ((0xffff00ffU & vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem
                [__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v1]) 
               | ((IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v1) 
                  << 8U));
    }
    if (__VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v2) {
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v2] 
            = ((0xff00ffffU & vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem
                [__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v2]) 
               | ((IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v3) {
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v3] 
            = ((0x00ffffffU & vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem
                [__VdlyDim0__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v3]) 
               | ((IData)(__VdlyVal__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem__v4) {
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[0U] = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[1U] = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[2U] = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[3U] = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[4U] = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[5U] = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[6U] = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[7U] = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[8U] = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[9U] = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[0x0aU] = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[0x0bU] = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[0x0cU] = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[0x0dU] = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[0x0eU] = 0U;
        vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[0x0fU] = 0U;
    }
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_read_data 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem
        [(0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_addr), 2U))];
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
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_read_data 
        = vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem
        [(0x0000000fU & VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_addr), 2U))];
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__wait_cnt 
        = __Vdly__m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__wait_cnt;
    vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_uart 
        = ((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr) 
           & (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_psel));
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
}

void Vm_vlsit_apbdec___024root___timing_resume(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___timing_resume\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h0556a2fd__0.resume(
                                                   "@(posedge m_vlsit_apbdec_tb.i_rst_n)");
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h3dbdaa7b__0.resume(
                                                   "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))");
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hf69376cc__0.resume(
                                                   "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))");
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h5ddb4d39__0.resume(
                                                   "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vm_vlsit_apbdec___024root___timing_commit(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___timing_commit\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h0556a2fd__0.commit(
                                                   "@(posedge m_vlsit_apbdec_tb.i_rst_n)");
    }
    if ((! (0x0000000000000010ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h3dbdaa7b__0.commit(
                                                   "@( ((2'h0 == m_vlsit_apbdec_tb.u_master_bfm.state) & (~ m_vlsit_apbdec_tb.u_master_bfm.req_valid)))");
    }
    if ((! (0x0000000000000020ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hf69376cc__0.commit(
                                                   "@( (~ m_vlsit_apbdec_tb.u_master_bfm.trans_done))");
    }
    if ((! (0x0000000000000040ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h5ddb4d39__0.commit(
                                                   "@( m_vlsit_apbdec_tb.u_master_bfm.trans_done)");
    }
}

void Vm_vlsit_apbdec___024root___eval_triggers__act(Vm_vlsit_apbdec___024root* vlSelf);

bool Vm_vlsit_apbdec___024root___eval_phase__act(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___eval_phase__act\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<7> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vm_vlsit_apbdec___024root___eval_triggers__act(vlSelf);
    Vm_vlsit_apbdec___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vm_vlsit_apbdec___024root___timing_resume(vlSelf);
        Vm_vlsit_apbdec___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vm_vlsit_apbdec___024root___eval_phase__nba(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___eval_phase__nba\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vm_vlsit_apbdec___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vm_vlsit_apbdec___024root___dump_triggers__nba(Vm_vlsit_apbdec___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vm_vlsit_apbdec___024root___dump_triggers__act(Vm_vlsit_apbdec___024root* vlSelf);
#endif  // VL_DEBUG

void Vm_vlsit_apbdec___024root___eval(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___eval\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vm_vlsit_apbdec___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/link/work/real_work/APB-DEC-Generator/output/m_vlsit_apbdec_tb.sv", 24, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vm_vlsit_apbdec___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/link/work/real_work/APB-DEC-Generator/output/m_vlsit_apbdec_tb.sv", 24, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vm_vlsit_apbdec___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vm_vlsit_apbdec___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vm_vlsit_apbdec___024root___eval_debug_assertions(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___eval_debug_assertions\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
