// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsimu_top__Syms.h"
#include "Vsimu_top.h"
#include "Vsimu_top___024root.h"
#include "Vsimu_top___024unit.h"

void Vsimu_top__Syms::__Vserialize(VerilatedSerialize& os) {
    // Internal state
    os<<__Vm_activity;
    os << __Vm_didInit;
    // Module instance state
    TOP.__Vserialize(os);
    TOP____024unit.__Vserialize(os);
}
void Vsimu_top__Syms::__Vdeserialize(VerilatedDeserialize& os) {
    // Internal state
    os>>__Vm_activity;
    os >> __Vm_didInit;
    // Module instance state
    TOP.__Vdeserialize(os);
    TOP____024unit.__Vdeserialize(os);
}

// FUNCTIONS
Vsimu_top__Syms::~Vsimu_top__Syms()
{
}

Vsimu_top__Syms::Vsimu_top__Syms(VerilatedContext* contextp, const char* namep, Vsimu_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
