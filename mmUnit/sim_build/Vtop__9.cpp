// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__14(vlSymsp);
        vlTOPp->_sequent__TOP__15(vlSymsp);
        vlTOPp->_sequent__TOP__16(vlSymsp);
        vlTOPp->_sequent__TOP__17(vlSymsp);
        vlTOPp->_sequent__TOP__18(vlSymsp);
        vlTOPp->_sequent__TOP__19(vlSymsp);
        vlTOPp->_sequent__TOP__20(vlSymsp);
        vlTOPp->_sequent__TOP__21(vlSymsp);
        vlTOPp->_sequent__TOP__22(vlSymsp);
        vlTOPp->_sequent__TOP__23(vlSymsp);
        vlTOPp->_sequent__TOP__24(vlSymsp);
    }
    vlTOPp->_combo__TOP__25(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtop::_change_request_1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request_1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((RST_N & 0xfeU))) {
        Verilated::overWidthError("RST_N");}
    if (VL_UNLIKELY((EN_load_A_row & 0xfeU))) {
        Verilated::overWidthError("EN_load_A_row");}
    if (VL_UNLIKELY((EN_load_B_col & 0xfeU))) {
        Verilated::overWidthError("EN_load_B_col");}
    if (VL_UNLIKELY((EN_load_C & 0xfeU))) {
        Verilated::overWidthError("EN_load_C");}
    if (VL_UNLIKELY((load_s1_or_s2_sel & 0xfeU))) {
        Verilated::overWidthError("load_s1_or_s2_sel");}
    if (VL_UNLIKELY((EN_load_s1_or_s2 & 0xfeU))) {
        Verilated::overWidthError("EN_load_s1_or_s2");}
    if (VL_UNLIKELY((EN_get_results & 0xfeU))) {
        Verilated::overWidthError("EN_get_results");}
}
#endif  // VL_DEBUG
