// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_single_cycle__Syms.h"


VL_ATTR_COLD void Vtb_single_cycle___024root__trace_init_sub__TOP__0(Vtb_single_cycle___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root__trace_init_sub__TOP__0\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_single_cycle", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+113,0,"PARA_IMEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"PARA_DMEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"PARA_APB_WAIT_STATES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"PARA_RESET_VECTOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"PARA_INT_VECTOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+110,0,"clk_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_ni",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"interrupt_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"imem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"imem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"paddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"pwdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"prdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"pwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"psel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"penable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"pready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"pc_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+4,0,"interrupt_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+5,0,"tests_passed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+6,0,"tests_failed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+15,0,"pc_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"interrupt_return_pc_expected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"interrupt_vector_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"interrupt_entry_captured",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+116,0,"PARA_RESET_VECTOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"PARA_INT_VECTOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+110,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_interrupt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"o_imem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"i_imem_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"o_paddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"o_pwdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"i_prdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"o_pwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"o_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"o_penable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"i_pready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"o_pc_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"w_pc_plus_four",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"w_pc_new",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"w_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"w_alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"w_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"w_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"w_mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"w_pc_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+27,0,"w_data_r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"w_data_r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"w_br_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"w_mem_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"w_mem_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"w_a_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"w_b_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"w_reg_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"w_alu_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+36,0,"w_imm_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+37,0,"w_wb_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+38,0,"w_biu_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"reg_interrupt_meta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"reg_interrupt_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"reg_interrupt_sync_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"w_interrupt_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"w_alu_in_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"w_alu_in_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_alu_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+43,0,"i_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"i_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"i_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"w_addsub_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"w_addsub_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"w_a_or_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"w_a_and_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_biu_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+110,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"i_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"i_data_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"o_data_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"i_mem_r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"i_mem_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"o_paddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"o_pwdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"i_prdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"o_pwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"o_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"o_penable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"i_pready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"o_biu_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"reg_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+25,0,"reg_data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_brcomp_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+27,0,"i_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"i_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"o_br_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_ctrl_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+21,0,"i_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"i_br_eq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"i_biu_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"i_interrupt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"o_imm_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,0,"o_alu_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+26,0,"o_pc_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+34,0,"o_reg_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"o_b_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"o_a_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"o_mem_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"o_mem_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"o_wb_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+51,0,"w_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+52,0,"w_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+53,0,"w_funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"w_branch_true",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"w_r_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"w_i_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"w_s_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"w_b_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"w_j_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"w_ji_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"w_u_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"w_l_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"w_unused_inst_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_immgen_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+62,0,"i_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,7);
    tracep->declBus(c+36,0,"i_imm_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"o_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_regfile_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+110,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"i_rs_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+64,0,"i_rs_r1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+65,0,"i_rs_r2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"i_data_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"i_reg_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"o_data_r1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"o_data_r2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+66,0,"reg_array",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_apb_slave_bfm_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+118,0,"PARA_DMEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+119,0,"PARA_APB_WAIT_STATES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+110,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"i_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"i_pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"o_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"i_pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"i_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"i_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"o_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"PARA_DMEM_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+121,0,"PARA_DMEM_DEPTH_U32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"apb_wait_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+99,0,"apb_req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"apb_req_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"apb_req_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"apb_req_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"apb_req_word_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"apb_req_word_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+105,0,"apb_addr_in_range",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+106,0,"apb_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("apb_slave_seq", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+107,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_imem_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+113,0,"PARA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"i_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+111,0,"o_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"w_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+112,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_single_cycle___024root__trace_init_top(Vtb_single_cycle___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root__trace_init_top\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_single_cycle___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_single_cycle___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_single_cycle___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_single_cycle___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_single_cycle___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_single_cycle___024root__trace_register(Vtb_single_cycle___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root__trace_register\n"); );
    Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_single_cycle___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_single_cycle___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_single_cycle___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_single_cycle___024root__trace_cleanup, vlSelf);
    }

    VL_ATTR_COLD void Vtb_single_cycle___024root__trace_const_0_sub_0(Vtb_single_cycle___024root* vlSelf, VerilatedVcd::Buffer* bufp);

    VL_ATTR_COLD void Vtb_single_cycle___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root__trace_const_0\n"); );
        // Init
        Vtb_single_cycle___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_single_cycle___024root*>(voidSelf);

        Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

        // Body
        Vtb_single_cycle___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
    }

    VL_ATTR_COLD void Vtb_single_cycle___024root__trace_const_0_sub_0(Vtb_single_cycle___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root__trace_const_0_sub_0\n"); );
        Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
        auto& vlSelfRef = std::ref(*vlSelf).get();
        // Init
        uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);

        // Body
        bufp->fullIData(oldp+113,(0x00002000U),32);
        bufp->fullIData(oldp+114,(0x00000100U),32);
        bufp->fullIData(oldp+115,(0U),32);
        bufp->fullIData(oldp+116,(0x00001000U),32);
        bufp->fullSData(oldp+117,(0x0100U),12);
        bufp->fullIData(oldp+118,(0x00000100U),32);
        bufp->fullIData(oldp+119,(0U),32);
        bufp->fullIData(oldp+120,(8U),32);
        bufp->fullIData(oldp+121,(0x00000100U),32);
    }

    VL_ATTR_COLD void Vtb_single_cycle___024root__trace_full_0_sub_0(Vtb_single_cycle___024root* vlSelf, VerilatedVcd::Buffer* bufp);

    VL_ATTR_COLD void Vtb_single_cycle___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root__trace_full_0\n"); );
        // Init
        Vtb_single_cycle___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_single_cycle___024root*>(voidSelf);

        Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

        // Body
        Vtb_single_cycle___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
    }

    VL_ATTR_COLD void Vtb_single_cycle___024root__trace_full_0_sub_0(Vtb_single_cycle___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_cycle___024root__trace_full_0_sub_0\n"); );
        Vtb_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
        auto& vlSelfRef = std::ref(*vlSelf).get();
        // Init
        uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);

        // Body
        bufp->fullBit(oldp+1,(vlSelfRef.tb_single_cycle__DOT__rst_ni));
        bufp->fullBit(oldp+2,(vlSelfRef.tb_single_cycle__DOT__interrupt_i));
        bufp->fullIData(oldp+3,(vlSelfRef.tb_single_cycle__DOT__timeout),32);
        bufp->fullIData(oldp+4,(vlSelfRef.tb_single_cycle__DOT__interrupt_wait),32);
        bufp->fullIData(oldp+5,(vlSelfRef.tb_single_cycle__DOT__tests_passed),32);
        bufp->fullIData(oldp+6,(vlSelfRef.tb_single_cycle__DOT__tests_failed),32);
        bufp->fullIData(oldp+7,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc),32);
        bufp->fullIData(oldp+8,(vlSelfRef.tb_single_cycle__DOT__paddr),32);
        bufp->fullIData(oldp+9,(vlSelfRef.tb_single_cycle__DOT__pwdata),32);
        bufp->fullIData(oldp+10,(vlSelfRef.tb_single_cycle__DOT__prdata),32);
        bufp->fullBit(oldp+11,(vlSelfRef.tb_single_cycle__DOT__pwrite));
        bufp->fullBit(oldp+12,(vlSelfRef.tb_single_cycle__DOT__psel));
        bufp->fullBit(oldp+13,(vlSelfRef.tb_single_cycle__DOT__penable));
        bufp->fullBit(oldp+14,(vlSelfRef.tb_single_cycle__DOT__pready));
        bufp->fullIData(oldp+15,(vlSelfRef.tb_single_cycle__DOT__pc_prev),32);
        bufp->fullIData(oldp+16,(vlSelfRef.tb_single_cycle__DOT__interrupt_return_pc_expected),32);
        bufp->fullBit(oldp+17,(vlSelfRef.tb_single_cycle__DOT__interrupt_vector_hit));
        bufp->fullBit(oldp+18,(vlSelfRef.tb_single_cycle__DOT__interrupt_entry_captured));
        bufp->fullIData(oldp+19,(((IData)(4U) + vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc)),32);
        bufp->fullIData(oldp+20,(((2U & (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_pc_sel))
                                   ? vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc
                                   : ((1U & (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_pc_sel))
                                       ? vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__o_data
                                       : ((IData)(4U) 
                                          + vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc)))),32);
        bufp->fullIData(oldp+21,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst),32);
        bufp->fullIData(oldp+22,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__o_data),32);
        bufp->fullIData(oldp+23,(((1U == (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_wb_sel))
                                   ? vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__o_data
                                   : ((2U == (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_wb_sel))
                                       ? ((IData)(4U) 
                                          + vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc)
                                       : ((3U == (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_wb_sel))
                                           ? vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc
                                           : vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__reg_data_r)))),32);
        bufp->fullIData(oldp+24,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_immgen_0__DOT__o_imm),32);
        bufp->fullIData(oldp+25,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__reg_data_r),32);
        bufp->fullCData(oldp+26,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_pc_sel),2);
        bufp->fullIData(oldp+27,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_brcomp_0__DOT__i_rs1_data),32);
        bufp->fullIData(oldp+28,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__i_data_w),32);
        bufp->fullBit(oldp+29,((1U & (~ (0U != (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_brcomp_0__DOT__i_rs1_data 
                                                ^ vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__i_data_w))))));
        bufp->fullBit(oldp+30,((8U == (0x0000001fU 
                                       & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                          >> 2U)))));
        bufp->fullBit(oldp+31,((1U & (~ (0U != (0x0000001fU 
                                                & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                   >> 2U)))))));
        bufp->fullBit(oldp+32,(((0x18U == (0x0000001fU 
                                           & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                              >> 2U))) 
                                | ((0x1bU == (0x0000001fU 
                                              & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                 >> 2U))) 
                                   | (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__w_u_type)))));
        bufp->fullBit(oldp+33,((0x0cU != (0x0000001fU 
                                          & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                             >> 2U)))));
        bufp->fullBit(oldp+34,((1U & (~ ((0x18U == 
                                          (0x0000001fU 
                                           & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                              >> 2U))) 
                                         | (8U == (0x0000001fU 
                                                   & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                      >> 2U))))))));
        bufp->fullCData(oldp+35,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_sel),4);
        bufp->fullCData(oldp+36,(((((0x1bU == (0x0000001fU 
                                               & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                  >> 2U))) 
                                    << 4U) | (((IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__w_u_type) 
                                               << 3U) 
                                              | ((0x18U 
                                                  == 
                                                  (0x0000001fU 
                                                   & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                      >> 2U))) 
                                                 << 2U))) 
                                  | (((8U == (0x0000001fU 
                                              & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                 >> 2U))) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))),5);
        bufp->fullCData(oldp+37,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__o_wb_sel),2);
        bufp->fullBit(oldp+38,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__w_biu_stall));
        bufp->fullBit(oldp+39,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_interrupt_meta));
        bufp->fullBit(oldp+40,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_interrupt_sync));
        bufp->fullBit(oldp+41,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_interrupt_sync_d));
        bufp->fullBit(oldp+42,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_interrupt));
        bufp->fullIData(oldp+43,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_a),32);
        bufp->fullIData(oldp+44,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_b),32);
        bufp->fullIData(oldp+45,((vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_a 
                                  + ((8U & (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_sel))
                                      ? ((IData)(1U) 
                                         + (~ vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_b))
                                      : vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_b))),32);
        bufp->fullIData(oldp+46,(((8U & (IData)(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_sel))
                                   ? ((IData)(1U) + 
                                      (~ vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_b))
                                   : vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_b)),32);
        bufp->fullIData(oldp+47,((vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_a 
                                  | vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_b)),32);
        bufp->fullIData(oldp+48,((vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_a 
                                  & vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_alu_0__DOT__i_in_b)),32);
        bufp->fullCData(oldp+49,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__reg_state),2);
        bufp->fullCData(oldp+50,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__w_next_state),2);
        bufp->fullCData(oldp+51,((0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                 >> 2U))),5);
        bufp->fullCData(oldp+52,((7U & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                        >> 0x0000000cU))),3);
        bufp->fullBit(oldp+53,((1U & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                      >> 0x0000001eU))));
        bufp->fullBit(oldp+54,((IData)(((0U == (0x00007000U 
                                                & vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst)) 
                                        & (~ (0U != 
                                              (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_brcomp_0__DOT__i_rs1_data 
                                               ^ vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_biu_0__DOT__i_data_w)))))));
        bufp->fullBit(oldp+55,((0x0cU == (0x0000001fU 
                                          & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                             >> 2U)))));
        bufp->fullBit(oldp+56,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__w_i_type));
        bufp->fullBit(oldp+57,((0x18U == (0x0000001fU 
                                          & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                             >> 2U)))));
        bufp->fullBit(oldp+58,((0x1bU == (0x0000001fU 
                                          & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                             >> 2U)))));
        bufp->fullBit(oldp+59,((0x19U == (0x0000001fU 
                                          & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                             >> 2U)))));
        bufp->fullBit(oldp+60,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__w_u_type));
        bufp->fullIData(oldp+61,(((0x00400000U & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                  >> 9U)) 
                                  | ((0x003fff80U & 
                                      (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                       >> 8U)) | ((0x0000007cU 
                                                   & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                      >> 5U)) 
                                                  | (3U 
                                                     & vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst))))),23);
        bufp->fullIData(oldp+62,((vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                  >> 7U)),25);
        bufp->fullCData(oldp+63,((0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                 >> 7U))),5);
        bufp->fullCData(oldp+64,((0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                 >> 0x0000000fU))),5);
        bufp->fullCData(oldp+65,((0x0000001fU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_ctrl_0__DOT__i_inst 
                                                 >> 0x00000014U))),5);
        bufp->fullWData(oldp+66,(vlSelfRef.tb_single_cycle__DOT__dut__DOT__u_regfile_0__DOT__reg_array),1024);
        bufp->fullIData(oldp+98,(vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_wait_cnt),32);
        bufp->fullBit(oldp+99,(vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_valid));
        bufp->fullBit(oldp+100,(vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_write));
        bufp->fullIData(oldp+101,(vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_addr),32);
        bufp->fullIData(oldp+102,(vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_wdata),32);
        bufp->fullIData(oldp+103,(VL_SHIFTR_III(32,32,32, vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_addr, 2U)),32);
        bufp->fullCData(oldp+104,((0x000000ffU & (vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_addr 
                                                  >> 2U))),8);
        bufp->fullBit(oldp+105,((0x00000100U > VL_SHIFTR_III(32,32,32, vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_addr, 2U))));
        bufp->fullIData(oldp+106,(((0x00000100U > VL_SHIFTR_III(32,32,32, vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_addr, 2U))
                                    ? vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__dmem
                                   [(0x000000ffU & 
                                     (vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_req_addr 
                                      >> 2U))] : 0xdeadbeefU)),32);
        bufp->fullIData(oldp+107,(vlSelfRef.tb_single_cycle__DOT__u_apb_slave_bfm_0__DOT__apb_slave_seq__DOT__i),32);
        bufp->fullSData(oldp+108,((0x00001fffU & vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc)),13);
        bufp->fullSData(oldp+109,((0x000007ffU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc 
                                                  >> 2U))),11);
        bufp->fullBit(oldp+110,(vlSelfRef.tb_single_cycle__DOT__clk_i));
        bufp->fullIData(oldp+111,(vlSelfRef.tb_single_cycle__DOT__u_imem_0__DOT__mem_array
                                  [(0x000007ffU & (vlSelfRef.tb_single_cycle__DOT__dut__DOT__reg_pc 
                                                   >> 2U))]),32);
        bufp->fullIData(oldp+112,(vlSelfRef.tb_single_cycle__DOT__u_imem_0__DOT__unnamedblk1__DOT__i),32);
    }
