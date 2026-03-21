// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_single_cycle.h for the primary calling header

#include "Vtb_single_cycle__pch.h"
#include "Vtb_single_cycle__Syms.h"
#include "Vtb_single_cycle___024root.h"

void Vtb_single_cycle___024root___ctor_var_reset(Vtb_single_cycle___024root* vlSelf);

Vtb_single_cycle___024root::Vtb_single_cycle___024root(Vtb_single_cycle__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_single_cycle___024root___ctor_var_reset(this);
}

void Vtb_single_cycle___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_single_cycle___024root::~Vtb_single_cycle___024root() {
}
