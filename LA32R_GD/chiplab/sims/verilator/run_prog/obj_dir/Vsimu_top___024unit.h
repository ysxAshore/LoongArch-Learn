// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsimu_top.h for the primary calling header

#ifndef VERILATED_VSIMU_TOP___024UNIT_H_
#define VERILATED_VSIMU_TOP___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_save.h"

class Vsimu_top__Syms;

class Vsimu_top___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vsimu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsimu_top___024unit(Vsimu_top__Syms* symsp, const char* name);
    ~Vsimu_top___024unit();
    VL_UNCOPYABLE(Vsimu_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
