// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vm_vlsit_apbdec__Syms.h"


void Vm_vlsit_apbdec___024root__trace_chg_0_sub_0(Vm_vlsit_apbdec___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vm_vlsit_apbdec___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root__trace_chg_0\n"); );
    // Init
    Vm_vlsit_apbdec___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vm_vlsit_apbdec___024root*>(voidSelf);

    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;

    // Body
    Vm_vlsit_apbdec___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vm_vlsit_apbdec___024root__trace_chg_0_sub_0(Vm_vlsit_apbdec___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root__trace_chg_0_sub_0\n"); );
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);

    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr),24);
        bufp->chgIData(oldp+1,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata),32);
        bufp->chgBit(oldp+2,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write));
        bufp->chgCData(oldp+3,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb),4);
        bufp->chgCData(oldp+4,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot),3);
        bufp->chgBit(oldp+5,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid));
        bufp->chgIData(oldp+6,(vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata),32);
        bufp->chgIData(oldp+7,(vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num),32);
        bufp->chgIData(oldp+8,(vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass),32);
        bufp->chgIData(oldp+9,(vlSelfRef.m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+10,(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr),24);
        bufp->chgIData(oldp+11,(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pwdata),32);
        bufp->chgIData(oldp+12,(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_prdata),32);
        bufp->chgBit(oldp+13,(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pwrite));
        bufp->chgBit(oldp+14,(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_psel));
        bufp->chgBit(oldp+15,(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_penable));
        bufp->chgBit(oldp+16,(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pready));
        bufp->chgBit(oldp+17,(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pslverr));
        bufp->chgCData(oldp+18,(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pstrb),4);
        bufp->chgCData(oldp+19,(vlSelfRef.m_vlsit_apbdec_tb__DOT__m_pprot),3);
        bufp->chgBit(oldp+20,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_uart));
        bufp->chgCData(oldp+21,((0x000000ffU & vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)),8);
        bufp->chgBit(oldp+22,(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_uart));
        bufp->chgBit(oldp+23,(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_uart));
        bufp->chgIData(oldp+24,(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_uart),32);
        bufp->chgBit(oldp+25,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_i2c));
        bufp->chgCData(oldp+26,((0x0000000fU & vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)),4);
        bufp->chgBit(oldp+27,(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_i2c));
        bufp->chgBit(oldp+28,(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_i2c));
        bufp->chgIData(oldp+29,(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_i2c),32);
        bufp->chgBit(oldp+30,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_spi));
        bufp->chgSData(oldp+31,((0x00000fffU & vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)),12);
        bufp->chgBit(oldp+32,(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_spi));
        bufp->chgBit(oldp+33,(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_spi));
        bufp->chgIData(oldp+34,(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_spi),32);
        bufp->chgBit(oldp+35,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_can));
        bufp->chgSData(oldp+36,((0x00007fffU & vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)),15);
        bufp->chgBit(oldp+37,(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_can));
        bufp->chgBit(oldp+38,(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_can));
        bufp->chgIData(oldp+39,(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_can),32);
        bufp->chgBit(oldp+40,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_pwm));
        bufp->chgBit(oldp+41,(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_pwm));
        bufp->chgBit(oldp+42,(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_pwm));
        bufp->chgIData(oldp+43,(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_pwm),32);
        bufp->chgBit(oldp+44,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_gyro));
        bufp->chgSData(oldp+45,((0x000003ffU & vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)),10);
        bufp->chgBit(oldp+46,(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pready_gyro));
        bufp->chgBit(oldp+47,(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_pslverr_gyro));
        bufp->chgIData(oldp+48,(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_prdata_gyro),32);
        bufp->chgIData(oldp+49,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_wait_cnt),32);
        bufp->chgBit(oldp+50,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_valid));
        bufp->chgBit(oldp+51,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_write));
        bufp->chgSData(oldp+52,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_addr),15);
        bufp->chgIData(oldp+53,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_wdata),32);
        bufp->chgCData(oldp+54,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_strb),4);
        bufp->chgCData(oldp+55,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_prot),3);
        bufp->chgSData(oldp+56,((0x00007fffU & VL_SHIFTR_III(15,15,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_addr), 2U))),15);
        bufp->chgIData(oldp+57,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem
                                [(0x00007fffU & VL_SHIFTR_III(15,15,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_addr), 2U))]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_slave_seq__DOT__i),32);
        bufp->chgIData(oldp+59,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_wait_cnt),32);
        bufp->chgBit(oldp+60,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_valid));
        bufp->chgBit(oldp+61,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_write));
        bufp->chgSData(oldp+62,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_addr),10);
        bufp->chgIData(oldp+63,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_wdata),32);
        bufp->chgCData(oldp+64,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_strb),4);
        bufp->chgCData(oldp+65,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_prot),3);
        bufp->chgSData(oldp+66,((0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_addr), 2U))),10);
        bufp->chgIData(oldp+67,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem
                                [(0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_addr), 2U))]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_slave_seq__DOT__i),32);
        bufp->chgIData(oldp+69,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[0]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[1]),32);
        bufp->chgIData(oldp+71,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[2]),32);
        bufp->chgIData(oldp+72,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[3]),32);
        bufp->chgIData(oldp+73,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[4]),32);
        bufp->chgIData(oldp+74,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[5]),32);
        bufp->chgIData(oldp+75,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[6]),32);
        bufp->chgIData(oldp+76,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[7]),32);
        bufp->chgIData(oldp+77,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[8]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[9]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[10]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[11]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[12]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[13]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[14]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem[15]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_wait_cnt),32);
        bufp->chgBit(oldp+86,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_valid));
        bufp->chgBit(oldp+87,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_write));
        bufp->chgCData(oldp+88,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_addr),4);
        bufp->chgIData(oldp+89,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_wdata),32);
        bufp->chgCData(oldp+90,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_strb),4);
        bufp->chgCData(oldp+91,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_prot),3);
        bufp->chgCData(oldp+92,((0x0000000fU & VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_addr), 2U))),4);
        bufp->chgIData(oldp+93,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem
                                [(0x0000000fU & VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_addr), 2U))]),32);
        bufp->chgIData(oldp+94,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_slave_seq__DOT__i),32);
        bufp->chgBit(oldp+95,((0x000000ffU >= vlSelfRef.m_vlsit_apbdec_tb__DOT__m_paddr)));
        bufp->chgBit(oldp+96,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_i2c_sel));
        bufp->chgBit(oldp+97,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_spi_sel));
        bufp->chgBit(oldp+98,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_can_sel));
        bufp->chgBit(oldp+99,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_pwm_sel));
        bufp->chgBit(oldp+100,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_gyro_sel));
        bufp->chgCData(oldp+101,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state),2);
        bufp->chgBit(oldp+102,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done));
        bufp->chgIData(oldp+103,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data),32);
        bufp->chgIData(oldp+104,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__wait_cnt),32);
        bufp->chgIData(oldp+105,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_wait_cnt),32);
        bufp->chgBit(oldp+106,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_valid));
        bufp->chgBit(oldp+107,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_write));
        bufp->chgCData(oldp+108,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_addr),8);
        bufp->chgIData(oldp+109,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_wdata),32);
        bufp->chgCData(oldp+110,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_strb),4);
        bufp->chgCData(oldp+111,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_prot),3);
        bufp->chgCData(oldp+112,((0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_addr), 2U))),8);
        bufp->chgIData(oldp+113,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem
                                 [(0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_addr), 2U))]),32);
        bufp->chgIData(oldp+114,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_slave_seq__DOT__i),32);
        bufp->chgIData(oldp+115,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_wait_cnt),32);
        bufp->chgBit(oldp+116,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_valid));
        bufp->chgBit(oldp+117,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_write));
        bufp->chgSData(oldp+118,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_addr),12);
        bufp->chgIData(oldp+119,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_wdata),32);
        bufp->chgCData(oldp+120,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_strb),4);
        bufp->chgCData(oldp+121,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_prot),3);
        bufp->chgSData(oldp+122,((0x00000fffU & VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_addr), 2U))),12);
        bufp->chgIData(oldp+123,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem
                                 [(0x00000fffU & VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_addr), 2U))]),32);
        bufp->chgIData(oldp+124,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_slave_seq__DOT__i),32);
        bufp->chgIData(oldp+125,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_wait_cnt),32);
        bufp->chgBit(oldp+126,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_valid));
        bufp->chgBit(oldp+127,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_write));
        bufp->chgCData(oldp+128,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_addr),8);
        bufp->chgIData(oldp+129,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_wdata),32);
        bufp->chgCData(oldp+130,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_strb),4);
        bufp->chgCData(oldp+131,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_prot),3);
        bufp->chgCData(oldp+132,((0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_addr), 2U))),8);
        bufp->chgIData(oldp+133,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem
                                 [(0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_addr), 2U))]),32);
        bufp->chgIData(oldp+134,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_slave_seq__DOT__i),32);
    }
    bufp->chgBit(oldp+135,(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_clk));
    bufp->chgBit(oldp+136,(vlSelfRef.m_vlsit_apbdec_tb__DOT__i_rst_n));
    bufp->chgCData(oldp+137,(vlSelfRef.m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__next_state),2);
}

void Vm_vlsit_apbdec___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_vlsit_apbdec___024root__trace_cleanup\n"); );
    // Init
    Vm_vlsit_apbdec___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vm_vlsit_apbdec___024root*>(voidSelf);

    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;

    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
