// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vm_vlsit_apbdec.h for the primary calling header

#include "Vm_vlsit_apbdec__pch.h"
#include "Vm_vlsit_apbdec__Syms.h"
#include "Vm_vlsit_apbdec___024root.h"

VL_ATTR_COLD void Vm_vlsit_apbdec___024root___eval_initial__TOP(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___eval_initial__TOP\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vm_vlsit_apbdec___024root___dump_triggers__stl(Vm_vlsit_apbdec___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vm_vlsit_apbdec___024root___eval_triggers__stl(Vm_vlsit_apbdec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root___eval_triggers__stl\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vm_vlsit_apbdec___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
