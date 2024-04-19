// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsimu_top__Syms.h"
#include "Vsimu_top___024unit.h"

void Vsimu_top___024unit___ctor_var_reset(Vsimu_top___024unit* vlSelf);

Vsimu_top___024unit::Vsimu_top___024unit(Vsimu_top__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsimu_top___024unit___ctor_var_reset(this);
}

void Vsimu_top___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsimu_top___024unit::~Vsimu_top___024unit() {
}

// Savable
void Vsimu_top___024unit::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0xe3b0c44298fc1c14ULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
}
void Vsimu_top___024unit::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0xe3b0c44298fc1c14ULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
}
