// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_single_cycle.h for the primary calling header

#include "Vtb_single_cycle__pch.h"
#include "Vtb_single_cycle__Syms.h"
#include "Vtb_single_cycle___024root.h"

VL_ATTR_COLD void Vtb_single_cycle___024root___eval_initial__TOP(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___eval_initial__TOP\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    vlSelfRef.tb_single_cycle__DOT__clk_i = 0U;
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x79636c65U;
    __Vtemp_1[2U] = 0x6c655f63U;
    __Vtemp_1[3U] = 0x73696e67U;
    __Vtemp_1[4U] = 0x0074625fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_single_cycle__DOT__u_imem_0__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000800U, vlSelfRef.tb_single_cycle__DOT__u_imem_0__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_single_cycle__DOT__u_imem_0__DOT__mem_array[(0x000007ffU 
                                                                  & vlSelfRef.tb_single_cycle__DOT__u_imem_0__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.tb_single_cycle__DOT__u_imem_0__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_single_cycle__DOT__u_imem_0__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 2048, 0, std::string{"imem.hex"}
                 ,  &(vlSelfRef.tb_single_cycle__DOT__u_imem_0__DOT__mem_array)
                 , 0, ~0ULL);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_single_cycle___024root___dump_triggers__stl(Vtb_single_cycle___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_single_cycle___024root___eval_triggers__stl(Vtb_single_cycle___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root___eval_triggers__stl\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_single_cycle___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
