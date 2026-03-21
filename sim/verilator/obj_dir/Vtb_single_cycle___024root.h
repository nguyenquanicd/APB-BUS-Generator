// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_single_cycle.h for the primary calling header

#ifndef VERILATED_VTB_SINGLE_CYCLE___024ROOT_H_
#define VERILATED_VTB_SINGLE_CYCLE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_single_cycle__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_single_cycle___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_single_cycle__DOT__clk_i;
    CData/*0:0*/ tb_single_cycle__DOT__rst_ni;
    CData/*0:0*/ tb_single_cycle__DOT__interrupt_i;
    CData/*0:0*/ tb_single_cycle__DOT__pwrite;
    CData/*0:0*/ tb_single_cycle__DOT__psel;
    CData/*0:0*/ tb_single_cycle__DOT__penable;
    CData/*0:0*/ tb_single_cycle__DOT__pready;
    CData/*0:0*/ tb_single_cycle__DOT__interrupt_vector_hit;
    CData/*0:0*/ tb_single_cycle__DOT__interrupt_entry_captured;
    CData/*0:0*/ tb_single_cycle__DOT__dut__DOT__w_biu_stall;
    CData/*0:0*/ tb_single_cycle__DOT__dut__DOT__reg_interrupt_meta;
    CData/*0:0*/ tb_single_cycle__DOT__dut__DOT__reg_interrupt_sync;
    CData/*0:0*/ tb_single_cycle__DOT__dut__DOT__reg_interrupt_sync_d;
    CData/*0:0*/ tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_interrupt;
    CData/*1:0*/ tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_pc_sel;
    CData/*1:0*/ tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_wb_sel;
    CData/*0:0*/ tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__w_i_type;
    CData/*0:0*/ tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__w_u_type;
    CData/*3:0*/ tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_sel;
    CData/*1:0*/ tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__reg_state;
    CData/*1:0*/ tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__w_next_state;
    CData/*0:0*/ tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_valid;
    CData/*0:0*/ tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_write;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_single_cycle__DOT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_single_cycle__DOT__rst_ni__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_single_cycle__DOT__paddr;
    IData/*31:0*/ tb_single_cycle__DOT__pwdata;
    IData/*31:0*/ tb_single_cycle__DOT__prdata;
    IData/*31:0*/ tb_single_cycle__DOT__timeout;
    IData/*31:0*/ tb_single_cycle__DOT__interrupt_wait;
    IData/*31:0*/ tb_single_cycle__DOT__tests_passed;
    IData/*31:0*/ tb_single_cycle__DOT__tests_failed;
    IData/*31:0*/ tb_single_cycle__DOT__pc_prev;
    IData/*31:0*/ tb_single_cycle__DOT__interrupt_return_pc_expected;
    IData/*31:0*/ tb_single_cycle__DOT__dut__DOT__reg_pc;
    IData/*31:0*/ tb_single_cycle__DOT__dut__DOT__w_pc_new;
    VlWide<32>/*1023:0*/ tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array;
    IData/*31:0*/ tb_single_cycle__DOT__dut__DOT__u_brcomp_0__DOT__i_rs1_data;
    IData/*31:0*/ tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst;
    IData/*31:0*/ tb_single_cycle__DOT__dut__DOT__u_immgen_0__DOT__o_imm;
    IData/*31:0*/ tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_a;
    IData/*31:0*/ tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_b;
    IData/*31:0*/ tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__o_data;
    IData/*31:0*/ tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__i_data_w;
    IData/*31:0*/ tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__reg_data_r;
    IData/*31:0*/ tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_wait_cnt;
    IData/*31:0*/ tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_addr;
    IData/*31:0*/ tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_wdata;
    IData/*31:0*/ tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_read_data;
    IData/*31:0*/ tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_slave_seq__DOT__i;
    IData/*31:0*/ tb_single_cycle__DOT__u_imem_0__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem;
    VlUnpacked<IData/*31:0*/, 2048> tb_single_cycle__DOT__u_imem_0__DOT__mem_array;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 256>, false, IData/*31:0*/, 1> __VdlyCommitQueuetb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hb4bd37d2__0;
    VlTriggerScheduler __VtrigSched_hb4bd3793__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_single_cycle__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_single_cycle___024root(Vtb_single_cycle__Syms* symsp, const char* v__name);
    ~Vtb_single_cycle___024root();
    VL_UNCOPYABLE(Vtb_single_cycle___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
