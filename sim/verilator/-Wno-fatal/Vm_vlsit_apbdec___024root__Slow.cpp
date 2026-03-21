// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vm_vlsit_apbdec.h for the primary calling header

#include "Vm_vlsit_apbdec__pch.h"
#include "Vm_vlsit_apbdec__Syms.h"
#include "Vm_vlsit_apbdec___024root.h"

void Vm_vlsit_apbdec___024root___ctor_var_reset(Vm_vlsit_apbdec___024root* vlSelf);

Vm_vlsit_apbdec___024root::Vm_vlsit_apbdec___024root(Vm_vlsit_apbdec__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vm_vlsit_apbdec___024root___ctor_var_reset(this);
}

void Vm_vlsit_apbdec___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vm_vlsit_apbdec___024root::~Vm_vlsit_apbdec___024root() {
}
