// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_single_cycle.h for the primary calling header

#include "Vtb_single_cycle__pch.h"
#include "Vtb_single_cycle___024root.h"

VL_ATTR_COLD void Vtb_single_cycle___024root___eval_initial__TOP(Vtb_single_cycle___024root* vlSelf);
VlCoroutine Vtb_single_cycle___024root___eval_initial__TOP__Vtiming__0(Vtb_single_cycle___024root* vlSelf);
VlCoroutine Vtb_single_cycle___024root___eval_initial__TOP__Vtiming__1(Vtb_single_cycle___024root* vlSelf);

void Vtb_single_cycle___024root___eval_initial(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___eval_initial\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_single_cycle___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_single_cycle___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_single_cycle___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_single_cycle___024root___eval_initial__TOP__Vtiming__0(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_single_cycle__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_single_cycle__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_single_cycle__DOT__sys_reset__0__tb_single_cycle__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_single_cycle__DOT__sys_reset__0__tb_single_cycle__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    VL_WRITEF_NX("========================================\nRISC-V RV32I Fibonacci DMEM Test\n========================================\n",0);
    vlSelfRef.tb_single_cycle__DOT__interrupt_i = 0U;
    vlSelfRef.tb_single_cycle__DOT__rst_ni = 0U;
    __Vtask_tb_single_cycle__DOT__sys_reset__0__tb_single_cycle__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_single_cycle__DOT__sys_reset__0__tb_single_cycle__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb4bd37d2__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_single_cycle.clk_i)", 
                                                             "/home/link/work/real_work/MRV-CPU/sim/tests/fibonacci/tb.sv", 
                                                             97);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_single_cycle__DOT__sys_reset__0__tb_single_cycle__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_single_cycle__DOT__sys_reset__0__tb_single_cycle__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VtrigSched_hb4bd3793__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_single_cycle.clk_i)", 
                                                         "/home/link/work/real_work/MRV-CPU/sim/tests/fibonacci/tb.sv", 
                                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_single_cycle__DOT__rst_ni = 1U;
    tb_single_cycle__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x00000050U;
    while (VL_LTS_III(32, 0U, tb_single_cycle__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_hb4bd37d2__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_single_cycle.clk_i)", 
                                                             "/home/link/work/real_work/MRV-CPU/sim/tests/fibonacci/tb.sv", 
                                                             97);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb_single_cycle__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_single_cycle__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VtrigSched_hb4bd3793__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_single_cycle.clk_i)", 
                                                         "/home/link/work/real_work/MRV-CPU/sim/tests/fibonacci/tb.sv", 
                                                         135);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_single_cycle__DOT__interrupt_i = 1U;
    co_await vlSelfRef.__VtrigSched_hb4bd37d2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_single_cycle.clk_i)", 
                                                         "/home/link/work/real_work/MRV-CPU/sim/tests/fibonacci/tb.sv", 
                                                         97);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hb4bd3793__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_single_cycle.clk_i)", 
                                                         "/home/link/work/real_work/MRV-CPU/sim/tests/fibonacci/tb.sv", 
                                                         138);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_single_cycle__DOT__interrupt_i = 0U;
    vlSelfRef.tb_single_cycle__DOT__interrupt_wait = 0U;
    while (((~ (IData)(vlSelfRef.tb_single_cycle__DOT__interrupt_vector_hit)) 
            & VL_GTS_III(32, 0x00000014U, vlSelfRef.tb_single_cycle__DOT__interrupt_wait))) {
        co_await vlSelfRef.__VtrigSched_hb4bd37d2__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_single_cycle.clk_i)", 
                                                             "/home/link/work/real_work/MRV-CPU/sim/tests/fibonacci/tb.sv", 
                                                             97);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_single_cycle__DOT__interrupt_wait 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__interrupt_wait);
    }
    if (vlSelfRef.tb_single_cycle__DOT__interrupt_vector_hit) {
        VL_WRITEF_NX("[%0t] PASS: Interrupt should jump to PARA_INT_VECTOR during run\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_single_cycle__DOT__tests_passed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_passed);
    } else {
        VL_WRITEF_NX("[%0t] FAIL: Interrupt should jump to PARA_INT_VECTOR during run\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_single_cycle__DOT__tests_failed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_failed);
    }
    if (vlSelfRef.tb_single_cycle__DOT__interrupt_entry_captured) {
        VL_WRITEF_NX("[%0t] PASS: Interrupt entry should capture return PC\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_single_cycle__DOT__tests_passed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_passed);
    } else {
        VL_WRITEF_NX("[%0t] FAIL: Interrupt entry should capture return PC\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_single_cycle__DOT__tests_failed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_failed);
    }
    if ((vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[1U] 
         != vlSelfRef.tb_single_cycle__DOT__interrupt_return_pc_expected)) {
        VL_WRITEF_NX("[%0t] FAIL: Interrupt should save interrupted PC into x1 (expected=0x%0x, actual=0x%0x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_single_cycle__DOT__interrupt_return_pc_expected,
                     32,vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[1U]);
        vlSelfRef.tb_single_cycle__DOT__tests_failed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_failed);
    } else {
        VL_WRITEF_NX("[%0t] PASS: Interrupt should save interrupted PC into x1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_single_cycle__DOT__tests_passed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_passed);
    }
    vlSelfRef.tb_single_cycle__DOT__interrupt_wait = 0U;
    while (((vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc 
             != vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[1U]) 
            & VL_GTS_III(32, 0x00000014U, vlSelfRef.tb_single_cycle__DOT__interrupt_wait))) {
        co_await vlSelfRef.__VtrigSched_hb4bd37d2__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_single_cycle.clk_i)", 
                                                             "/home/link/work/real_work/MRV-CPU/sim/tests/fibonacci/tb.sv", 
                                                             97);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_single_cycle__DOT__interrupt_wait 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__interrupt_wait);
    }
    if ((vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc 
         != vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[1U])) {
        VL_WRITEF_NX("[%0t] FAIL: Interrupt handler should return to saved PC\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_single_cycle__DOT__tests_failed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_failed);
    } else {
        VL_WRITEF_NX("[%0t] PASS: Interrupt handler should return to saved PC\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_single_cycle__DOT__tests_passed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_passed);
    }
    vlSelfRef.tb_single_cycle__DOT__timeout = 0U;
    while (((1U != vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x0000001fU]) 
            & VL_GTS_III(32, 0x00000258U, vlSelfRef.tb_single_cycle__DOT__timeout))) {
        co_await vlSelfRef.__VtrigSched_hb4bd37d2__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_single_cycle.clk_i)", 
                                                             "/home/link/work/real_work/MRV-CPU/sim/tests/fibonacci/tb.sv", 
                                                             97);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_single_cycle__DOT__timeout = ((IData)(1U) 
                                                   + vlSelfRef.tb_single_cycle__DOT__timeout);
    }
    if ((1U != vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x0000001fU])) {
        VL_WRITEF_NX("[%0t] FAIL: Program should complete and set x31=1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_single_cycle__DOT__tests_failed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_failed);
    } else {
        VL_WRITEF_NX("[%0t] PASS: Program should complete and set x31=1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_single_cycle__DOT__tests_passed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_passed);
    }
    if ((0U != (3U & vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc))) {
        VL_WRITEF_NX("[%0t] FAIL: PC should stay word-aligned\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_single_cycle__DOT__tests_failed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_failed);
    } else {
        VL_WRITEF_NX("[%0t] PASS: PC should stay word-aligned\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_single_cycle__DOT__tests_passed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_passed);
    }
    if ((4U != vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
         [0xc0U])) {
        VL_WRITEF_NX("[%0t] FAIL: DMEM[0x300] fib[0] overwritten by ISR (expected=0x4, actual=0x%0x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
                     [0xc0U]);
        vlSelfRef.tb_single_cycle__DOT__tests_failed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_failed);
    } else {
        VL_WRITEF_NX("[%0t] PASS: DMEM[0x300] fib[0] overwritten by ISR\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_single_cycle__DOT__tests_passed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_passed);
    }
    if ((1U != vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
         [0xc1U])) {
        VL_WRITEF_NX("[%0t] FAIL: DMEM[0x304] fib[1] (expected=0x1, actual=0x%0x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
                     [0xc1U]);
        vlSelfRef.tb_single_cycle__DOT__tests_failed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_failed);
    } else {
        VL_WRITEF_NX("[%0t] PASS: DMEM[0x304] fib[1]\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_single_cycle__DOT__tests_passed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_passed);
    }
    if ((1U != vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
         [0xc2U])) {
        VL_WRITEF_NX("[%0t] FAIL: DMEM[0x308] fib[2] (expected=0x1, actual=0x%0x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
                     [0xc2U]);
        vlSelfRef.tb_single_cycle__DOT__tests_failed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_failed);
    } else {
        VL_WRITEF_NX("[%0t] PASS: DMEM[0x308] fib[2]\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_single_cycle__DOT__tests_passed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_passed);
    }
    if ((2U != vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
         [0xc3U])) {
        VL_WRITEF_NX("[%0t] FAIL: DMEM[0x30c] fib[3] (expected=0x2, actual=0x%0x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
                     [0xc3U]);
        vlSelfRef.tb_single_cycle__DOT__tests_failed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_failed);
    } else {
        VL_WRITEF_NX("[%0t] PASS: DMEM[0x30c] fib[3]\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_single_cycle__DOT__tests_passed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_passed);
    }
    if ((3U != vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
         [0xc4U])) {
        VL_WRITEF_NX("[%0t] FAIL: DMEM[0x310] fib[4] (expected=0x3, actual=0x%0x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
                     [0xc4U]);
        vlSelfRef.tb_single_cycle__DOT__tests_failed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_failed);
    } else {
        VL_WRITEF_NX("[%0t] PASS: DMEM[0x310] fib[4]\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_single_cycle__DOT__tests_passed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_passed);
    }
    if ((5U != vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
         [0xc5U])) {
        VL_WRITEF_NX("[%0t] FAIL: DMEM[0x314] fib[5] (expected=0x5, actual=0x%0x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
                     [0xc5U]);
        vlSelfRef.tb_single_cycle__DOT__tests_failed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_failed);
    } else {
        VL_WRITEF_NX("[%0t] PASS: DMEM[0x314] fib[5]\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_single_cycle__DOT__tests_passed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_passed);
    }
    if ((8U != vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
         [0xc6U])) {
        VL_WRITEF_NX("[%0t] FAIL: DMEM[0x318] fib[6] (expected=0x8, actual=0x%0x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
                     [0xc6U]);
        vlSelfRef.tb_single_cycle__DOT__tests_failed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_failed);
    } else {
        VL_WRITEF_NX("[%0t] PASS: DMEM[0x318] fib[6]\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_single_cycle__DOT__tests_passed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_passed);
    }
    if ((0x0000000dU != vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
         [0xc7U])) {
        VL_WRITEF_NX("[%0t] FAIL: DMEM[0x31c] fib[7] (expected=0xd, actual=0x%0x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
                     [0xc7U]);
        vlSelfRef.tb_single_cycle__DOT__tests_failed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_failed);
    } else {
        VL_WRITEF_NX("[%0t] PASS: DMEM[0x31c] fib[7]\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_single_cycle__DOT__tests_passed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_passed);
    }
    if ((0x00000015U != vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
         [0xc8U])) {
        VL_WRITEF_NX("[%0t] FAIL: DMEM[0x320] fib[8] (expected=0x15, actual=0x%0x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
                     [0xc8U]);
        vlSelfRef.tb_single_cycle__DOT__tests_failed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_failed);
    } else {
        VL_WRITEF_NX("[%0t] PASS: DMEM[0x320] fib[8]\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_single_cycle__DOT__tests_passed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_passed);
    }
    if ((0x00000022U != vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
         [0xc9U])) {
        VL_WRITEF_NX("[%0t] FAIL: DMEM[0x324] fib[9] (expected=0x22, actual=0x%0x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
                     [0xc9U]);
        vlSelfRef.tb_single_cycle__DOT__tests_failed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_failed);
    } else {
        VL_WRITEF_NX("[%0t] PASS: DMEM[0x324] fib[9]\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_single_cycle__DOT__tests_passed 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__tests_passed);
    }
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "/home/link/work/real_work/MRV-CPU/sim/tests/fibonacci/tb.sv", 
                                         180);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n========================================\nTest Summary\n========================================\nTests Passed: %0d\nTests Failed: %0d\n",0,
                 32,vlSelfRef.tb_single_cycle__DOT__tests_passed,
                 32,vlSelfRef.tb_single_cycle__DOT__tests_failed);
    if ((0U == vlSelfRef.tb_single_cycle__DOT__tests_failed)) {
        VL_WRITEF_NX("ALL TESTS PASSED!\n",0);
    } else {
        VL_WRITEF_NX("SOME TESTS FAILED!\n",0);
    }
    VL_WRITEF_NX("========================================\n",0);
    VL_FINISH_MT("/home/link/work/real_work/MRV-CPU/sim/tests/fibonacci/tb.sv", 189, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vtb_single_cycle___024root___eval_act(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___eval_act\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_single_cycle___024root___nba_sequent__TOP__0(Vtb_single_cycle___024root* vlSelf);

void Vtb_single_cycle___024root___eval_nba(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___eval_nba\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_single_cycle___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

extern const VlWide<32>/*1023:0*/ Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vtb_single_cycle__ConstPool__TABLE_h9db0caf6_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_single_cycle__ConstPool__TABLE_hfac81aa6_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_single_cycle__ConstPool__TABLE_hfcef27fe_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_single_cycle__ConstPool__TABLE_hbdba5ef2_0;

void Vtb_single_cycle___024root___nba_sequent__TOP__0(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___nba_sequent__TOP__0\n"); );
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
    CData/*0:0*/ __Vdly__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_valid;
    __Vdly__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_valid = 0;
    IData/*31:0*/ __Vdly__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_wait_cnt;
    __Vdly__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_wait_cnt = 0;
    IData/*31:0*/ __VdlyVal__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem__v0;
    __VdlyVal__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem__v0;
    __VdlyDim0__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem__v1;
    __VdlyDim0__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem__v1 = 0;
    // Body
    __Vdly__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_valid 
        = vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_valid;
    __Vdly__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_wait_cnt 
        = vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_wait_cnt;
    vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_interrupt_sync_d 
        = ((IData)(vlSelfRef.tb_single_cycle__DOT__rst_ni) 
           && (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_interrupt_sync));
    vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_interrupt_sync 
        = ((IData)(vlSelfRef.tb_single_cycle__DOT__rst_ni) 
           && (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_interrupt_meta));
    vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_interrupt_meta 
        = ((IData)(vlSelfRef.tb_single_cycle__DOT__rst_ni) 
           && (IData)(vlSelfRef.tb_single_cycle__DOT__interrupt_i));
    vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_interrupt 
        = ((~ (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_interrupt_sync_d)) 
           & (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_interrupt_sync));
    if (vlSelfRef.tb_single_cycle__DOT__rst_ni) {
        if ((0x00000100U == vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc)) {
            vlSelfRef.tb_single_cycle__DOT__interrupt_vector_hit = 1U;
        }
        if (((0x00000100U == vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc) 
             & (~ (IData)(vlSelfRef.tb_single_cycle__DOT__interrupt_entry_captured)))) {
            vlSelfRef.tb_single_cycle__DOT__interrupt_entry_captured = 1U;
            vlSelfRef.tb_single_cycle__DOT__interrupt_return_pc_expected 
                = vlSelfRef.tb_single_cycle__DOT__pc_prev;
        }
        if (((~ ((0x18U == (0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                           >> 2U))) 
                 | (8U == (0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                          >> 2U))))) 
             & (0U != (0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                      >> 7U))))) {
            VL_ASSIGNSEL_WI(1024, 32, (0x000003ffU 
                                       & VL_SHIFTL_III(10,32,32, 
                                                       (0x0000001fU 
                                                        & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                           >> 7U)), 5U)), vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array, 
                            ((1U == (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_wb_sel))
                              ? vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__o_data
                              : ((2U == (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_wb_sel))
                                  ? ((IData)(4U) + vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc)
                                  : ((3U == (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_wb_sel))
                                      ? vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc
                                      : vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__reg_data_r))));
        }
        vlSelfRef.tb_single_cycle__DOT__pc_prev = vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc;
        if ((((2U == (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__reg_state)) 
              & (IData)(vlSelfRef.tb_single_cycle__DOT__pready)) 
             & (~ (0U != (0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                         >> 2U)))))) {
            vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__reg_data_r 
                = vlSelfRef.tb_single_cycle__DOT__prdata;
        }
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc 
            = vlSelfRef.tb_single_cycle__DOT__dut__DOT__w_pc_new;
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__reg_state 
            = vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__w_next_state;
    } else {
        vlSelfRef.tb_single_cycle__DOT__interrupt_vector_hit = 0U;
        vlSelfRef.tb_single_cycle__DOT__interrupt_entry_captured = 0U;
        vlSelfRef.tb_single_cycle__DOT__interrupt_return_pc_expected = 0U;
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0U] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[1U] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[2U] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[3U] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[4U] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[5U] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[6U] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[7U] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[8U] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[9U] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x0000000aU] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[0x0000000aU];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x0000000bU] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[0x0000000bU];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x0000000cU] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[0x0000000cU];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x0000000dU] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[0x0000000dU];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x0000000eU] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[0x0000000eU];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x0000000fU] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[0x0000000fU];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x00000010U] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[0x00000010U];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x00000011U] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[0x00000011U];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x00000012U] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[0x00000012U];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x00000013U] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[0x00000013U];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x00000014U] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[0x00000014U];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x00000015U] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[0x00000015U];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x00000016U] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[0x00000016U];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x00000017U] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[0x00000017U];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x00000018U] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[0x00000018U];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x00000019U] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[0x00000019U];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x0000001aU] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[0x0000001aU];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x0000001bU] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[0x0000001bU];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x0000001cU] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[0x0000001cU];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x0000001dU] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[0x0000001dU];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x0000001eU] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[0x0000001eU];
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array[0x0000001fU] 
            = Vtb_single_cycle__ConstPool__CONST_hd6b7ba52_0[0x0000001fU];
        vlSelfRef.tb_single_cycle__DOT__pc_prev = 0x00001000U;
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__reg_data_r = 0U;
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc = 0x00001000U;
        vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__reg_state = 0U;
    }
    if (vlSelfRef.tb_single_cycle__DOT__rst_ni) {
        vlSelfRef.tb_single_cycle__DOT__pready = 0U;
        if (((IData)(vlSelfRef.tb_single_cycle__DOT__psel) 
             & (~ (IData)(vlSelfRef.tb_single_cycle__DOT__penable)))) {
            __Vdly__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_valid = 1U;
            __Vdly__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_wait_cnt = 0U;
        }
        if ((((IData)(vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_valid) 
              & (IData)(vlSelfRef.tb_single_cycle__DOT__psel)) 
             & (IData)(vlSelfRef.tb_single_cycle__DOT__penable))) {
            if (VL_LTS_III(32, 0U, vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_wait_cnt)) {
                __Vdly__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_wait_cnt 
                    = (vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_wait_cnt 
                       - (IData)(1U));
            } else {
                vlSelfRef.tb_single_cycle__DOT__pready = 1U;
                vlSelfRef.tb_single_cycle__DOT__prdata 
                    = vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_read_data;
                if (((IData)(vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_write) 
                     & (0x00000100U > VL_SHIFTR_III(32,32,32, vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_addr, 2U)))) {
                    __VdlyVal__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem__v0 
                        = vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_wdata;
                    __VdlyDim0__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem__v0 
                        = (0x000000ffU & (vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_addr 
                                          >> 2U));
                    vlSelfRef.__VdlyCommitQueuetb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem.enqueue(__VdlyVal__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem__v0, (IData)(__VdlyDim0__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem__v0));
                }
                __Vdly__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_valid = 0U;
            }
        }
    } else {
        __Vdly__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_valid = 0U;
        __Vdly__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_wait_cnt = 0U;
        vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_slave_seq__DOT__i = 0U;
        vlSelfRef.tb_single_cycle__DOT__prdata = 0U;
        vlSelfRef.tb_single_cycle__DOT__pready = 0U;
        while (VL_GTS_III(32, 0x00000100U, vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_slave_seq__DOT__i)) {
            __VdlyDim0__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem__v1 
                = (0x000000ffU & vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_slave_seq__DOT__i);
            vlSelfRef.__VdlyCommitQueuetb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem.enqueue(0U, (IData)(__VdlyDim0__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem__v1));
            vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_slave_seq__DOT__i 
                = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_slave_seq__DOT__i);
        }
    }
    vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_valid 
        = __Vdly__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_valid;
    vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_wait_cnt 
        = __Vdly__tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_wait_cnt;
    vlSelfRef.__VdlyCommitQueuetb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem.commit(vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem);
    if (vlSelfRef.tb_single_cycle__DOT__rst_ni) {
        if (((IData)(vlSelfRef.tb_single_cycle__DOT__psel) 
             & (~ (IData)(vlSelfRef.tb_single_cycle__DOT__penable)))) {
            vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_write 
                = vlSelfRef.tb_single_cycle__DOT__pwrite;
            vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_addr 
                = vlSelfRef.tb_single_cycle__DOT__paddr;
            vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_wdata 
                = vlSelfRef.tb_single_cycle__DOT__pwdata;
        }
        if ((1U == (1U & ((2U & ((~ (0U != (0x0000001fU 
                                            & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                               >> 2U)))) 
                                 << 1U)) | (8U == (0x0000001fU 
                                                   & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                      >> 2U))))))) {
            vlSelfRef.tb_single_cycle__DOT__pwrite = 1U;
            vlSelfRef.tb_single_cycle__DOT__paddr = vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__o_data;
            vlSelfRef.tb_single_cycle__DOT__pwdata 
                = vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__i_data_w;
        } else if ((2U == ((2U & ((~ (0U != (0x0000001fU 
                                             & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                >> 2U)))) 
                                  << 1U)) | (8U == 
                                             (0x0000001fU 
                                              & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                 >> 2U)))))) {
            vlSelfRef.tb_single_cycle__DOT__pwrite = 0U;
            vlSelfRef.tb_single_cycle__DOT__paddr = vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__o_data;
        }
    } else {
        vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_write = 0U;
        vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_addr = 0U;
        vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_wdata = 0U;
        vlSelfRef.tb_single_cycle__DOT__pwrite = 0U;
        vlSelfRef.tb_single_cycle__DOT__paddr = 0U;
        vlSelfRef.tb_single_cycle__DOT__pwdata = 0U;
    }
    vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_read_data 
        = ((0x00000100U > VL_SHIFTR_III(32,32,32, vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_addr, 2U))
            ? vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
           [(0x000000ffU & (vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_addr 
                            >> 2U))] : 0xdeadbeefU);
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

void Vtb_single_cycle___024root___timing_resume(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___timing_resume\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hb4bd37d2__0.resume(
                                                   "@(posedge tb_single_cycle.clk_i)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hb4bd3793__0.resume(
                                                   "@(negedge tb_single_cycle.clk_i)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_single_cycle___024root___timing_commit(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___timing_commit\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hb4bd37d2__0.commit(
                                                   "@(posedge tb_single_cycle.clk_i)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hb4bd3793__0.commit(
                                                   "@(negedge tb_single_cycle.clk_i)");
    }
}

void Vtb_single_cycle___024root___eval_triggers__act(Vtb_single_cycle___024root* vlSelf);

bool Vtb_single_cycle___024root___eval_phase__act(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___eval_phase__act\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_single_cycle___024root___eval_triggers__act(vlSelf);
    Vtb_single_cycle___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_single_cycle___024root___timing_resume(vlSelf);
        Vtb_single_cycle___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_single_cycle___024root___eval_phase__nba(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___eval_phase__nba\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_single_cycle___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_single_cycle___024root___dump_triggers__nba(Vtb_single_cycle___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_single_cycle___024root___dump_triggers__act(Vtb_single_cycle___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_single_cycle___024root___eval(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___eval\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_single_cycle___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/link/work/real_work/MRV-CPU/sim/tests/fibonacci/tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_single_cycle___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/link/work/real_work/MRV-CPU/sim/tests/fibonacci/tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_single_cycle___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_single_cycle___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_single_cycle___024root___eval_debug_assertions(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___eval_debug_assertions\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
