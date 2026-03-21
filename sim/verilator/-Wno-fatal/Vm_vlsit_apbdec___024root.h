// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vm_vlsit_apbdec.h for the primary calling header

#ifndef VERILATED_VM_VLSIT_APBDEC___024ROOT_H_
#define VERILATED_VM_VLSIT_APBDEC___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vm_vlsit_apbdec__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vm_vlsit_apbdec___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__i_clk;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__i_rst_n;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__m_pwrite;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__m_psel;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__m_penable;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__m_pready;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__m_pslverr;
        CData/*3:0*/ m_vlsit_apbdec_tb__DOT__m_pstrb;
        CData/*2:0*/ m_vlsit_apbdec_tb__DOT__m_pprot;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__i_pready_uart;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__i_pslverr_uart;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__i_pready_i2c;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__i_pslverr_i2c;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__i_pready_spi;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__i_pslverr_spi;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__i_pready_can;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__i_pslverr_can;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__i_pready_pwm;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__i_pslverr_pwm;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__i_pready_gyro;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__i_pslverr_gyro;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_uart;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_i2c;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_spi;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_can;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_pwm;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__o_psel_gyro;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_i2c_sel;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_spi_sel;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_can_sel;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_pwm_sel;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_m_vlsit_apbdec__DOT__w_slave_gyro_sel;
        CData/*1:0*/ m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__state;
        CData/*1:0*/ m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__next_state;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_write;
        CData/*3:0*/ m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_strb;
        CData/*2:0*/ m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_prot;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_valid;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_valid;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_write;
        CData/*7:0*/ m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_addr;
        CData/*3:0*/ m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_strb;
        CData/*2:0*/ m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_prot;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_valid;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_write;
        CData/*3:0*/ m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_addr;
        CData/*3:0*/ m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_strb;
        CData/*2:0*/ m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_prot;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_valid;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_write;
        CData/*3:0*/ m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_strb;
        CData/*2:0*/ m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_prot;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_valid;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_write;
        CData/*3:0*/ m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_strb;
        CData/*2:0*/ m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_prot;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_valid;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_write;
        CData/*7:0*/ m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_addr;
        CData/*3:0*/ m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_strb;
        CData/*2:0*/ m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_prot;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_valid;
        CData/*0:0*/ m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_write;
    };
    struct {
        CData/*3:0*/ m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_strb;
        CData/*2:0*/ m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_prot;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__m_vlsit_apbdec_tb__DOT__i_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__m_vlsit_apbdec_tb__DOT__i_rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr_hea09e25c__1;
        CData/*0:0*/ __Vtrigprevexpr_h6ea4a6cb__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__trans_done__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_addr;
        SData/*14:0*/ m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_addr;
        SData/*9:0*/ m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_addr;
        IData/*23:0*/ m_vlsit_apbdec_tb__DOT__m_paddr;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__m_pwdata;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__m_prdata;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__i_prdata_uart;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__i_prdata_i2c;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__i_prdata_spi;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__i_prdata_can;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__i_prdata_pwm;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__i_prdata_gyro;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__v_rdata;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_num;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_pass;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__unnamedblk1__DOT__test_fail;
        IData/*23:0*/ m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_addr;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__req_wdata;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__read_data;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_master_bfm__DOT__wait_cnt;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_wait_cnt;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_req_wdata;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_read_data;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__apb_slave_seq__DOT__i;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_wait_cnt;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_req_wdata;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_read_data;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__apb_slave_seq__DOT__i;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_wait_cnt;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_req_wdata;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_read_data;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__apb_slave_seq__DOT__i;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_wait_cnt;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_req_wdata;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_read_data;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__apb_slave_seq__DOT__i;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_wait_cnt;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_req_wdata;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_read_data;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__apb_slave_seq__DOT__i;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_wait_cnt;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_req_wdata;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_read_data;
        IData/*31:0*/ m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__apb_slave_seq__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 256> m_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem;
        VlUnpacked<IData/*31:0*/, 16> m_vlsit_apbdec_tb__DOT__u_i2c_slave_bfm__DOT__dmem;
        VlUnpacked<IData/*31:0*/, 4096> m_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem;
        VlUnpacked<IData/*31:0*/, 32768> m_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem;
        VlUnpacked<IData/*31:0*/, 256> m_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem;
        VlUnpacked<IData/*31:0*/, 1024> m_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 256>, true, IData/*31:0*/, 1> __VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_uart_slave_bfm__DOT__dmem;
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 4096>, true, IData/*31:0*/, 1> __VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_spi_slave_bfm__DOT__dmem;
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 32768>, true, IData/*31:0*/, 1> __VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_can_slave_bfm__DOT__dmem;
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 256>, true, IData/*31:0*/, 1> __VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_pwm_slave_bfm__DOT__dmem;
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 1024>, true, IData/*31:0*/, 1> __VdlyCommitQueuem_vlsit_apbdec_tb__DOT__u_gyro_slave_bfm__DOT__dmem;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h0556a2fd__0;
    VlTriggerScheduler __VtrigSched_h3dbdaa7b__0;
    VlTriggerScheduler __VtrigSched_hf69376cc__0;
    VlTriggerScheduler __VtrigSched_h5ddb4d39__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<7> __VactTriggered;
    VlTriggerVec<7> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vm_vlsit_apbdec__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vm_vlsit_apbdec___024root(Vm_vlsit_apbdec__Syms* symsp, const char* v__name);
    ~Vm_vlsit_apbdec___024root();
    VL_UNCOPYABLE(Vm_vlsit_apbdec___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
