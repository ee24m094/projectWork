// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

Vtop::~Vtop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_load_A_row = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_load_B_col = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_load_C = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_load_s1_or_s2 = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_get_results = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_0_0_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_0_0_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_0_0_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_0_0_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_0_0_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_0_0_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_0_1_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_0_1_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_0_1_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_0_1_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_0_1_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_0_1_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_0_2_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_0_2_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_0_2_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_0_2_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_0_2_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_0_2_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_0_3_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_0_3_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_0_3_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_0_3_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_0_3_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_0_3_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_1_0_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_1_0_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_1_0_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_1_0_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_1_0_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_1_0_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_1_1_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_1_1_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_1_1_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_1_1_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_1_1_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_1_1_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_1_2_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_1_2_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_1_2_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_1_2_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_1_2_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_1_2_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_1_3_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_1_3_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_1_3_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_1_3_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_1_3_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_1_3_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_2_0_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_2_0_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_2_0_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_2_0_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_2_0_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_2_0_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_2_1_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_2_1_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_2_1_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_2_1_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_2_1_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_2_1_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_2_2_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_2_2_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_2_2_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_2_2_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_2_2_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_2_2_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_2_3_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_2_3_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_2_3_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_2_3_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_2_3_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_2_3_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_3_0_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_3_0_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_3_0_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_3_0_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_3_0_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_3_0_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_3_1_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_3_1_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_3_1_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_3_1_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_3_1_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_3_1_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_3_2_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_3_2_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_3_2_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_3_2_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_3_2_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_3_2_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_3_3_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_3_3_macunit_rl_select_mac_output = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_3_3_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_3_3_macunit_int_Mac_rl_Compute_Int_Mac = 1U;
    vlTOPp->mkMmUnit__DOT__CAN_FIRE_RL_pes_3_3_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_RL_pes_3_3_macunit_bf16_Mac_rl_compute_bf16_mac = 1U;
    vlTOPp->mkMmUnit__DOT__RDY_load_A_row = 1U;
    vlTOPp->mkMmUnit__DOT__RDY_load_B_col = 1U;
    vlTOPp->mkMmUnit__DOT__RDY_load_C = 1U;
    vlTOPp->mkMmUnit__DOT__RDY_load_s1_or_s2 = 1U;
    vlTOPp->mkMmUnit__DOT__RDY_get_results = 1U;
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_int_Mac_reg_A = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_int_Mac_reg_B = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_int_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_int_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_reg_s1_or_s2 = 0U;
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_0_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_0_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_int_Mac_reg_A = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_int_Mac_reg_B = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_int_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_int_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_reg_s1_or_s2 = 0U;
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_1_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_1_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_int_Mac_reg_A = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_int_Mac_reg_B = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_int_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_int_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_reg_s1_or_s2 = 0U;
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_2_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_2_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_int_Mac_reg_A = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_int_Mac_reg_B = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_int_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_int_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_reg_s1_or_s2 = 0U;
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_3_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_3_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_int_Mac_reg_A = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_int_Mac_reg_B = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_int_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_int_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_reg_s1_or_s2 = 0U;
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_0_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_0_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_int_Mac_reg_A = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_int_Mac_reg_B = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_int_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_int_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_reg_s1_or_s2 = 0U;
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_1_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_1_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_int_Mac_reg_A = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_int_Mac_reg_B = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_int_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_int_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_reg_s1_or_s2 = 0U;
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_2_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_2_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_int_Mac_reg_A = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_int_Mac_reg_B = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_int_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_int_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_reg_s1_or_s2 = 0U;
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_3_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_1_3_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_int_Mac_reg_A = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_int_Mac_reg_B = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_int_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_int_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_reg_s1_or_s2 = 0U;
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_0_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_0_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_int_Mac_reg_A = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_int_Mac_reg_B = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_int_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_int_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_reg_s1_or_s2 = 0U;
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_1_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_1_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_int_Mac_reg_A = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_int_Mac_reg_B = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_int_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_int_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_reg_s1_or_s2 = 0U;
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_2_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_2_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_int_Mac_reg_A = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_int_Mac_reg_B = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_int_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_int_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_reg_s1_or_s2 = 0U;
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_3_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_2_3_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_int_Mac_reg_A = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_int_Mac_reg_B = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_int_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_int_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_reg_s1_or_s2 = 0U;
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_0_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_0_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_int_Mac_reg_A = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_int_Mac_reg_B = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_int_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_int_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_reg_s1_or_s2 = 0U;
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_1_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_1_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_int_Mac_reg_A = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_int_Mac_reg_B = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_int_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_int_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_reg_s1_or_s2 = 0U;
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_2_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_2_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_int_Mac_reg_A = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_int_Mac_reg_B = 0xaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_int_Mac_reg_C = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_int_Mac_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_reg_s1_or_s2 = 0U;
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_result = 0xaaaaaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_3_reg_A = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_3_3_reg_B = 0xaaaaU;
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_int_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_int_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_int_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_int_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_int_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_int_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_int_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_int_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_int_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_int_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_int_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_int_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_int_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_int_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_int_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_int_Mac_result_EN = 1U;
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_result_EN = 1U;
    vlTOPp->RDY_load_A_row = vlTOPp->mkMmUnit__DOT__RDY_load_A_row;
    vlTOPp->RDY_load_B_col = vlTOPp->mkMmUnit__DOT__RDY_load_B_col;
    vlTOPp->RDY_load_C = vlTOPp->mkMmUnit__DOT__RDY_load_C;
    vlTOPp->RDY_load_s1_or_s2 = vlTOPp->mkMmUnit__DOT__RDY_load_s1_or_s2;
    vlTOPp->RDY_get_results = vlTOPp->mkMmUnit__DOT__RDY_get_results;
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkMmUnit__DOT__CLK = vlTOPp->CLK;
    vlTOPp->mkMmUnit__DOT__RST_N = vlTOPp->RST_N;
    vlTOPp->mkMmUnit__DOT__load_A_row_aRow = vlTOPp->load_A_row_aRow;
    vlTOPp->mkMmUnit__DOT__load_A_row_rowIndex = vlTOPp->load_A_row_rowIndex;
    vlTOPp->mkMmUnit__DOT__EN_load_A_row = vlTOPp->EN_load_A_row;
    vlTOPp->mkMmUnit__DOT__load_B_col_bCol = vlTOPp->load_B_col_bCol;
    vlTOPp->mkMmUnit__DOT__load_B_col_colIndex = vlTOPp->load_B_col_colIndex;
    vlTOPp->mkMmUnit__DOT__EN_load_B_col = vlTOPp->EN_load_B_col;
    vlTOPp->mkMmUnit__DOT__load_C_cValues[0U] = vlTOPp->load_C_cValues[0U];
    vlTOPp->mkMmUnit__DOT__load_C_cValues[1U] = vlTOPp->load_C_cValues[1U];
    vlTOPp->mkMmUnit__DOT__load_C_cValues[2U] = vlTOPp->load_C_cValues[2U];
    vlTOPp->mkMmUnit__DOT__load_C_cValues[3U] = vlTOPp->load_C_cValues[3U];
    vlTOPp->mkMmUnit__DOT__load_C_cValues[4U] = vlTOPp->load_C_cValues[4U];
    vlTOPp->mkMmUnit__DOT__load_C_cValues[5U] = vlTOPp->load_C_cValues[5U];
    vlTOPp->mkMmUnit__DOT__load_C_cValues[6U] = vlTOPp->load_C_cValues[6U];
    vlTOPp->mkMmUnit__DOT__load_C_cValues[7U] = vlTOPp->load_C_cValues[7U];
    vlTOPp->mkMmUnit__DOT__load_C_cValues[8U] = vlTOPp->load_C_cValues[8U];
    vlTOPp->mkMmUnit__DOT__load_C_cValues[9U] = vlTOPp->load_C_cValues[9U];
    vlTOPp->mkMmUnit__DOT__load_C_cValues[0xaU] = vlTOPp->load_C_cValues[0xaU];
    vlTOPp->mkMmUnit__DOT__load_C_cValues[0xbU] = vlTOPp->load_C_cValues[0xbU];
    vlTOPp->mkMmUnit__DOT__load_C_cValues[0xcU] = vlTOPp->load_C_cValues[0xcU];
    vlTOPp->mkMmUnit__DOT__load_C_cValues[0xdU] = vlTOPp->load_C_cValues[0xdU];
    vlTOPp->mkMmUnit__DOT__load_C_cValues[0xeU] = vlTOPp->load_C_cValues[0xeU];
    vlTOPp->mkMmUnit__DOT__load_C_cValues[0xfU] = vlTOPp->load_C_cValues[0xfU];
    vlTOPp->mkMmUnit__DOT__EN_load_C = vlTOPp->EN_load_C;
    vlTOPp->mkMmUnit__DOT__load_s1_or_s2_sel = vlTOPp->load_s1_or_s2_sel;
    vlTOPp->mkMmUnit__DOT__EN_load_s1_or_s2 = vlTOPp->EN_load_s1_or_s2;
    vlTOPp->mkMmUnit__DOT__EN_get_results = vlTOPp->EN_get_results;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_load_A_row = vlTOPp->EN_load_A_row;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_load_B_col = vlTOPp->EN_load_B_col;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_load_C = vlTOPp->EN_load_C;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_load_s1_or_s2 
        = vlTOPp->EN_load_s1_or_s2;
    vlTOPp->mkMmUnit__DOT__WILL_FIRE_get_results = vlTOPp->EN_get_results;
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A_D_IN 
        = (0xffffU & (IData)(vlTOPp->load_A_row_aRow));
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_B_D_IN 
        = (0xffffU & (IData)(vlTOPp->load_B_col_bCol));
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[0U];
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_int_Mac_reg_A_D_IN 
        = (0xffU & (IData)(vlTOPp->load_A_row_aRow));
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_int_Mac_reg_B_D_IN 
        = (0xffU & (IData)(vlTOPp->load_B_col_bCol));
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_int_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[0U];
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_reg_s1_or_s2_D_IN 
        = vlTOPp->load_s1_or_s2_sel;
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_reg_s1_or_s2_EN 
        = vlTOPp->EN_load_s1_or_s2;
    vlTOPp->mkMmUnit__DOT__pes_0_0_reg_A_D_IN = (0xffffU 
                                                 & (IData)(vlTOPp->load_A_row_aRow));
    vlTOPp->mkMmUnit__DOT__pes_0_0_reg_B_D_IN = (0xffffU 
                                                 & (IData)(vlTOPp->load_B_col_bCol));
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_A_row_aRow 
                              >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_B_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_B_col_bCol 
                              >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[1U];
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_int_Mac_reg_A_D_IN 
        = (0xffU & (IData)((vlTOPp->load_A_row_aRow 
                            >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_int_Mac_reg_B_D_IN 
        = (0xffU & (IData)((vlTOPp->load_B_col_bCol 
                            >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_int_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[1U];
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_reg_s1_or_s2_D_IN 
        = vlTOPp->load_s1_or_s2_sel;
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_reg_s1_or_s2_EN 
        = vlTOPp->EN_load_s1_or_s2;
    vlTOPp->mkMmUnit__DOT__pes_0_1_reg_A_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_A_row_aRow 
                                                            >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_0_1_reg_B_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_B_col_bCol 
                                                            >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_A_row_aRow 
                              >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_B_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_B_col_bCol 
                              >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[2U];
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_int_Mac_reg_A_D_IN 
        = (0xffU & (IData)((vlTOPp->load_A_row_aRow 
                            >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_int_Mac_reg_B_D_IN 
        = (0xffU & (IData)((vlTOPp->load_B_col_bCol 
                            >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_int_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[2U];
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_reg_s1_or_s2_D_IN 
        = vlTOPp->load_s1_or_s2_sel;
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_reg_s1_or_s2_EN 
        = vlTOPp->EN_load_s1_or_s2;
    vlTOPp->mkMmUnit__DOT__pes_0_2_reg_A_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_A_row_aRow 
                                                            >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_0_2_reg_B_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_B_col_bCol 
                                                            >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_A_row_aRow 
                              >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_B_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_B_col_bCol 
                              >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[3U];
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_int_Mac_reg_A_D_IN 
        = (0xffU & (IData)((vlTOPp->load_A_row_aRow 
                            >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_int_Mac_reg_B_D_IN 
        = (0xffU & (IData)((vlTOPp->load_B_col_bCol 
                            >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_int_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[3U];
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_reg_s1_or_s2_D_IN 
        = vlTOPp->load_s1_or_s2_sel;
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_reg_s1_or_s2_EN 
        = vlTOPp->EN_load_s1_or_s2;
    vlTOPp->mkMmUnit__DOT__pes_0_3_reg_A_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_A_row_aRow 
                                                            >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_0_3_reg_B_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_B_col_bCol 
                                                            >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A_D_IN 
        = (0xffffU & (IData)(vlTOPp->load_A_row_aRow));
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_B_D_IN 
        = (0xffffU & (IData)(vlTOPp->load_B_col_bCol));
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[4U];
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_int_Mac_reg_A_D_IN 
        = (0xffU & (IData)(vlTOPp->load_A_row_aRow));
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_int_Mac_reg_B_D_IN 
        = (0xffU & (IData)(vlTOPp->load_B_col_bCol));
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_int_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[4U];
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_reg_s1_or_s2_D_IN 
        = vlTOPp->load_s1_or_s2_sel;
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_reg_s1_or_s2_EN 
        = vlTOPp->EN_load_s1_or_s2;
    vlTOPp->mkMmUnit__DOT__pes_1_0_reg_A_D_IN = (0xffffU 
                                                 & (IData)(vlTOPp->load_A_row_aRow));
    vlTOPp->mkMmUnit__DOT__pes_1_0_reg_B_D_IN = (0xffffU 
                                                 & (IData)(vlTOPp->load_B_col_bCol));
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_A_row_aRow 
                              >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_B_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_B_col_bCol 
                              >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[5U];
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_int_Mac_reg_A_D_IN 
        = (0xffU & (IData)((vlTOPp->load_A_row_aRow 
                            >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_int_Mac_reg_B_D_IN 
        = (0xffU & (IData)((vlTOPp->load_B_col_bCol 
                            >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_int_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[5U];
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_reg_s1_or_s2_D_IN 
        = vlTOPp->load_s1_or_s2_sel;
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_reg_s1_or_s2_EN 
        = vlTOPp->EN_load_s1_or_s2;
    vlTOPp->mkMmUnit__DOT__pes_1_1_reg_A_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_A_row_aRow 
                                                            >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_1_1_reg_B_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_B_col_bCol 
                                                            >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_A_row_aRow 
                              >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_B_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_B_col_bCol 
                              >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[6U];
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_int_Mac_reg_A_D_IN 
        = (0xffU & (IData)((vlTOPp->load_A_row_aRow 
                            >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_int_Mac_reg_B_D_IN 
        = (0xffU & (IData)((vlTOPp->load_B_col_bCol 
                            >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_int_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[6U];
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_reg_s1_or_s2_D_IN 
        = vlTOPp->load_s1_or_s2_sel;
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_reg_s1_or_s2_EN 
        = vlTOPp->EN_load_s1_or_s2;
    vlTOPp->mkMmUnit__DOT__pes_1_2_reg_A_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_A_row_aRow 
                                                            >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_1_2_reg_B_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_B_col_bCol 
                                                            >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_A_row_aRow 
                              >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_B_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_B_col_bCol 
                              >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[7U];
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_int_Mac_reg_A_D_IN 
        = (0xffU & (IData)((vlTOPp->load_A_row_aRow 
                            >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_int_Mac_reg_B_D_IN 
        = (0xffU & (IData)((vlTOPp->load_B_col_bCol 
                            >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_int_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[7U];
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_reg_s1_or_s2_D_IN 
        = vlTOPp->load_s1_or_s2_sel;
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_reg_s1_or_s2_EN 
        = vlTOPp->EN_load_s1_or_s2;
    vlTOPp->mkMmUnit__DOT__pes_1_3_reg_A_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_A_row_aRow 
                                                            >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_1_3_reg_B_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_B_col_bCol 
                                                            >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A_D_IN 
        = (0xffffU & (IData)(vlTOPp->load_A_row_aRow));
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_B_D_IN 
        = (0xffffU & (IData)(vlTOPp->load_B_col_bCol));
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[8U];
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_int_Mac_reg_A_D_IN 
        = (0xffU & (IData)(vlTOPp->load_A_row_aRow));
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_int_Mac_reg_B_D_IN 
        = (0xffU & (IData)(vlTOPp->load_B_col_bCol));
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_int_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[8U];
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_reg_s1_or_s2_D_IN 
        = vlTOPp->load_s1_or_s2_sel;
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_reg_s1_or_s2_EN 
        = vlTOPp->EN_load_s1_or_s2;
    vlTOPp->mkMmUnit__DOT__pes_2_0_reg_A_D_IN = (0xffffU 
                                                 & (IData)(vlTOPp->load_A_row_aRow));
    vlTOPp->mkMmUnit__DOT__pes_2_0_reg_B_D_IN = (0xffffU 
                                                 & (IData)(vlTOPp->load_B_col_bCol));
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_A_row_aRow 
                              >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_B_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_B_col_bCol 
                              >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[9U];
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_int_Mac_reg_A_D_IN 
        = (0xffU & (IData)((vlTOPp->load_A_row_aRow 
                            >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_int_Mac_reg_B_D_IN 
        = (0xffU & (IData)((vlTOPp->load_B_col_bCol 
                            >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_int_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[9U];
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_reg_s1_or_s2_D_IN 
        = vlTOPp->load_s1_or_s2_sel;
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_reg_s1_or_s2_EN 
        = vlTOPp->EN_load_s1_or_s2;
    vlTOPp->mkMmUnit__DOT__pes_2_1_reg_A_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_A_row_aRow 
                                                            >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_2_1_reg_B_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_B_col_bCol 
                                                            >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_A_row_aRow 
                              >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_B_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_B_col_bCol 
                              >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[0xaU];
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_int_Mac_reg_A_D_IN 
        = (0xffU & (IData)((vlTOPp->load_A_row_aRow 
                            >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_int_Mac_reg_B_D_IN 
        = (0xffU & (IData)((vlTOPp->load_B_col_bCol 
                            >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_int_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[0xaU];
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_reg_s1_or_s2_D_IN 
        = vlTOPp->load_s1_or_s2_sel;
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_reg_s1_or_s2_EN 
        = vlTOPp->EN_load_s1_or_s2;
    vlTOPp->mkMmUnit__DOT__pes_2_2_reg_A_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_A_row_aRow 
                                                            >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_2_2_reg_B_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_B_col_bCol 
                                                            >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_A_row_aRow 
                              >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_B_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_B_col_bCol 
                              >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[0xbU];
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_int_Mac_reg_A_D_IN 
        = (0xffU & (IData)((vlTOPp->load_A_row_aRow 
                            >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_int_Mac_reg_B_D_IN 
        = (0xffU & (IData)((vlTOPp->load_B_col_bCol 
                            >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_int_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[0xbU];
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_reg_s1_or_s2_D_IN 
        = vlTOPp->load_s1_or_s2_sel;
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_reg_s1_or_s2_EN 
        = vlTOPp->EN_load_s1_or_s2;
    vlTOPp->mkMmUnit__DOT__pes_2_3_reg_A_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_A_row_aRow 
                                                            >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_2_3_reg_B_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_B_col_bCol 
                                                            >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A_D_IN 
        = (0xffffU & (IData)(vlTOPp->load_A_row_aRow));
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_B_D_IN 
        = (0xffffU & (IData)(vlTOPp->load_B_col_bCol));
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[0xcU];
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_int_Mac_reg_A_D_IN 
        = (0xffU & (IData)(vlTOPp->load_A_row_aRow));
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_int_Mac_reg_B_D_IN 
        = (0xffU & (IData)(vlTOPp->load_B_col_bCol));
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_int_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[0xcU];
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_reg_s1_or_s2_D_IN 
        = vlTOPp->load_s1_or_s2_sel;
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_reg_s1_or_s2_EN 
        = vlTOPp->EN_load_s1_or_s2;
    vlTOPp->mkMmUnit__DOT__pes_3_0_reg_A_D_IN = (0xffffU 
                                                 & (IData)(vlTOPp->load_A_row_aRow));
    vlTOPp->mkMmUnit__DOT__pes_3_0_reg_B_D_IN = (0xffffU 
                                                 & (IData)(vlTOPp->load_B_col_bCol));
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_A_row_aRow 
                              >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_B_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_B_col_bCol 
                              >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[0xdU];
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_int_Mac_reg_A_D_IN 
        = (0xffU & (IData)((vlTOPp->load_A_row_aRow 
                            >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_int_Mac_reg_B_D_IN 
        = (0xffU & (IData)((vlTOPp->load_B_col_bCol 
                            >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_int_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[0xdU];
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_reg_s1_or_s2_D_IN 
        = vlTOPp->load_s1_or_s2_sel;
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_reg_s1_or_s2_EN 
        = vlTOPp->EN_load_s1_or_s2;
    vlTOPp->mkMmUnit__DOT__pes_3_1_reg_A_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_A_row_aRow 
                                                            >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_3_1_reg_B_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_B_col_bCol 
                                                            >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_A_row_aRow 
                              >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_B_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_B_col_bCol 
                              >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[0xeU];
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_int_Mac_reg_A_D_IN 
        = (0xffU & (IData)((vlTOPp->load_A_row_aRow 
                            >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_int_Mac_reg_B_D_IN 
        = (0xffU & (IData)((vlTOPp->load_B_col_bCol 
                            >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_int_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[0xeU];
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_reg_s1_or_s2_D_IN 
        = vlTOPp->load_s1_or_s2_sel;
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_reg_s1_or_s2_EN 
        = vlTOPp->EN_load_s1_or_s2;
    vlTOPp->mkMmUnit__DOT__pes_3_2_reg_A_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_A_row_aRow 
                                                            >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_3_2_reg_B_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_B_col_bCol 
                                                            >> 0x20U)));
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_A_row_aRow 
                              >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_B_D_IN 
        = (0xffffU & (IData)((vlTOPp->load_B_col_bCol 
                              >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[0xfU];
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_int_Mac_reg_A_D_IN 
        = (0xffU & (IData)((vlTOPp->load_A_row_aRow 
                            >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_int_Mac_reg_B_D_IN 
        = (0xffU & (IData)((vlTOPp->load_B_col_bCol 
                            >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_int_Mac_reg_C_D_IN 
        = vlTOPp->load_C_cValues[0xfU];
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_reg_s1_or_s2_D_IN 
        = vlTOPp->load_s1_or_s2_sel;
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_reg_s1_or_s2_EN 
        = vlTOPp->EN_load_s1_or_s2;
    vlTOPp->mkMmUnit__DOT__pes_3_3_reg_A_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_A_row_aRow 
                                                            >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_3_3_reg_B_D_IN = (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->load_B_col_bCol 
                                                            >> 0x30U)));
    vlTOPp->mkMmUnit__DOT__pes_0_0_reg_A_EN = ((IData)(vlTOPp->EN_load_A_row) 
                                               & (0U 
                                                  == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_0_0_reg_B_EN = ((IData)(vlTOPp->EN_load_B_col) 
                                               & (0U 
                                                  == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_0_1_reg_A_EN = ((IData)(vlTOPp->EN_load_A_row) 
                                               & (0U 
                                                  == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_0_1_reg_B_EN = ((IData)(vlTOPp->EN_load_B_col) 
                                               & (0U 
                                                  == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_0_2_reg_A_EN = ((IData)(vlTOPp->EN_load_A_row) 
                                               & (0U 
                                                  == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_0_2_reg_B_EN = ((IData)(vlTOPp->EN_load_B_col) 
                                               & (0U 
                                                  == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_0_3_reg_A_EN = ((IData)(vlTOPp->EN_load_A_row) 
                                               & (0U 
                                                  == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_0_3_reg_B_EN = ((IData)(vlTOPp->EN_load_B_col) 
                                               & (0U 
                                                  == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_0_reg_A_EN = ((IData)(vlTOPp->EN_load_A_row) 
                                               & (1U 
                                                  == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_0_reg_B_EN = ((IData)(vlTOPp->EN_load_B_col) 
                                               & (1U 
                                                  == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_1_reg_A_EN = ((IData)(vlTOPp->EN_load_A_row) 
                                               & (1U 
                                                  == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_1_reg_B_EN = ((IData)(vlTOPp->EN_load_B_col) 
                                               & (1U 
                                                  == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_2_reg_A_EN = ((IData)(vlTOPp->EN_load_A_row) 
                                               & (1U 
                                                  == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_2_reg_B_EN = ((IData)(vlTOPp->EN_load_B_col) 
                                               & (1U 
                                                  == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_3_reg_A_EN = ((IData)(vlTOPp->EN_load_A_row) 
                                               & (1U 
                                                  == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_3_reg_B_EN = ((IData)(vlTOPp->EN_load_B_col) 
                                               & (1U 
                                                  == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_0_reg_A_EN = ((IData)(vlTOPp->EN_load_A_row) 
                                               & (2U 
                                                  == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_0_reg_B_EN = ((IData)(vlTOPp->EN_load_B_col) 
                                               & (2U 
                                                  == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_1_reg_A_EN = ((IData)(vlTOPp->EN_load_A_row) 
                                               & (2U 
                                                  == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_1_reg_B_EN = ((IData)(vlTOPp->EN_load_B_col) 
                                               & (2U 
                                                  == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_2_reg_A_EN = ((IData)(vlTOPp->EN_load_A_row) 
                                               & (2U 
                                                  == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_2_reg_B_EN = ((IData)(vlTOPp->EN_load_B_col) 
                                               & (2U 
                                                  == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_3_reg_A_EN = ((IData)(vlTOPp->EN_load_A_row) 
                                               & (2U 
                                                  == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_3_reg_B_EN = ((IData)(vlTOPp->EN_load_B_col) 
                                               & (2U 
                                                  == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_0_reg_A_EN = ((IData)(vlTOPp->EN_load_A_row) 
                                               & (3U 
                                                  == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_0_reg_B_EN = ((IData)(vlTOPp->EN_load_B_col) 
                                               & (3U 
                                                  == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_1_reg_A_EN = ((IData)(vlTOPp->EN_load_A_row) 
                                               & (3U 
                                                  == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_1_reg_B_EN = ((IData)(vlTOPp->EN_load_B_col) 
                                               & (3U 
                                                  == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_2_reg_A_EN = ((IData)(vlTOPp->EN_load_A_row) 
                                               & (3U 
                                                  == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_2_reg_B_EN = ((IData)(vlTOPp->EN_load_B_col) 
                                               & (3U 
                                                  == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_3_reg_A_EN = ((IData)(vlTOPp->EN_load_A_row) 
                                               & (3U 
                                                  == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_3_reg_B_EN = ((IData)(vlTOPp->EN_load_B_col) 
                                               & (3U 
                                                  == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->RDY_load_A_row = vlTOPp->mkMmUnit__DOT__RDY_load_A_row;
    vlTOPp->RDY_load_B_col = vlTOPp->mkMmUnit__DOT__RDY_load_B_col;
    vlTOPp->RDY_load_C = vlTOPp->mkMmUnit__DOT__RDY_load_C;
    vlTOPp->RDY_load_s1_or_s2 = vlTOPp->mkMmUnit__DOT__RDY_load_s1_or_s2;
    vlTOPp->RDY_get_results = vlTOPp->mkMmUnit__DOT__RDY_get_results;
    vlTOPp->mkMmUnit__DOT__get_results[0U] = vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_result;
    vlTOPp->mkMmUnit__DOT__get_results[1U] = vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_result;
    vlTOPp->mkMmUnit__DOT__get_results[2U] = vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_result;
    vlTOPp->mkMmUnit__DOT__get_results[3U] = vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_result;
    vlTOPp->mkMmUnit__DOT__get_results[4U] = vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_result;
    vlTOPp->mkMmUnit__DOT__get_results[5U] = vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_result;
    vlTOPp->mkMmUnit__DOT__get_results[6U] = vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_result;
    vlTOPp->mkMmUnit__DOT__get_results[7U] = vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_result;
    vlTOPp->mkMmUnit__DOT__get_results[8U] = vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_result;
    vlTOPp->mkMmUnit__DOT__get_results[9U] = vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_result;
    vlTOPp->mkMmUnit__DOT__get_results[0xaU] = vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_result;
    vlTOPp->mkMmUnit__DOT__get_results[0xbU] = vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_result;
    vlTOPp->mkMmUnit__DOT__get_results[0xcU] = vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_result;
    vlTOPp->mkMmUnit__DOT__get_results[0xdU] = vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_result;
    vlTOPp->mkMmUnit__DOT__get_results[0xeU] = (IData)(
                                                       (((QData)((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_result)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_result))));
    vlTOPp->mkMmUnit__DOT__get_results[0xfU] = (IData)(
                                                       ((((QData)((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_result)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_result))) 
                                                        >> 0x20U));
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_reg_s1_or_s2));
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_int_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_reg_s1_or_s2)));
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_reg_s1_or_s2)) 
           & (0U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_reg_s1_or_s2)) 
           & (0U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_int_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_reg_s1_or_s2))) 
           & (0U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_int_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_reg_s1_or_s2))) 
           & (0U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_result_D_IN 
        = ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_reg_s1_or_s2)
            ? vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_result
            : vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_int_Mac_result);
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_reg_s1_or_s2));
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_int_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_reg_s1_or_s2)));
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_reg_s1_or_s2)) 
           & (0U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_reg_s1_or_s2)) 
           & (0U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_int_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_reg_s1_or_s2))) 
           & (0U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_int_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_reg_s1_or_s2))) 
           & (0U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_result_D_IN 
        = ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_reg_s1_or_s2)
            ? vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_result
            : vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_int_Mac_result);
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_reg_s1_or_s2));
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_int_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_reg_s1_or_s2)));
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_reg_s1_or_s2)) 
           & (0U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_reg_s1_or_s2)) 
           & (0U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_int_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_reg_s1_or_s2))) 
           & (0U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_int_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_reg_s1_or_s2))) 
           & (0U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_result_D_IN 
        = ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_reg_s1_or_s2)
            ? vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_result
            : vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_int_Mac_result);
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_reg_s1_or_s2));
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_int_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_reg_s1_or_s2)));
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_reg_s1_or_s2)) 
           & (0U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_reg_s1_or_s2)) 
           & (0U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_int_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_reg_s1_or_s2))) 
           & (0U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_int_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_reg_s1_or_s2))) 
           & (0U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_result_D_IN 
        = ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_reg_s1_or_s2)
            ? vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_result
            : vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_int_Mac_result);
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_reg_s1_or_s2));
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_int_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_reg_s1_or_s2)));
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_reg_s1_or_s2)) 
           & (1U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_reg_s1_or_s2)) 
           & (1U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_int_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_reg_s1_or_s2))) 
           & (1U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_int_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_reg_s1_or_s2))) 
           & (1U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_result_D_IN 
        = ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_reg_s1_or_s2)
            ? vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_result
            : vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_int_Mac_result);
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_reg_s1_or_s2));
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_int_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_reg_s1_or_s2)));
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_reg_s1_or_s2)) 
           & (1U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_reg_s1_or_s2)) 
           & (1U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_int_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_reg_s1_or_s2))) 
           & (1U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_int_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_reg_s1_or_s2))) 
           & (1U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_result_D_IN 
        = ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_reg_s1_or_s2)
            ? vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_result
            : vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_int_Mac_result);
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_reg_s1_or_s2));
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_int_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_reg_s1_or_s2)));
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_reg_s1_or_s2)) 
           & (1U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_reg_s1_or_s2)) 
           & (1U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_int_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_reg_s1_or_s2))) 
           & (1U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_int_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_reg_s1_or_s2))) 
           & (1U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_result_D_IN 
        = ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_reg_s1_or_s2)
            ? vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_result
            : vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_int_Mac_result);
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_reg_s1_or_s2));
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_int_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_reg_s1_or_s2)));
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_reg_s1_or_s2)) 
           & (1U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_reg_s1_or_s2)) 
           & (1U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_int_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_reg_s1_or_s2))) 
           & (1U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_int_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_reg_s1_or_s2))) 
           & (1U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_result_D_IN 
        = ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_reg_s1_or_s2)
            ? vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_result
            : vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_int_Mac_result);
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_reg_s1_or_s2));
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_int_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_reg_s1_or_s2)));
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_reg_s1_or_s2)) 
           & (2U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_reg_s1_or_s2)) 
           & (2U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_int_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_reg_s1_or_s2))) 
           & (2U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_int_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_reg_s1_or_s2))) 
           & (2U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_result_D_IN 
        = ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_reg_s1_or_s2)
            ? vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_result
            : vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_int_Mac_result);
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_reg_s1_or_s2));
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_int_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_reg_s1_or_s2)));
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_reg_s1_or_s2)) 
           & (2U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_reg_s1_or_s2)) 
           & (2U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_int_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_reg_s1_or_s2))) 
           & (2U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_int_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_reg_s1_or_s2))) 
           & (2U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_result_D_IN 
        = ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_reg_s1_or_s2)
            ? vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_result
            : vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_int_Mac_result);
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_reg_s1_or_s2));
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_int_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_reg_s1_or_s2)));
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_reg_s1_or_s2)) 
           & (2U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_reg_s1_or_s2)) 
           & (2U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_int_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_reg_s1_or_s2))) 
           & (2U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_int_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_reg_s1_or_s2))) 
           & (2U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_result_D_IN 
        = ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_reg_s1_or_s2)
            ? vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_result
            : vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_int_Mac_result);
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_reg_s1_or_s2));
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_int_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_reg_s1_or_s2)));
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_reg_s1_or_s2)) 
           & (2U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_reg_s1_or_s2)) 
           & (2U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_int_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_reg_s1_or_s2))) 
           & (2U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_int_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_reg_s1_or_s2))) 
           & (2U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_result_D_IN 
        = ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_reg_s1_or_s2)
            ? vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_result
            : vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_int_Mac_result);
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_reg_s1_or_s2));
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_int_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_reg_s1_or_s2)));
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_reg_s1_or_s2)) 
           & (3U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_reg_s1_or_s2)) 
           & (3U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_int_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_reg_s1_or_s2))) 
           & (3U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_int_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_reg_s1_or_s2))) 
           & (3U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_result_D_IN 
        = ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_reg_s1_or_s2)
            ? vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_result
            : vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_int_Mac_result);
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_reg_s1_or_s2));
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_int_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_reg_s1_or_s2)));
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_reg_s1_or_s2)) 
           & (3U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_reg_s1_or_s2)) 
           & (3U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_int_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_reg_s1_or_s2))) 
           & (3U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_int_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_reg_s1_or_s2))) 
           & (3U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_result_D_IN 
        = ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_reg_s1_or_s2)
            ? vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_result
            : vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_int_Mac_result);
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_reg_s1_or_s2));
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_int_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_reg_s1_or_s2)));
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_reg_s1_or_s2)) 
           & (3U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_reg_s1_or_s2)) 
           & (3U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_int_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_reg_s1_or_s2))) 
           & (3U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_int_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_reg_s1_or_s2))) 
           & (3U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_result_D_IN 
        = ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_reg_s1_or_s2)
            ? vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_result
            : vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_int_Mac_result);
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_reg_s1_or_s2));
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_int_Mac_reg_C_EN 
        = ((IData)(vlTOPp->EN_load_C) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_reg_s1_or_s2)));
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_reg_s1_or_s2)) 
           & (3U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_reg_s1_or_s2)) 
           & (3U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_int_Mac_reg_A_EN 
        = (((IData)(vlTOPp->EN_load_A_row) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_reg_s1_or_s2))) 
           & (3U == (IData)(vlTOPp->load_A_row_rowIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_int_Mac_reg_B_EN 
        = (((IData)(vlTOPp->EN_load_B_col) & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_reg_s1_or_s2))) 
           & (3U == (IData)(vlTOPp->load_B_col_colIndex)));
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_result_D_IN 
        = ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_reg_s1_or_s2)
            ? vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_result
            : vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_int_Mac_result);
    vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh175818 
        = (0x800000U | (0x7fffffU & vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_C));
    vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh395972 
        = (0x800000U | (0x7fffffU & vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_C));
    vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh616122 
        = (0x800000U | (0x7fffffU & vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_C));
    vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh836272 
        = (0x800000U | (0x7fffffU & vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_C));
    vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh1056442 
        = (0x800000U | (0x7fffffU & vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_C));
    vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh1276589 
        = (0x800000U | (0x7fffffU & vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_C));
    vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh1496736 
        = (0x800000U | (0x7fffffU & vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_C));
    vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh1716883 
        = (0x800000U | (0x7fffffU & vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_C));
    vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh1937053 
        = (0x800000U | (0x7fffffU & vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_C));
    vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh2157200 
        = (0x800000U | (0x7fffffU & vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_C));
    vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh2377347 
        = (0x800000U | (0x7fffffU & vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_C));
    vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh2597494 
        = (0x800000U | (0x7fffffU & vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_C));
    vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh2817664 
        = (0x800000U | (0x7fffffU & vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_C));
    vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh3037811 
        = (0x800000U | (0x7fffffU & vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_C));
    vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh3257958 
        = (0x800000U | (0x7fffffU & vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_C));
    vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh3478105 
        = (0x800000U | (0x7fffffU & vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_C));
    vlTOPp->mkMmUnit__DOT__sign_A___05Fh395969 = (1U 
                                                  & (((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_B)) 
                                                     >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh432795 = (0xffU 
                                             & (((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                 >> 7U) 
                                                + ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_B) 
                                                   >> 7U)));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq2 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__sign_A___05Fh616119 = (1U 
                                                  & (((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_B)) 
                                                     >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh652945 = (0xffU 
                                             & (((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                 >> 7U) 
                                                + ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_B) 
                                                   >> 7U)));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq3 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__sign_A___05Fh836269 = (1U 
                                                  & (((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_B)) 
                                                     >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh873095 = (0xffU 
                                             & (((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                 >> 7U) 
                                                + ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_B) 
                                                   >> 7U)));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq4 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__sign_A___05Fh1056439 = (1U 
                                                   & (((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_B)) 
                                                      >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1093265 = (0xffU 
                                              & (((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 7U) 
                                                 + 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_B) 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq5 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__sign_A___05Fh1276586 = (1U 
                                                   & (((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_B)) 
                                                      >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1313412 = (0xffU 
                                              & (((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 7U) 
                                                 + 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_B) 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq6 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__sign_A___05Fh1496733 = (1U 
                                                   & (((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_B)) 
                                                      >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1533559 = (0xffU 
                                              & (((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 7U) 
                                                 + 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_B) 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq7 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__sign_A___05Fh1716880 = (1U 
                                                   & (((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_B)) 
                                                      >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1753706 = (0xffU 
                                              & (((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 7U) 
                                                 + 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_B) 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq8 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__sign_A___05Fh1937050 = (1U 
                                                   & (((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_B)) 
                                                      >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1973876 = (0xffU 
                                              & (((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 7U) 
                                                 + 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_B) 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq9 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__sign_A___05Fh2157197 = (1U 
                                                   & (((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_B)) 
                                                      >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh2194023 = (0xffU 
                                              & (((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 7U) 
                                                 + 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_B) 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq10 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__sign_A___05Fh2377344 = (1U 
                                                   & (((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_B)) 
                                                      >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh2414170 = (0xffU 
                                              & (((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 7U) 
                                                 + 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_B) 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq11 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__sign_A___05Fh2597491 = (1U 
                                                   & (((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_B)) 
                                                      >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh2634317 = (0xffU 
                                              & (((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 7U) 
                                                 + 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_B) 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq12 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__sign_A___05Fh2817661 = (1U 
                                                   & (((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_B)) 
                                                      >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh2854487 = (0xffU 
                                              & (((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 7U) 
                                                 + 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_B) 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq13 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__sign_A___05Fh3037808 = (1U 
                                                   & (((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_B)) 
                                                      >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh3074634 = (0xffU 
                                              & (((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 7U) 
                                                 + 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_B) 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq14 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__sign_A___05Fh3257955 = (1U 
                                                   & (((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_B)) 
                                                      >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh3294781 = (0xffU 
                                              & (((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 7U) 
                                                 + 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_B) 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq15 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__sign_A___05Fh3478102 = (1U 
                                                   & (((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_B)) 
                                                      >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh3514928 = (0xffU 
                                              & (((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 7U) 
                                                 + 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_B) 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq16 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__sign_A___05Fh175815 = (1U 
                                                  & (((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_B)) 
                                                     >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh212641 = (0xffU 
                                             & (((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                 >> 7U) 
                                                + ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_B) 
                                                   >> 7U)));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq1 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__INV_pes_0_0_macunit_int_Mac_reg_B___05Fq17 
        = (0xffU & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_int_Mac_reg_B)));
    vlTOPp->mkMmUnit__DOT__INV_pes_0_1_macunit_int_Mac_reg_B___05Fq21 
        = (0xffU & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_int_Mac_reg_B)));
    vlTOPp->mkMmUnit__DOT__INV_pes_0_2_macunit_int_Mac_reg_B___05Fq25 
        = (0xffU & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_int_Mac_reg_B)));
    vlTOPp->mkMmUnit__DOT__INV_pes_0_3_macunit_int_Mac_reg_B___05Fq29 
        = (0xffU & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_int_Mac_reg_B)));
    vlTOPp->mkMmUnit__DOT__INV_pes_1_0_macunit_int_Mac_reg_B___05Fq33 
        = (0xffU & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_int_Mac_reg_B)));
    vlTOPp->mkMmUnit__DOT__INV_pes_1_1_macunit_int_Mac_reg_B___05Fq37 
        = (0xffU & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_int_Mac_reg_B)));
    vlTOPp->mkMmUnit__DOT__INV_pes_1_2_macunit_int_Mac_reg_B___05Fq41 
        = (0xffU & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_int_Mac_reg_B)));
    vlTOPp->mkMmUnit__DOT__INV_pes_1_3_macunit_int_Mac_reg_B___05Fq45 
        = (0xffU & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_int_Mac_reg_B)));
    vlTOPp->mkMmUnit__DOT__INV_pes_2_0_macunit_int_Mac_reg_B___05Fq49 
        = (0xffU & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_int_Mac_reg_B)));
    vlTOPp->mkMmUnit__DOT__INV_pes_2_1_macunit_int_Mac_reg_B___05Fq53 
        = (0xffU & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_int_Mac_reg_B)));
    vlTOPp->mkMmUnit__DOT__INV_pes_2_2_macunit_int_Mac_reg_B___05Fq57 
        = (0xffU & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_int_Mac_reg_B)));
    vlTOPp->mkMmUnit__DOT__INV_pes_2_3_macunit_int_Mac_reg_B___05Fq61 
        = (0xffU & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_int_Mac_reg_B)));
    vlTOPp->mkMmUnit__DOT__INV_pes_3_0_macunit_int_Mac_reg_B___05Fq65 
        = (0xffU & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_int_Mac_reg_B)));
    vlTOPp->mkMmUnit__DOT__INV_pes_3_1_macunit_int_Mac_reg_B___05Fq69 
        = (0xffU & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_int_Mac_reg_B)));
    vlTOPp->mkMmUnit__DOT__INV_pes_3_2_macunit_int_Mac_reg_B___05Fq73 
        = (0xffU & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_int_Mac_reg_B)));
    vlTOPp->mkMmUnit__DOT__INV_pes_3_3_macunit_int_Mac_reg_B___05Fq77 
        = (0xffU & (~ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_int_Mac_reg_B)));
    vlTOPp->mkMmUnit__DOT__temp_a___05Fh1321 = ((0xffffff00U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_int_Mac_reg_A) 
                                                                   >> 7U)))) 
                                                    << 8U)) 
                                                | (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_int_Mac_reg_A));
    vlTOPp->mkMmUnit__DOT__temp_a___05Fh221479 = ((0xffffff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_int_Mac_reg_A) 
                                                                     >> 7U)))) 
                                                      << 8U)) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_int_Mac_reg_A));
    vlTOPp->mkMmUnit__DOT__temp_a___05Fh441629 = ((0xffffff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_int_Mac_reg_A) 
                                                                     >> 7U)))) 
                                                      << 8U)) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_int_Mac_reg_A));
    vlTOPp->mkMmUnit__DOT__temp_a___05Fh661779 = ((0xffffff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_int_Mac_reg_A) 
                                                                     >> 7U)))) 
                                                      << 8U)) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_int_Mac_reg_A));
    vlTOPp->mkMmUnit__DOT__temp_a___05Fh881949 = ((0xffffff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_int_Mac_reg_A) 
                                                                     >> 7U)))) 
                                                      << 8U)) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_int_Mac_reg_A));
    vlTOPp->mkMmUnit__DOT__temp_a___05Fh1102096 = (
                                                   (0xffffff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_int_Mac_reg_A) 
                                                                      >> 7U)))) 
                                                       << 8U)) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_int_Mac_reg_A));
    vlTOPp->mkMmUnit__DOT__temp_a___05Fh1322243 = (
                                                   (0xffffff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_int_Mac_reg_A) 
                                                                      >> 7U)))) 
                                                       << 8U)) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_int_Mac_reg_A));
    vlTOPp->mkMmUnit__DOT__temp_a___05Fh1542390 = (
                                                   (0xffffff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_int_Mac_reg_A) 
                                                                      >> 7U)))) 
                                                       << 8U)) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_int_Mac_reg_A));
    vlTOPp->mkMmUnit__DOT__temp_a___05Fh1762560 = (
                                                   (0xffffff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_int_Mac_reg_A) 
                                                                      >> 7U)))) 
                                                       << 8U)) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_int_Mac_reg_A));
    vlTOPp->mkMmUnit__DOT__temp_a___05Fh1982707 = (
                                                   (0xffffff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_int_Mac_reg_A) 
                                                                      >> 7U)))) 
                                                       << 8U)) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_int_Mac_reg_A));
    vlTOPp->mkMmUnit__DOT__temp_a___05Fh2202854 = (
                                                   (0xffffff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_int_Mac_reg_A) 
                                                                      >> 7U)))) 
                                                       << 8U)) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_int_Mac_reg_A));
    vlTOPp->mkMmUnit__DOT__temp_a___05Fh2423001 = (
                                                   (0xffffff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_int_Mac_reg_A) 
                                                                      >> 7U)))) 
                                                       << 8U)) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_int_Mac_reg_A));
    vlTOPp->mkMmUnit__DOT__temp_a___05Fh2643171 = (
                                                   (0xffffff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_int_Mac_reg_A) 
                                                                      >> 7U)))) 
                                                       << 8U)) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_int_Mac_reg_A));
    vlTOPp->mkMmUnit__DOT__temp_a___05Fh2863318 = (
                                                   (0xffffff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_int_Mac_reg_A) 
                                                                      >> 7U)))) 
                                                       << 8U)) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_int_Mac_reg_A));
    vlTOPp->mkMmUnit__DOT__temp_a___05Fh3083465 = (
                                                   (0xffffff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_int_Mac_reg_A) 
                                                                      >> 7U)))) 
                                                       << 8U)) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_int_Mac_reg_A));
    vlTOPp->mkMmUnit__DOT__temp_a___05Fh3303612 = (
                                                   (0xffffff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_int_Mac_reg_A) 
                                                                      >> 7U)))) 
                                                       << 8U)) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_int_Mac_reg_A));
    vlTOPp->get_results[0U] = vlTOPp->mkMmUnit__DOT__get_results[0U];
    vlTOPp->get_results[1U] = vlTOPp->mkMmUnit__DOT__get_results[1U];
    vlTOPp->get_results[2U] = vlTOPp->mkMmUnit__DOT__get_results[2U];
    vlTOPp->get_results[3U] = vlTOPp->mkMmUnit__DOT__get_results[3U];
    vlTOPp->get_results[4U] = vlTOPp->mkMmUnit__DOT__get_results[4U];
    vlTOPp->get_results[5U] = vlTOPp->mkMmUnit__DOT__get_results[5U];
    vlTOPp->get_results[6U] = vlTOPp->mkMmUnit__DOT__get_results[6U];
    vlTOPp->get_results[7U] = vlTOPp->mkMmUnit__DOT__get_results[7U];
    vlTOPp->get_results[8U] = vlTOPp->mkMmUnit__DOT__get_results[8U];
    vlTOPp->get_results[9U] = vlTOPp->mkMmUnit__DOT__get_results[9U];
    vlTOPp->get_results[0xaU] = vlTOPp->mkMmUnit__DOT__get_results[0xaU];
    vlTOPp->get_results[0xbU] = vlTOPp->mkMmUnit__DOT__get_results[0xbU];
    vlTOPp->get_results[0xcU] = vlTOPp->mkMmUnit__DOT__get_results[0xcU];
    vlTOPp->get_results[0xdU] = vlTOPp->mkMmUnit__DOT__get_results[0xdU];
    vlTOPp->get_results[0xeU] = vlTOPp->mkMmUnit__DOT__get_results[0xeU];
    vlTOPp->get_results[0xfU] = vlTOPp->mkMmUnit__DOT__get_results[0xfU];
    vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh396018 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh432795) 
                    - (IData)(0x7fU)));
    vlTOPp->mkMmUnit__DOT__product___05Fh399413 = (0x80U 
                                                   | ((0x7eU 
                                                       & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A)) 
                                                      | (1U 
                                                         & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq2))));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh616168 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh652945) 
                    - (IData)(0x7fU)));
    vlTOPp->mkMmUnit__DOT__product___05Fh619563 = (0x80U 
                                                   | ((0x7eU 
                                                       & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A)) 
                                                      | (1U 
                                                         & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq3))));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh836318 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh873095) 
                    - (IData)(0x7fU)));
    vlTOPp->mkMmUnit__DOT__product___05Fh839713 = (0x80U 
                                                   | ((0x7eU 
                                                       & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A)) 
                                                      | (1U 
                                                         & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq4))));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1056488 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1093265) 
                    - (IData)(0x7fU)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1059883 = 
        (0x80U | ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A)) 
                  | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq5))));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1276635 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1313412) 
                    - (IData)(0x7fU)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1280030 = 
        (0x80U | ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A)) 
                  | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq6))));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1496782 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1533559) 
                    - (IData)(0x7fU)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1500177 = 
        (0x80U | ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A)) 
                  | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq7))));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1716929 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1753706) 
                    - (IData)(0x7fU)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1720324 = 
        (0x80U | ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A)) 
                  | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq8))));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1937099 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1973876) 
                    - (IData)(0x7fU)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1940494 = 
        (0x80U | ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A)) 
                  | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq9))));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh2157246 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2194023) 
                    - (IData)(0x7fU)));
    vlTOPp->mkMmUnit__DOT__product___05Fh2160641 = 
        (0x80U | ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A)) 
                  | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq10))));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh2377393 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2414170) 
                    - (IData)(0x7fU)));
    vlTOPp->mkMmUnit__DOT__product___05Fh2380788 = 
        (0x80U | ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A)) 
                  | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq11))));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh2597540 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2634317) 
                    - (IData)(0x7fU)));
    vlTOPp->mkMmUnit__DOT__product___05Fh2600935 = 
        (0x80U | ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A)) 
                  | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq12))));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh2817710 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2854487) 
                    - (IData)(0x7fU)));
    vlTOPp->mkMmUnit__DOT__product___05Fh2821105 = 
        (0x80U | ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A)) 
                  | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq13))));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh3037857 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3074634) 
                    - (IData)(0x7fU)));
    vlTOPp->mkMmUnit__DOT__product___05Fh3041252 = 
        (0x80U | ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A)) 
                  | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq14))));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh3258004 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3294781) 
                    - (IData)(0x7fU)));
    vlTOPp->mkMmUnit__DOT__product___05Fh3261399 = 
        (0x80U | ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A)) 
                  | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq15))));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh3478151 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3514928) 
                    - (IData)(0x7fU)));
    vlTOPp->mkMmUnit__DOT__product___05Fh3481546 = 
        (0x80U | ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A)) 
                  | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq16))));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh175864 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh212641) 
                    - (IData)(0x7fU)));
    vlTOPp->mkMmUnit__DOT__product___05Fh179259 = (0x80U 
                                                   | ((0x7eU 
                                                       & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A)) 
                                                      | (1U 
                                                         & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_A_BIT_0_THEN_1_ETC___05Fq1))));
    if ((1U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_0_macunit_int_Mac_reg_B___05Fq17))) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_0_0_macunit_int_Mac_reg_B7_BIT___05FETC___05Fq81 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_0_0_macunit_int_Mac_reg_B7_BIT_0_TH_ETC___05Fq18 = 2U;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_0_0_macunit_int_Mac_reg_B7_BIT___05FETC___05Fq81 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_0_0_macunit_int_Mac_reg_B7_BIT_0_TH_ETC___05Fq18 = 0U;
    }
    if ((1U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_1_macunit_int_Mac_reg_B___05Fq21))) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_0_1_macunit_int_Mac_reg_B1_BIT___05FETC___05Fq115 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_0_1_macunit_int_Mac_reg_B1_BIT_0_TH_ETC___05Fq22 = 2U;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_0_1_macunit_int_Mac_reg_B1_BIT___05FETC___05Fq115 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_0_1_macunit_int_Mac_reg_B1_BIT_0_TH_ETC___05Fq22 = 0U;
    }
    if ((1U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_2_macunit_int_Mac_reg_B___05Fq25))) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_0_2_macunit_int_Mac_reg_B5_BIT___05FETC___05Fq151 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_0_2_macunit_int_Mac_reg_B5_BIT_0_TH_ETC___05Fq26 = 2U;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_0_2_macunit_int_Mac_reg_B5_BIT___05FETC___05Fq151 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_0_2_macunit_int_Mac_reg_B5_BIT_0_TH_ETC___05Fq26 = 0U;
    }
    if ((1U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_3_macunit_int_Mac_reg_B___05Fq29))) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_0_3_macunit_int_Mac_reg_B9_BIT___05FETC___05Fq186 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_0_3_macunit_int_Mac_reg_B9_BIT_0_TH_ETC___05Fq30 = 2U;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_0_3_macunit_int_Mac_reg_B9_BIT___05FETC___05Fq186 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_0_3_macunit_int_Mac_reg_B9_BIT_0_TH_ETC___05Fq30 = 0U;
    }
    if ((1U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_0_macunit_int_Mac_reg_B___05Fq33))) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_1_0_macunit_int_Mac_reg_B3_BIT___05FETC___05Fq221 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_1_0_macunit_int_Mac_reg_B3_BIT_0_TH_ETC___05Fq34 = 2U;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_1_0_macunit_int_Mac_reg_B3_BIT___05FETC___05Fq221 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_1_0_macunit_int_Mac_reg_B3_BIT_0_TH_ETC___05Fq34 = 0U;
    }
    if ((1U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_1_macunit_int_Mac_reg_B___05Fq37))) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_1_1_macunit_int_Mac_reg_B7_BIT___05FETC___05Fq256 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_1_1_macunit_int_Mac_reg_B7_BIT_0_TH_ETC___05Fq38 = 2U;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_1_1_macunit_int_Mac_reg_B7_BIT___05FETC___05Fq256 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_1_1_macunit_int_Mac_reg_B7_BIT_0_TH_ETC___05Fq38 = 0U;
    }
    if ((1U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_2_macunit_int_Mac_reg_B___05Fq41))) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_1_2_macunit_int_Mac_reg_B1_BIT___05FETC___05Fq291 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_1_2_macunit_int_Mac_reg_B1_BIT_0_TH_ETC___05Fq42 = 2U;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_1_2_macunit_int_Mac_reg_B1_BIT___05FETC___05Fq291 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_1_2_macunit_int_Mac_reg_B1_BIT_0_TH_ETC___05Fq42 = 0U;
    }
    if ((1U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_3_macunit_int_Mac_reg_B___05Fq45))) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_1_3_macunit_int_Mac_reg_B5_BIT___05FETC___05Fq326 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_1_3_macunit_int_Mac_reg_B5_BIT_0_TH_ETC___05Fq46 = 2U;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_1_3_macunit_int_Mac_reg_B5_BIT___05FETC___05Fq326 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_1_3_macunit_int_Mac_reg_B5_BIT_0_TH_ETC___05Fq46 = 0U;
    }
    if ((1U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_0_macunit_int_Mac_reg_B___05Fq49))) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_2_0_macunit_int_Mac_reg_B9_BIT___05FETC___05Fq361 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_2_0_macunit_int_Mac_reg_B9_BIT_0_TH_ETC___05Fq50 = 2U;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_2_0_macunit_int_Mac_reg_B9_BIT___05FETC___05Fq361 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_2_0_macunit_int_Mac_reg_B9_BIT_0_TH_ETC___05Fq50 = 0U;
    }
    if ((1U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_1_macunit_int_Mac_reg_B___05Fq53))) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_2_1_macunit_int_Mac_reg_B3_BIT___05FETC___05Fq396 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_2_1_macunit_int_Mac_reg_B3_BIT_0_TH_ETC___05Fq54 = 2U;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_2_1_macunit_int_Mac_reg_B3_BIT___05FETC___05Fq396 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_2_1_macunit_int_Mac_reg_B3_BIT_0_TH_ETC___05Fq54 = 0U;
    }
    if ((1U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_2_macunit_int_Mac_reg_B___05Fq57))) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_2_2_macunit_int_Mac_reg_B7_BIT___05FETC___05Fq431 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_2_2_macunit_int_Mac_reg_B7_BIT_0_TH_ETC___05Fq58 = 2U;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_2_2_macunit_int_Mac_reg_B7_BIT___05FETC___05Fq431 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_2_2_macunit_int_Mac_reg_B7_BIT_0_TH_ETC___05Fq58 = 0U;
    }
    if ((1U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_3_macunit_int_Mac_reg_B___05Fq61))) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_2_3_macunit_int_Mac_reg_B1_BIT___05FETC___05Fq466 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_2_3_macunit_int_Mac_reg_B1_BIT_0_TH_ETC___05Fq62 = 2U;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_2_3_macunit_int_Mac_reg_B1_BIT___05FETC___05Fq466 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_2_3_macunit_int_Mac_reg_B1_BIT_0_TH_ETC___05Fq62 = 0U;
    }
    if ((1U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_0_macunit_int_Mac_reg_B___05Fq65))) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_3_0_macunit_int_Mac_reg_B5_BIT___05FETC___05Fq501 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_3_0_macunit_int_Mac_reg_B5_BIT_0_TH_ETC___05Fq66 = 2U;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_3_0_macunit_int_Mac_reg_B5_BIT___05FETC___05Fq501 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_3_0_macunit_int_Mac_reg_B5_BIT_0_TH_ETC___05Fq66 = 0U;
    }
    if ((1U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_1_macunit_int_Mac_reg_B___05Fq69))) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_3_1_macunit_int_Mac_reg_B9_BIT___05FETC___05Fq536 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_3_1_macunit_int_Mac_reg_B9_BIT_0_TH_ETC___05Fq70 = 2U;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_3_1_macunit_int_Mac_reg_B9_BIT___05FETC___05Fq536 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_3_1_macunit_int_Mac_reg_B9_BIT_0_TH_ETC___05Fq70 = 0U;
    }
    if ((1U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_2_macunit_int_Mac_reg_B___05Fq73))) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_3_2_macunit_int_Mac_reg_B3_BIT___05FETC___05Fq571 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_3_2_macunit_int_Mac_reg_B3_BIT_0_TH_ETC___05Fq74 = 2U;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_3_2_macunit_int_Mac_reg_B3_BIT___05FETC___05Fq571 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_3_2_macunit_int_Mac_reg_B3_BIT_0_TH_ETC___05Fq74 = 0U;
    }
    if ((1U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_3_macunit_int_Mac_reg_B___05Fq77))) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_3_3_macunit_int_Mac_reg_B7_BIT___05FETC___05Fq606 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_3_3_macunit_int_Mac_reg_B7_BIT_0_TH_ETC___05Fq78 = 2U;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_3_3_macunit_int_Mac_reg_B7_BIT___05FETC___05Fq606 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_pes_3_3_macunit_int_Mac_reg_B7_BIT_0_TH_ETC___05Fq78 = 0U;
    }
    vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 = 
        (~ vlTOPp->mkMmUnit__DOT__temp_a___05Fh1321);
    vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
        = (~ vlTOPp->mkMmUnit__DOT__temp_a___05Fh221479);
    vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
        = (~ vlTOPp->mkMmUnit__DOT__temp_a___05Fh441629);
    vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
        = (~ vlTOPp->mkMmUnit__DOT__temp_a___05Fh661779);
    vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
        = (~ vlTOPp->mkMmUnit__DOT__temp_a___05Fh881949);
    vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
        = (~ vlTOPp->mkMmUnit__DOT__temp_a___05Fh1102096);
    vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
        = (~ vlTOPp->mkMmUnit__DOT__temp_a___05Fh1322243);
    vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
        = (~ vlTOPp->mkMmUnit__DOT__temp_a___05Fh1542390);
    vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
        = (~ vlTOPp->mkMmUnit__DOT__temp_a___05Fh1762560);
    vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
        = (~ vlTOPp->mkMmUnit__DOT__temp_a___05Fh1982707);
    vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
        = (~ vlTOPp->mkMmUnit__DOT__temp_a___05Fh2202854);
    vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
        = (~ vlTOPp->mkMmUnit__DOT__temp_a___05Fh2423001);
    vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
        = (~ vlTOPp->mkMmUnit__DOT__temp_a___05Fh2643171);
    vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
        = (~ vlTOPp->mkMmUnit__DOT__temp_a___05Fh2863318);
    vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
        = (~ vlTOPp->mkMmUnit__DOT__temp_a___05Fh3083465);
    vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
        = (~ vlTOPp->mkMmUnit__DOT__temp_a___05Fh3303612);
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh432778 
        = (0xffU & ((IData)(2U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh396018)));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh432648 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh396018)));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh399413)
            : 0U);
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh652928 
        = (0xffU & ((IData)(2U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh616168)));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh652798 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh616168)));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh619563)
            : 0U);
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh873078 
        = (0xffU & ((IData)(2U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh836318)));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh872948 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh836318)));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh839713)
            : 0U);
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh1093248 
        = (0xffU & ((IData)(2U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1056488)));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh1093118 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1056488)));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1059883)
            : 0U);
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh1313395 
        = (0xffU & ((IData)(2U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1276635)));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh1313265 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1276635)));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1280030)
            : 0U);
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh1533542 
        = (0xffU & ((IData)(2U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1496782)));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh1533412 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1496782)));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1500177)
            : 0U);
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh1753689 
        = (0xffU & ((IData)(2U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1716929)));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh1753559 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1716929)));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1720324)
            : 0U);
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh1973859 
        = (0xffU & ((IData)(2U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1937099)));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh1973729 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1937099)));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1940494)
            : 0U);
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh2194006 
        = (0xffU & ((IData)(2U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh2157246)));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh2193876 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh2157246)));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2160641)
            : 0U);
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh2414153 
        = (0xffU & ((IData)(2U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh2377393)));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh2414023 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh2377393)));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2380788)
            : 0U);
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh2634300 
        = (0xffU & ((IData)(2U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh2597540)));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh2634170 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh2597540)));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2600935)
            : 0U);
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh2854470 
        = (0xffU & ((IData)(2U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh2817710)));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh2854340 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh2817710)));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2821105)
            : 0U);
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh3074617 
        = (0xffU & ((IData)(2U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh3037857)));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh3074487 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh3037857)));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3041252)
            : 0U);
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh3294764 
        = (0xffU & ((IData)(2U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh3258004)));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh3294634 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh3258004)));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3261399)
            : 0U);
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh3514911 
        = (0xffU & ((IData)(2U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh3478151)));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh3514781 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh3478151)));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3481546)
            : 0U);
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh212624 
        = (0xffU & ((IData)(2U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh175864)));
    vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh212494 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh175864)));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh179259)
            : 0U);
    vlTOPp->mkMmUnit__DOT__y___05Fh2044 = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_0_0_macunit_int_Mac_reg_B7_BIT_0_TH_ETC___05Fq18) 
                                                  >> 1U) 
                                                 & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_0_macunit_int_Mac_reg_B___05Fq17) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh222199 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_0_1_macunit_int_Mac_reg_B1_BIT_0_TH_ETC___05Fq22) 
                                                    >> 1U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_1_macunit_int_Mac_reg_B___05Fq21) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh442349 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_0_2_macunit_int_Mac_reg_B5_BIT_0_TH_ETC___05Fq26) 
                                                    >> 1U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_2_macunit_int_Mac_reg_B___05Fq25) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh662499 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_0_3_macunit_int_Mac_reg_B9_BIT_0_TH_ETC___05Fq30) 
                                                    >> 1U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_3_macunit_int_Mac_reg_B___05Fq29) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh882669 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_1_0_macunit_int_Mac_reg_B3_BIT_0_TH_ETC___05Fq34) 
                                                    >> 1U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_0_macunit_int_Mac_reg_B___05Fq33) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1102816 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_1_1_macunit_int_Mac_reg_B7_BIT_0_TH_ETC___05Fq38) 
                                                >> 1U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_1_macunit_int_Mac_reg_B___05Fq37) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1322963 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_1_2_macunit_int_Mac_reg_B1_BIT_0_TH_ETC___05Fq42) 
                                                >> 1U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_2_macunit_int_Mac_reg_B___05Fq41) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1543110 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_1_3_macunit_int_Mac_reg_B5_BIT_0_TH_ETC___05Fq46) 
                                                >> 1U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_3_macunit_int_Mac_reg_B___05Fq45) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1763280 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_2_0_macunit_int_Mac_reg_B9_BIT_0_TH_ETC___05Fq50) 
                                                >> 1U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_0_macunit_int_Mac_reg_B___05Fq49) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1983427 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_2_1_macunit_int_Mac_reg_B3_BIT_0_TH_ETC___05Fq54) 
                                                >> 1U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_1_macunit_int_Mac_reg_B___05Fq53) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2203574 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_2_2_macunit_int_Mac_reg_B7_BIT_0_TH_ETC___05Fq58) 
                                                >> 1U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_2_macunit_int_Mac_reg_B___05Fq57) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2423721 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_2_3_macunit_int_Mac_reg_B1_BIT_0_TH_ETC___05Fq62) 
                                                >> 1U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_3_macunit_int_Mac_reg_B___05Fq61) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2643891 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_3_0_macunit_int_Mac_reg_B5_BIT_0_TH_ETC___05Fq66) 
                                                >> 1U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_0_macunit_int_Mac_reg_B___05Fq65) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2864038 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_3_1_macunit_int_Mac_reg_B9_BIT_0_TH_ETC___05Fq70) 
                                                >> 1U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_1_macunit_int_Mac_reg_B___05Fq69) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3084185 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_3_2_macunit_int_Mac_reg_B3_BIT_0_TH_ETC___05Fq74) 
                                                >> 1U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_2_macunit_int_Mac_reg_B___05Fq73) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3304332 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_3_3_macunit_int_Mac_reg_B7_BIT_0_TH_ETC___05Fq78) 
                                                >> 1U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_3_macunit_int_Mac_reg_B___05Fq77) 
                                                  >> 1U)));
    if ((1U & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19)) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a3219_BIT_0_THEN_1_ELSE_0___05Fq82 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a3219_BIT_0_THEN_2_ELSE_0___05Fq20 = 2ULL;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a3219_BIT_0_THEN_1_ELSE_0___05Fq82 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a3219_BIT_0_THEN_2_ELSE_0___05Fq20 = 0ULL;
    }
    if ((1U & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23)) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a214793_BIT_0_THEN_1_ELSE_0___05Fq116 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a214793_BIT_0_THEN_2_ELSE_0___05Fq24 = 2ULL;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a214793_BIT_0_THEN_1_ELSE_0___05Fq116 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a214793_BIT_0_THEN_2_ELSE_0___05Fq24 = 0ULL;
    }
    if ((1U & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27)) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a416297_BIT_0_THEN_1_ELSE_0___05Fq152 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a416297_BIT_0_THEN_2_ELSE_0___05Fq28 = 2ULL;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a416297_BIT_0_THEN_1_ELSE_0___05Fq152 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a416297_BIT_0_THEN_2_ELSE_0___05Fq28 = 0ULL;
    }
    if ((1U & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31)) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a617791_BIT_0_THEN_1_ELSE_0___05Fq187 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a617791_BIT_0_THEN_2_ELSE_0___05Fq32 = 2ULL;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a617791_BIT_0_THEN_1_ELSE_0___05Fq187 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a617791_BIT_0_THEN_2_ELSE_0___05Fq32 = 0ULL;
    }
    if ((1U & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35)) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a819495_BIT_0_THEN_1_ELSE_0___05Fq222 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a819495_BIT_0_THEN_2_ELSE_0___05Fq36 = 2ULL;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a819495_BIT_0_THEN_1_ELSE_0___05Fq222 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a819495_BIT_0_THEN_2_ELSE_0___05Fq36 = 0ULL;
    }
    if ((1U & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39)) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a1020969_BIT_0_THEN_1_ELSE_0___05Fq257 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a1020969_BIT_0_THEN_2_ELSE_0___05Fq40 = 2ULL;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a1020969_BIT_0_THEN_1_ELSE_0___05Fq257 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a1020969_BIT_0_THEN_2_ELSE_0___05Fq40 = 0ULL;
    }
    if ((1U & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43)) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a3222433_BIT_0_THEN_1_ELSE_0___05Fq292 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a3222433_BIT_0_THEN_2_ELSE_0___05Fq44 = 2ULL;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a3222433_BIT_0_THEN_1_ELSE_0___05Fq292 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a3222433_BIT_0_THEN_2_ELSE_0___05Fq44 = 0ULL;
    }
    if ((1U & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47)) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a5423907_BIT_0_THEN_1_ELSE_0___05Fq327 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a5423907_BIT_0_THEN_2_ELSE_0___05Fq48 = 2ULL;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a5423907_BIT_0_THEN_1_ELSE_0___05Fq327 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a5423907_BIT_0_THEN_2_ELSE_0___05Fq48 = 0ULL;
    }
    if ((1U & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51)) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a7625601_BIT_0_THEN_1_ELSE_0___05Fq362 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a7625601_BIT_0_THEN_2_ELSE_0___05Fq52 = 2ULL;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a7625601_BIT_0_THEN_1_ELSE_0___05Fq362 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a7625601_BIT_0_THEN_2_ELSE_0___05Fq52 = 0ULL;
    }
    if ((1U & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55)) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a9827075_BIT_0_THEN_1_ELSE_0___05Fq397 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a9827075_BIT_0_THEN_2_ELSE_0___05Fq56 = 2ULL;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a9827075_BIT_0_THEN_1_ELSE_0___05Fq397 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a9827075_BIT_0_THEN_2_ELSE_0___05Fq56 = 0ULL;
    }
    if ((1U & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59)) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a2028549_BIT_0_THEN_1_ELSE_0___05Fq432 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a2028549_BIT_0_THEN_2_ELSE_0___05Fq60 = 2ULL;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a2028549_BIT_0_THEN_1_ELSE_0___05Fq432 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a2028549_BIT_0_THEN_2_ELSE_0___05Fq60 = 0ULL;
    }
    if ((1U & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63)) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a4230013_BIT_0_THEN_1_ELSE_0___05Fq467 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a4230013_BIT_0_THEN_2_ELSE_0___05Fq64 = 2ULL;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a4230013_BIT_0_THEN_1_ELSE_0___05Fq467 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a4230013_BIT_0_THEN_2_ELSE_0___05Fq64 = 0ULL;
    }
    if ((1U & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67)) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a6431717_BIT_0_THEN_1_ELSE_0___05Fq502 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a6431717_BIT_0_THEN_2_ELSE_0___05Fq68 = 2ULL;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a6431717_BIT_0_THEN_1_ELSE_0___05Fq502 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a6431717_BIT_0_THEN_2_ELSE_0___05Fq68 = 0ULL;
    }
    if ((1U & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71)) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a8633181_BIT_0_THEN_1_ELSE_0___05Fq537 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a8633181_BIT_0_THEN_2_ELSE_0___05Fq72 = 2ULL;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a8633181_BIT_0_THEN_1_ELSE_0___05Fq537 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a8633181_BIT_0_THEN_2_ELSE_0___05Fq72 = 0ULL;
    }
    if ((1U & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75)) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a0834655_BIT_0_THEN_1_ELSE_0___05Fq572 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a0834655_BIT_0_THEN_2_ELSE_0___05Fq76 = 2ULL;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a0834655_BIT_0_THEN_1_ELSE_0___05Fq572 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a0834655_BIT_0_THEN_2_ELSE_0___05Fq76 = 0ULL;
    }
    if ((1U & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79)) {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a3036129_BIT_0_THEN_1_ELSE_0___05Fq607 = 0U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a3036129_BIT_0_THEN_2_ELSE_0___05Fq80 = 2ULL;
    } else {
        vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a3036129_BIT_0_THEN_1_ELSE_0___05Fq607 = 1U;
        vlTOPp->mkMmUnit__DOT__IF_INV_temp_a3036129_BIT_0_THEN_2_ELSE_0___05Fq80 = 0ULL;
    }
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_ETC___05Fq134 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh405816 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242) 
                                                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh405907 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242) 
                                                    >> 7U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh405545 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242) 
                                                    >> 7U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh405636 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242) 
                                                    >> 6U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh405274 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh405365 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242) 
                                                    >> 5U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh405003 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242) 
                                                    >> 5U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh405094 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242) 
                                                    >> 4U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh404732 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242) 
                                                    >> 4U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh404823 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242) 
                                                    >> 3U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh404460 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242) 
                                                    >> 3U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh404551 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242) 
                                                    >> 2U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_ETC___05Fq133 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242) 
                   >> 1U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A)))
            ? 4U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh404192 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242) 
                                                    >> 2U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_ETC___05Fq170 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh625966 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740) 
                                                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh626057 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740) 
                                                    >> 7U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh625695 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740) 
                                                    >> 7U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh625786 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740) 
                                                    >> 6U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh625424 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh625515 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740) 
                                                    >> 5U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh625153 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740) 
                                                    >> 5U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh625244 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740) 
                                                    >> 4U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh624882 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740) 
                                                    >> 4U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh624973 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740) 
                                                    >> 3U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh624610 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740) 
                                                    >> 3U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh624701 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740) 
                                                    >> 2U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_ETC___05Fq169 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740) 
                   >> 1U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A)))
            ? 4U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh624342 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740) 
                                                    >> 2U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_ETC___05Fq205 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh846116 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238) 
                                                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh846207 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238) 
                                                    >> 7U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh845845 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238) 
                                                    >> 7U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh845936 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238) 
                                                    >> 6U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh845574 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh845665 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238) 
                                                    >> 5U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh845303 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238) 
                                                    >> 5U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh845394 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238) 
                                                    >> 4U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh845032 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238) 
                                                    >> 4U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh845123 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238) 
                                                    >> 3U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh844760 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238) 
                                                    >> 3U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh844851 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238) 
                                                    >> 2U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_ETC___05Fq204 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238) 
                   >> 1U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A)))
            ? 4U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh844492 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238) 
                                                    >> 2U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq240 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1066286 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736) 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1066377 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1066015 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1066106 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1065744 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1065835 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1065473 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1065564 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1065202 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1065293 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1064930 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1065021 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq239 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736) 
                   >> 1U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A)))
            ? 4U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1064662 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736) 
                                                >> 2U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq275 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1286433 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234) 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1286524 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1286162 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1286253 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1285891 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1285982 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1285620 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1285711 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1285349 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1285440 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1285077 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1285168 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq274 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234) 
                   >> 1U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A)))
            ? 4U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1284809 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234) 
                                                >> 2U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq310 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1506580 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732) 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1506671 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1506309 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1506400 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1506038 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1506129 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1505767 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1505858 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1505496 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1505587 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1505224 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1505315 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq309 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732) 
                   >> 1U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A)))
            ? 4U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1504956 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732) 
                                                >> 2U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq345 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1726727 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230) 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1726818 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1726456 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1726547 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1726185 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1726276 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1725914 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1726005 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1725643 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1725734 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1725371 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1725462 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq344 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230) 
                   >> 1U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A)))
            ? 4U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1725103 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230) 
                                                >> 2U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq380 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1946897 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728) 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1946988 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1946626 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1946717 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1946355 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1946446 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1946084 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1946175 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1945813 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1945904 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1945541 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1945632 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq379 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728) 
                   >> 1U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A)))
            ? 4U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1945273 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728) 
                                                >> 2U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq415 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2167044 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226) 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2167135 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2166773 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2166864 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2166502 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2166593 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2166231 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2166322 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2165960 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2166051 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2165688 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2165779 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq414 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226) 
                   >> 1U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A)))
            ? 4U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2165420 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226) 
                                                >> 2U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq450 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2387191 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724) 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2387282 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2386920 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2387011 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2386649 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2386740 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2386378 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2386469 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2386107 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2386198 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2385835 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2385926 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq449 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724) 
                   >> 1U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A)))
            ? 4U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2385567 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724) 
                                                >> 2U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq485 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2607338 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222) 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2607429 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2607067 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2607158 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2606796 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2606887 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2606525 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2606616 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2606254 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2606345 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2605982 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2606073 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq484 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222) 
                   >> 1U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A)))
            ? 4U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2605714 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222) 
                                                >> 2U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq520 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2827508 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720) 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2827599 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2827237 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2827328 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2826966 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2827057 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2826695 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2826786 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2826424 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2826515 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2826152 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2826243 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq519 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720) 
                   >> 1U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A)))
            ? 4U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2825884 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720) 
                                                >> 2U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq555 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3047655 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218) 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3047746 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3047384 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3047475 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3047113 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3047204 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3046842 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3046933 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3046571 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3046662 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3046299 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3046390 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq554 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218) 
                   >> 1U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A)))
            ? 4U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3046031 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218) 
                                                >> 2U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq590 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3267802 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716) 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3267893 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3267531 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3267622 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3267260 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3267351 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3266989 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3267080 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3266718 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3266809 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3266446 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3266537 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq589 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716) 
                   >> 1U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A)))
            ? 4U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3266178 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716) 
                                                >> 2U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq625 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3487949 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214) 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3488040 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3487678 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3487769 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3487407 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3487498 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3487136 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3487227 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3486865 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3486956 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3486593 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3486684 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq624 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214) 
                   >> 1U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A)))
            ? 4U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3486325 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214) 
                                                >> 2U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_ETC___05Fq100 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh185662 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744) 
                                                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh185753 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744) 
                                                    >> 7U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh185391 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744) 
                                                    >> 7U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh185482 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744) 
                                                    >> 6U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh185120 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh185211 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744) 
                                                    >> 5U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh184849 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744) 
                                                    >> 5U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh184940 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744) 
                                                    >> 4U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh184578 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744) 
                                                    >> 4U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh184669 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744) 
                                                    >> 3U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh184306 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744) 
                                                    >> 3U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh184397 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744) 
                                                    >> 2U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_ETC___05Fq99 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744) 
                   >> 1U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A)))
            ? 4U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh184038 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744) 
                                                    >> 2U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2316 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2044) 
                                           & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_0_macunit_int_Mac_reg_B___05Fq17) 
                                              >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh222471 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh222199) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_1_macunit_int_Mac_reg_B___05Fq21) 
                                                >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh442621 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh442349) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_2_macunit_int_Mac_reg_B___05Fq25) 
                                                >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh662771 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh662499) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_3_macunit_int_Mac_reg_B___05Fq29) 
                                                >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh882941 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh882669) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_0_macunit_int_Mac_reg_B___05Fq33) 
                                                >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1103088 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1102816) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_1_macunit_int_Mac_reg_B___05Fq37) 
                                                 >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1323235 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1322963) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_2_macunit_int_Mac_reg_B___05Fq41) 
                                                 >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1543382 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1543110) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_3_macunit_int_Mac_reg_B___05Fq45) 
                                                 >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1763552 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1763280) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_0_macunit_int_Mac_reg_B___05Fq49) 
                                                 >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1983699 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1983427) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_1_macunit_int_Mac_reg_B___05Fq53) 
                                                 >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2203846 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2203574) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_2_macunit_int_Mac_reg_B___05Fq57) 
                                                 >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2423993 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2423721) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_3_macunit_int_Mac_reg_B___05Fq61) 
                                                 >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2644163 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2643891) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_0_macunit_int_Mac_reg_B___05Fq65) 
                                                 >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2864310 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2864038) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_1_macunit_int_Mac_reg_B___05Fq69) 
                                                 >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3084457 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3084185) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_2_macunit_int_Mac_reg_B___05Fq73) 
                                                 >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3304604 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3304332) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_3_macunit_int_Mac_reg_B___05Fq77) 
                                                 >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh26701 = (1U & ((IData)(
                                                          (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a3219_BIT_0_THEN_2_ELSE_0___05Fq20 
                                                           >> 1U)) 
                                                  & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                                     >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh246856 = (1U & ((IData)(
                                                           (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a214793_BIT_0_THEN_2_ELSE_0___05Fq24 
                                                            >> 1U)) 
                                                   & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh467006 = (1U & ((IData)(
                                                           (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a416297_BIT_0_THEN_2_ELSE_0___05Fq28 
                                                            >> 1U)) 
                                                   & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh687156 = (1U & ((IData)(
                                                           (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a617791_BIT_0_THEN_2_ELSE_0___05Fq32 
                                                            >> 1U)) 
                                                   & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh907326 = (1U & ((IData)(
                                                           (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a819495_BIT_0_THEN_2_ELSE_0___05Fq36 
                                                            >> 1U)) 
                                                   & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1127473 = (1U & 
                                              ((IData)(
                                                       (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a1020969_BIT_0_THEN_2_ELSE_0___05Fq40 
                                                        >> 1U)) 
                                               & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1347620 = (1U & 
                                              ((IData)(
                                                       (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a3222433_BIT_0_THEN_2_ELSE_0___05Fq44 
                                                        >> 1U)) 
                                               & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1567767 = (1U & 
                                              ((IData)(
                                                       (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a5423907_BIT_0_THEN_2_ELSE_0___05Fq48 
                                                        >> 1U)) 
                                               & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1787937 = (1U & 
                                              ((IData)(
                                                       (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a7625601_BIT_0_THEN_2_ELSE_0___05Fq52 
                                                        >> 1U)) 
                                               & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2008084 = (1U & 
                                              ((IData)(
                                                       (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a9827075_BIT_0_THEN_2_ELSE_0___05Fq56 
                                                        >> 1U)) 
                                               & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2228231 = (1U & 
                                              ((IData)(
                                                       (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a2028549_BIT_0_THEN_2_ELSE_0___05Fq60 
                                                        >> 1U)) 
                                               & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2448378 = (1U & 
                                              ((IData)(
                                                       (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a4230013_BIT_0_THEN_2_ELSE_0___05Fq64 
                                                        >> 1U)) 
                                               & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2668548 = (1U & 
                                              ((IData)(
                                                       (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a6431717_BIT_0_THEN_2_ELSE_0___05Fq68 
                                                        >> 1U)) 
                                               & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2888695 = (1U & 
                                              ((IData)(
                                                       (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a8633181_BIT_0_THEN_2_ELSE_0___05Fq72 
                                                        >> 1U)) 
                                               & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3108842 = (1U & 
                                              ((IData)(
                                                       (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a0834655_BIT_0_THEN_2_ELSE_0___05Fq76 
                                                        >> 1U)) 
                                               & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3328989 = (1U & 
                                              ((IData)(
                                                       (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a3036129_BIT_0_THEN_2_ELSE_0___05Fq80 
                                                        >> 1U)) 
                                               & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh404552 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_ETC___05Fq133 
                                              >> 2U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh404192));
    vlTOPp->mkMmUnit__DOT__y___05Fh624702 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_ETC___05Fq169 
                                              >> 2U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh624342));
    vlTOPp->mkMmUnit__DOT__y___05Fh844852 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_ETC___05Fq204 
                                              >> 2U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh844492));
    vlTOPp->mkMmUnit__DOT__y___05Fh1065022 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq239 
                                               >> 2U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1064662));
    vlTOPp->mkMmUnit__DOT__y___05Fh1285169 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq274 
                                               >> 2U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1284809));
    vlTOPp->mkMmUnit__DOT__y___05Fh1505316 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq309 
                                               >> 2U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1504956));
    vlTOPp->mkMmUnit__DOT__y___05Fh1725463 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq344 
                                               >> 2U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1725103));
    vlTOPp->mkMmUnit__DOT__y___05Fh1945633 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq379 
                                               >> 2U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1945273));
    vlTOPp->mkMmUnit__DOT__y___05Fh2165780 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq414 
                                               >> 2U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2165420));
    vlTOPp->mkMmUnit__DOT__y___05Fh2385927 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq449 
                                               >> 2U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2385567));
    vlTOPp->mkMmUnit__DOT__y___05Fh2606074 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq484 
                                               >> 2U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2605714));
    vlTOPp->mkMmUnit__DOT__y___05Fh2826244 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq519 
                                               >> 2U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2825884));
    vlTOPp->mkMmUnit__DOT__y___05Fh3046391 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq554 
                                               >> 2U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3046031));
    vlTOPp->mkMmUnit__DOT__y___05Fh3266538 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq589 
                                               >> 2U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3266178));
    vlTOPp->mkMmUnit__DOT__y___05Fh3486685 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq624 
                                               >> 2U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3486325));
    vlTOPp->mkMmUnit__DOT__y___05Fh184398 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_ETC___05Fq99 
                                              >> 2U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh184038));
    vlTOPp->mkMmUnit__DOT__INV_pes_0_0_macunit_int_Mac_reg_B_BIT_3_6_XOR___05FETC___05F_d35 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_0_macunit_int_Mac_reg_B___05Fq17)) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2316) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_0_macunit_int_Mac_reg_B___05Fq17)) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2044) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_0_macunit_int_Mac_reg_B___05Fq17)) 
                                           ^ (0xfffffffeU 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_0_0_macunit_int_Mac_reg_B7_BIT_0_TH_ETC___05Fq18)))) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_0_0_macunit_int_Mac_reg_B7_BIT___05FETC___05Fq81)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2587 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2316) 
                                           & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_0_macunit_int_Mac_reg_B___05Fq17) 
                                              >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_pes_0_1_macunit_int_Mac_reg_B_502_505_BIT___05FETC___05F_d2533 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_1_macunit_int_Mac_reg_B___05Fq21)) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh222471) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_1_macunit_int_Mac_reg_B___05Fq21)) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh222199) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_1_macunit_int_Mac_reg_B___05Fq21)) 
                                           ^ (0xfffffffeU 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_0_1_macunit_int_Mac_reg_B1_BIT_0_TH_ETC___05Fq22)))) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_0_1_macunit_int_Mac_reg_B1_BIT___05FETC___05Fq115)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh222742 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh222471) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_1_macunit_int_Mac_reg_B___05Fq21) 
                                                >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_pes_0_2_macunit_int_Mac_reg_B_000_003_BIT___05FETC___05F_d5031 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_2_macunit_int_Mac_reg_B___05Fq25)) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh442621) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_2_macunit_int_Mac_reg_B___05Fq25)) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh442349) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_2_macunit_int_Mac_reg_B___05Fq25)) 
                                           ^ (0xfffffffeU 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_0_2_macunit_int_Mac_reg_B5_BIT_0_TH_ETC___05Fq26)))) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_0_2_macunit_int_Mac_reg_B5_BIT___05FETC___05Fq151)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh442892 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh442621) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_2_macunit_int_Mac_reg_B___05Fq25) 
                                                >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_pes_0_3_macunit_int_Mac_reg_B_498_501_BIT___05FETC___05F_d7529 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_3_macunit_int_Mac_reg_B___05Fq29)) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh662771) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_3_macunit_int_Mac_reg_B___05Fq29)) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh662499) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_3_macunit_int_Mac_reg_B___05Fq29)) 
                                           ^ (0xfffffffeU 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_0_3_macunit_int_Mac_reg_B9_BIT_0_TH_ETC___05Fq30)))) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_0_3_macunit_int_Mac_reg_B9_BIT___05FETC___05Fq186)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh663042 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh662771) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_3_macunit_int_Mac_reg_B___05Fq29) 
                                                >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_pes_1_0_macunit_int_Mac_reg_B_996_999_BIT___05FETC___05F_d10027 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_0_macunit_int_Mac_reg_B___05Fq33)) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh882941) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_0_macunit_int_Mac_reg_B___05Fq33)) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh882669) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_0_macunit_int_Mac_reg_B___05Fq33)) 
                                           ^ (0xfffffffeU 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_1_0_macunit_int_Mac_reg_B3_BIT_0_TH_ETC___05Fq34)))) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_1_0_macunit_int_Mac_reg_B3_BIT___05FETC___05Fq221)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh883212 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh882941) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_0_macunit_int_Mac_reg_B___05Fq33) 
                                                >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_pes_1_1_macunit_int_Mac_reg_B_2494_2497_BI_ETC___05F_d12525 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_1_macunit_int_Mac_reg_B___05Fq37)) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1103088) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_1_macunit_int_Mac_reg_B___05Fq37)) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1102816) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_1_macunit_int_Mac_reg_B___05Fq37)) 
                                           ^ (0xfffffffeU 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_1_1_macunit_int_Mac_reg_B7_BIT_0_TH_ETC___05Fq38)))) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_1_1_macunit_int_Mac_reg_B7_BIT___05FETC___05Fq256)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1103359 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1103088) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_1_macunit_int_Mac_reg_B___05Fq37) 
                                                 >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_pes_1_2_macunit_int_Mac_reg_B_4992_4995_BI_ETC___05F_d15023 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_2_macunit_int_Mac_reg_B___05Fq41)) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1323235) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_2_macunit_int_Mac_reg_B___05Fq41)) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1322963) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_2_macunit_int_Mac_reg_B___05Fq41)) 
                                           ^ (0xfffffffeU 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_1_2_macunit_int_Mac_reg_B1_BIT_0_TH_ETC___05Fq42)))) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_1_2_macunit_int_Mac_reg_B1_BIT___05FETC___05Fq291)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1323506 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1323235) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_2_macunit_int_Mac_reg_B___05Fq41) 
                                                 >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_pes_1_3_macunit_int_Mac_reg_B_7490_7493_BI_ETC___05F_d17521 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_3_macunit_int_Mac_reg_B___05Fq45)) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1543382) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_3_macunit_int_Mac_reg_B___05Fq45)) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1543110) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_3_macunit_int_Mac_reg_B___05Fq45)) 
                                           ^ (0xfffffffeU 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_1_3_macunit_int_Mac_reg_B5_BIT_0_TH_ETC___05Fq46)))) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_1_3_macunit_int_Mac_reg_B5_BIT___05FETC___05Fq326)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1543653 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1543382) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_3_macunit_int_Mac_reg_B___05Fq45) 
                                                 >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_pes_2_0_macunit_int_Mac_reg_B_9988_9991_BI_ETC___05F_d20019 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_0_macunit_int_Mac_reg_B___05Fq49)) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1763552) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_0_macunit_int_Mac_reg_B___05Fq49)) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1763280) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_0_macunit_int_Mac_reg_B___05Fq49)) 
                                           ^ (0xfffffffeU 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_2_0_macunit_int_Mac_reg_B9_BIT_0_TH_ETC___05Fq50)))) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_2_0_macunit_int_Mac_reg_B9_BIT___05FETC___05Fq361)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1763823 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1763552) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_0_macunit_int_Mac_reg_B___05Fq49) 
                                                 >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_pes_2_1_macunit_int_Mac_reg_B_2486_2489_BI_ETC___05F_d22517 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_1_macunit_int_Mac_reg_B___05Fq53)) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1983699) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_1_macunit_int_Mac_reg_B___05Fq53)) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1983427) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_1_macunit_int_Mac_reg_B___05Fq53)) 
                                           ^ (0xfffffffeU 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_2_1_macunit_int_Mac_reg_B3_BIT_0_TH_ETC___05Fq54)))) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_2_1_macunit_int_Mac_reg_B3_BIT___05FETC___05Fq396)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1983970 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1983699) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_1_macunit_int_Mac_reg_B___05Fq53) 
                                                 >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_pes_2_2_macunit_int_Mac_reg_B_4984_4987_BI_ETC___05F_d25015 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_2_macunit_int_Mac_reg_B___05Fq57)) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2203846) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_2_macunit_int_Mac_reg_B___05Fq57)) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2203574) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_2_macunit_int_Mac_reg_B___05Fq57)) 
                                           ^ (0xfffffffeU 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_2_2_macunit_int_Mac_reg_B7_BIT_0_TH_ETC___05Fq58)))) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_2_2_macunit_int_Mac_reg_B7_BIT___05FETC___05Fq431)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2204117 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2203846) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_2_macunit_int_Mac_reg_B___05Fq57) 
                                                 >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_pes_2_3_macunit_int_Mac_reg_B_7482_7485_BI_ETC___05F_d27513 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_3_macunit_int_Mac_reg_B___05Fq61)) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2423993) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_3_macunit_int_Mac_reg_B___05Fq61)) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2423721) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_3_macunit_int_Mac_reg_B___05Fq61)) 
                                           ^ (0xfffffffeU 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_2_3_macunit_int_Mac_reg_B1_BIT_0_TH_ETC___05Fq62)))) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_2_3_macunit_int_Mac_reg_B1_BIT___05FETC___05Fq466)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2424264 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2423993) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_3_macunit_int_Mac_reg_B___05Fq61) 
                                                 >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_pes_3_0_macunit_int_Mac_reg_B_9980_9983_BI_ETC___05F_d30011 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_0_macunit_int_Mac_reg_B___05Fq65)) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2644163) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_0_macunit_int_Mac_reg_B___05Fq65)) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2643891) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_0_macunit_int_Mac_reg_B___05Fq65)) 
                                           ^ (0xfffffffeU 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_3_0_macunit_int_Mac_reg_B5_BIT_0_TH_ETC___05Fq66)))) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_3_0_macunit_int_Mac_reg_B5_BIT___05FETC___05Fq501)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2644434 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2644163) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_0_macunit_int_Mac_reg_B___05Fq65) 
                                                 >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_pes_3_1_macunit_int_Mac_reg_B_2478_2481_BI_ETC___05F_d32509 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_1_macunit_int_Mac_reg_B___05Fq69)) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2864310) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_1_macunit_int_Mac_reg_B___05Fq69)) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2864038) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_1_macunit_int_Mac_reg_B___05Fq69)) 
                                           ^ (0xfffffffeU 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_3_1_macunit_int_Mac_reg_B9_BIT_0_TH_ETC___05Fq70)))) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_3_1_macunit_int_Mac_reg_B9_BIT___05FETC___05Fq536)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2864581 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2864310) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_1_macunit_int_Mac_reg_B___05Fq69) 
                                                 >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_pes_3_2_macunit_int_Mac_reg_B_4976_4979_BI_ETC___05F_d35007 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_2_macunit_int_Mac_reg_B___05Fq73)) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3084457) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_2_macunit_int_Mac_reg_B___05Fq73)) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3084185) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_2_macunit_int_Mac_reg_B___05Fq73)) 
                                           ^ (0xfffffffeU 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_3_2_macunit_int_Mac_reg_B3_BIT_0_TH_ETC___05Fq74)))) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_3_2_macunit_int_Mac_reg_B3_BIT___05FETC___05Fq571)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3084728 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3084457) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_2_macunit_int_Mac_reg_B___05Fq73) 
                                                 >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_pes_3_3_macunit_int_Mac_reg_B_7474_7477_BI_ETC___05F_d37505 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_3_macunit_int_Mac_reg_B___05Fq77)) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3304604) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_3_macunit_int_Mac_reg_B___05Fq77)) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3304332) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_3_macunit_int_Mac_reg_B___05Fq77)) 
                                           ^ (0xfffffffeU 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_pes_3_3_macunit_int_Mac_reg_B7_BIT_0_TH_ETC___05Fq78)))) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_INV_INV_pes_3_3_macunit_int_Mac_reg_B7_BIT___05FETC___05Fq606)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3304875 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3304604) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_3_macunit_int_Mac_reg_B___05Fq77) 
                                                 >> 3U));
    vlTOPp->mkMmUnit__DOT__y___05Fh26973 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh26701) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh247128 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh246856) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh467278 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh467006) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh687428 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh687156) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh907598 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh907326) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1127745 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1127473) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1347892 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1347620) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1568039 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1567767) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1788209 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1787937) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2008356 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2008084) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2228503 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2228231) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2448650 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2448378) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2668820 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2668548) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2888967 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2888695) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3109114 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3108842) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3329261 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3328989) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh404461 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh404551) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh404552));
    vlTOPp->mkMmUnit__DOT__y___05Fh624611 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh624701) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh624702));
    vlTOPp->mkMmUnit__DOT__y___05Fh844761 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh844851) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh844852));
    vlTOPp->mkMmUnit__DOT__y___05Fh1064931 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1065021) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1065022));
    vlTOPp->mkMmUnit__DOT__y___05Fh1285078 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1285168) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1285169));
    vlTOPp->mkMmUnit__DOT__y___05Fh1505225 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1505315) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1505316));
    vlTOPp->mkMmUnit__DOT__y___05Fh1725372 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1725462) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1725463));
    vlTOPp->mkMmUnit__DOT__y___05Fh1945542 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1945632) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1945633));
    vlTOPp->mkMmUnit__DOT__y___05Fh2165689 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2165779) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2165780));
    vlTOPp->mkMmUnit__DOT__y___05Fh2385836 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2385926) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2385927));
    vlTOPp->mkMmUnit__DOT__y___05Fh2605983 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2606073) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2606074));
    vlTOPp->mkMmUnit__DOT__y___05Fh2826153 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2826243) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2826244));
    vlTOPp->mkMmUnit__DOT__y___05Fh3046300 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3046390) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3046391));
    vlTOPp->mkMmUnit__DOT__y___05Fh3266447 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3266537) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3266538));
    vlTOPp->mkMmUnit__DOT__y___05Fh3486594 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3486684) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3486685));
    vlTOPp->mkMmUnit__DOT__y___05Fh184307 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh184397) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh184398));
    vlTOPp->mkMmUnit__DOT__y___05Fh2858 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2587) 
                                           & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_0_macunit_int_Mac_reg_B___05Fq17) 
                                              >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh223013 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh222742) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_1_macunit_int_Mac_reg_B___05Fq21) 
                                                >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh443163 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh442892) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_2_macunit_int_Mac_reg_B___05Fq25) 
                                                >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh663313 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh663042) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_3_macunit_int_Mac_reg_B___05Fq29) 
                                                >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh883483 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh883212) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_0_macunit_int_Mac_reg_B___05Fq33) 
                                                >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1103630 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1103359) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_1_macunit_int_Mac_reg_B___05Fq37) 
                                                 >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1323777 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1323506) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_2_macunit_int_Mac_reg_B___05Fq41) 
                                                 >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1543924 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1543653) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_3_macunit_int_Mac_reg_B___05Fq45) 
                                                 >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1764094 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1763823) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_0_macunit_int_Mac_reg_B___05Fq49) 
                                                 >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1984241 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1983970) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_1_macunit_int_Mac_reg_B___05Fq53) 
                                                 >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2204388 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2204117) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_2_macunit_int_Mac_reg_B___05Fq57) 
                                                 >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2424535 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2424264) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_3_macunit_int_Mac_reg_B___05Fq61) 
                                                 >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2644705 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2644434) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_0_macunit_int_Mac_reg_B___05Fq65) 
                                                 >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2864852 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2864581) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_1_macunit_int_Mac_reg_B___05Fq69) 
                                                 >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3084999 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3084728) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_2_macunit_int_Mac_reg_B___05Fq73) 
                                                 >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3305146 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3304875) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_3_macunit_int_Mac_reg_B___05Fq77) 
                                                 >> 4U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_0_macunit_int_Mac_reg_A___05F7_8_BI_ETC___05F_d148 
        = ((8U & ((0xfffffff8U & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh26973) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh26701) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                                           ^ ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a3219_BIT_0_THEN_2_ELSE_0___05Fq20 
                                                       >> 1U)) 
                                              << 1U))) 
                                    | (1U & vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a3219_BIT_0_THEN_1_ELSE_0___05Fq82))));
    vlTOPp->mkMmUnit__DOT__y___05Fh27244 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh26973) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_1_macunit_int_Mac_reg_A_499_545_ETC___05F_d2646 
        = ((8U & ((0xfffffff8U & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh247128) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh246856) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                                           ^ ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a214793_BIT_0_THEN_2_ELSE_0___05Fq24 
                                                       >> 1U)) 
                                              << 1U))) 
                                    | (1U & vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a214793_BIT_0_THEN_1_ELSE_0___05Fq116))));
    vlTOPp->mkMmUnit__DOT__y___05Fh247399 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh247128) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_2_macunit_int_Mac_reg_A_997_043_ETC___05F_d5144 
        = ((8U & ((0xfffffff8U & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh467278) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh467006) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                                           ^ ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a416297_BIT_0_THEN_2_ELSE_0___05Fq28 
                                                       >> 1U)) 
                                              << 1U))) 
                                    | (1U & vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a416297_BIT_0_THEN_1_ELSE_0___05Fq152))));
    vlTOPp->mkMmUnit__DOT__y___05Fh467549 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh467278) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_3_macunit_int_Mac_reg_A_495_541_ETC___05F_d7642 
        = ((8U & ((0xfffffff8U & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh687428) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh687156) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                                           ^ ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a617791_BIT_0_THEN_2_ELSE_0___05Fq32 
                                                       >> 1U)) 
                                              << 1U))) 
                                    | (1U & vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a617791_BIT_0_THEN_1_ELSE_0___05Fq187))));
    vlTOPp->mkMmUnit__DOT__y___05Fh687699 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh687428) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_0_macunit_int_Mac_reg_A_993_003_ETC___05F_d10140 
        = ((8U & ((0xfffffff8U & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh907598) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh907326) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                                           ^ ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a819495_BIT_0_THEN_2_ELSE_0___05Fq36 
                                                       >> 1U)) 
                                              << 1U))) 
                                    | (1U & vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a819495_BIT_0_THEN_1_ELSE_0___05Fq222))));
    vlTOPp->mkMmUnit__DOT__y___05Fh907869 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh907598) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_1_macunit_int_Mac_reg_A_2491_25_ETC___05F_d12638 
        = ((8U & ((0xfffffff8U & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1127745) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1127473) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                                           ^ ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a1020969_BIT_0_THEN_2_ELSE_0___05Fq40 
                                                       >> 1U)) 
                                              << 1U))) 
                                    | (1U & vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a1020969_BIT_0_THEN_1_ELSE_0___05Fq257))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1128016 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1127745) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_2_macunit_int_Mac_reg_A_4989_50_ETC___05F_d15136 
        = ((8U & ((0xfffffff8U & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1347892) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1347620) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                                           ^ ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a3222433_BIT_0_THEN_2_ELSE_0___05Fq44 
                                                       >> 1U)) 
                                              << 1U))) 
                                    | (1U & vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a3222433_BIT_0_THEN_1_ELSE_0___05Fq292))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1348163 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1347892) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_3_macunit_int_Mac_reg_A_7487_75_ETC___05F_d17634 
        = ((8U & ((0xfffffff8U & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1568039) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1567767) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                                           ^ ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a5423907_BIT_0_THEN_2_ELSE_0___05Fq48 
                                                       >> 1U)) 
                                              << 1U))) 
                                    | (1U & vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a5423907_BIT_0_THEN_1_ELSE_0___05Fq327))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1568310 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1568039) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_0_macunit_int_Mac_reg_A_9985_00_ETC___05F_d20132 
        = ((8U & ((0xfffffff8U & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1788209) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1787937) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                                           ^ ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a7625601_BIT_0_THEN_2_ELSE_0___05Fq52 
                                                       >> 1U)) 
                                              << 1U))) 
                                    | (1U & vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a7625601_BIT_0_THEN_1_ELSE_0___05Fq362))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1788480 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1788209) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_1_macunit_int_Mac_reg_A_2483_25_ETC___05F_d22630 
        = ((8U & ((0xfffffff8U & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2008356) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2008084) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                                           ^ ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a9827075_BIT_0_THEN_2_ELSE_0___05Fq56 
                                                       >> 1U)) 
                                              << 1U))) 
                                    | (1U & vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a9827075_BIT_0_THEN_1_ELSE_0___05Fq397))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2008627 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2008356) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_2_macunit_int_Mac_reg_A_4981_50_ETC___05F_d25128 
        = ((8U & ((0xfffffff8U & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2228503) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2228231) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                                           ^ ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a2028549_BIT_0_THEN_2_ELSE_0___05Fq60 
                                                       >> 1U)) 
                                              << 1U))) 
                                    | (1U & vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a2028549_BIT_0_THEN_1_ELSE_0___05Fq432))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2228774 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2228503) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_3_macunit_int_Mac_reg_A_7479_75_ETC___05F_d27626 
        = ((8U & ((0xfffffff8U & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2448650) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2448378) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                                           ^ ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a4230013_BIT_0_THEN_2_ELSE_0___05Fq64 
                                                       >> 1U)) 
                                              << 1U))) 
                                    | (1U & vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a4230013_BIT_0_THEN_1_ELSE_0___05Fq467))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2448921 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2448650) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_0_macunit_int_Mac_reg_A_9977_00_ETC___05F_d30124 
        = ((8U & ((0xfffffff8U & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2668820) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2668548) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                                           ^ ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a6431717_BIT_0_THEN_2_ELSE_0___05Fq68 
                                                       >> 1U)) 
                                              << 1U))) 
                                    | (1U & vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a6431717_BIT_0_THEN_1_ELSE_0___05Fq502))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2669091 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2668820) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_1_macunit_int_Mac_reg_A_2475_25_ETC___05F_d32622 
        = ((8U & ((0xfffffff8U & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2888967) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2888695) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                                           ^ ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a8633181_BIT_0_THEN_2_ELSE_0___05Fq72 
                                                       >> 1U)) 
                                              << 1U))) 
                                    | (1U & vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a8633181_BIT_0_THEN_1_ELSE_0___05Fq537))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2889238 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2888967) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_2_macunit_int_Mac_reg_A_4973_50_ETC___05F_d35120 
        = ((8U & ((0xfffffff8U & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3109114) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3108842) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                                           ^ ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a0834655_BIT_0_THEN_2_ELSE_0___05Fq76 
                                                       >> 1U)) 
                                              << 1U))) 
                                    | (1U & vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a0834655_BIT_0_THEN_1_ELSE_0___05Fq572))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3109385 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3109114) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 3U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_3_macunit_int_Mac_reg_A_7471_75_ETC___05F_d37618 
        = ((8U & ((0xfffffff8U & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                  ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3329261) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3328989) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                                           ^ ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_INV_temp_a3036129_BIT_0_THEN_2_ELSE_0___05Fq80 
                                                       >> 1U)) 
                                              << 1U))) 
                                    | (1U & vlTOPp->mkMmUnit__DOT__IF_INV_INV_temp_a3036129_BIT_0_THEN_1_ELSE_0___05Fq607))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3329532 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3329261) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 3U));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4319 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh404460) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh404461)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh404192) 
                              << 2U) ^ (0xfffffffcU 
                                        & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_ETC___05Fq133))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_ETC___05Fq134)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh404824 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh404461) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh404460));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6817 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh624610) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh624611)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh624342) 
                              << 2U) ^ (0xfffffffcU 
                                        & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_ETC___05Fq169))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_ETC___05Fq170)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh624974 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh624611) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh624610));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9315 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh844760) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh844761)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh844492) 
                              << 2U) ^ (0xfffffffcU 
                                        & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_ETC___05Fq204))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_ETC___05Fq205)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh845124 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh844761) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh844760));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11813 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1064930) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1064931)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1064662) 
                              << 2U) ^ (0xfffffffcU 
                                        & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq239))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq240)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1065294 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1064931) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1064930));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14311 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1285077) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1285078)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1284809) 
                              << 2U) ^ (0xfffffffcU 
                                        & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq274))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq275)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1285441 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1285078) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1285077));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16809 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1505224) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1505225)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1504956) 
                              << 2U) ^ (0xfffffffcU 
                                        & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq309))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq310)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1505588 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1505225) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1505224));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19307 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1725371) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1725372)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1725103) 
                              << 2U) ^ (0xfffffffcU 
                                        & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq344))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq345)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1725735 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1725372) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1725371));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21805 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1945541) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1945542)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1945273) 
                              << 2U) ^ (0xfffffffcU 
                                        & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq379))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq380)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1945905 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1945542) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1945541));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24303 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2165688) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2165689)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2165420) 
                              << 2U) ^ (0xfffffffcU 
                                        & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq414))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq415)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2166052 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2165689) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2165688));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26801 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2385835) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2385836)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2385567) 
                              << 2U) ^ (0xfffffffcU 
                                        & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq449))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq450)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2386199 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2385836) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2385835));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29299 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2605982) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2605983)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2605714) 
                              << 2U) ^ (0xfffffffcU 
                                        & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq484))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq485)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2606346 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2605983) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2605982));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31797 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2826152) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2826153)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2825884) 
                              << 2U) ^ (0xfffffffcU 
                                        & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq519))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq520)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2826516 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2826153) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2826152));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34295 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3046299) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3046300)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3046031) 
                              << 2U) ^ (0xfffffffcU 
                                        & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq554))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq555)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3046663 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3046300) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3046299));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36793 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3266446) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3266447)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3266178) 
                              << 2U) ^ (0xfffffffcU 
                                        & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq589))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq590)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3266810 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3266447) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3266446));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39291 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3486593) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3486594)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3486325) 
                              << 2U) ^ (0xfffffffcU 
                                        & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq624))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq625)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3486957 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3486594) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3486593));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1821 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh184306) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh184307)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh184038) 
                              << 2U) ^ (0xfffffffcU 
                                        & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_ETC___05Fq99))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_ETC___05Fq100)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh184670 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh184307) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh184306));
    vlTOPp->mkMmUnit__DOT__y___05Fh3129 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2858) 
                                           & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_0_macunit_int_Mac_reg_B___05Fq17) 
                                              >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh223284 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh223013) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_1_macunit_int_Mac_reg_B___05Fq21) 
                                                >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh443434 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh443163) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_2_macunit_int_Mac_reg_B___05Fq25) 
                                                >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh663584 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh663313) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_3_macunit_int_Mac_reg_B___05Fq29) 
                                                >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh883754 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh883483) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_0_macunit_int_Mac_reg_B___05Fq33) 
                                                >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1103901 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1103630) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_1_macunit_int_Mac_reg_B___05Fq37) 
                                                 >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1324048 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1323777) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_2_macunit_int_Mac_reg_B___05Fq41) 
                                                 >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1544195 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1543924) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_3_macunit_int_Mac_reg_B___05Fq45) 
                                                 >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1764365 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1764094) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_0_macunit_int_Mac_reg_B___05Fq49) 
                                                 >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1984512 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1984241) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_1_macunit_int_Mac_reg_B___05Fq53) 
                                                 >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2204659 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2204388) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_2_macunit_int_Mac_reg_B___05Fq57) 
                                                 >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2424806 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2424535) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_3_macunit_int_Mac_reg_B___05Fq61) 
                                                 >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2644976 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2644705) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_0_macunit_int_Mac_reg_B___05Fq65) 
                                                 >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2865123 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2864852) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_1_macunit_int_Mac_reg_B___05Fq69) 
                                                 >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3085270 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3084999) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_2_macunit_int_Mac_reg_B___05Fq73) 
                                                 >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3305417 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3305146) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_3_macunit_int_Mac_reg_B___05Fq77) 
                                                 >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh27515 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh27244) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh247670 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh247399) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh467820 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh467549) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh687970 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh687699) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh908140 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh907869) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1128287 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1128016) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1348434 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1348163) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1568581 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1568310) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1788751 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1788480) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2008898 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2008627) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2229045 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2228774) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2449192 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2448921) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2669362 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2669091) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2889509 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2889238) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3109656 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3109385) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3329803 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3329532) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh404733 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh404823) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh404824));
    vlTOPp->mkMmUnit__DOT__y___05Fh624883 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh624973) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh624974));
    vlTOPp->mkMmUnit__DOT__y___05Fh845033 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh845123) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh845124));
    vlTOPp->mkMmUnit__DOT__y___05Fh1065203 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1065293) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1065294));
    vlTOPp->mkMmUnit__DOT__y___05Fh1285350 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1285440) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1285441));
    vlTOPp->mkMmUnit__DOT__y___05Fh1505497 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1505587) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1505588));
    vlTOPp->mkMmUnit__DOT__y___05Fh1725644 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1725734) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1725735));
    vlTOPp->mkMmUnit__DOT__y___05Fh1945814 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1945904) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1945905));
    vlTOPp->mkMmUnit__DOT__y___05Fh2165961 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2166051) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2166052));
    vlTOPp->mkMmUnit__DOT__y___05Fh2386108 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2386198) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2386199));
    vlTOPp->mkMmUnit__DOT__y___05Fh2606255 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2606345) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2606346));
    vlTOPp->mkMmUnit__DOT__y___05Fh2826425 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2826515) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2826516));
    vlTOPp->mkMmUnit__DOT__y___05Fh3046572 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3046662) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3046663));
    vlTOPp->mkMmUnit__DOT__y___05Fh3266719 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3266809) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3266810));
    vlTOPp->mkMmUnit__DOT__y___05Fh3486866 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3486956) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3486957));
    vlTOPp->mkMmUnit__DOT__y___05Fh184579 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh184669) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh184670));
    vlTOPp->mkMmUnit__DOT__y___05Fh3400 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3129) 
                                           & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_0_macunit_int_Mac_reg_B___05Fq17) 
                                              >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh223555 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh223284) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_1_macunit_int_Mac_reg_B___05Fq21) 
                                                >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh443705 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh443434) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_2_macunit_int_Mac_reg_B___05Fq25) 
                                                >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh663855 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh663584) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_3_macunit_int_Mac_reg_B___05Fq29) 
                                                >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh884025 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh883754) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_0_macunit_int_Mac_reg_B___05Fq33) 
                                                >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1104172 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1103901) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_1_macunit_int_Mac_reg_B___05Fq37) 
                                                 >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1324319 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1324048) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_2_macunit_int_Mac_reg_B___05Fq41) 
                                                 >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1544466 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1544195) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_3_macunit_int_Mac_reg_B___05Fq45) 
                                                 >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1764636 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1764365) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_0_macunit_int_Mac_reg_B___05Fq49) 
                                                 >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1984783 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1984512) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_1_macunit_int_Mac_reg_B___05Fq53) 
                                                 >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2204930 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2204659) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_2_macunit_int_Mac_reg_B___05Fq57) 
                                                 >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2425077 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2424806) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_3_macunit_int_Mac_reg_B___05Fq61) 
                                                 >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2645247 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2644976) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_0_macunit_int_Mac_reg_B___05Fq65) 
                                                 >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2865394 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2865123) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_1_macunit_int_Mac_reg_B___05Fq69) 
                                                 >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3085541 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3085270) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_2_macunit_int_Mac_reg_B___05Fq73) 
                                                 >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3305688 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3305417) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_3_macunit_int_Mac_reg_B___05Fq77) 
                                                 >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh27786 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh27515) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh247941 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh247670) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh468091 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh467820) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh688241 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh687970) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh908411 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh908140) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1128558 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1128287) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1348705 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1348434) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1568852 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1568581) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1789022 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1788751) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2009169 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2008898) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2229316 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2229045) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2449463 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2449192) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2669633 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2669362) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2889780 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2889509) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3109927 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3109656) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3330074 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3329803) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh405095 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh404733) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh404732));
    vlTOPp->mkMmUnit__DOT__y___05Fh625245 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh624883) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh624882));
    vlTOPp->mkMmUnit__DOT__y___05Fh845395 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh845033) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh845032));
    vlTOPp->mkMmUnit__DOT__y___05Fh1065565 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1065203) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1065202));
    vlTOPp->mkMmUnit__DOT__y___05Fh1285712 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1285350) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1285349));
    vlTOPp->mkMmUnit__DOT__y___05Fh1505859 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1505497) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1505496));
    vlTOPp->mkMmUnit__DOT__y___05Fh1726006 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1725644) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1725643));
    vlTOPp->mkMmUnit__DOT__y___05Fh1946176 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1945814) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1945813));
    vlTOPp->mkMmUnit__DOT__y___05Fh2166323 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2165961) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2165960));
    vlTOPp->mkMmUnit__DOT__y___05Fh2386470 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2386108) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2386107));
    vlTOPp->mkMmUnit__DOT__y___05Fh2606617 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2606255) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2606254));
    vlTOPp->mkMmUnit__DOT__y___05Fh2826787 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2826425) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2826424));
    vlTOPp->mkMmUnit__DOT__y___05Fh3046934 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3046572) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3046571));
    vlTOPp->mkMmUnit__DOT__y___05Fh3267081 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3266719) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3266718));
    vlTOPp->mkMmUnit__DOT__y___05Fh3487228 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3486866) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3486865));
    vlTOPp->mkMmUnit__DOT__y___05Fh184941 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh184579) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh184578));
    vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh1456 
        = ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_0_macunit_int_Mac_reg_B___05Fq17)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3400) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_0_macunit_int_Mac_reg_B___05Fq17)) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3129) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_0_macunit_int_Mac_reg_B___05Fq17)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2858) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_0_macunit_int_Mac_reg_B___05Fq17)) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2587) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_0_macunit_int_Mac_reg_B_BIT_3_6_XOR___05FETC___05F_d35)))));
    vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh221611 
        = ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_1_macunit_int_Mac_reg_B___05Fq21)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh223555) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_1_macunit_int_Mac_reg_B___05Fq21)) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh223284) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_1_macunit_int_Mac_reg_B___05Fq21)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh223013) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_1_macunit_int_Mac_reg_B___05Fq21)) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh222742) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_1_macunit_int_Mac_reg_B_502_505_BIT___05FETC___05F_d2533)))));
    vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh441761 
        = ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_2_macunit_int_Mac_reg_B___05Fq25)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh443705) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_2_macunit_int_Mac_reg_B___05Fq25)) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh443434) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_2_macunit_int_Mac_reg_B___05Fq25)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh443163) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_2_macunit_int_Mac_reg_B___05Fq25)) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh442892) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_2_macunit_int_Mac_reg_B_000_003_BIT___05FETC___05F_d5031)))));
    vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh661911 
        = ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_3_macunit_int_Mac_reg_B___05Fq29)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh663855) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_3_macunit_int_Mac_reg_B___05Fq29)) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh663584) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_3_macunit_int_Mac_reg_B___05Fq29)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh663313) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_3_macunit_int_Mac_reg_B___05Fq29)) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh663042) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_0_3_macunit_int_Mac_reg_B_498_501_BIT___05FETC___05F_d7529)))));
    vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh882081 
        = ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_0_macunit_int_Mac_reg_B___05Fq33)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh884025) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_0_macunit_int_Mac_reg_B___05Fq33)) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh883754) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_0_macunit_int_Mac_reg_B___05Fq33)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh883483) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_0_macunit_int_Mac_reg_B___05Fq33)) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh883212) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_0_macunit_int_Mac_reg_B_996_999_BIT___05FETC___05F_d10027)))));
    vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh1102228 
        = ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_1_macunit_int_Mac_reg_B___05Fq37)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1104172) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_1_macunit_int_Mac_reg_B___05Fq37)) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1103901) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_1_macunit_int_Mac_reg_B___05Fq37)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1103630) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_1_macunit_int_Mac_reg_B___05Fq37)) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1103359) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_1_macunit_int_Mac_reg_B_2494_2497_BI_ETC___05F_d12525)))));
    vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh1322375 
        = ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_2_macunit_int_Mac_reg_B___05Fq41)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1324319) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_2_macunit_int_Mac_reg_B___05Fq41)) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1324048) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_2_macunit_int_Mac_reg_B___05Fq41)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1323777) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_2_macunit_int_Mac_reg_B___05Fq41)) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1323506) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_2_macunit_int_Mac_reg_B_4992_4995_BI_ETC___05F_d15023)))));
    vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh1542522 
        = ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_3_macunit_int_Mac_reg_B___05Fq45)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1544466) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_3_macunit_int_Mac_reg_B___05Fq45)) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1544195) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_3_macunit_int_Mac_reg_B___05Fq45)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1543924) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_3_macunit_int_Mac_reg_B___05Fq45)) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1543653) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_1_3_macunit_int_Mac_reg_B_7490_7493_BI_ETC___05F_d17521)))));
    vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh1762692 
        = ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_0_macunit_int_Mac_reg_B___05Fq49)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1764636) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_0_macunit_int_Mac_reg_B___05Fq49)) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1764365) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_0_macunit_int_Mac_reg_B___05Fq49)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1764094) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_0_macunit_int_Mac_reg_B___05Fq49)) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1763823) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_0_macunit_int_Mac_reg_B_9988_9991_BI_ETC___05F_d20019)))));
    vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh1982839 
        = ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_1_macunit_int_Mac_reg_B___05Fq53)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1984783) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_1_macunit_int_Mac_reg_B___05Fq53)) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1984512) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_1_macunit_int_Mac_reg_B___05Fq53)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1984241) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_1_macunit_int_Mac_reg_B___05Fq53)) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1983970) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_1_macunit_int_Mac_reg_B_2486_2489_BI_ETC___05F_d22517)))));
    vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh2202986 
        = ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_2_macunit_int_Mac_reg_B___05Fq57)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2204930) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_2_macunit_int_Mac_reg_B___05Fq57)) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2204659) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_2_macunit_int_Mac_reg_B___05Fq57)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2204388) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_2_macunit_int_Mac_reg_B___05Fq57)) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2204117) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_2_macunit_int_Mac_reg_B_4984_4987_BI_ETC___05F_d25015)))));
    vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh2423133 
        = ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_3_macunit_int_Mac_reg_B___05Fq61)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2425077) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_3_macunit_int_Mac_reg_B___05Fq61)) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2424806) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_3_macunit_int_Mac_reg_B___05Fq61)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2424535) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_3_macunit_int_Mac_reg_B___05Fq61)) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2424264) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_2_3_macunit_int_Mac_reg_B_7482_7485_BI_ETC___05F_d27513)))));
    vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh2643303 
        = ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_0_macunit_int_Mac_reg_B___05Fq65)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2645247) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_0_macunit_int_Mac_reg_B___05Fq65)) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2644976) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_0_macunit_int_Mac_reg_B___05Fq65)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2644705) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_0_macunit_int_Mac_reg_B___05Fq65)) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2644434) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_0_macunit_int_Mac_reg_B_9980_9983_BI_ETC___05F_d30011)))));
    vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh2863450 
        = ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_1_macunit_int_Mac_reg_B___05Fq69)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2865394) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_1_macunit_int_Mac_reg_B___05Fq69)) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2865123) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_1_macunit_int_Mac_reg_B___05Fq69)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2864852) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_1_macunit_int_Mac_reg_B___05Fq69)) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2864581) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_1_macunit_int_Mac_reg_B_2478_2481_BI_ETC___05F_d32509)))));
    vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh3083597 
        = ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_2_macunit_int_Mac_reg_B___05Fq73)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3085541) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_2_macunit_int_Mac_reg_B___05Fq73)) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3085270) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_2_macunit_int_Mac_reg_B___05Fq73)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3084999) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_2_macunit_int_Mac_reg_B___05Fq73)) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3084728) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_2_macunit_int_Mac_reg_B_4976_4979_BI_ETC___05F_d35007)))));
    vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh3303744 
        = ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_3_macunit_int_Mac_reg_B___05Fq77)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3305688) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_3_macunit_int_Mac_reg_B___05Fq77)) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3305417) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_3_macunit_int_Mac_reg_B___05Fq77)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3305146) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_3_macunit_int_Mac_reg_B___05Fq77)) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3304875) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_pes_3_3_macunit_int_Mac_reg_B_7474_7477_BI_ETC___05F_d37505)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh28057 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh27786) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh248212 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh247941) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh468362 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh468091) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh688512 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh688241) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh908682 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh908411) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1128829 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1128558) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1348976 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1348705) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1569123 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1568852) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1789293 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1789022) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2009440 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2009169) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2229587 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2229316) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2449734 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2449463) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2669904 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2669633) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2890051 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2889780) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3110198 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3109927) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3330345 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3330074) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh405004 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh405094) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh405095));
    vlTOPp->mkMmUnit__DOT__y___05Fh625154 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh625244) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh625245));
    vlTOPp->mkMmUnit__DOT__y___05Fh845304 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh845394) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh845395));
    vlTOPp->mkMmUnit__DOT__y___05Fh1065474 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1065564) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1065565));
    vlTOPp->mkMmUnit__DOT__y___05Fh1285621 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1285711) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1285712));
    vlTOPp->mkMmUnit__DOT__y___05Fh1505768 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1505858) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1505859));
    vlTOPp->mkMmUnit__DOT__y___05Fh1725915 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1726005) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1726006));
    vlTOPp->mkMmUnit__DOT__y___05Fh1946085 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1946175) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1946176));
    vlTOPp->mkMmUnit__DOT__y___05Fh2166232 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2166322) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2166323));
    vlTOPp->mkMmUnit__DOT__y___05Fh2386379 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2386469) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2386470));
    vlTOPp->mkMmUnit__DOT__y___05Fh2606526 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2606616) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2606617));
    vlTOPp->mkMmUnit__DOT__y___05Fh2826696 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2826786) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2826787));
    vlTOPp->mkMmUnit__DOT__y___05Fh3046843 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3046933) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3046934));
    vlTOPp->mkMmUnit__DOT__y___05Fh3266990 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3267080) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3267081));
    vlTOPp->mkMmUnit__DOT__y___05Fh3487137 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3487227) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3487228));
    vlTOPp->mkMmUnit__DOT__y___05Fh184850 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh184940) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh184941));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_IN_ETC___05F_d38 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_int_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh1456)
            : (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_int_Mac_reg_B));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7_503_ETC___05F_d2536 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_int_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh221611)
            : (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_int_Mac_reg_B));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7_001_ETC___05F_d5034 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_int_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh441761)
            : (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_int_Mac_reg_B));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7_499_ETC___05F_d7532 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_int_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh661911)
            : (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_int_Mac_reg_B));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7_997_ETC___05F_d10030 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_int_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh882081)
            : (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_int_Mac_reg_B));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_24_ETC___05F_d12528 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_int_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh1102228)
            : (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_int_Mac_reg_B));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_49_ETC___05F_d15026 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_int_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh1322375)
            : (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_int_Mac_reg_B));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_74_ETC___05F_d17524 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_int_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh1542522)
            : (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_int_Mac_reg_B));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_99_ETC___05F_d20022 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_int_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh1762692)
            : (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_int_Mac_reg_B));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_24_ETC___05F_d22520 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_int_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh1982839)
            : (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_int_Mac_reg_B));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_49_ETC___05F_d25018 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_int_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh2202986)
            : (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_int_Mac_reg_B));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_74_ETC___05F_d27516 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_int_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh2423133)
            : (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_int_Mac_reg_B));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_99_ETC___05F_d30014 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_int_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh2643303)
            : (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_int_Mac_reg_B));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_24_ETC___05F_d32512 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_int_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh2863450)
            : (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_int_Mac_reg_B));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_49_ETC___05F_d35010 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_int_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh3083597)
            : (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_int_Mac_reg_B));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_74_ETC___05F_d37508 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_int_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__temp_b___05F_1___05Fh3303744)
            : (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_int_Mac_reg_B));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_0_macunit_int_Mac_reg_A___05F7_8_BI_ETC___05F_d150 
        = ((0x80U & ((0xffffff80U & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh28057) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh27786) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh27515) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh27244) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_0_macunit_int_Mac_reg_A___05F7_8_BI_ETC___05F_d148)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh28328 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh28057) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 7U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_1_macunit_int_Mac_reg_A_499_545_ETC___05F_d2648 
        = ((0x80U & ((0xffffff80U & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh248212) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh247941) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh247670) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh247399) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_1_macunit_int_Mac_reg_A_499_545_ETC___05F_d2646)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh248483 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh248212) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 7U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_2_macunit_int_Mac_reg_A_997_043_ETC___05F_d5146 
        = ((0x80U & ((0xffffff80U & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh468362) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh468091) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh467820) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh467549) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_2_macunit_int_Mac_reg_A_997_043_ETC___05F_d5144)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh468633 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh468362) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 7U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_3_macunit_int_Mac_reg_A_495_541_ETC___05F_d7644 
        = ((0x80U & ((0xffffff80U & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh688512) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh688241) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh687970) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh687699) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_3_macunit_int_Mac_reg_A_495_541_ETC___05F_d7642)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh688783 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh688512) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 7U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_0_macunit_int_Mac_reg_A_993_003_ETC___05F_d10142 
        = ((0x80U & ((0xffffff80U & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh908682) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh908411) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh908140) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh907869) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_0_macunit_int_Mac_reg_A_993_003_ETC___05F_d10140)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh908953 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh908682) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 7U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_1_macunit_int_Mac_reg_A_2491_25_ETC___05F_d12640 
        = ((0x80U & ((0xffffff80U & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1128829) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1128558) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1128287) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1128016) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_1_macunit_int_Mac_reg_A_2491_25_ETC___05F_d12638)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1129100 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1128829) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 7U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_2_macunit_int_Mac_reg_A_4989_50_ETC___05F_d15138 
        = ((0x80U & ((0xffffff80U & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1348976) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1348705) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1348434) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1348163) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_2_macunit_int_Mac_reg_A_4989_50_ETC___05F_d15136)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1349247 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1348976) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 7U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_3_macunit_int_Mac_reg_A_7487_75_ETC___05F_d17636 
        = ((0x80U & ((0xffffff80U & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1569123) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1568852) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1568581) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1568310) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_3_macunit_int_Mac_reg_A_7487_75_ETC___05F_d17634)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1569394 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1569123) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 7U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_0_macunit_int_Mac_reg_A_9985_00_ETC___05F_d20134 
        = ((0x80U & ((0xffffff80U & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1789293) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1789022) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1788751) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1788480) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_0_macunit_int_Mac_reg_A_9985_00_ETC___05F_d20132)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1789564 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1789293) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 7U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_1_macunit_int_Mac_reg_A_2483_25_ETC___05F_d22632 
        = ((0x80U & ((0xffffff80U & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2009440) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2009169) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2008898) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2008627) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_1_macunit_int_Mac_reg_A_2483_25_ETC___05F_d22630)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2009711 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2009440) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 7U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_2_macunit_int_Mac_reg_A_4981_50_ETC___05F_d25130 
        = ((0x80U & ((0xffffff80U & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2229587) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2229316) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2229045) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2228774) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_2_macunit_int_Mac_reg_A_4981_50_ETC___05F_d25128)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2229858 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2229587) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 7U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_3_macunit_int_Mac_reg_A_7479_75_ETC___05F_d27628 
        = ((0x80U & ((0xffffff80U & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2449734) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2449463) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2449192) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2448921) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_3_macunit_int_Mac_reg_A_7479_75_ETC___05F_d27626)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2450005 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2449734) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 7U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_0_macunit_int_Mac_reg_A_9977_00_ETC___05F_d30126 
        = ((0x80U & ((0xffffff80U & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2669904) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2669633) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2669362) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2669091) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_0_macunit_int_Mac_reg_A_9977_00_ETC___05F_d30124)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2670175 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2669904) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 7U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_1_macunit_int_Mac_reg_A_2475_25_ETC___05F_d32624 
        = ((0x80U & ((0xffffff80U & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2890051) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2889780) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2889509) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2889238) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_1_macunit_int_Mac_reg_A_2475_25_ETC___05F_d32622)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2890322 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2890051) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 7U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_2_macunit_int_Mac_reg_A_4973_50_ETC___05F_d35122 
        = ((0x80U & ((0xffffff80U & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3110198) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3109927) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3109656) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3109385) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_2_macunit_int_Mac_reg_A_4973_50_ETC___05F_d35120)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3110469 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3110198) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 7U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_3_macunit_int_Mac_reg_A_7471_75_ETC___05F_d37620 
        = ((0x80U & ((0xffffff80U & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3330345) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3330074) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3329803) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3329532) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_3_macunit_int_Mac_reg_A_7471_75_ETC___05F_d37618)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3330616 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3330345) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 7U));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4320 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh405003) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh405004)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh404732) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh404733)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4319)));
    vlTOPp->mkMmUnit__DOT__y___05Fh405366 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh405004) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh405003));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6818 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh625153) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh625154)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh624882) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh624883)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6817)));
    vlTOPp->mkMmUnit__DOT__y___05Fh625516 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh625154) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh625153));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9316 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh845303) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh845304)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh845032) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh845033)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9315)));
    vlTOPp->mkMmUnit__DOT__y___05Fh845666 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh845304) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh845303));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11814 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1065473) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1065474)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1065202) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1065203)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11813)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1065836 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1065474) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1065473));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14312 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1285620) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1285621)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1285349) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1285350)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14311)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1285983 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1285621) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1285620));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16810 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1505767) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1505768)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1505496) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1505497)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16809)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1506130 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1505768) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1505767));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19308 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1725914) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1725915)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1725643) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1725644)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19307)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1726277 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1725915) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1725914));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21806 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1946084) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1946085)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1945813) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1945814)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21805)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1946447 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1946085) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1946084));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24304 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2166231) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2166232)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2165960) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2165961)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24303)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2166594 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2166232) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2166231));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26802 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2386378) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2386379)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2386107) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2386108)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26801)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2386741 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2386379) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2386378));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29300 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2606525) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2606526)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2606254) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2606255)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29299)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2606888 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2606526) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2606525));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31798 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2826695) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2826696)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2826424) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2826425)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31797)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2827058 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2826696) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2826695));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34296 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3046842) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3046843)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3046571) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3046572)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34295)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3047205 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3046843) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3046842));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36794 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3266989) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3266990)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3266718) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3266719)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36793)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3267352 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3266990) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3266989));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39292 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3487136) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3487137)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3486865) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3486866)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39291)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3487499 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3487137) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3487136));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1822 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh184849) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh184850)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh184578) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh184579)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1821)));
    vlTOPp->mkMmUnit__DOT__y___05Fh185212 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh184850) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh184849));
    vlTOPp->mkMmUnit__DOT__y___05Fh28599 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh28328) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh248754 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh248483) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh468904 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh468633) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh689054 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh688783) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh909224 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh908953) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1129371 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1129100) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1349518 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1349247) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1569665 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1569394) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1789835 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1789564) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2009982 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2009711) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2230129 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2229858) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2450276 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2450005) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2670446 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2670175) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2890593 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2890322) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3110740 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3110469) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3330887 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3330616) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh405275 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh405365) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh405366));
    vlTOPp->mkMmUnit__DOT__y___05Fh625425 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh625515) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh625516));
    vlTOPp->mkMmUnit__DOT__y___05Fh845575 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh845665) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh845666));
    vlTOPp->mkMmUnit__DOT__y___05Fh1065745 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1065835) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1065836));
    vlTOPp->mkMmUnit__DOT__y___05Fh1285892 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1285982) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1285983));
    vlTOPp->mkMmUnit__DOT__y___05Fh1506039 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1506129) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1506130));
    vlTOPp->mkMmUnit__DOT__y___05Fh1726186 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1726276) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1726277));
    vlTOPp->mkMmUnit__DOT__y___05Fh1946356 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1946446) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1946447));
    vlTOPp->mkMmUnit__DOT__y___05Fh2166503 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2166593) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2166594));
    vlTOPp->mkMmUnit__DOT__y___05Fh2386650 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2386740) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2386741));
    vlTOPp->mkMmUnit__DOT__y___05Fh2606797 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2606887) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2606888));
    vlTOPp->mkMmUnit__DOT__y___05Fh2826967 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2827057) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2827058));
    vlTOPp->mkMmUnit__DOT__y___05Fh3047114 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3047204) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3047205));
    vlTOPp->mkMmUnit__DOT__y___05Fh3267261 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3267351) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3267352));
    vlTOPp->mkMmUnit__DOT__y___05Fh3487408 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3487498) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3487499));
    vlTOPp->mkMmUnit__DOT__y___05Fh185121 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh185211) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh185212));
    vlTOPp->mkMmUnit__DOT__y___05Fh28870 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh28599) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh249025 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh248754) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh469175 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh468904) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh689325 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh689054) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh909495 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh909224) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1129642 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1129371) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1349789 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1349518) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1569936 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1569665) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1790106 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1789835) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2010253 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2009982) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2230400 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2230129) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2450547 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2450276) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2670717 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2670446) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2890864 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2890593) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3111011 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3110740) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3331158 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3330887) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh405637 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh405275) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh405274));
    vlTOPp->mkMmUnit__DOT__y___05Fh625787 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh625425) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh625424));
    vlTOPp->mkMmUnit__DOT__y___05Fh845937 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh845575) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh845574));
    vlTOPp->mkMmUnit__DOT__y___05Fh1066107 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1065745) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1065744));
    vlTOPp->mkMmUnit__DOT__y___05Fh1286254 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1285892) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1285891));
    vlTOPp->mkMmUnit__DOT__y___05Fh1506401 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1506039) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1506038));
    vlTOPp->mkMmUnit__DOT__y___05Fh1726548 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1726186) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1726185));
    vlTOPp->mkMmUnit__DOT__y___05Fh1946718 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1946356) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1946355));
    vlTOPp->mkMmUnit__DOT__y___05Fh2166865 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2166503) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2166502));
    vlTOPp->mkMmUnit__DOT__y___05Fh2387012 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2386650) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2386649));
    vlTOPp->mkMmUnit__DOT__y___05Fh2607159 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2606797) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2606796));
    vlTOPp->mkMmUnit__DOT__y___05Fh2827329 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2826967) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2826966));
    vlTOPp->mkMmUnit__DOT__y___05Fh3047476 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3047114) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3047113));
    vlTOPp->mkMmUnit__DOT__y___05Fh3267623 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3267261) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3267260));
    vlTOPp->mkMmUnit__DOT__y___05Fh3487770 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3487408) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3487407));
    vlTOPp->mkMmUnit__DOT__y___05Fh185483 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh185121) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh185120));
    vlTOPp->mkMmUnit__DOT__y___05Fh29141 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh28870) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh249296 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh249025) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh469446 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh469175) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh689596 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh689325) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh909766 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh909495) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1129913 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1129642) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1350060 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1349789) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1570207 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1569936) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1790377 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1790106) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2010524 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2010253) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2230671 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2230400) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2450818 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2450547) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2670988 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2670717) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2891135 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2890864) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3111282 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3111011) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3331429 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3331158) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh405546 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh405636) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh405637));
    vlTOPp->mkMmUnit__DOT__y___05Fh625696 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh625786) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh625787));
    vlTOPp->mkMmUnit__DOT__y___05Fh845846 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh845936) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh845937));
    vlTOPp->mkMmUnit__DOT__y___05Fh1066016 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1066106) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1066107));
    vlTOPp->mkMmUnit__DOT__y___05Fh1286163 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1286253) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1286254));
    vlTOPp->mkMmUnit__DOT__y___05Fh1506310 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1506400) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1506401));
    vlTOPp->mkMmUnit__DOT__y___05Fh1726457 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1726547) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1726548));
    vlTOPp->mkMmUnit__DOT__y___05Fh1946627 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1946717) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1946718));
    vlTOPp->mkMmUnit__DOT__y___05Fh2166774 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2166864) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2166865));
    vlTOPp->mkMmUnit__DOT__y___05Fh2386921 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2387011) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2387012));
    vlTOPp->mkMmUnit__DOT__y___05Fh2607068 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2607158) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2607159));
    vlTOPp->mkMmUnit__DOT__y___05Fh2827238 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2827328) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2827329));
    vlTOPp->mkMmUnit__DOT__y___05Fh3047385 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3047475) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3047476));
    vlTOPp->mkMmUnit__DOT__y___05Fh3267532 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3267622) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3267623));
    vlTOPp->mkMmUnit__DOT__y___05Fh3487679 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3487769) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3487770));
    vlTOPp->mkMmUnit__DOT__y___05Fh185392 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh185482) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh185483));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_0_macunit_int_Mac_reg_A___05F7_8_BI_ETC___05F_d152 
        = ((0x800U & ((0xfffff800U & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh29141) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh28870) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh28599) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh28328) 
                                                  << 8U))) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_0_macunit_int_Mac_reg_A___05F7_8_BI_ETC___05F_d150)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh29412 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh29141) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 0xbU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_1_macunit_int_Mac_reg_A_499_545_ETC___05F_d2650 
        = ((0x800U & ((0xfffff800U & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh249296) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh249025) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh248754) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh248483) 
                                                  << 8U))) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_1_macunit_int_Mac_reg_A_499_545_ETC___05F_d2648)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh249567 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh249296) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 0xbU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_2_macunit_int_Mac_reg_A_997_043_ETC___05F_d5148 
        = ((0x800U & ((0xfffff800U & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh469446) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh469175) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh468904) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh468633) 
                                                  << 8U))) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_2_macunit_int_Mac_reg_A_997_043_ETC___05F_d5146)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh469717 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh469446) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 0xbU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_3_macunit_int_Mac_reg_A_495_541_ETC___05F_d7646 
        = ((0x800U & ((0xfffff800U & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh689596) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh689325) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh689054) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh688783) 
                                                  << 8U))) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_3_macunit_int_Mac_reg_A_495_541_ETC___05F_d7644)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh689867 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh689596) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 0xbU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_0_macunit_int_Mac_reg_A_993_003_ETC___05F_d10144 
        = ((0x800U & ((0xfffff800U & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh909766) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh909495) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh909224) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh908953) 
                                                  << 8U))) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_0_macunit_int_Mac_reg_A_993_003_ETC___05F_d10142)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh910037 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh909766) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 0xbU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_1_macunit_int_Mac_reg_A_2491_25_ETC___05F_d12642 
        = ((0x800U & ((0xfffff800U & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1129913) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1129642) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1129371) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1129100) 
                                                  << 8U))) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_1_macunit_int_Mac_reg_A_2491_25_ETC___05F_d12640)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1130184 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1129913) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_2_macunit_int_Mac_reg_A_4989_50_ETC___05F_d15140 
        = ((0x800U & ((0xfffff800U & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1350060) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1349789) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1349518) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1349247) 
                                                  << 8U))) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_2_macunit_int_Mac_reg_A_4989_50_ETC___05F_d15138)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1350331 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1350060) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_3_macunit_int_Mac_reg_A_7487_75_ETC___05F_d17638 
        = ((0x800U & ((0xfffff800U & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1570207) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1569936) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1569665) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1569394) 
                                                  << 8U))) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_3_macunit_int_Mac_reg_A_7487_75_ETC___05F_d17636)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1570478 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1570207) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_0_macunit_int_Mac_reg_A_9985_00_ETC___05F_d20136 
        = ((0x800U & ((0xfffff800U & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1790377) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1790106) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1789835) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1789564) 
                                                  << 8U))) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_0_macunit_int_Mac_reg_A_9985_00_ETC___05F_d20134)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1790648 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1790377) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_1_macunit_int_Mac_reg_A_2483_25_ETC___05F_d22634 
        = ((0x800U & ((0xfffff800U & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2010524) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2010253) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2009982) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2009711) 
                                                  << 8U))) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_1_macunit_int_Mac_reg_A_2483_25_ETC___05F_d22632)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2010795 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2010524) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_2_macunit_int_Mac_reg_A_4981_50_ETC___05F_d25132 
        = ((0x800U & ((0xfffff800U & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2230671) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2230400) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2230129) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2229858) 
                                                  << 8U))) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_2_macunit_int_Mac_reg_A_4981_50_ETC___05F_d25130)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2230942 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2230671) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_3_macunit_int_Mac_reg_A_7479_75_ETC___05F_d27630 
        = ((0x800U & ((0xfffff800U & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2450818) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2450547) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2450276) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2450005) 
                                                  << 8U))) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_3_macunit_int_Mac_reg_A_7479_75_ETC___05F_d27628)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2451089 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2450818) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_0_macunit_int_Mac_reg_A_9977_00_ETC___05F_d30128 
        = ((0x800U & ((0xfffff800U & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2670988) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2670717) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2670446) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2670175) 
                                                  << 8U))) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_0_macunit_int_Mac_reg_A_9977_00_ETC___05F_d30126)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2671259 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2670988) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_1_macunit_int_Mac_reg_A_2475_25_ETC___05F_d32626 
        = ((0x800U & ((0xfffff800U & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2891135) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2890864) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2890593) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2890322) 
                                                  << 8U))) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_1_macunit_int_Mac_reg_A_2475_25_ETC___05F_d32624)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2891406 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2891135) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_2_macunit_int_Mac_reg_A_4973_50_ETC___05F_d35124 
        = ((0x800U & ((0xfffff800U & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3111282) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3111011) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3110740) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3110469) 
                                                  << 8U))) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_2_macunit_int_Mac_reg_A_4973_50_ETC___05F_d35122)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3111553 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3111282) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_3_macunit_int_Mac_reg_A_7471_75_ETC___05F_d37622 
        = ((0x800U & ((0xfffff800U & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3331429) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3331158) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                                            ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3330887) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3330616) 
                                                  << 8U))) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_3_macunit_int_Mac_reg_A_7471_75_ETC___05F_d37620)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3331700 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3331429) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4321 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh405545) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh405546)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh405274) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh405275)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4320)));
    vlTOPp->mkMmUnit__DOT__y___05Fh405908 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh405546) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh405545));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6819 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh625695) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh625696)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh625424) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh625425)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6818)));
    vlTOPp->mkMmUnit__DOT__y___05Fh626058 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh625696) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh625695));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9317 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh845845) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh845846)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh845574) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh845575)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9316)));
    vlTOPp->mkMmUnit__DOT__y___05Fh846208 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh845846) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh845845));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11815 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1066015) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1066016)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1065744) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1065745)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11814)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1066378 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1066016) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1066015));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14313 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1286162) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1286163)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1285891) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1285892)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14312)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1286525 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1286163) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1286162));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16811 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1506309) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1506310)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1506038) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1506039)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16810)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1506672 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1506310) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1506309));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19309 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1726456) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1726457)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1726185) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1726186)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19308)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1726819 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1726457) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1726456));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21807 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1946626) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1946627)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1946355) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1946356)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21806)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1946989 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1946627) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1946626));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24305 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2166773) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2166774)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2166502) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2166503)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24304)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2167136 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2166774) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2166773));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26803 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2386920) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2386921)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2386649) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2386650)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26802)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2387283 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2386921) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2386920));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29301 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2607067) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2607068)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2606796) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2606797)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29300)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2607430 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2607068) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2607067));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31799 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2827237) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2827238)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2826966) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2826967)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31798)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2827600 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2827238) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2827237));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34297 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3047384) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3047385)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3047113) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3047114)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34296)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3047747 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3047385) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3047384));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36795 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3267531) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3267532)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3267260) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3267261)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36794)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3267894 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3267532) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3267531));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39293 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3487678) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3487679)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3487407) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3487408)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39292)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3488041 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3487679) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3487678));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1823 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh185391) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh185392)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh185120) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh185121)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1822)));
    vlTOPp->mkMmUnit__DOT__y___05Fh185754 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh185392) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh185391));
    vlTOPp->mkMmUnit__DOT__y___05Fh29683 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh29412) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh249838 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh249567) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh469988 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh469717) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh690138 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh689867) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh910308 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh910037) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1130455 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1130184) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1350602 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1350331) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1570749 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1570478) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1790919 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1790648) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2011066 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2010795) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2231213 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2230942) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2451360 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2451089) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2671530 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2671259) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2891677 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2891406) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3111824 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3111553) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3331971 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3331700) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh405817 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh405907) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh405908));
    vlTOPp->mkMmUnit__DOT__y___05Fh625967 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh626057) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh626058));
    vlTOPp->mkMmUnit__DOT__y___05Fh846117 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh846207) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh846208));
    vlTOPp->mkMmUnit__DOT__y___05Fh1066287 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1066377) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1066378));
    vlTOPp->mkMmUnit__DOT__y___05Fh1286434 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1286524) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1286525));
    vlTOPp->mkMmUnit__DOT__y___05Fh1506581 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1506671) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1506672));
    vlTOPp->mkMmUnit__DOT__y___05Fh1726728 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1726818) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1726819));
    vlTOPp->mkMmUnit__DOT__y___05Fh1946898 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1946988) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1946989));
    vlTOPp->mkMmUnit__DOT__y___05Fh2167045 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2167135) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2167136));
    vlTOPp->mkMmUnit__DOT__y___05Fh2387192 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2387282) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2387283));
    vlTOPp->mkMmUnit__DOT__y___05Fh2607339 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2607429) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2607430));
    vlTOPp->mkMmUnit__DOT__y___05Fh2827509 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2827599) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2827600));
    vlTOPp->mkMmUnit__DOT__y___05Fh3047656 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3047746) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3047747));
    vlTOPp->mkMmUnit__DOT__y___05Fh3267803 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3267893) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3267894));
    vlTOPp->mkMmUnit__DOT__y___05Fh3487950 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3488040) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3488041));
    vlTOPp->mkMmUnit__DOT__y___05Fh185663 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh185753) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh185754));
    vlTOPp->mkMmUnit__DOT__y___05Fh29954 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh29683) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh250109 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh249838) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh470259 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh469988) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh690409 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh690138) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh910579 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh910308) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1130726 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1130455) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1350873 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1350602) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1571020 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1570749) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1791190 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1790919) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2011337 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2011066) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2231484 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2231213) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2451631 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2451360) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2671801 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2671530) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2891948 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2891677) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3112095 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3111824) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3332242 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3331971) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh406179 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh405817) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh405816));
    vlTOPp->mkMmUnit__DOT__y___05Fh626329 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh625967) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh625966));
    vlTOPp->mkMmUnit__DOT__y___05Fh846479 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh846117) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh846116));
    vlTOPp->mkMmUnit__DOT__y___05Fh1066649 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1066287) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1066286));
    vlTOPp->mkMmUnit__DOT__y___05Fh1286796 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1286434) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1286433));
    vlTOPp->mkMmUnit__DOT__y___05Fh1506943 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1506581) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1506580));
    vlTOPp->mkMmUnit__DOT__y___05Fh1727090 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1726728) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1726727));
    vlTOPp->mkMmUnit__DOT__y___05Fh1947260 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1946898) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1946897));
    vlTOPp->mkMmUnit__DOT__y___05Fh2167407 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2167045) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2167044));
    vlTOPp->mkMmUnit__DOT__y___05Fh2387554 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2387192) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2387191));
    vlTOPp->mkMmUnit__DOT__y___05Fh2607701 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2607339) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2607338));
    vlTOPp->mkMmUnit__DOT__y___05Fh2827871 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2827509) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2827508));
    vlTOPp->mkMmUnit__DOT__y___05Fh3048018 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3047656) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3047655));
    vlTOPp->mkMmUnit__DOT__y___05Fh3268165 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3267803) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3267802));
    vlTOPp->mkMmUnit__DOT__y___05Fh3488312 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3487950) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3487949));
    vlTOPp->mkMmUnit__DOT__y___05Fh186025 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh185663) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh185662));
    vlTOPp->mkMmUnit__DOT__y___05Fh30225 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh29954) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh250380 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh250109) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh470530 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh470259) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh690680 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh690409) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh910850 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh910579) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1130997 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1130726) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1351144 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1350873) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1571291 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1571020) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1791461 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1791190) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2011608 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2011337) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2231755 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2231484) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2451902 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2451631) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2672072 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2671801) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2892219 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2891948) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3112366 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3112095) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3332513 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3332242) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh406088 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242) 
                                                    >> 8U) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh406179)));
    vlTOPp->mkMmUnit__DOT__y___05Fh626238 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740) 
                                                    >> 8U) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh626329)));
    vlTOPp->mkMmUnit__DOT__y___05Fh846388 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238) 
                                                    >> 8U) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh846479)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1066558 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736) 
                                                >> 8U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1066649)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1286705 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234) 
                                                >> 8U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1286796)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1506852 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732) 
                                                >> 8U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1506943)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1726999 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230) 
                                                >> 8U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1727090)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1947169 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728) 
                                                >> 8U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1947260)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2167316 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226) 
                                                >> 8U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2167407)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2387463 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724) 
                                                >> 8U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2387554)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2607610 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222) 
                                                >> 8U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2607701)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2827780 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720) 
                                                >> 8U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2827871)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3047927 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218) 
                                                >> 8U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3048018)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3268074 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716) 
                                                >> 8U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3268165)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3488221 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214) 
                                                >> 8U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3488312)));
    vlTOPp->mkMmUnit__DOT__y___05Fh185934 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744) 
                                                    >> 8U) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh186025)));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_0_macunit_int_Mac_reg_A___05F7_8_BI_ETC___05F_d154 
        = ((0x8000U & ((0xffff8000U & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh30225) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh29954) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh29683) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh29412) 
                                                   << 0xcU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_0_macunit_int_Mac_reg_A___05F7_8_BI_ETC___05F_d152)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh30496 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh30225) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 0xfU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_1_macunit_int_Mac_reg_A_499_545_ETC___05F_d2652 
        = ((0x8000U & ((0xffff8000U & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh250380) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh250109) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh249838) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh249567) 
                                                   << 0xcU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_1_macunit_int_Mac_reg_A_499_545_ETC___05F_d2650)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh250651 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh250380) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 0xfU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_2_macunit_int_Mac_reg_A_997_043_ETC___05F_d5150 
        = ((0x8000U & ((0xffff8000U & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh470530) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh470259) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh469988) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh469717) 
                                                   << 0xcU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_2_macunit_int_Mac_reg_A_997_043_ETC___05F_d5148)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh470801 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh470530) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 0xfU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_3_macunit_int_Mac_reg_A_495_541_ETC___05F_d7648 
        = ((0x8000U & ((0xffff8000U & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh690680) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh690409) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh690138) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh689867) 
                                                   << 0xcU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_3_macunit_int_Mac_reg_A_495_541_ETC___05F_d7646)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh690951 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh690680) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 0xfU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_0_macunit_int_Mac_reg_A_993_003_ETC___05F_d10146 
        = ((0x8000U & ((0xffff8000U & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh910850) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh910579) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh910308) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh910037) 
                                                   << 0xcU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_0_macunit_int_Mac_reg_A_993_003_ETC___05F_d10144)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh911121 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh910850) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 0xfU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_1_macunit_int_Mac_reg_A_2491_25_ETC___05F_d12644 
        = ((0x8000U & ((0xffff8000U & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1130997) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1130726) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1130455) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1130184) 
                                                   << 0xcU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_1_macunit_int_Mac_reg_A_2491_25_ETC___05F_d12642)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1131268 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1130997) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 0xfU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_2_macunit_int_Mac_reg_A_4989_50_ETC___05F_d15142 
        = ((0x8000U & ((0xffff8000U & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1351144) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1350873) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1350602) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1350331) 
                                                   << 0xcU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_2_macunit_int_Mac_reg_A_4989_50_ETC___05F_d15140)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1351415 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1351144) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 0xfU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_3_macunit_int_Mac_reg_A_7487_75_ETC___05F_d17640 
        = ((0x8000U & ((0xffff8000U & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1571291) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1571020) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1570749) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1570478) 
                                                   << 0xcU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_3_macunit_int_Mac_reg_A_7487_75_ETC___05F_d17638)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1571562 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1571291) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 0xfU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_0_macunit_int_Mac_reg_A_9985_00_ETC___05F_d20138 
        = ((0x8000U & ((0xffff8000U & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1791461) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1791190) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1790919) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1790648) 
                                                   << 0xcU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_0_macunit_int_Mac_reg_A_9985_00_ETC___05F_d20136)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1791732 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1791461) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 0xfU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_1_macunit_int_Mac_reg_A_2483_25_ETC___05F_d22636 
        = ((0x8000U & ((0xffff8000U & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2011608) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2011337) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2011066) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2010795) 
                                                   << 0xcU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_1_macunit_int_Mac_reg_A_2483_25_ETC___05F_d22634)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2011879 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2011608) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 0xfU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_2_macunit_int_Mac_reg_A_4981_50_ETC___05F_d25134 
        = ((0x8000U & ((0xffff8000U & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2231755) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2231484) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2231213) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2230942) 
                                                   << 0xcU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_2_macunit_int_Mac_reg_A_4981_50_ETC___05F_d25132)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2232026 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2231755) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 0xfU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_3_macunit_int_Mac_reg_A_7479_75_ETC___05F_d27632 
        = ((0x8000U & ((0xffff8000U & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2451902) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2451631) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2451360) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2451089) 
                                                   << 0xcU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_3_macunit_int_Mac_reg_A_7479_75_ETC___05F_d27630)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2452173 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2451902) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 0xfU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_0_macunit_int_Mac_reg_A_9977_00_ETC___05F_d30130 
        = ((0x8000U & ((0xffff8000U & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2672072) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2671801) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2671530) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2671259) 
                                                   << 0xcU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_0_macunit_int_Mac_reg_A_9977_00_ETC___05F_d30128)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2672343 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2672072) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 0xfU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_1_macunit_int_Mac_reg_A_2475_25_ETC___05F_d32628 
        = ((0x8000U & ((0xffff8000U & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2892219) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2891948) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2891677) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2891406) 
                                                   << 0xcU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_1_macunit_int_Mac_reg_A_2475_25_ETC___05F_d32626)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2892490 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2892219) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 0xfU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_2_macunit_int_Mac_reg_A_4973_50_ETC___05F_d35126 
        = ((0x8000U & ((0xffff8000U & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3112366) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3112095) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3111824) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3111553) 
                                                   << 0xcU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_2_macunit_int_Mac_reg_A_4973_50_ETC___05F_d35124)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3112637 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3112366) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 0xfU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_3_macunit_int_Mac_reg_A_7471_75_ETC___05F_d37624 
        = ((0x8000U & ((0xffff8000U & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3332513) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3332242) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3331971) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3331700) 
                                                   << 0xcU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_3_macunit_int_Mac_reg_A_7471_75_ETC___05F_d37622)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3332784 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3332513) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 0xfU));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4322 
        = ((0x200U & ((0xfffffe00U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh406088) 
                         << 9U))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh405816) 
                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh405817)) 
                                      << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4321)));
    vlTOPp->mkMmUnit__DOT__y___05Fh406359 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh406088) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242) 
                                                >> 9U));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6820 
        = ((0x200U & ((0xfffffe00U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh626238) 
                         << 9U))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh625966) 
                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh625967)) 
                                      << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6819)));
    vlTOPp->mkMmUnit__DOT__y___05Fh626509 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh626238) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740) 
                                                >> 9U));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9318 
        = ((0x200U & ((0xfffffe00U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh846388) 
                         << 9U))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh846116) 
                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh846117)) 
                                      << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9317)));
    vlTOPp->mkMmUnit__DOT__y___05Fh846659 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh846388) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238) 
                                                >> 9U));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11816 
        = ((0x200U & ((0xfffffe00U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1066558) 
                         << 9U))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1066286) 
                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1066287)) 
                                      << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11815)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1066829 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1066558) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736) 
                                                 >> 9U));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14314 
        = ((0x200U & ((0xfffffe00U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1286705) 
                         << 9U))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1286433) 
                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1286434)) 
                                      << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14313)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1286976 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1286705) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234) 
                                                 >> 9U));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16812 
        = ((0x200U & ((0xfffffe00U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1506852) 
                         << 9U))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1506580) 
                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1506581)) 
                                      << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16811)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1507123 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1506852) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732) 
                                                 >> 9U));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19310 
        = ((0x200U & ((0xfffffe00U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1726999) 
                         << 9U))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1726727) 
                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1726728)) 
                                      << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19309)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1727270 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1726999) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230) 
                                                 >> 9U));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21808 
        = ((0x200U & ((0xfffffe00U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1947169) 
                         << 9U))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1946897) 
                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1946898)) 
                                      << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21807)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1947440 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1947169) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728) 
                                                 >> 9U));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24306 
        = ((0x200U & ((0xfffffe00U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2167316) 
                         << 9U))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2167044) 
                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2167045)) 
                                      << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24305)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2167587 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2167316) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226) 
                                                 >> 9U));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26804 
        = ((0x200U & ((0xfffffe00U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2387463) 
                         << 9U))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2387191) 
                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2387192)) 
                                      << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26803)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2387734 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2387463) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724) 
                                                 >> 9U));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29302 
        = ((0x200U & ((0xfffffe00U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2607610) 
                         << 9U))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2607338) 
                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2607339)) 
                                      << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29301)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2607881 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2607610) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222) 
                                                 >> 9U));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31800 
        = ((0x200U & ((0xfffffe00U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2827780) 
                         << 9U))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2827508) 
                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2827509)) 
                                      << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31799)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2828051 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2827780) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720) 
                                                 >> 9U));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34298 
        = ((0x200U & ((0xfffffe00U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3047927) 
                         << 9U))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3047655) 
                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3047656)) 
                                      << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34297)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3048198 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3047927) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218) 
                                                 >> 9U));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36796 
        = ((0x200U & ((0xfffffe00U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3268074) 
                         << 9U))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3267802) 
                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3267803)) 
                                      << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36795)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3268345 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3268074) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716) 
                                                 >> 9U));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39294 
        = ((0x200U & ((0xfffffe00U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3488221) 
                         << 9U))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3487949) 
                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3487950)) 
                                      << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39293)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3488492 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3488221) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214) 
                                                 >> 9U));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1824 
        = ((0x200U & ((0xfffffe00U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh185934) 
                         << 9U))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh185662) 
                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh185663)) 
                                      << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1823)));
    vlTOPp->mkMmUnit__DOT__y___05Fh186205 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh185934) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744) 
                                                >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh30767 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh30496) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh250922 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh250651) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh471072 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh470801) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh691222 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh690951) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh911392 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh911121) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1131539 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1131268) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1351686 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1351415) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1571833 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1571562) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1792003 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1791732) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2012150 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2011879) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2232297 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2232026) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2452444 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2452173) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2672614 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2672343) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2892761 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2892490) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3112908 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3112637) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3333055 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3332784) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh406630 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh406359) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242) 
                                                >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh626780 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh626509) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740) 
                                                >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh846930 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh846659) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238) 
                                                >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1067100 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1066829) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1287247 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1286976) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1507394 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1507123) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1727541 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1727270) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1947711 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1947440) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2167858 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2167587) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2388005 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2387734) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2608152 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2607881) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2828322 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2828051) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3048469 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3048198) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3268616 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3268345) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3488763 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3488492) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh186476 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh186205) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744) 
                                                >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh31038 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh30767) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh251193 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh250922) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh471343 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh471072) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh691493 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh691222) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh911663 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh911392) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1131810 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1131539) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1351957 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1351686) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1572104 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1571833) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1792274 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1792003) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2012421 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2012150) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2232568 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2232297) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2452715 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2452444) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2672885 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2672614) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2893032 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2892761) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3113179 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3112908) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3333326 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3333055) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh406901 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh406630) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242) 
                                                >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh627051 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh626780) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740) 
                                                >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh847201 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh846930) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238) 
                                                >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1067371 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1067100) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1287518 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1287247) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1507665 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1507394) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1727812 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1727541) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1947982 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1947711) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2168129 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2167858) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2388276 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2388005) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2608423 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2608152) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2828593 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2828322) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3048740 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3048469) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3268887 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3268616) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3489034 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3488763) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh186747 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh186476) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744) 
                                                >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh31309 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh31038) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh251464 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh251193) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh471614 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh471343) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh691764 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh691493) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh911934 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh911663) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1132081 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1131810) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1352228 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1351957) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1572375 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1572104) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1792545 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1792274) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2012692 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2012421) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2232839 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2232568) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2452986 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2452715) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2673156 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2672885) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2893303 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2893032) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3113450 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3113179) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3333597 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3333326) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh407172 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh406901) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242) 
                                                >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh627322 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh627051) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740) 
                                                >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh847472 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh847201) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238) 
                                                >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1067642 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1067371) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1287789 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1287518) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1507936 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1507665) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1728083 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1727812) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1948253 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1947982) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2168400 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2168129) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2388547 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2388276) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2608694 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2608423) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2828864 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2828593) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3049011 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3048740) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3269158 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3268887) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3489305 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3489034) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh187018 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh186747) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744) 
                                                >> 0xcU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_0_macunit_int_Mac_reg_A___05F7_8_BI_ETC___05F_d156 
        = ((0x80000U & ((0xfff80000U & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh31309) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh31038) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh30767) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh30496) 
                                                     << 0x10U))) 
                                                | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_0_macunit_int_Mac_reg_A___05F7_8_BI_ETC___05F_d154)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh31580 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh31309) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 0x13U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_1_macunit_int_Mac_reg_A_499_545_ETC___05F_d2654 
        = ((0x80000U & ((0xfff80000U & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh251464) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh251193) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh250922) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh250651) 
                                                     << 0x10U))) 
                                                | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_1_macunit_int_Mac_reg_A_499_545_ETC___05F_d2652)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh251735 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh251464) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 0x13U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_2_macunit_int_Mac_reg_A_997_043_ETC___05F_d5152 
        = ((0x80000U & ((0xfff80000U & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh471614) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh471343) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh471072) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh470801) 
                                                     << 0x10U))) 
                                                | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_2_macunit_int_Mac_reg_A_997_043_ETC___05F_d5150)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh471885 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh471614) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 0x13U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_3_macunit_int_Mac_reg_A_495_541_ETC___05F_d7650 
        = ((0x80000U & ((0xfff80000U & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh691764) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh691493) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh691222) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh690951) 
                                                     << 0x10U))) 
                                                | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_3_macunit_int_Mac_reg_A_495_541_ETC___05F_d7648)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh692035 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh691764) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 0x13U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_0_macunit_int_Mac_reg_A_993_003_ETC___05F_d10148 
        = ((0x80000U & ((0xfff80000U & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh911934) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh911663) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh911392) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh911121) 
                                                     << 0x10U))) 
                                                | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_0_macunit_int_Mac_reg_A_993_003_ETC___05F_d10146)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh912205 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh911934) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 0x13U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_1_macunit_int_Mac_reg_A_2491_25_ETC___05F_d12646 
        = ((0x80000U & ((0xfff80000U & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1132081) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1131810) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1131539) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1131268) 
                                                     << 0x10U))) 
                                                | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_1_macunit_int_Mac_reg_A_2491_25_ETC___05F_d12644)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1132352 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1132081) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 0x13U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_2_macunit_int_Mac_reg_A_4989_50_ETC___05F_d15144 
        = ((0x80000U & ((0xfff80000U & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1352228) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1351957) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1351686) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1351415) 
                                                     << 0x10U))) 
                                                | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_2_macunit_int_Mac_reg_A_4989_50_ETC___05F_d15142)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1352499 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1352228) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 0x13U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_3_macunit_int_Mac_reg_A_7487_75_ETC___05F_d17642 
        = ((0x80000U & ((0xfff80000U & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1572375) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1572104) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1571833) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1571562) 
                                                     << 0x10U))) 
                                                | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_3_macunit_int_Mac_reg_A_7487_75_ETC___05F_d17640)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1572646 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1572375) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 0x13U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_0_macunit_int_Mac_reg_A_9985_00_ETC___05F_d20140 
        = ((0x80000U & ((0xfff80000U & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1792545) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1792274) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1792003) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1791732) 
                                                     << 0x10U))) 
                                                | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_0_macunit_int_Mac_reg_A_9985_00_ETC___05F_d20138)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1792816 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1792545) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 0x13U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_1_macunit_int_Mac_reg_A_2483_25_ETC___05F_d22638 
        = ((0x80000U & ((0xfff80000U & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2012692) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2012421) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2012150) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2011879) 
                                                     << 0x10U))) 
                                                | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_1_macunit_int_Mac_reg_A_2483_25_ETC___05F_d22636)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2012963 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2012692) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 0x13U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_2_macunit_int_Mac_reg_A_4981_50_ETC___05F_d25136 
        = ((0x80000U & ((0xfff80000U & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2232839) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2232568) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2232297) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2232026) 
                                                     << 0x10U))) 
                                                | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_2_macunit_int_Mac_reg_A_4981_50_ETC___05F_d25134)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2233110 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2232839) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 0x13U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_3_macunit_int_Mac_reg_A_7479_75_ETC___05F_d27634 
        = ((0x80000U & ((0xfff80000U & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2452986) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2452715) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2452444) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2452173) 
                                                     << 0x10U))) 
                                                | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_3_macunit_int_Mac_reg_A_7479_75_ETC___05F_d27632)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2453257 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2452986) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 0x13U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_0_macunit_int_Mac_reg_A_9977_00_ETC___05F_d30132 
        = ((0x80000U & ((0xfff80000U & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2673156) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2672885) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2672614) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2672343) 
                                                     << 0x10U))) 
                                                | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_0_macunit_int_Mac_reg_A_9977_00_ETC___05F_d30130)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2673427 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2673156) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 0x13U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_1_macunit_int_Mac_reg_A_2475_25_ETC___05F_d32630 
        = ((0x80000U & ((0xfff80000U & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2893303) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2893032) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2892761) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2892490) 
                                                     << 0x10U))) 
                                                | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_1_macunit_int_Mac_reg_A_2475_25_ETC___05F_d32628)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2893574 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2893303) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 0x13U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_2_macunit_int_Mac_reg_A_4973_50_ETC___05F_d35128 
        = ((0x80000U & ((0xfff80000U & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3113450) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3113179) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3112908) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3112637) 
                                                     << 0x10U))) 
                                                | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_2_macunit_int_Mac_reg_A_4973_50_ETC___05F_d35126)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3113721 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3113450) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 0x13U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_3_macunit_int_Mac_reg_A_7471_75_ETC___05F_d37626 
        = ((0x80000U & ((0xfff80000U & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3333597) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                                              ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3333326) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3333055) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3332784) 
                                                     << 0x10U))) 
                                                | (IData)(vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_3_macunit_int_Mac_reg_A_7471_75_ETC___05F_d37624)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3333868 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3333597) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 0x13U));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4324 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh407172) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh406901) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh406630) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh406359) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4322)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh407443 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh407172) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242) 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6822 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh627322) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh627051) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh626780) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh626509) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6820)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh627593 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh627322) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740) 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9320 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh847472) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh847201) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh846930) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh846659) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9318)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh847743 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh847472) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238) 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11818 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1067642) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1067371) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1067100) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1066829) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11816)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1067913 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1067642) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14316 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1287789) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1287518) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1287247) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1286976) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14314)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1288060 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1287789) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16814 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1507936) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1507665) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1507394) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1507123) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16812)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1508207 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1507936) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19312 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1728083) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1727812) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1727541) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1727270) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19310)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1728354 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1728083) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21810 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1948253) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1947982) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1947711) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1947440) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21808)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1948524 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1948253) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24308 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2168400) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2168129) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2167858) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2167587) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24306)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2168671 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2168400) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26806 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2388547) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2388276) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2388005) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2387734) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26804)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2388818 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2388547) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29304 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2608694) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2608423) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2608152) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2607881) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29302)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2608965 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2608694) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31802 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2828864) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2828593) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2828322) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2828051) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31800)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2829135 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2828864) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34300 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3049011) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3048740) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3048469) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3048198) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34298)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3049282 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3049011) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36798 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3269158) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3268887) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3268616) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3268345) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36796)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3269429 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3269158) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39296 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3489305) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3489034) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3488763) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3488492) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39294)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3489576 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3489305) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1826 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh187018) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh186747) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh186476) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh186205) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1824)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh187289 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh187018) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744) 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh31851 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh31580) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh252006 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh251735) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh472156 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh471885) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh692306 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh692035) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh912476 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh912205) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1132623 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1132352) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1352770 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1352499) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1572917 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1572646) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1793087 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1792816) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2013234 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2012963) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2233381 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2233110) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2453528 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2453257) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2673698 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2673427) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2893845 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2893574) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3113992 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3113721) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3334139 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3333868) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh407714 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh407443) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh627864 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh627593) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh848014 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh847743) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1068184 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1067913) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1288331 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1288060) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1508478 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1508207) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1728625 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1728354) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1948795 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1948524) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2168942 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2168671) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2389089 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2388818) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2609236 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2608965) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2829406 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2829135) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3049553 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3049282) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3269700 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3269429) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3489847 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3489576) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh187560 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh187289) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh32122 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh31851) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh252277 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh252006) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh472427 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh472156) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh692577 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh692306) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh912747 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh912476) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1132894 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1132623) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1353041 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1352770) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1573188 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1572917) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1793358 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1793087) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2013505 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2013234) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2233652 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2233381) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2453799 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2453528) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2673969 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2673698) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2894116 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2893845) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3114263 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3113992) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3334410 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3334139) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 0x15U));
    vlTOPp->mkMmUnit__DOT__product___05Fh398970 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh407714) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh407443) 
                                                           << 0xeU))) 
                                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4324)));
    vlTOPp->mkMmUnit__DOT__product___05Fh619120 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh627864) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh627593) 
                                                           << 0xeU))) 
                                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6822)));
    vlTOPp->mkMmUnit__DOT__product___05Fh839270 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh848014) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh847743) 
                                                           << 0xeU))) 
                                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9320)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1059440 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1068184) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1067913) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11818)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1279587 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1288331) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1288060) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14316)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1499734 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1508478) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1508207) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16814)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1719881 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1728625) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1728354) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19312)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1940051 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1948795) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1948524) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21810)));
    vlTOPp->mkMmUnit__DOT__product___05Fh2160198 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2168942) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2168671) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24308)));
    vlTOPp->mkMmUnit__DOT__product___05Fh2380345 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2389089) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2388818) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26806)));
    vlTOPp->mkMmUnit__DOT__product___05Fh2600492 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2609236) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2608965) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29304)));
    vlTOPp->mkMmUnit__DOT__product___05Fh2820662 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2829406) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2829135) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31802)));
    vlTOPp->mkMmUnit__DOT__product___05Fh3040809 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3049553) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3049282) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34300)));
    vlTOPp->mkMmUnit__DOT__product___05Fh3260956 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3269700) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3269429) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36798)));
    vlTOPp->mkMmUnit__DOT__product___05Fh3481103 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3489847) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3489576) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39296)));
    vlTOPp->mkMmUnit__DOT__product___05Fh178816 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh187560) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh187289) 
                                                           << 0xeU))) 
                                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1826)));
    vlTOPp->mkMmUnit__DOT__y___05Fh32393 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh32122) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh252548 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh252277) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh472698 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh472427) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh692848 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh692577) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh913018 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh912747) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1133165 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1132894) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1353312 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1353041) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1573459 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1573188) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1793629 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1793358) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2013776 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2013505) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2233923 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2233652) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2454070 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2453799) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2674240 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2673969) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2894387 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2894116) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3114534 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3114263) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3334681 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3334410) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 0x16U));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh398970)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_0_23_ETC___05F_d4242));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh619120)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_0_73_ETC___05F_d6740));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh839270)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_0_23_ETC___05F_d9238));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1059440)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_0_1_ETC___05F_d11736));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1279587)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_0_4_ETC___05F_d14234));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1499734)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_0_6_ETC___05F_d16732));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1719881)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_0_9_ETC___05F_d19230));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1940051)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_0_1_ETC___05F_d21728));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2160198)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_0_4_ETC___05F_d24226));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2380345)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_0_6_ETC___05F_d26724));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2600492)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_0_9_ETC___05F_d29222));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2820662)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_0_1_ETC___05F_d31720));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3040809)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_0_4_ETC___05F_d34218));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3260956)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_0_6_ETC___05F_d36716));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3481103)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_0_9_ETC___05F_d39214));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh178816)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_0_73_ETC___05F_d1744));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_0_macunit_int_Mac_reg_A___05F7_8_BI_ETC___05F_d158 
        = ((0x800000U & ((0xff800000U & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                         ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh32393) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh32122) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh31851) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh31580) 
                                                      << 0x14U))) 
                                                 | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_0_macunit_int_Mac_reg_A___05F7_8_BI_ETC___05F_d156))));
    vlTOPp->mkMmUnit__DOT__y___05Fh32664 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh32393) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 0x17U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_1_macunit_int_Mac_reg_A_499_545_ETC___05F_d2656 
        = ((0x800000U & ((0xff800000U & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                         ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh252548) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh252277) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh252006) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh251735) 
                                                      << 0x14U))) 
                                                 | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_1_macunit_int_Mac_reg_A_499_545_ETC___05F_d2654))));
    vlTOPp->mkMmUnit__DOT__y___05Fh252819 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh252548) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 0x17U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_2_macunit_int_Mac_reg_A_997_043_ETC___05F_d5154 
        = ((0x800000U & ((0xff800000U & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                         ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh472698) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh472427) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh472156) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh471885) 
                                                      << 0x14U))) 
                                                 | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_2_macunit_int_Mac_reg_A_997_043_ETC___05F_d5152))));
    vlTOPp->mkMmUnit__DOT__y___05Fh472969 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh472698) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 0x17U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_3_macunit_int_Mac_reg_A_495_541_ETC___05F_d7652 
        = ((0x800000U & ((0xff800000U & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                         ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh692848) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh692577) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh692306) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh692035) 
                                                      << 0x14U))) 
                                                 | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_3_macunit_int_Mac_reg_A_495_541_ETC___05F_d7650))));
    vlTOPp->mkMmUnit__DOT__y___05Fh693119 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh692848) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 0x17U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_0_macunit_int_Mac_reg_A_993_003_ETC___05F_d10150 
        = ((0x800000U & ((0xff800000U & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                         ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh913018) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh912747) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh912476) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh912205) 
                                                      << 0x14U))) 
                                                 | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_0_macunit_int_Mac_reg_A_993_003_ETC___05F_d10148))));
    vlTOPp->mkMmUnit__DOT__y___05Fh913289 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh913018) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 0x17U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_1_macunit_int_Mac_reg_A_2491_25_ETC___05F_d12648 
        = ((0x800000U & ((0xff800000U & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                         ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1133165) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1132894) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1132623) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1132352) 
                                                      << 0x14U))) 
                                                 | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_1_macunit_int_Mac_reg_A_2491_25_ETC___05F_d12646))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1133436 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1133165) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 0x17U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_2_macunit_int_Mac_reg_A_4989_50_ETC___05F_d15146 
        = ((0x800000U & ((0xff800000U & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                         ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1353312) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1353041) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1352770) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1352499) 
                                                      << 0x14U))) 
                                                 | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_2_macunit_int_Mac_reg_A_4989_50_ETC___05F_d15144))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1353583 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1353312) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 0x17U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_3_macunit_int_Mac_reg_A_7487_75_ETC___05F_d17644 
        = ((0x800000U & ((0xff800000U & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                         ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1573459) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1573188) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1572917) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1572646) 
                                                      << 0x14U))) 
                                                 | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_3_macunit_int_Mac_reg_A_7487_75_ETC___05F_d17642))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1573730 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1573459) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 0x17U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_0_macunit_int_Mac_reg_A_9985_00_ETC___05F_d20142 
        = ((0x800000U & ((0xff800000U & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                         ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1793629) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1793358) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1793087) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1792816) 
                                                      << 0x14U))) 
                                                 | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_0_macunit_int_Mac_reg_A_9985_00_ETC___05F_d20140))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1793900 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1793629) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 0x17U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_1_macunit_int_Mac_reg_A_2483_25_ETC___05F_d22640 
        = ((0x800000U & ((0xff800000U & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                         ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2013776) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2013505) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2013234) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2012963) 
                                                      << 0x14U))) 
                                                 | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_1_macunit_int_Mac_reg_A_2483_25_ETC___05F_d22638))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2014047 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2013776) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 0x17U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_2_macunit_int_Mac_reg_A_4981_50_ETC___05F_d25138 
        = ((0x800000U & ((0xff800000U & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                         ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2233923) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2233652) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2233381) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2233110) 
                                                      << 0x14U))) 
                                                 | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_2_macunit_int_Mac_reg_A_4981_50_ETC___05F_d25136))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2234194 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2233923) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 0x17U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_3_macunit_int_Mac_reg_A_7479_75_ETC___05F_d27636 
        = ((0x800000U & ((0xff800000U & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                         ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2454070) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2453799) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2453528) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2453257) 
                                                      << 0x14U))) 
                                                 | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_3_macunit_int_Mac_reg_A_7479_75_ETC___05F_d27634))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2454341 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2454070) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 0x17U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_0_macunit_int_Mac_reg_A_9977_00_ETC___05F_d30134 
        = ((0x800000U & ((0xff800000U & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                         ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2674240) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2673969) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2673698) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2673427) 
                                                      << 0x14U))) 
                                                 | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_0_macunit_int_Mac_reg_A_9977_00_ETC___05F_d30132))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2674511 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2674240) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 0x17U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_1_macunit_int_Mac_reg_A_2475_25_ETC___05F_d32632 
        = ((0x800000U & ((0xff800000U & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                         ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2894387) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2894116) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2893845) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2893574) 
                                                      << 0x14U))) 
                                                 | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_1_macunit_int_Mac_reg_A_2475_25_ETC___05F_d32630))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2894658 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2894387) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 0x17U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_2_macunit_int_Mac_reg_A_4973_50_ETC___05F_d35130 
        = ((0x800000U & ((0xff800000U & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                         ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3114534) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3114263) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3113992) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3113721) 
                                                      << 0x14U))) 
                                                 | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_2_macunit_int_Mac_reg_A_4973_50_ETC___05F_d35128))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3114805 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3114534) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 0x17U));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_3_macunit_int_Mac_reg_A_7471_75_ETC___05F_d37628 
        = ((0x800000U & ((0xff800000U & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                         ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3334681) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3334410) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3334139) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3333868) 
                                                      << 0x14U))) 
                                                 | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_3_macunit_int_Mac_reg_A_7471_75_ETC___05F_d37626))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3334952 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3334681) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 0x17U));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_ETC___05Fq136 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh410211 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                    >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh410302 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                    >> 8U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh409940 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                    >> 8U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh410031 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                    >> 7U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh409669 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                    >> 7U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh409760 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                    >> 6U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh409398 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh409489 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                    >> 5U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh409127 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                    >> 5U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh409218 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                    >> 4U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh408855 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                    >> 4U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh408946 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                    >> 3U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_ETC___05Fq135 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                   >> 2U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A)))
            ? 8U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh408587 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                    >> 3U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_ETC___05Fq172 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh630361 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
                                                    >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh630452 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
                                                    >> 8U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh630090 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
                                                    >> 8U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh630181 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
                                                    >> 7U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh629819 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
                                                    >> 7U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh629910 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
                                                    >> 6U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh629548 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh629639 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
                                                    >> 5U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh629277 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
                                                    >> 5U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh629368 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
                                                    >> 4U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh629005 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
                                                    >> 4U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh629096 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
                                                    >> 3U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_ETC___05Fq171 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
                   >> 2U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A)))
            ? 8U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh628737 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
                                                    >> 3U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_ETC___05Fq207 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh850511 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                    >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh850602 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                    >> 8U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh850240 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                    >> 8U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh850331 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                    >> 7U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh849969 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                    >> 7U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh850060 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                    >> 6U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh849698 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh849789 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                    >> 5U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh849427 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                    >> 5U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh849518 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                    >> 4U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh849155 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                    >> 4U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh849246 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                    >> 3U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_ETC___05Fq206 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                   >> 2U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A)))
            ? 8U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh848887 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                    >> 3U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq242 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1070681 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1070772 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1070410 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1070501 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1070139 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1070230 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1069868 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1069959 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1069597 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1069688 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1069325 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1069416 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq241 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                   >> 2U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A)))
            ? 8U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1069057 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq277 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1290828 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1290919 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1290557 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1290648 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1290286 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1290377 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1290015 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1290106 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1289744 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1289835 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1289472 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1289563 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq276 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                   >> 2U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A)))
            ? 8U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1289204 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq312 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1510975 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816) 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1511066 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1510704 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1510795 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1510433 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1510524 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1510162 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1510253 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1509891 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1509982 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1509619 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1509710 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq311 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816) 
                   >> 2U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A)))
            ? 8U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1509351 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq347 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1731122 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314) 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1731213 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1730851 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1730942 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1730580 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1730671 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1730309 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1730400 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1730038 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1730129 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1729766 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1729857 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq346 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314) 
                   >> 2U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A)))
            ? 8U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1729498 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq382 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1951292 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812) 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1951383 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1951021 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1951112 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1950750 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1950841 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1950479 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1950570 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1950208 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1950299 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1949936 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1950027 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq381 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812) 
                   >> 2U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A)))
            ? 8U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1949668 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq417 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2171439 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310) 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2171530 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2171168 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2171259 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2170897 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2170988 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2170626 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2170717 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2170355 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2170446 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2170083 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2170174 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq416 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310) 
                   >> 2U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A)))
            ? 8U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2169815 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq452 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808))
            ? 1U : 0U);
}