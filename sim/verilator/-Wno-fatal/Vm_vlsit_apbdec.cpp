// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vm_vlsit_apbdec__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vm_vlsit_apbdec::Vm_vlsit_apbdec(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vm_vlsit_apbdec__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vm_vlsit_apbdec::Vm_vlsit_apbdec(const char* _vcname__)
    : Vm_vlsit_apbdec(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vm_vlsit_apbdec::~Vm_vlsit_apbdec() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vm_vlsit_apbdec___024root___eval_debug_assertions(Vm_vlsit_apbdec___024root* vlSelf);
#endif  // VL_DEBUG
void Vm_vlsit_apbdec___024root___eval_static(Vm_vlsit_apbdec___024root* vlSelf);
void Vm_vlsit_apbdec___024root___eval_initial(Vm_vlsit_apbdec___024root* vlSelf);
void Vm_vlsit_apbdec___024root___eval_settle(Vm_vlsit_apbdec___024root* vlSelf);
void Vm_vlsit_apbdec___024root___eval(Vm_vlsit_apbdec___024root* vlSelf);

void Vm_vlsit_apbdec::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vm_vlsit_apbdec::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vm_vlsit_apbdec___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vm_vlsit_apbdec___024root___eval_static(&(vlSymsp->TOP));
        Vm_vlsit_apbdec___024root___eval_initial(&(vlSymsp->TOP));
        Vm_vlsit_apbdec___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vm_vlsit_apbdec___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vm_vlsit_apbdec::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vm_vlsit_apbdec::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vm_vlsit_apbdec::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vm_vlsit_apbdec::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vm_vlsit_apbdec::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vm_vlsit_apbdec___024root___eval_final(Vm_vlsit_apbdec___024root* vlSelf);

VL_ATTR_COLD void Vm_vlsit_apbdec::final() {
    Vm_vlsit_apbdec___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vm_vlsit_apbdec::hierName() const { return vlSymsp->name(); }
const char* Vm_vlsit_apbdec::modelName() const { return "Vm_vlsit_apbdec"; }
unsigned Vm_vlsit_apbdec::threads() const { return 1; }
void Vm_vlsit_apbdec::prepareClone() const { contextp()->prepareClone(); }
void Vm_vlsit_apbdec::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vm_vlsit_apbdec::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vm_vlsit_apbdec___024root__trace_decl_types(VerilatedVcd* tracep);

void Vm_vlsit_apbdec___024root__trace_init_top(Vm_vlsit_apbdec___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vm_vlsit_apbdec___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vm_vlsit_apbdec___024root*>(voidSelf);
    Vm_vlsit_apbdec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vm_vlsit_apbdec___024root__trace_decl_types(tracep);
    Vm_vlsit_apbdec___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vm_vlsit_apbdec___024root__trace_register(Vm_vlsit_apbdec___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vm_vlsit_apbdec::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vm_vlsit_apbdec::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vm_vlsit_apbdec___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
