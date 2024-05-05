// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsimu_top.h"
#include "Vsimu_top__Syms.h"
#include "verilated_fst_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vsimu_top::Vsimu_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsimu_top__Syms(contextp(), _vcname__, this)}
    , pclk{vlSymsp->TOP.pclk}
    , aclk{vlSymsp->TOP.aclk}
    , nand_type{vlSymsp->TOP.nand_type}
    , prst_{vlSymsp->TOP.prst_}
    , psel{vlSymsp->TOP.psel}
    , penable{vlSymsp->TOP.penable}
    , pwrite{vlSymsp->TOP.pwrite}
    , NAND_CE_o{vlSymsp->TOP.NAND_CE_o}
    , NAND_REQ{vlSymsp->TOP.NAND_REQ}
    , NAND_I{vlSymsp->TOP.NAND_I}
    , NAND_O{vlSymsp->TOP.NAND_O}
    , NAND_EN_{vlSymsp->TOP.NAND_EN_}
    , NAND_ALE{vlSymsp->TOP.NAND_ALE}
    , NAND_CLE{vlSymsp->TOP.NAND_CLE}
    , NAND_WR_{vlSymsp->TOP.NAND_WR_}
    , NAND_RD_{vlSymsp->TOP.NAND_RD_}
    , NAND_IORDY_i{vlSymsp->TOP.NAND_IORDY_i}
    , nand_int{vlSymsp->TOP.nand_int}
    , aresetn{vlSymsp->TOP.aresetn}
    , enable_delay{vlSymsp->TOP.enable_delay}
    , ram_ren{vlSymsp->TOP.ram_ren}
    , ram_wen{vlSymsp->TOP.ram_wen}
    , debug0_wb_rf_wen{vlSymsp->TOP.debug0_wb_rf_wen}
    , debug0_wb_rf_wnum{vlSymsp->TOP.debug0_wb_rf_wnum}
    , open_trace{vlSymsp->TOP.open_trace}
    , num_monitor{vlSymsp->TOP.num_monitor}
    , confreg_uart_data{vlSymsp->TOP.confreg_uart_data}
    , write_uart_valid{vlSymsp->TOP.write_uart_valid}
    , uart_rx{vlSymsp->TOP.uart_rx}
    , uart_tx{vlSymsp->TOP.uart_tx}
    , led_rg0{vlSymsp->TOP.led_rg0}
    , led_rg1{vlSymsp->TOP.led_rg1}
    , num_csn{vlSymsp->TOP.num_csn}
    , num_a_g{vlSymsp->TOP.num_a_g}
    , __SYM__switch{vlSymsp->TOP.__SYM__switch}
    , btn_key_col{vlSymsp->TOP.btn_key_col}
    , btn_key_row{vlSymsp->TOP.btn_key_row}
    , btn_step{vlSymsp->TOP.btn_step}
    , ADDR{vlSymsp->TOP.ADDR}
    , led{vlSymsp->TOP.led}
    , DAT_I{vlSymsp->TOP.DAT_I}
    , DAT_O{vlSymsp->TOP.DAT_O}
    , random_seed{vlSymsp->TOP.random_seed}
    , ram_raddr{vlSymsp->TOP.ram_raddr}
    , ram_rdata{vlSymsp->TOP.ram_rdata}
    , ram_waddr{vlSymsp->TOP.ram_waddr}
    , ram_wdata{vlSymsp->TOP.ram_wdata}
    , debug0_wb_pc{vlSymsp->TOP.debug0_wb_pc}
    , debug0_wb_rf_wdata{vlSymsp->TOP.debug0_wb_rf_wdata}
    , num_data{vlSymsp->TOP.num_data}
    , uart_ctr_bus{vlSymsp->TOP.uart_ctr_bus}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsimu_top::Vsimu_top(const char* _vcname__)
    : Vsimu_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsimu_top::~Vsimu_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vsimu_top___024root___eval_initial(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___eval_settle(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___eval(Vsimu_top___024root* vlSelf);
QData Vsimu_top___024root___change_request(Vsimu_top___024root* vlSelf);
#ifdef VL_DEBUG
void Vsimu_top___024root___eval_debug_assertions(Vsimu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vsimu_top___024root___final(Vsimu_top___024root* vlSelf);

static void _eval_initial_loop(Vsimu_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vsimu_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vsimu_top___024root___eval_settle(&(vlSymsp->TOP));
        Vsimu_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vsimu_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/mnt/e/Projects/Studying/LA/LA32R_GD/chiplab//IP/APB_DEV/NAND/nand.v", 34, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vsimu_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vsimu_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsimu_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsimu_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vsimu_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vsimu_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/mnt/e/Projects/Studying/LA/LA32R_GD/chiplab//IP/APB_DEV/NAND/nand.v", 34, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vsimu_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Utilities

const char* Vsimu_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vsimu_top::final() {
    Vsimu_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsimu_top::hierName() const { return vlSymsp->name(); }
const char* Vsimu_top::modelName() const { return "Vsimu_top"; }
unsigned Vsimu_top::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vsimu_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsimu_top___024root__trace_init_top(Vsimu_top___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsimu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimu_top___024root*>(voidSelf);
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vsimu_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vsimu_top___024root__trace_register(Vsimu_top___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vsimu_top::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsimu_top::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsimu_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}

//============================================================
// Model serialization

VerilatedSerialize& operator<<(VerilatedSerialize& os, Vsimu_top& rhs) {
    Verilated::quiesce();
    rhs.vlSymsp->__Vserialize(os);
    return os;
}

VerilatedDeserialize& operator>>(VerilatedDeserialize& os, Vsimu_top& rhs) {
    Verilated::quiesce();
    rhs.vlSymsp->__Vdeserialize(os);
    return os;
}
