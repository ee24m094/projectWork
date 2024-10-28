// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/shakti/Executeprograms/bluespec_demo_examples/git-ws/projectWork/unpipelined/verilog/mkMacUnitTop.v", 44, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/shakti/Executeprograms/bluespec_demo_examples/git-ws/projectWork/unpipelined/verilog/mkMacUnitTop.v", 44, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop::_combo__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__2\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkMacUnitTop__DOT__CLK = vlTOPp->CLK;
    vlTOPp->mkMacUnitTop__DOT__RST_N = vlTOPp->RST_N;
    vlTOPp->mkMacUnitTop__DOT__load_A_a = vlTOPp->load_A_a;
    vlTOPp->mkMacUnitTop__DOT__EN_load_A = vlTOPp->EN_load_A;
    vlTOPp->mkMacUnitTop__DOT__load_B_b = vlTOPp->load_B_b;
    vlTOPp->mkMacUnitTop__DOT__EN_load_B = vlTOPp->EN_load_B;
    vlTOPp->mkMacUnitTop__DOT__load_C_c = vlTOPp->load_C_c;
    vlTOPp->mkMacUnitTop__DOT__EN_load_C = vlTOPp->EN_load_C;
    vlTOPp->mkMacUnitTop__DOT__load_s1_or_s2_sel = vlTOPp->load_s1_or_s2_sel;
    vlTOPp->mkMacUnitTop__DOT__EN_load_s1_or_s2 = vlTOPp->EN_load_s1_or_s2;
    vlTOPp->mkMacUnitTop__DOT__EN_get_MAC = vlTOPp->EN_get_MAC;
    vlTOPp->mkMacUnitTop__DOT__WILL_FIRE_load_A = vlTOPp->EN_load_A;
    vlTOPp->mkMacUnitTop__DOT__WILL_FIRE_load_B = vlTOPp->EN_load_B;
    vlTOPp->mkMacUnitTop__DOT__WILL_FIRE_load_C = vlTOPp->EN_load_C;
    vlTOPp->mkMacUnitTop__DOT__WILL_FIRE_load_s1_or_s2 
        = vlTOPp->EN_load_s1_or_s2;
    vlTOPp->mkMacUnitTop__DOT__WILL_FIRE_get_MAC = vlTOPp->EN_get_MAC;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_result_EN) {
            vlTOPp->mkMacUnitTop__DOT__bf16_Mac_result 
                = vlTOPp->mkMacUnitTop__DOT__bf16_Mac_result_D_IN;
        }
    } else {
        vlTOPp->mkMacUnitTop__DOT__bf16_Mac_result = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkMacUnitTop__DOT__int_Mac_result_EN) {
            vlTOPp->mkMacUnitTop__DOT__int_Mac_result 
                = vlTOPp->mkMacUnitTop__DOT__int_Mac_result_D_IN;
        }
    } else {
        vlTOPp->mkMacUnitTop__DOT__int_Mac_result = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkMacUnitTop__DOT__result_EN) {
            vlTOPp->mkMacUnitTop__DOT__result = vlTOPp->mkMacUnitTop__DOT__result_D_IN;
        }
    } else {
        vlTOPp->mkMacUnitTop__DOT__result = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkMacUnitTop__DOT__reg_s1_or_s2_EN) {
            vlTOPp->mkMacUnitTop__DOT__reg_s1_or_s2 
                = vlTOPp->mkMacUnitTop__DOT__reg_s1_or_s2_D_IN;
        }
    } else {
        vlTOPp->mkMacUnitTop__DOT__reg_s1_or_s2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_C_EN) {
            vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_C 
                = vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_C_D_IN;
        }
    } else {
        vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_C = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C_EN) {
            vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C 
                = vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C_D_IN;
        }
    } else {
        vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B_EN) {
            vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B 
                = vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B_D_IN;
        }
    } else {
        vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_EN) {
            vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A 
                = vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_D_IN;
        }
    } else {
        vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_B_EN) {
            vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_B 
                = vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_B_D_IN;
        }
    } else {
        vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_B = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_A_EN) {
            vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_A 
                = vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_A_D_IN;
        }
    } else {
        vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_A = 0U;
    }
    vlTOPp->mkMacUnitTop__DOT__get_MAC = vlTOPp->mkMacUnitTop__DOT__result;
    vlTOPp->mkMacUnitTop__DOT__result_D_IN = ((IData)(vlTOPp->mkMacUnitTop__DOT__reg_s1_or_s2)
                                               ? vlTOPp->mkMacUnitTop__DOT__bf16_Mac_result
                                               : vlTOPp->mkMacUnitTop__DOT__int_Mac_result);
    vlTOPp->mkMacUnitTop__DOT__mantissa_b___05Fh175522 
        = (0x800000U | (0x7fffffU & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_C));
    vlTOPp->mkMacUnitTop__DOT__sign_A___05Fh175519 
        = (1U & (((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                  ^ (IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B)) 
                 >> 0xfU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh212345 = (0xffU 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 7U) 
                                                    + 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B) 
                                                     >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_A_BIT_0_THEN_1_ELSE_0___05Fq1 
        = ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A))
            ? 1U : 0U);
    vlTOPp->mkMacUnitTop__DOT__INV_int_Mac_reg_B___05Fq2 
        = (0xffU & (~ (IData)(vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_B)));
    vlTOPp->mkMacUnitTop__DOT__temp_a___05Fh1026 = 
        ((0xffffff00U & ((- (IData)((1U & ((IData)(vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_A) 
                                           >> 7U)))) 
                         << 8U)) | (IData)(vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_A));
    vlTOPp->get_MAC = vlTOPp->mkMacUnitTop__DOT__get_MAC;
    vlTOPp->mkMacUnitTop__DOT__exponent_sum___05Fh175568 
        = (0xffU & ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh212345) 
                    - (IData)(0x7fU)));
    vlTOPp->mkMacUnitTop__DOT__product___05Fh178963 
        = (0x80U | ((0x7eU & (IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A)) 
                    | (1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_A_BIT_0_THEN_1_ELSE_0___05Fq1))));
    if ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__INV_int_Mac_reg_B___05Fq2))) {
        vlTOPp->mkMacUnitTop__DOT__IF_INV_INV_int_Mac_reg_B_BIT_0_THEN_1_ELSE_0___05Fq6 = 0U;
        vlTOPp->mkMacUnitTop__DOT__IF_INV_int_Mac_reg_B_BIT_0_THEN_2_ELSE_0___05Fq3 = 2U;
    } else {
        vlTOPp->mkMacUnitTop__DOT__IF_INV_INV_int_Mac_reg_B_BIT_0_THEN_1_ELSE_0___05Fq6 = 1U;
        vlTOPp->mkMacUnitTop__DOT__IF_INV_int_Mac_reg_B_BIT_0_THEN_2_ELSE_0___05Fq3 = 0U;
    }
    vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
        = (~ vlTOPp->mkMacUnitTop__DOT__temp_a___05Fh1026);
    vlTOPp->mkMacUnitTop__DOT__exponent_sum___05F_1___05Fh212328 
        = (0xffU & ((IData)(2U) + (IData)(vlTOPp->mkMacUnitTop__DOT__exponent_sum___05Fh175568)));
    vlTOPp->mkMacUnitTop__DOT__exponent_sum___05F_2___05Fh212198 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMacUnitTop__DOT__exponent_sum___05Fh175568)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744 
        = ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMacUnitTop__DOT__product___05Fh178963)
            : 0U);
    vlTOPp->mkMacUnitTop__DOT__y___05Fh1749 = (1U & 
                                               (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_INV_int_Mac_reg_B_BIT_0_THEN_2_ELSE_0___05Fq3) 
                                                 >> 1U) 
                                                & ((IData)(vlTOPp->mkMacUnitTop__DOT__INV_int_Mac_reg_B___05Fq2) 
                                                   >> 1U)));
    if ((1U & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4)) {
        vlTOPp->mkMacUnitTop__DOT__IF_INV_INV_temp_a026_BIT_0_THEN_1_ELSE_0___05Fq7 = 0U;
        vlTOPp->mkMacUnitTop__DOT__IF_INV_temp_a026_BIT_0_THEN_2_ELSE_0___05Fq5 = 2ULL;
    } else {
        vlTOPp->mkMacUnitTop__DOT__IF_INV_INV_temp_a026_BIT_0_THEN_1_ELSE_0___05Fq7 = 1U;
        vlTOPp->mkMacUnitTop__DOT__IF_INV_temp_a026_BIT_0_THEN_2_ELSE_0___05Fq5 = 0ULL;
    }
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONC_ETC___05Fq25 
        = ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744))
            ? 1U : 0U);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh185366 = (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744) 
                                                     >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh185457 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744) 
                                                     >> 7U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh185095 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744) 
                                                     >> 7U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh185186 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744) 
                                                     >> 6U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh184824 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744) 
                                                     >> 6U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh184915 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744) 
                                                     >> 5U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh184553 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744) 
                                                     >> 5U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh184644 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744) 
                                                     >> 4U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh184282 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744) 
                                                     >> 4U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh184373 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744) 
                                                     >> 3U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh184010 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744) 
                                                     >> 3U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh184101 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744) 
                                                     >> 2U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONC_ETC___05Fq24 
        = ((1U & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744) 
                   >> 1U) & (IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A)))
            ? 4U : 0U);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh183742 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744) 
                                                     >> 2U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh2021 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh1749) 
                                               & ((IData)(vlTOPp->mkMacUnitTop__DOT__INV_int_Mac_reg_B___05Fq2) 
                                                  >> 2U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh26406 = (1U 
                                                & ((IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_INV_temp_a026_BIT_0_THEN_2_ELSE_0___05Fq5 
                                                            >> 1U)) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                      >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh184102 = ((vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONC_ETC___05Fq24 
                                                  >> 2U) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh183742));
    vlTOPp->mkMacUnitTop__DOT__INV_int_Mac_reg_B_BIT_3_6_XOR_IF_INV_int_Mac_r_ETC___05F_d35 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMacUnitTop__DOT__INV_int_Mac_reg_B___05Fq2)) 
                  ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh2021) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mkMacUnitTop__DOT__INV_int_Mac_reg_B___05Fq2)) 
                                        ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh1749) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlTOPp->mkMacUnitTop__DOT__INV_int_Mac_reg_B___05Fq2)) 
                                           ^ (0xfffffffeU 
                                              & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_INV_int_Mac_reg_B_BIT_0_THEN_2_ELSE_0___05Fq3)))) 
                                    | (1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_INV_INV_int_Mac_reg_B_BIT_0_THEN_1_ELSE_0___05Fq6)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh2292 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh2021) 
                                               & ((IData)(vlTOPp->mkMacUnitTop__DOT__INV_int_Mac_reg_B___05Fq2) 
                                                  >> 3U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh26678 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh26406) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 2U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh184011 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh184101) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh184102));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh2563 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh2292) 
                                               & ((IData)(vlTOPp->mkMacUnitTop__DOT__INV_int_Mac_reg_B___05Fq2) 
                                                  >> 4U));
    vlTOPp->mkMacUnitTop__DOT__INV_SEXT_int_Mac_reg_A___05F7_8_BIT_3_7_XOR_IF_INV_ETC___05F_d148 
        = ((8U & ((0xfffffff8U & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                  ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh26678) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                                        ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh26406) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                                           ^ ((IData)(
                                                      (vlTOPp->mkMacUnitTop__DOT__IF_INV_temp_a026_BIT_0_THEN_2_ELSE_0___05Fq5 
                                                       >> 1U)) 
                                              << 1U))) 
                                    | (1U & vlTOPp->mkMacUnitTop__DOT__IF_INV_INV_temp_a026_BIT_0_THEN_1_ELSE_0___05Fq7))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh26949 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh26678) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 3U));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1821 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh184010) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh184011)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh183742) 
                              << 2U) ^ (0xfffffffcU 
                                        & vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONC_ETC___05Fq24))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744)) 
                                ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONC_ETC___05Fq25)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh184374 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh184011) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh184010));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh2834 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh2563) 
                                               & ((IData)(vlTOPp->mkMacUnitTop__DOT__INV_int_Mac_reg_B___05Fq2) 
                                                  >> 5U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh27220 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh26949) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 4U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh184283 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh184373) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh184374));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh3105 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh2834) 
                                               & ((IData)(vlTOPp->mkMacUnitTop__DOT__INV_int_Mac_reg_B___05Fq2) 
                                                  >> 6U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh27491 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh27220) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 5U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh184645 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh184283) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh184282));
    vlTOPp->mkMacUnitTop__DOT__temp_b___05F_1___05Fh1161 
        = ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mkMacUnitTop__DOT__INV_int_Mac_reg_B___05Fq2)) 
                     ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh3105) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & (IData)(vlTOPp->mkMacUnitTop__DOT__INV_int_Mac_reg_B___05Fq2)) 
                                              ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh2834) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & (IData)(vlTOPp->mkMacUnitTop__DOT__INV_int_Mac_reg_B___05Fq2)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh2563) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & (IData)(vlTOPp->mkMacUnitTop__DOT__INV_int_Mac_reg_B___05Fq2)) 
                                            ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh2292) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMacUnitTop__DOT__INV_int_Mac_reg_B_BIT_3_6_XOR_IF_INV_int_Mac_r_ETC___05F_d35)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh27762 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh27491) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 6U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh184554 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh184644) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh184645));
    vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_B___05FETC___05F_d38 
        = ((0x80U & (IData)(vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_B))
            ? (IData)(vlTOPp->mkMacUnitTop__DOT__temp_b___05F_1___05Fh1161)
            : (IData)(vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_B));
    vlTOPp->mkMacUnitTop__DOT__INV_SEXT_int_Mac_reg_A___05F7_8_BIT_7_5_XOR_IF_INV_ETC___05F_d150 
        = ((0x80U & ((0xffffff80U & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                     ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh27762) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                                              ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh27491) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh27220) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                                            ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh26949) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mkMacUnitTop__DOT__INV_SEXT_int_Mac_reg_A___05F7_8_BIT_3_7_XOR_IF_INV_ETC___05F_d148)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh28033 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh27762) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 7U));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1822 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh184553) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh184554)) 
            << 5U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh184282) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh184283)) 
                       << 4U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1821)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh184916 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh184554) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh184553));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh28304 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh28033) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 8U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh184825 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh184915) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh184916));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh28575 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh28304) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 9U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh185187 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh184825) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh184824));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh28846 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh28575) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 0xaU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh185096 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh185186) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh185187));
    vlTOPp->mkMacUnitTop__DOT__INV_SEXT_int_Mac_reg_A___05F7_8_BIT_11_3_XOR_IF_IN_ETC___05F_d152 
        = ((0x800U & ((0xfffff800U & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                      ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh28846) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh28575) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                                            ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh28304) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh28033) 
                                                  << 8U))) 
                                             | (IData)(vlTOPp->mkMacUnitTop__DOT__INV_SEXT_int_Mac_reg_A___05F7_8_BIT_7_5_XOR_IF_INV_ETC___05F_d150)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh29117 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh28846) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 0xbU));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1823 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh185095) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh185096)) 
            << 7U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh184824) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh184825)) 
                       << 6U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1822)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh185458 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh185096) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh185095));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh29388 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh29117) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 0xcU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh185367 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh185457) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh185458));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh29659 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh29388) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 0xdU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh185729 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh185367) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh185366));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh29930 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh29659) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 0xeU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh185638 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744) 
                                                     >> 8U) 
                                                    | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh185729)));
    vlTOPp->mkMacUnitTop__DOT__INV_SEXT_int_Mac_reg_A___05F7_8_BIT_15_1_XOR_IF_IN_ETC___05F_d154 
        = ((0x8000U & ((0xffff8000U & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                       ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh29930) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                                          ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh29659) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                                               ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh29388) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh29117) 
                                                   << 0xcU))) 
                                              | (IData)(vlTOPp->mkMacUnitTop__DOT__INV_SEXT_int_Mac_reg_A___05F7_8_BIT_11_3_XOR_IF_IN_ETC___05F_d152)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh30201 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh29930) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 0xfU));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1824 
        = ((0x200U & ((0xfffffe00U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744)) 
                      ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh185638) 
                         << 9U))) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh185366) 
                                       ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh185367)) 
                                      << 8U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1823)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh185909 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh185638) 
                                                 & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744) 
                                                    >> 9U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh30472 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh30201) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 0x10U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh186180 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh185909) 
                                                 & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744) 
                                                    >> 0xaU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh30743 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh30472) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 0x11U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh186451 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh186180) 
                                                 & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744) 
                                                    >> 0xbU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh31014 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh30743) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 0x12U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh186722 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh186451) 
                                                 & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744) 
                                                    >> 0xcU));
    vlTOPp->mkMacUnitTop__DOT__INV_SEXT_int_Mac_reg_A___05F7_8_BIT_19_9_XOR_IF_IN_ETC___05F_d156 
        = ((0x80000U & ((0xfff80000U & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                        ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh31014) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                                              ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh30743) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh30472) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh30201) 
                                                     << 0x10U))) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__INV_SEXT_int_Mac_reg_A___05F7_8_BIT_15_1_XOR_IF_IN_ETC___05F_d154)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh31285 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh31014) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 0x13U));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1826 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744)) 
                       ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh186722) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744)) 
                                          ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh186451) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744)) 
                                               ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh186180) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh185909) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1824)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh186993 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh186722) 
                                                 & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744) 
                                                    >> 0xdU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh31556 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh31285) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 0x14U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh187264 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh186993) 
                                                 & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744) 
                                                    >> 0xeU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh31827 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh31556) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 0x15U));
    vlTOPp->mkMacUnitTop__DOT__product___05Fh178520 
        = ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744)) 
                       ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh187264) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744)) 
                                          ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh186993) 
                                             << 0xeU))) 
                                        | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1826)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh32098 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh31827) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 0x16U));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828 
        = ((2U & (IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMacUnitTop__DOT__product___05Fh178520)
            : (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_0_738_THEN_1_CONCAT___05FETC___05F_d1744));
    vlTOPp->mkMacUnitTop__DOT__INV_SEXT_int_Mac_reg_A___05F7_8_BIT_23_7_XOR_IF_IN_ETC___05F_d158 
        = ((0x800000U & ((0xff800000U & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                         ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh32098) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                                               ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh31827) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh31556) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh31285) 
                                                      << 0x14U))) 
                                                 | vlTOPp->mkMacUnitTop__DOT__INV_SEXT_int_Mac_reg_A___05F7_8_BIT_19_9_XOR_IF_IN_ETC___05F_d156))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh32369 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh32098) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 0x17U));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf1_ETC___05Fq27 
        = ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828))
            ? 1U : 0U);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh189761 = (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828) 
                                                     >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh189852 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828) 
                                                     >> 8U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh189490 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828) 
                                                     >> 8U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh189581 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828) 
                                                     >> 7U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh189219 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828) 
                                                     >> 7U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh189310 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828) 
                                                     >> 6U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh188948 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828) 
                                                     >> 6U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh189039 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828) 
                                                     >> 5U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh188677 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828) 
                                                     >> 5U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh188768 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828) 
                                                     >> 4U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh188405 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828) 
                                                     >> 4U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh188496 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828) 
                                                     >> 3U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf1_ETC___05Fq26 
        = ((1U & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828) 
                   >> 2U) & (IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A)))
            ? 8U : 0U);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh188137 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828) 
                                                     >> 3U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh32640 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh32369) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 0x18U));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1897 
        = ((8U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh188137) 
                   << 3U) ^ (0xfffffff8U & vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf1_ETC___05Fq26))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828)) 
                     ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                        << 2U))) | ((2U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828)) 
                                    | (1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf1_ETC___05Fq27)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh188497 = ((vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf1_ETC___05Fq26 
                                                  >> 3U) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh188137));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh32911 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh32640) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 0x19U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh188406 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh188496) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh188497));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh33182 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh32911) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 0x1aU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh188769 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh188406) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh188405));
    vlTOPp->mkMacUnitTop__DOT__INV_SEXT_int_Mac_reg_A___05F7_8_BIT_27_05_XOR_IF_I_ETC___05F_d160 
        = ((0x8000000U & ((0xf8000000U & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                          ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh33182) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                                                ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh32911) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh32640) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                                                      ^ 
                                                      ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh32369) 
                                                       << 0x18U))) 
                                                  | vlTOPp->mkMacUnitTop__DOT__INV_SEXT_int_Mac_reg_A___05F7_8_BIT_23_7_XOR_IF_IN_ETC___05F_d158))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh33453 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh33182) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 0x1bU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh188678 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh188768) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh188769));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh33724 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh33453) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 0x1cU));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1898 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh188677) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh188678)) 
            << 5U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh188405) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh188406)) 
                       << 4U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1897)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh189040 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh188678) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh188677));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh33995 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh33724) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 0x1dU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh188949 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh189039) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh189040));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh34266 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh33995) 
                                                & (vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4 
                                                   >> 0x1eU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh189311 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh188949) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh188948));
    vlTOPp->mkMacUnitTop__DOT__temp_a___05F_1___05Fh25264 
        = ((0x80000000U & ((0x80000000U & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                           ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh34266) 
                              << 0x1fU))) | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh33995) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh33724) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlTOPp->mkMacUnitTop__DOT__INV_temp_a026___05Fq4) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh33453) 
                                                        << 0x1cU))) 
                                                   | vlTOPp->mkMacUnitTop__DOT__INV_SEXT_int_Mac_reg_A___05F7_8_BIT_27_05_XOR_IF_I_ETC___05F_d160))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh189220 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh189310) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh189311));
    vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
        = ((0x80U & (IData)(vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_A))
            ? vlTOPp->mkMacUnitTop__DOT__temp_a___05F_1___05Fh25264
            : vlTOPp->mkMacUnitTop__DOT__temp_a___05Fh1026);
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1899 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh189219) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh189220)) 
            << 7U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh188948) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh188949)) 
                       << 6U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1898)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh189582 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh189220) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh189219));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Ma_ETC___05Fq8 
        = ((1U & vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163)
            ? 1U : 0U);
    vlTOPp->mkMacUnitTop__DOT__y___05Fh189491 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh189581) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh189582));
    vlTOPp->mkMacUnitTop__DOT__result___05Fh24455 = 
        ((0xfffffffeU & vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163) 
         | (1U & vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Ma_ETC___05Fq8));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh189853 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh189491) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh189490));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
        = ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_B___05FETC___05F_d38))
            ? vlTOPp->mkMacUnitTop__DOT__result___05Fh24455
            : 0U);
    vlTOPp->mkMacUnitTop__DOT__y___05Fh189762 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh189852) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh189853));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh60286 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x1fU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x1eU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh60377 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x1eU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x1dU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh60015 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x1eU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x1dU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh60106 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x1dU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x1cU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh59744 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x1dU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x1cU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh59835 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x1cU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x1bU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh59473 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x1cU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x1bU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh59564 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x1bU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x1aU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh59202 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x1bU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x1aU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh59293 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x1aU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x19U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh58931 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x1aU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x19U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh59022 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x19U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x18U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh58660 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x19U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x18U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh58751 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x18U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x17U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq10 
        = ((1U & vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169)
            ? 1U : 0U);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh58389 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x18U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x17U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh58480 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x17U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh58118 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x17U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh58209 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x16U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh57847 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x16U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh57938 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x15U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh57576 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x15U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh57667 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x14U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh57305 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x14U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh57396 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x13U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh57034 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x13U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh57125 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x12U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh56763 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x12U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh56854 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x11U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh56492 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x11U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh56583 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x10U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh56221 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0x10U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh56312 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0xfU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh55950 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0xfU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh56041 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0xeU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh55679 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0xeU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh55770 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0xdU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh55408 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0xdU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh55499 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0xcU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh55137 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0xcU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh55228 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0xbU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh54866 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0xbU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh54957 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0xaU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh54595 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 0xaU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh54686 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 9U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh54324 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 9U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh54415 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 8U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh54053 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 8U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh54144 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 7U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh53782 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 7U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh53873 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 6U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh53511 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 6U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh53602 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 5U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh53240 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh53331 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 4U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh52969 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 4U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh53060 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 3U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh52697 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 3U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh52788 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 2U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq9 
        = ((1U & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                   >> 1U) & vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163))
            ? 4ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh52429 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169 
                                                    >> 2U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__INV_IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf_ETC___05F_d1900 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh189761) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh189762)) 
            << 9U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh189490) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh189491)) 
                       << 8U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1899)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh190124 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh189762) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh189761));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh52789 = ((IData)(
                                                        (vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq9 
                                                         >> 2U)) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh52429));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh190033 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828) 
                                                     >> 9U) 
                                                    | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh190124)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh52698 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh52788) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh52789));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh190304 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh190033) 
                                                 & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828) 
                                                    >> 0xaU));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d386 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh52697) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh52698)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh52429) 
                              ^ (IData)((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq9 
                                         >> 2U))) << 2U)) 
                      | ((2U & ((0xfffffffeU & vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169) 
                                ^ (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                   << 1U))) | (1U & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq10))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh53061 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh52698) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh52697));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh190575 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh190304) 
                                                 & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828) 
                                                    >> 0xbU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh52970 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh53060) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh53061));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh190846 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh190575) 
                                                 & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828) 
                                                    >> 0xcU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh53332 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh52970) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh52969));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1902 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828)) 
                       ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh190846) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828)) 
                                          ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh190575) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828)) 
                                               ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh190304) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh190033) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMacUnitTop__DOT__INV_IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf_ETC___05F_d1900)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh191117 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh190846) 
                                                 & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828) 
                                                    >> 0xdU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh53241 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh53331) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh53332));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh191388 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh191117) 
                                                 & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828) 
                                                    >> 0xeU));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d387 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh53240) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh53241)) 
            << 5U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh52969) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh52970)) 
                       << 4U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d386)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh53603 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh53241) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh53240));
    vlTOPp->mkMacUnitTop__DOT__product___05Fh178077 
        = ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828)) 
                       ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh191388) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828)) 
                                          ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh191117) 
                                             << 0xeU))) 
                                        | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1902)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh53512 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh53602) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh53603));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904 
        = ((4U & (IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMacUnitTop__DOT__product___05Fh178077)
            : (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_1_737_THEN_IF_bf16_M_ETC___05F_d1828));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh53874 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh53512) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh53511));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf1_ETC___05Fq29 
        = ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904))
            ? 1U : 0U);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh194151 = (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904) 
                                                     >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh194242 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904) 
                                                     >> 9U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh193880 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904) 
                                                     >> 9U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh193971 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904) 
                                                     >> 8U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh193609 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904) 
                                                     >> 8U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh193700 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904) 
                                                     >> 7U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh193338 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904) 
                                                     >> 7U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh193429 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904) 
                                                     >> 6U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh193067 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904) 
                                                     >> 6U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh193158 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904) 
                                                     >> 5U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh192795 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904) 
                                                     >> 5U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh192886 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904) 
                                                     >> 4U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf1_ETC___05Fq28 
        = ((1U & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904) 
                   >> 3U) & (IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A)))
            ? 0x10U : 0U);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh192527 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904) 
                                                     >> 4U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh53783 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh53873) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh53874));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh192887 = ((vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf1_ETC___05Fq28 
                                                  >> 4U) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh192527));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d388 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh53782) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh53783)) 
            << 7U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh53511) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh53512)) 
                       << 6U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d387)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh54145 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh53783) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh53782));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh192796 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh192886) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh192887));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh54054 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh54144) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh54145));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1970 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh192795) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh192796)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh192527) 
                                 << 4U) ^ (0xfffffff0U 
                                           & vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf1_ETC___05Fq28))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904)) 
                                ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf1_ETC___05Fq29))))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh193159 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh192796) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh192795));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh54416 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh54054) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh54053));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh193068 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh193158) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh193159));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh54325 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh54415) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh54416));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh193430 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh193068) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh193067));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d389 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh54324) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh54325)) 
            << 9U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh54053) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh54054)) 
                       << 8U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d388)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh54687 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh54325) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh54324));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh193339 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh193429) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh193430));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh54596 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh54686) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh54687));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1971 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh193338) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh193339)) 
            << 7U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh193067) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh193068)) 
                       << 6U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1970)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh193701 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh193339) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh193338));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh54958 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh54596) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh54595));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh193610 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh193700) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh193701));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh54867 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh54957) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh54958));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh193972 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh193610) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh193609));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d390 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh54866) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh54867)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh54595) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh54596)) 
                         << 0xaU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d389)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh55229 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh54867) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh54866));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh193881 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh193971) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh193972));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh55138 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh55228) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh55229));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1972 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh193880) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh193881)) 
            << 9U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh193609) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh193610)) 
                       << 8U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1971)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh194243 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh193881) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh193880));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh55500 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh55138) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh55137));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh194152 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh194242) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh194243));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh55409 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh55499) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh55500));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh194514 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh194152) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh194151));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d391 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh55408) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh55409)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh55137) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh55138)) 
                         << 0xcU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d390)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh55771 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh55409) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh55408));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh194423 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904) 
                                                     >> 0xaU) 
                                                    | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh194514)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh55680 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh55770) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh55771));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1973 
        = ((0x800U & ((0xfffff800U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904)) 
                      ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh194423) 
                         << 0xbU))) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh194151) 
                                         ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh194152)) 
                                        << 0xaU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1972)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh194694 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh194423) 
                                                 & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904) 
                                                    >> 0xbU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh56042 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh55680) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh55679));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh194965 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh194694) 
                                                 & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904) 
                                                    >> 0xcU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh55951 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh56041) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh56042));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh195236 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh194965) 
                                                 & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904) 
                                                    >> 0xdU));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d392 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh55950) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh55951)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh55679) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh55680)) 
                         << 0xeU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d391)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh56313 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh55951) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh55950));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh195507 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh195236) 
                                                 & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904) 
                                                    >> 0xeU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh56222 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh56312) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh56313));
    vlTOPp->mkMacUnitTop__DOT__product___05Fh177634 
        = ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904)) 
                       ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh195507) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904)) 
                                          ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh195236) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904)) 
                                               ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh194965) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh194694) 
                                                   << 0xcU))) 
                                              | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1973)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh56584 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh56222) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh56221));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976 
        = ((8U & (IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMacUnitTop__DOT__product___05Fh177634)
            : (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_2_736_THEN_IF_bf16_M_ETC___05F_d1904));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh56493 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh56583) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh56584));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf1_ETC___05Fq31 
        = ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976))
            ? 1U : 0U);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh198536 = (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976) 
                                                     >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh198627 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976) 
                                                     >> 0xaU) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh198265 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976) 
                                                     >> 0xaU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh198356 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976) 
                                                     >> 9U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh197994 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976) 
                                                     >> 9U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh198085 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976) 
                                                     >> 8U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh197723 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976) 
                                                     >> 8U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh197814 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976) 
                                                     >> 7U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh197452 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976) 
                                                     >> 7U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh197543 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976) 
                                                     >> 6U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh197180 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976) 
                                                     >> 6U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh197271 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976) 
                                                     >> 5U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf1_ETC___05Fq30 
        = ((1U & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976) 
                   >> 4U) & (IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A)))
            ? 0x20U : 0U);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh196912 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976) 
                                                     >> 5U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d393 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh56492) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh56493)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh56221) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh56222)) 
                          << 0x10U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d392)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh56855 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh56493) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh56492));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d2039 
        = ((0x20U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh196912) 
                      << 5U) ^ (0xffffffe0U & vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf1_ETC___05Fq30))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976)) 
                        ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976)) 
                                       | (1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf1_ETC___05Fq31)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh197272 = ((vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf1_ETC___05Fq30 
                                                  >> 5U) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh196912));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh56764 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh56854) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh56855));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh197181 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh197271) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh197272));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh57126 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh56764) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh56763));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh197544 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh197181) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh197180));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh57035 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh57125) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh57126));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh197453 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh197543) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh197544));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d394 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh57034) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh57035)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh56763) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh56764)) 
                          << 0x12U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d393));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh57397 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh57035) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh57034));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d2040 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh197452) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh197453)) 
            << 7U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh197180) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh197181)) 
                       << 6U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d2039)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh197815 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh197453) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh197452));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh57306 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh57396) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh57397));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh197724 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh197814) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh197815));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh57668 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh57306) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh57305));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh198086 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh197724) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh197723));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh57577 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh57667) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh57668));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh197995 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh198085) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh198086));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d395 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh57576) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh57577)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh57305) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh57306)) 
                          << 0x14U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d394));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh57939 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh57577) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh57576));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d2041 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh197994) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh197995)) 
            << 9U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh197723) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh197724)) 
                       << 8U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d2040)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh198357 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh197995) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh197994));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh57848 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh57938) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh57939));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh198266 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh198356) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh198357));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh58210 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh57848) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh57847));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh198628 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh198266) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh198265));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh58119 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh58209) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh58210));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh198537 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh198627) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh198628));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d396 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh58118) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh58119)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh57847) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh57848)) 
                          << 0x16U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d395));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh58481 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh58119) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh58118));
    vlTOPp->mkMacUnitTop__DOT__INV_IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf_ETC___05F_d2042 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh198536) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh198537)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh198265) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh198266)) 
                         << 0xaU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d2041)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh198899 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh198537) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh198536));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh58390 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh58480) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh58481));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh198808 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976) 
                                                     >> 0xbU) 
                                                    | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh198899)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh58752 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh58390) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh58389));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh199079 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh198808) 
                                                 & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976) 
                                                    >> 0xcU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh58661 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh58751) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh58752));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh199350 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh199079) 
                                                 & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976) 
                                                    >> 0xdU));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d397 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh58660) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh58661)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh58389) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh58390)) 
                          << 0x18U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d396));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh59023 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh58661) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh58660));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh199621 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh199350) 
                                                 & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976) 
                                                    >> 0xeU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh58932 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh59022) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh59023));
    vlTOPp->mkMacUnitTop__DOT__product___05Fh177191 
        = ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976)) 
                       ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh199621) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976)) 
                                          ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh199350) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976)) 
                                               ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh199079) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh198808) 
                                                   << 0xcU))) 
                                              | (IData)(vlTOPp->mkMacUnitTop__DOT__INV_IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf_ETC___05F_d2042)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh59294 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh58932) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh58931));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045 
        = ((0x10U & (IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMacUnitTop__DOT__product___05Fh177191)
            : (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_3_735_THEN_IF_bf16_M_ETC___05F_d1976));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh59203 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh59293) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh59294));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf1_ETC___05Fq33 
        = ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045))
            ? 1U : 0U);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh202916 = (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045) 
                                                     >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh203007 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045) 
                                                     >> 0xbU) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh202645 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045) 
                                                     >> 0xbU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh202736 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045) 
                                                     >> 0xaU) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh202374 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045) 
                                                     >> 0xaU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh202465 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045) 
                                                     >> 9U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh202103 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045) 
                                                     >> 9U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh202194 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045) 
                                                     >> 8U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh201832 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045) 
                                                     >> 8U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh201923 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045) 
                                                     >> 7U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh201560 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045) 
                                                     >> 7U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh201651 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045) 
                                                     >> 6U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf1_ETC___05Fq32 
        = ((1U & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045) 
                   >> 5U) & (IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A)))
            ? 0x40U : 0U);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh201292 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045) 
                                                     >> 6U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d398 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh59202) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh59203)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh58931) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh58932)) 
                          << 0x1aU) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d397));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh59565 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh59203) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh59202));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh201652 = ((vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf1_ETC___05Fq32 
                                                  >> 6U) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh201292));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh59474 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh59564) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh59565));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh201561 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh201651) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh201652));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh59836 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh59474) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh59473));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2105 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh201560) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh201561)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh201292) 
                                 << 6U) ^ (0xffffffc0U 
                                           & vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf1_ETC___05Fq32))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045)) 
                                   ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf1_ETC___05Fq33))))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh201924 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh201561) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh201560));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh59745 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh59835) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh59836));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh201833 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh201923) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh201924));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d399 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh59744) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh59745)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh59473) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh59474)) 
                          << 0x1cU) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d398));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh60107 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh59745) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh59744));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh202195 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh201833) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh201832));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh60016 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh60106) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh60107));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh202104 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh202194) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh202195));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh60378 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh60016) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh60015));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2106 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh202103) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh202104)) 
            << 9U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh201832) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh201833)) 
                       << 8U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2105)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh202466 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh202104) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh202103));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh60287 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh60377) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh60378));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh202375 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh202465) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh202466));
    vlTOPp->mkMacUnitTop__DOT__result___05Fh21442 = 
        ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh60286) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh60287)) 
          << 0x1fU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh60015) 
                         ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh60016)) 
                        << 0x1eU) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d399));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh202737 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh202375) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh202374));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
        = ((2U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_B___05FETC___05F_d38))
            ? vlTOPp->mkMacUnitTop__DOT__result___05Fh21442
            : vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d169);
    vlTOPp->mkMacUnitTop__DOT__y___05Fh202646 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh202736) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh202737));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh78004 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x1fU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x1dU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh78095 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x1eU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x1cU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh77733 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x1eU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x1cU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh77824 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x1dU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x1bU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh77462 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x1dU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x1bU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh77553 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x1cU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x1aU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh77191 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x1cU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x1aU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh77282 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x1bU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x19U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh76920 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x1bU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x19U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh77011 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x1aU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x18U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh76649 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x1aU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x18U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh76740 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x19U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x17U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh76378 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x19U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x17U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh76469 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x18U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq12 
        = ((1U & vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401)
            ? 1U : 0U);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh76107 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x18U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh76198 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x17U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh75836 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x17U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh75927 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x16U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh75565 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x16U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh75656 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x15U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh75294 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x15U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh75385 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x14U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh75023 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x14U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh75114 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x13U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh74752 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x13U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh74843 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x12U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh74481 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x12U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh74572 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x11U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh74210 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x11U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh74301 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x10U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh73939 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0x10U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh74030 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0xfU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh73668 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0xfU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh73759 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0xeU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh73397 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0xeU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh73488 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0xdU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh73126 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0xdU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh73217 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0xcU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh72855 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0xcU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh72946 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0xbU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh72584 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0xbU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh72675 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0xaU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh72313 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 0xaU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh72404 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 9U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh72042 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 9U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh72133 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 8U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh71771 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 8U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh71862 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 7U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh71500 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 7U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh71591 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 6U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh71229 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 6U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh71320 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 5U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh70958 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh71049 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 4U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh70686 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 4U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh70777 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 3U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq11 
        = ((1U & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                   >> 2U) & vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163))
            ? 8ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh70418 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401 
                                                    >> 3U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2107 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh202645) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh202646)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh202374) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh202375)) 
                         << 0xaU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2106)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh203008 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh202646) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh202645));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d583 
        = ((8U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh70418) 
                   ^ (IData)((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq11 
                              >> 3U))) << 3U)) | ((4U 
                                                   & ((0xfffffffcU 
                                                       & vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401) 
                                                      ^ 
                                                      (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       << 2U))) 
                                                  | ((2U 
                                                      & vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401) 
                                                     | (1U 
                                                        & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq12))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh70778 = ((IData)(
                                                        (vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq11 
                                                         >> 3U)) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh70418));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh202917 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh203007) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh203008));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh70687 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh70777) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh70778));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh203279 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh202917) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh202916));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh71050 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh70687) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh70686));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh203188 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045) 
                                                     >> 0xcU) 
                                                    | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh203279)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh70959 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh71049) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh71050));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2108 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045)) 
                       ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh203188) 
                          << 0xdU))) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh202916) 
                                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh202917)) 
                                         << 0xcU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2107)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh203459 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh203188) 
                                                 & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045) 
                                                    >> 0xdU));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d584 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh70958) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh70959)) 
            << 5U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh70686) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh70687)) 
                       << 4U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d583)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh71321 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh70959) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh70958));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh203730 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh203459) 
                                                 & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045) 
                                                    >> 0xeU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh71230 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh71320) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh71321));
    vlTOPp->mkMacUnitTop__DOT__product___05Fh176748 
        = ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045)) 
                       ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh203730) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045)) 
                                          ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh203459) 
                                             << 0xeU))) 
                                        | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2108)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh71592 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh71230) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh71229));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2110 
        = ((0x20U & (IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMacUnitTop__DOT__product___05Fh176748)
            : (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_4_734_THEN_IF_bf16_M_ETC___05F_d2045));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh71501 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh71591) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh71592));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh207291 = (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2110) 
                                                     >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf1_ETC___05Fq35 
        = ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2110))
            ? 1U : 0U);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh207382 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2110) 
                                                     >> 0xcU) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh207020 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2110) 
                                                     >> 0xcU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh207111 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2110) 
                                                     >> 0xbU) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh206749 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2110) 
                                                     >> 0xbU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh206840 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2110) 
                                                     >> 0xaU) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh206478 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2110) 
                                                     >> 0xaU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh206569 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2110) 
                                                     >> 9U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh206207 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2110) 
                                                     >> 9U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh206298 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2110) 
                                                     >> 8U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh205935 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2110) 
                                                     >> 8U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh206026 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2110) 
                                                     >> 7U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf1_ETC___05Fq34 
        = ((1U & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2110) 
                   >> 6U) & (IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A)))
            ? 0x80U : 0U);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh205667 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2110) 
                                                     >> 7U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d585 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh71500) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh71501)) 
            << 7U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh71229) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh71230)) 
                       << 6U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d584)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh71863 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh71501) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh71500));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2167 
        = ((0x80U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh205667) 
                      << 7U) ^ (0xffffff80U & vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf1_ETC___05Fq34))) 
           | ((0x40U & ((0xffffffc0U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2110)) 
                        ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                           << 6U))) | ((0x3eU & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2110)) 
                                       | (1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf1_ETC___05Fq35)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh206027 = ((vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf1_ETC___05Fq34 
                                                  >> 7U) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh205667));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh71772 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh71862) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh71863));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh205936 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh206026) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh206027));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh72134 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh71772) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh71771));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh206299 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh205936) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh205935));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh72043 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh72133) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh72134));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh206208 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh206298) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh206299));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d586 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh72042) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh72043)) 
            << 9U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh71771) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh71772)) 
                       << 8U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d585)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh72405 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh72043) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh72042));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2168 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh206207) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh206208)) 
            << 9U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh205935) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh205936)) 
                       << 8U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2167)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh206570 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh206208) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh206207));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh72314 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh72404) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh72405));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh206479 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh206569) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh206570));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh72676 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh72314) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh72313));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh206841 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh206479) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh206478));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh72585 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh72675) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh72676));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh206750 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh206840) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh206841));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d587 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh72584) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh72585)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh72313) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh72314)) 
                         << 0xaU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d586)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh72947 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh72585) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh72584));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2169 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh206749) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh206750)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh206478) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh206479)) 
                         << 0xaU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2168)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh207112 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh206750) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh206749));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh72856 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh72946) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh72947));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh207021 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh207111) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh207112));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh73218 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh72856) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh72855));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh207383 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh207021) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh207020));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh73127 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh73217) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh73218));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh207292 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh207382) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh207383));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d588 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh73126) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh73127)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh72855) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh72856)) 
                         << 0xcU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d587)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh73489 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh73127) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh73126));
    vlTOPp->mkMacUnitTop__DOT__INV_IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf_ETC___05F_d2170 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh207291) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh207292)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh207020) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh207021)) 
                         << 0xcU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2169)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh207654 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh207292) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh207291));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh73398 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh73488) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh73489));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh207563 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2110) 
                                                     >> 0xdU) 
                                                    | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh207654)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh73760 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh73398) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh73397));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh207834 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh207563) 
                                                 & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2110) 
                                                    >> 0xeU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh73669 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh73759) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh73760));
    vlTOPp->mkMacUnitTop__DOT__product___05Fh176305 
        = ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2110)) 
                       ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh207834) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2110)) 
                                          ^ ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh207563) 
                                             << 0xeU))) 
                                        | (IData)(vlTOPp->mkMacUnitTop__DOT__INV_IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf_ETC___05F_d2170)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d589 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh73668) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh73669)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh73397) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh73398)) 
                         << 0xeU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d588)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh74031 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh73669) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh73668));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172 
        = ((0x40U & (IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMacUnitTop__DOT__product___05Fh176305)
            : (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_5_733_THEN_IF_bf16_M_ETC___05F_d2110));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh73940 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh74030) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh74031));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf1_ETC___05Fq37 
        = ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172))
            ? 1U : 0U);
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2222 
        = (1U & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172) 
                  >> 7U) ^ (IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh211661 = (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172) 
                                                     >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh211752 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172) 
                                                     >> 0xdU) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh211390 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172) 
                                                     >> 0xdU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh211481 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172) 
                                                     >> 0xcU) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh211119 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172) 
                                                     >> 0xcU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh211210 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172) 
                                                     >> 0xbU) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh210848 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172) 
                                                     >> 0xbU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh210939 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172) 
                                                     >> 0xaU) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh210577 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172) 
                                                     >> 0xaU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh210668 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172) 
                                                     >> 9U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh210305 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172) 
                                                     >> 9U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh210396 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172) 
                                                     >> 8U) 
                                                    & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf1_ETC___05Fq36 
        = ((1U & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172) 
                   >> 7U) & (IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A)))
            ? 0x100U : 0U);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh210037 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172) 
                                                     >> 8U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A) 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh74302 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh73940) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh73939));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2220 
        = (1U & ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh210037) 
                 ^ (vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf1_ETC___05Fq36 
                    >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh210397 = ((vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf1_ETC___05Fq36 
                                                  >> 8U) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh210037));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh74211 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh74301) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh74302));
    vlTOPp->mkMacUnitTop__DOT__NOT_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf_ETC___05F_d2223 
        = (((0U != ((0x7eU & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172)) 
                    | (1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf1_ETC___05Fq37)))) 
            | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2220)) 
           & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2222));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh210306 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh210396) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh210397));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d590 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh74210) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh74211)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh73939) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh73940)) 
                          << 0x10U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d589)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh74573 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh74211) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh74210));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2229 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh210305) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh210306));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh210669 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh210306) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh210305));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh74482 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh74572) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh74573));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh210578 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh210668) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh210669));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh74844 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh74482) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh74481));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2228 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh210577) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh210578));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh210940 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh210578) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh210577));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh74753 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh74843) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh74844));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh210849 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh210939) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh210940));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d591 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh74752) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh74753)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh74481) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh74482)) 
                          << 0x12U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d590));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh75115 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh74753) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh74752));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2227 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh210848) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh210849));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh211211 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh210849) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh210848));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh75024 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh75114) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh75115));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh211120 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh211210) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh211211));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh75386 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh75024) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh75023));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2226 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh211119) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh211120));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh211482 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh211120) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh211119));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh75295 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh75385) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh75386));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh211391 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh211481) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh211482));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d592 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh75294) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh75295)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh75023) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh75024)) 
                          << 0x14U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d591));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh75657 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh75295) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh75294));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2225 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh211390) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh211391));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh211753 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh211391) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh211390));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh75566 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh75656) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh75657));
    vlTOPp->mkMacUnitTop__DOT__final_mantissa___05Fh212385 
        = (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2225) 
            << 6U) | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2226) 
                       << 5U) | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2227) 
                                  << 4U) | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2228) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2229) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2220) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2222)))))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh211662 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh211752) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh211753));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh75928 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh75566) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh75565));
    vlTOPp->mkMacUnitTop__DOT__final_mantissa___05F_1___05Fh212492 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMacUnitTop__DOT__final_mantissa___05Fh212385)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh212024 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh211662) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh211661));
    vlTOPp->mkMacUnitTop__DOT__final_mantissa___05Fh212197 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh211661) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh211662)) 
            << 6U) | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2225) 
                       << 5U) | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2226) 
                                  << 4U) | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2227) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2228) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2229) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2220)))))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh75837 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh75927) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh75928));
    vlTOPp->mkMacUnitTop__DOT___theResult___05F_snd___05Fh212388 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172)) 
                     | (1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf1_ETC___05Fq37)))) 
             | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2222)) 
            & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172) 
               >> 6U)) ? (IData)(vlTOPp->mkMacUnitTop__DOT__final_mantissa___05F_1___05Fh212492)
            : (IData)(vlTOPp->mkMacUnitTop__DOT__final_mantissa___05Fh212385));
    vlTOPp->mkMacUnitTop__DOT___theResult___05F_fst___05Fh212493 
        = ((0x80U & (IData)(vlTOPp->mkMacUnitTop__DOT__final_mantissa___05F_1___05Fh212492))
            ? (IData)(vlTOPp->mkMacUnitTop__DOT__exponent_sum___05F_2___05Fh212198)
            : (IData)(vlTOPp->mkMacUnitTop__DOT__exponent_sum___05Fh175568));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh211933 = (1U 
                                                 & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172) 
                                                     >> 0xeU) 
                                                    | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh212024)));
    vlTOPp->mkMacUnitTop__DOT__final_mantissa___05F_1___05Fh212305 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMacUnitTop__DOT__final_mantissa___05Fh212197)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d593 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh75836) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh75837)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh75565) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh75566)) 
                          << 0x16U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d592));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh76199 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh75837) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh75836));
    vlTOPp->mkMacUnitTop__DOT___theResult___05F_fst___05Fh212387 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172)) 
                     | (1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf1_ETC___05Fq37)))) 
             | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2222)) 
            & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172) 
               >> 6U)) ? (IData)(vlTOPp->mkMacUnitTop__DOT___theResult___05F_fst___05Fh212493)
            : (IData)(vlTOPp->mkMacUnitTop__DOT__exponent_sum___05Fh175568));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2212 
        = (1U & (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2172) 
                  >> 0xfU) ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh211933)));
    vlTOPp->mkMacUnitTop__DOT___theResult___05F_snd___05Fh212201 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__NOT_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf_ETC___05F_d2223)
            ? (IData)(vlTOPp->mkMacUnitTop__DOT__final_mantissa___05F_1___05Fh212305)
            : (IData)(vlTOPp->mkMacUnitTop__DOT__final_mantissa___05Fh212197));
    vlTOPp->mkMacUnitTop__DOT___theResult___05F_fst___05Fh212306 
        = ((0x80U & (IData)(vlTOPp->mkMacUnitTop__DOT__final_mantissa___05F_1___05Fh212305))
            ? (IData)(vlTOPp->mkMacUnitTop__DOT__exponent_sum___05F_1___05Fh212328)
            : (IData)(vlTOPp->mkMacUnitTop__DOT__exponent_sum___05F_2___05Fh212198));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh76108 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh76198) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh76199));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf1_ETC___05Fq38 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2212)
            ? (IData)(vlTOPp->mkMacUnitTop__DOT___theResult___05F_snd___05Fh212201)
            : (IData)(vlTOPp->mkMacUnitTop__DOT___theResult___05F_snd___05Fh212388));
    vlTOPp->mkMacUnitTop__DOT___theResult___05F_fst___05Fh212200 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__NOT_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf_ETC___05F_d2223)
            ? (IData)(vlTOPp->mkMacUnitTop__DOT___theResult___05F_fst___05Fh212306)
            : (IData)(vlTOPp->mkMacUnitTop__DOT__exponent_sum___05F_2___05Fh212198));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh76470 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh76108) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh76107));
    vlTOPp->mkMacUnitTop__DOT__mantissa_rounded___05Fh175571 
        = (0x7f0000U & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf1_ETC___05Fq38) 
                        << 0x10U));
    vlTOPp->mkMacUnitTop__DOT__exponent_A___05Fh175523 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf16_M_ETC___05F_d2212)
            ? (IData)(vlTOPp->mkMacUnitTop__DOT___theResult___05F_fst___05Fh212200)
            : (IData)(vlTOPp->mkMacUnitTop__DOT___theResult___05F_fst___05Fh212387));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh76379 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh76469) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh76470));
    vlTOPp->mkMacUnitTop__DOT__mantissa_a___05Fh175521 
        = (0x800000U | vlTOPp->mkMacUnitTop__DOT__mantissa_rounded___05Fh175571);
    vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_C_260_BITS_30_TO_23_261_MINUS_IF___05FETC___05F_d2271 
        = (0xffU & ((vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_C 
                     >> 0x17U) - (IData)(vlTOPp->mkMacUnitTop__DOT__exponent_A___05Fh175523)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf1_ETC___05F_d2262 
        = (0xffU & ((IData)(vlTOPp->mkMacUnitTop__DOT__exponent_A___05Fh175523) 
                    - (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_C 
                       >> 0x17U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d594 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh76378) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh76379)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh76107) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh76108)) 
                          << 0x18U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d593));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh76741 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh76379) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh76378));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh219999 = (0xffU 
                                                 & ((IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_C_260_BITS_30_TO_23_261_MINUS_IF___05FETC___05F_d2271) 
                                                    - (IData)(1U)));
    vlTOPp->mkMacUnitTop__DOT__result_exponent___05F_1___05Fh213255 
        = (0xffU & ((IData)(vlTOPp->mkMacUnitTop__DOT__exponent_A___05Fh175523) 
                    + (IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_C_260_BITS_30_TO_23_261_MINUS_IF___05FETC___05F_d2271)));
    vlTOPp->mkMacUnitTop__DOT__aligned_mantissa_A___05F_1___05Fh213254 
        = ((0x17U >= (IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_C_260_BITS_30_TO_23_261_MINUS_IF___05FETC___05F_d2271))
            ? (0xffffffU & (vlTOPp->mkMacUnitTop__DOT__mantissa_a___05Fh175521 
                            >> (IData)(vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_C_260_BITS_30_TO_23_261_MINUS_IF___05FETC___05F_d2271)))
            : 0U);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh219966 = (0xffU 
                                                 & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf1_ETC___05F_d2262) 
                                                    - (IData)(1U)));
    vlTOPp->mkMacUnitTop__DOT__aligned_mantissa_B___05F_1___05Fh213316 
        = ((0x17U >= (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf1_ETC___05F_d2262))
            ? (0xffffffU & (vlTOPp->mkMacUnitTop__DOT__mantissa_b___05Fh175522 
                            >> (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf1_ETC___05F_d2262)))
            : 0U);
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf1_ETC___05F_d2263 
        = (0x80U >= (0x80U ^ (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf1_ETC___05F_d2262)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh76650 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh76740) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh76741));
    vlTOPp->mkMacUnitTop__DOT___theResult___05F_fst___05Fh213250 
        = (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf1_ETC___05F_d2262) 
            >> 7U) & ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh219999))) 
                      & (vlTOPp->mkMacUnitTop__DOT__mantissa_a___05Fh175521 
                         >> (0x1fU & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh219999)))));
    if ((0x80U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf1_ETC___05F_d2262))) {
        vlTOPp->mkMacUnitTop__DOT___theResult___05F_snd_fst___05Fh213252 
            = vlTOPp->mkMacUnitTop__DOT__result_exponent___05F_1___05Fh213255;
        vlTOPp->mkMacUnitTop__DOT___theResult___05F_snd_snd___05Fh213253 
            = vlTOPp->mkMacUnitTop__DOT__aligned_mantissa_A___05F_1___05Fh213254;
    } else {
        vlTOPp->mkMacUnitTop__DOT___theResult___05F_snd_fst___05Fh213252 
            = vlTOPp->mkMacUnitTop__DOT__exponent_A___05Fh175523;
        vlTOPp->mkMacUnitTop__DOT___theResult___05F_snd_snd___05Fh213253 
            = vlTOPp->mkMacUnitTop__DOT__mantissa_a___05Fh175521;
    }
    vlTOPp->mkMacUnitTop__DOT__round_flag___05F_1___05Fh213317 
        = ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh219966))) 
           & (vlTOPp->mkMacUnitTop__DOT__mantissa_b___05Fh175522 
              >> (0x1fU & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh219966))));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf1_ETC___05F_d2263)
            ? vlTOPp->mkMacUnitTop__DOT__mantissa_b___05Fh175522
            : vlTOPp->mkMacUnitTop__DOT__aligned_mantissa_B___05F_1___05Fh213316);
    vlTOPp->mkMacUnitTop__DOT__y___05Fh77012 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh76650) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh76649));
    if (vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF_bf1_ETC___05F_d2263) {
        vlTOPp->mkMacUnitTop__DOT__result_exponent___05Fh175530 
            = vlTOPp->mkMacUnitTop__DOT___theResult___05F_snd_fst___05Fh213252;
        vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
            = vlTOPp->mkMacUnitTop__DOT___theResult___05F_snd_snd___05Fh213253;
        vlTOPp->mkMacUnitTop__DOT___theResult___05F_fst___05Fh213218 
            = vlTOPp->mkMacUnitTop__DOT___theResult___05F_fst___05Fh213250;
    } else {
        vlTOPp->mkMacUnitTop__DOT__result_exponent___05Fh175530 
            = vlTOPp->mkMacUnitTop__DOT__exponent_A___05Fh175523;
        vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
            = vlTOPp->mkMacUnitTop__DOT__mantissa_a___05Fh175521;
        vlTOPp->mkMacUnitTop__DOT___theResult___05F_fst___05Fh213218 
            = vlTOPp->mkMacUnitTop__DOT__round_flag___05F_1___05Fh213317;
    }
    vlTOPp->mkMacUnitTop__DOT__y___05Fh76921 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh77011) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh77012));
    vlTOPp->mkMacUnitTop__DOT__result_exponent___05F_1___05Fh217019 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMacUnitTop__DOT__result_exponent___05Fh175530)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN___05FETC___05Fq40 
        = ((1U & (vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                  ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282))
            ? 1U : 0U);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh216867 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0x17U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh216915 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0x17U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh216713 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0x16U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh216761 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0x16U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh216559 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0x15U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh216607 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0x15U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh216405 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0x14U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh216453 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0x14U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh216251 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0x13U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh216299 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0x13U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh216097 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0x12U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh216145 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0x12U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh215943 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0x11U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh215991 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0x11U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh215789 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0x10U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh215837 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0x10U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh215635 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0xfU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh215683 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0xfU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh215481 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0xeU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh215529 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0xeU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh215327 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0xdU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh215375 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0xdU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh215173 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0xcU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh215221 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0xcU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh215019 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0xbU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh215067 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0xbU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh214865 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0xaU));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh214913 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 0xaU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh214711 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 9U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh214759 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 9U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh214557 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 8U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh214605 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 8U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh214403 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 7U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh214451 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 7U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh214249 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 6U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh214297 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 6U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh214095 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 5U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh214143 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 5U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh213941 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 4U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh213989 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 4U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh213787 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 3U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh213835 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 3U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh213633 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 2U));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh213681 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 2U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh213478 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 1U));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN___05FETC___05Fq39 
        = ((1U & (vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                  & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282))
            ? 2U : 0U);
    vlTOPp->mkMacUnitTop__DOT__y___05Fh213526 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2276 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2282) 
                                                    >> 1U));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d595 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh76920) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh76921)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh76649) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh76650)) 
                          << 0x1aU) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d594));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh77283 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh76921) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh76920));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2466 
        = (1U & ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh213526) 
                 ^ (vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN___05FETC___05Fq39 
                    >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh213479 = ((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN___05FETC___05Fq39 
                                                  >> 1U) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh213526));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh77192 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh77282) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh77283));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh213680 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh213478) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh213479));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh77554 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh77192) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh77191));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2465 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh213681) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh213680));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh213634 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh213680) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh213681));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh77463 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh77553) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh77554));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh213834 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh213633) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh213634));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d596 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh77462) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh77463)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh77191) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh77192)) 
                          << 0x1cU) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d595));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh77825 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh77463) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh77462));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2464 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh213835) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh213834));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh213788 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh213834) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh213835));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh77734 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh77824) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh77825));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh213988 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh213787) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh213788));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh78096 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh77734) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh77733));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2463 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh213989) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh213988));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh213942 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh213988) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh213989));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh78005 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh78095) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh78096));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh214142 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh213941) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh213942));
    vlTOPp->mkMacUnitTop__DOT__result___05Fh18429 = 
        ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh78004) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh78005)) 
          << 0x1fU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh77733) 
                         ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh77734)) 
                        << 0x1eU) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d596));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2462 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh214143) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh214142));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh214096 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh214142) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh214143));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
        = ((4U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_B___05FETC___05F_d38))
            ? vlTOPp->mkMacUnitTop__DOT__result___05Fh18429
            : vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d401);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh214296 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh214095) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh214096));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh95717 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x1fU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x1cU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh95808 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x1eU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x1bU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh95446 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x1eU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x1bU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh95537 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x1dU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x1aU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh95175 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x1dU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x1aU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh95266 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x1cU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x19U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh94904 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x1cU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x19U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh94995 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x1bU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x18U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh94633 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x1bU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x18U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh94724 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x1aU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x17U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh94362 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x1aU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x17U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh94453 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x19U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh94091 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x19U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq14 
        = ((1U & vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598)
            ? 1U : 0U);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh94182 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x18U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh93820 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x18U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh93911 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x17U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh93549 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x17U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh93640 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x16U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh93278 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x16U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh93369 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x15U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh93007 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x15U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh93098 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x14U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh92736 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x14U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh92827 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x13U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh92465 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x13U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh92556 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x12U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh92194 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x12U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh92285 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x11U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh91923 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x11U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh92014 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x10U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh91652 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0x10U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh91743 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0xfU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh91381 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0xfU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh91472 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0xeU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh91110 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0xeU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh91201 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0xdU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh90839 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0xdU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh90930 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0xcU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh90568 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0xcU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh90659 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0xbU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh90297 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0xbU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh90388 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0xaU) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh90026 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 0xaU) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh90117 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 9U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh89755 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 9U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh89846 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 8U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh89484 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 8U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh89575 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 7U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh89213 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 7U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh89304 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 6U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh88942 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 6U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh89033 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 5U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh88670 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh88761 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 4U) 
                                                   & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                      >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq13 
        = ((1U & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                   >> 3U) & vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163))
            ? 0x10ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh88402 = (1U 
                                                & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598 
                                                    >> 4U) 
                                                   ^ 
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                    >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2461 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh214297) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh214296));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh214250 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh214296) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh214297));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh88762 = ((IData)(
                                                        (vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq13 
                                                         >> 4U)) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh88402));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh214450 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh214249) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh214250));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh88671 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh88761) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh88762));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2460 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh214451) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh214450));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh214404 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh214450) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh214451));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d774 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh88670) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh88671)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh88402) 
                                 ^ (IData)((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq13 
                                            >> 4U))) 
                                << 4U)) | ((8U & ((0xfffffff8U 
                                                   & vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598) 
                                                  ^ 
                                                  (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                   << 3U))) 
                                           | ((6U & vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598) 
                                              | (1U 
                                                 & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq14)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh89034 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh88671) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh88670));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh214604 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh214403) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh214404));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh88943 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh89033) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh89034));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2459 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh214605) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh214604));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh214558 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh214604) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh214605));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh89305 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh88943) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh88942));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh214758 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh214557) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh214558));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh89214 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh89304) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh89305));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2458 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh214759) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh214758));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh214712 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh214758) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh214759));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d775 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh89213) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh89214)) 
            << 7U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh88942) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh88943)) 
                       << 6U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d774)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh89576 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh89214) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh89213));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh214912 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh214711) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh214712));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh89485 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh89575) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh89576));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2457 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh214913) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh214912));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh214866 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh214912) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh214913));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh89847 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh89485) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh89484));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh215066 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh214865) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh214866));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh89756 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh89846) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh89847));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2456 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh215067) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh215066));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh215020 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh215066) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh215067));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d776 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh89755) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh89756)) 
            << 9U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh89484) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh89485)) 
                       << 8U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d775)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh90118 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh89756) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh89755));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh215220 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh215019) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh215020));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh90027 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh90117) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh90118));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2455 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh215221) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh215220));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh215174 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh215220) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh215221));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh90389 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh90027) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh90026));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh215374 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh215173) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh215174));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh90298 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh90388) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh90389));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2454 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh215375) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh215374));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh215328 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh215374) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh215375));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d777 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh90297) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh90298)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh90026) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh90027)) 
                         << 0xaU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d776)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh90660 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh90298) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh90297));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh215528 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh215327) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh215328));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh90569 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh90659) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh90660));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2453 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh215529) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh215528));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh215482 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh215528) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh215529));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh90931 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh90569) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh90568));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh215682 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh215481) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh215482));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh90840 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh90930) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh90931));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2452 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh215683) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh215682));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh215636 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh215682) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh215683));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d778 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh90839) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh90840)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh90568) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh90569)) 
                         << 0xcU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d777)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh91202 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh90840) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh90839));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh215836 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh215635) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh215636));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh91111 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh91201) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh91202));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2451 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh215837) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh215836));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh215790 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh215836) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh215837));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh91473 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh91111) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh91110));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh215990 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh215789) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh215790));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh91382 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh91472) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh91473));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2450 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh215991) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh215990));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh215944 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh215990) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh215991));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d779 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh91381) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh91382)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh91110) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh91111)) 
                         << 0xeU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d778)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh91744 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh91382) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh91381));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh216144 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh215943) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh215944));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh91653 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh91743) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh91744));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2449 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh216145) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh216144));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh216098 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh216144) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh216145));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh92015 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh91653) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh91652));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh216298 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh216097) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh216098));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh91924 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh92014) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh92015));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2448 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh216299) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh216298));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh216252 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh216298) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh216299));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d780 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh91923) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh91924)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh91652) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh91653)) 
                          << 0x10U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d779)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh92286 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh91924) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh91923));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh216452 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh216251) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh216252));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh92195 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh92285) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh92286));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2447 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh216453) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh216452));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh216406 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh216452) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh216453));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh92557 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh92195) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh92194));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh216606 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh216405) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh216406));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh92466 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh92556) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh92557));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2446 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh216607) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh216606));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh216560 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh216606) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh216607));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d781 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh92465) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh92466)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh92194) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh92195)) 
                          << 0x12U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d780));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh92828 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh92466) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh92465));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh216760 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh216559) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh216560));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh92737 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh92827) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh92828));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2445 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh216761) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh216760));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh216714 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh216760) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh216761));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh93099 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh92737) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh92736));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh216914 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh216713) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh216714));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh93008 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh93098) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh93099));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2443 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh216915) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh216914));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh216868 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh216914) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh216915));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d782 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh93007) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh93008)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh92736) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh92737)) 
                          << 0x14U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d781));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh93370 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh93008) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh93007));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2424 
        = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh216867) 
           | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh216868));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh93279 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh93369) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh93370));
    if (vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2424) {
        vlTOPp->mkMacUnitTop__DOT___theResult___05F___05F_2_snd_fst___05Fh217015 
            = vlTOPp->mkMacUnitTop__DOT__result_exponent___05F_1___05Fh217019;
        vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN___05FETC___05F_d2489 
            = (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2443) 
                << 0x16U) | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2445) 
                              << 0x15U) | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2446) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2447) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2448) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2449) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2450) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2451) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2452) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2453) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2454) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2455) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2456) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2457) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2458) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2459) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2460) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2461) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2462) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2463) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2464) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2465) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2466)))))))))))))))))))))));
    } else {
        vlTOPp->mkMacUnitTop__DOT___theResult___05F___05F_2_snd_fst___05Fh217015 
            = vlTOPp->mkMacUnitTop__DOT__result_exponent___05Fh175530;
        vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN___05FETC___05F_d2489 
            = (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2445) 
                << 0x16U) | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2446) 
                              << 0x15U) | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2447) 
                                            << 0x14U) 
                                           | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2448) 
                                               << 0x13U) 
                                              | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2449) 
                                                  << 0x12U) 
                                                 | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2450) 
                                                     << 0x11U) 
                                                    | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2451) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2452) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2453) 
                                                              << 0xeU) 
                                                             | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2454) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2455) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2456) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2457) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2458) 
                                                                             << 9U) 
                                                                            | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2459) 
                                                                                << 8U) 
                                                                               | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2460) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2461) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2462) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2463) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2464) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2465) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2466) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN___05FETC___05Fq40)))))))))))))))))))))));
    }
    vlTOPp->mkMacUnitTop__DOT__y___05Fh93641 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh93279) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh93278));
    vlTOPp->mkMacUnitTop__DOT__result_mantissa1___05Fh175541 
        = ((((~ (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2424)) 
             & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2443)) 
            << 0x17U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN___05FETC___05F_d2489);
    vlTOPp->mkMacUnitTop__DOT__y___05Fh93550 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh93640) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh93641));
    vlTOPp->mkMacUnitTop__DOT__result_mantissa1___05F_1___05Fh220004 
        = (0xffffffU & ((IData)(1U) + vlTOPp->mkMacUnitTop__DOT__result_mantissa1___05Fh175541));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d783 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh93549) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh93550)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh93278) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh93279)) 
                          << 0x16U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d782));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh93912 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh93550) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh93549));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_TH_ETC___05F_d2492 
        = ((1U & ((IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN_IF___05FETC___05F_d2424)
                   ? vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_THEN___05FETC___05Fq40
                   : (IData)(vlTOPp->mkMacUnitTop__DOT___theResult___05F_fst___05Fh213218)))
            ? vlTOPp->mkMacUnitTop__DOT__result_mantissa1___05F_1___05Fh220004
            : vlTOPp->mkMacUnitTop__DOT__result_mantissa1___05Fh175541);
    vlTOPp->mkMacUnitTop__DOT__y___05Fh93821 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh93911) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh93912));
    vlTOPp->mkMacUnitTop__DOT__bf16_Mac_result_D_IN 
        = (((IData)(vlTOPp->mkMacUnitTop__DOT__sign_A___05Fh175519) 
            << 0x1fU) | (((IData)(vlTOPp->mkMacUnitTop__DOT___theResult___05F___05F_2_snd_fst___05Fh217015) 
                          << 0x17U) | (0x7fffffU & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_IF_IF_bf16_Mac_reg_B_729_BIT_6_732_TH_ETC___05F_d2492)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh94183 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh93821) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh93820));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh94092 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh94182) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh94183));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d784 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh94091) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh94092)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh93820) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh93821)) 
                          << 0x18U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d783));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh94454 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh94092) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh94091));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh94363 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh94453) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh94454));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh94725 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh94363) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh94362));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh94634 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh94724) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh94725));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d785 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh94633) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh94634)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh94362) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh94363)) 
                          << 0x1aU) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d784));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh94996 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh94634) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh94633));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh94905 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh94995) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh94996));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh95267 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh94905) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh94904));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh95176 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh95266) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh95267));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d786 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh95175) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh95176)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh94904) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh94905)) 
                          << 0x1cU) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d785));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh95538 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh95176) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh95175));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh95447 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh95537) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh95538));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh95809 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh95447) 
                                                & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh95446));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh95718 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh95808) 
                                                | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh95809));
    vlTOPp->mkMacUnitTop__DOT__result___05Fh15416 = 
        ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh95717) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh95718)) 
          << 0x1fU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh95446) 
                         ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh95447)) 
                        << 0x1eU) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d786));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
        = ((8U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_B___05FETC___05F_d38))
            ? vlTOPp->mkMacUnitTop__DOT__result___05Fh15416
            : vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d598);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh113425 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x1fU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x1bU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh113516 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x1eU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x1aU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh113154 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x1eU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x1aU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh113245 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x1dU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x19U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh112883 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x1dU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x19U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh112974 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x1cU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x18U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh112612 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x1cU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x18U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh112703 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x1bU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x17U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh112341 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x1bU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x17U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh112432 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x1aU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh112070 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x1aU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh112161 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x19U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh111799 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x19U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq16 
        = ((1U & vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788)
            ? 1U : 0U);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh111890 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x18U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh111528 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x18U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh111619 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x17U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh111257 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x17U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh111348 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x16U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh110986 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x16U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh111077 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x15U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh110715 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x15U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh110806 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x14U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh110444 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x14U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh110535 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x13U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh110173 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x13U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh110264 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x12U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh109902 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x12U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh109993 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x11U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh109631 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x11U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh109722 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x10U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh109360 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0x10U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh109451 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0xfU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh109089 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0xfU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh109180 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0xeU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh108818 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0xeU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh108909 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0xdU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh108547 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0xdU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh108638 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0xcU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh108276 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0xcU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh108367 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0xbU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh108005 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0xbU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh108096 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0xaU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh107734 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 0xaU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh107825 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 9U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh107463 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 9U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh107554 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 8U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh107192 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 8U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh107283 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 7U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh106921 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 7U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh107012 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 6U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh106649 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 6U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh106740 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 5U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq15 
        = ((1U & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                   >> 4U) & vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163))
            ? 0x20ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh106381 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788 
                                                     >> 5U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d958 
        = ((0x20U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh106381) 
                      ^ (IData)((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq15 
                                 >> 5U))) << 5U)) | 
           ((0x10U & ((0xfffffff0U & vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788) 
                      ^ (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                         << 4U))) | ((0xeU & vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788) 
                                     | (1U & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq16))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh106741 = ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq15 
                                                          >> 5U)) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh106381));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh106650 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh106740) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh106741));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh107013 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh106650) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh106649));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh106922 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh107012) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh107013));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d959 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh106921) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh106922)) 
            << 7U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh106649) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh106650)) 
                       << 6U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d958)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh107284 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh106922) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh106921));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh107193 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh107283) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh107284));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh107555 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh107193) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh107192));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh107464 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh107554) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh107555));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d960 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh107463) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh107464)) 
            << 9U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh107192) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh107193)) 
                       << 8U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d959)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh107826 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh107464) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh107463));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh107735 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh107825) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh107826));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh108097 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh107735) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh107734));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh108006 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh108096) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh108097));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d961 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh108005) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh108006)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh107734) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh107735)) 
                         << 0xaU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d960)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh108368 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh108006) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh108005));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh108277 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh108367) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh108368));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh108639 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh108277) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh108276));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh108548 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh108638) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh108639));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d962 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh108547) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh108548)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh108276) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh108277)) 
                         << 0xcU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d961)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh108910 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh108548) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh108547));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh108819 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh108909) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh108910));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh109181 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh108819) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh108818));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh109090 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh109180) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh109181));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d963 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh109089) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh109090)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh108818) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh108819)) 
                         << 0xeU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d962)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh109452 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh109090) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh109089));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh109361 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh109451) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh109452));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh109723 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh109361) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh109360));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh109632 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh109722) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh109723));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d964 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh109631) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh109632)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh109360) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh109361)) 
                          << 0x10U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d963)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh109994 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh109632) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh109631));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh109903 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh109993) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh109994));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh110265 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh109903) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh109902));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh110174 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh110264) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh110265));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d965 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh110173) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh110174)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh109902) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh109903)) 
                          << 0x12U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d964));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh110536 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh110174) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh110173));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh110445 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh110535) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh110536));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh110807 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh110445) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh110444));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh110716 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh110806) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh110807));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d966 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh110715) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh110716)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh110444) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh110445)) 
                          << 0x14U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d965));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh111078 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh110716) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh110715));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh110987 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh111077) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh111078));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh111349 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh110987) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh110986));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh111258 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh111348) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh111349));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d967 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh111257) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh111258)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh110986) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh110987)) 
                          << 0x16U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d966));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh111620 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh111258) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh111257));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh111529 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh111619) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh111620));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh111891 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh111529) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh111528));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh111800 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh111890) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh111891));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d968 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh111799) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh111800)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh111528) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh111529)) 
                          << 0x18U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d967));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh112162 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh111800) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh111799));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh112071 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh112161) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh112162));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh112433 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh112071) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh112070));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh112342 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh112432) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh112433));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d969 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh112341) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh112342)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh112070) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh112071)) 
                          << 0x1aU) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d968));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh112704 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh112342) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh112341));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh112613 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh112703) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh112704));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh112975 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh112613) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh112612));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh112884 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh112974) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh112975));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d970 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh112883) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh112884)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh112612) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh112613)) 
                          << 0x1cU) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d969));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh113246 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh112884) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh112883));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh113155 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh113245) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh113246));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh113517 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh113155) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh113154));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh113426 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh113516) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh113517));
    vlTOPp->mkMacUnitTop__DOT__result___05Fh12403 = 
        ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh113425) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh113426)) 
          << 0x1fU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh113154) 
                         ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh113155)) 
                        << 0x1eU) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d970));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
        = ((0x10U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_B___05FETC___05F_d38))
            ? vlTOPp->mkMacUnitTop__DOT__result___05Fh12403
            : vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d788);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh131128 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x1fU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x1aU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh131219 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x1eU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x19U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh130857 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x1eU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x19U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh130948 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x1dU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x18U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh130586 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x1dU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x18U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh130677 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x1cU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x17U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh130315 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x1cU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x17U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh130406 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x1bU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh130044 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x1bU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh130135 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x1aU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh129773 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x1aU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh129864 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x19U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq18 
        = ((1U & vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972)
            ? 1U : 0U);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh129502 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x19U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh129593 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x18U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh129231 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x18U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh129322 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x17U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh128960 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x17U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh129051 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x16U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh128689 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x16U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh128780 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x15U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh128418 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x15U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh128509 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x14U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh128147 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x14U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh128238 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x13U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh127876 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x13U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh127967 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x12U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh127605 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x12U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh127696 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x11U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh127334 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x11U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh127425 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x10U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh127063 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0x10U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh127154 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0xfU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh126792 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0xfU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh126883 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0xeU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh126521 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0xeU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh126612 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0xdU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh126250 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0xdU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh126341 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0xcU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh125979 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0xcU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh126070 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0xbU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh125708 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0xbU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh125799 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0xaU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh125437 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 0xaU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh125528 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 9U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh125166 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 9U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh125257 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 8U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh124895 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 8U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh124986 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 7U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh124623 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 7U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh124714 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 6U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq17 
        = ((1U & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                   >> 5U) & vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163))
            ? 0x40ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh124355 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972 
                                                     >> 6U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh124715 = ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq17 
                                                          >> 6U)) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh124355));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh124624 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh124714) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh124715));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1136 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh124623) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh124624)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh124355) 
                                 ^ (IData)((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq17 
                                            >> 6U))) 
                                << 6U)) | ((0x20U & 
                                            ((0xffffffe0U 
                                              & vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972) 
                                             ^ (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                << 5U))) 
                                           | ((0x1eU 
                                               & vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972) 
                                              | (1U 
                                                 & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq18)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh124987 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh124624) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh124623));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh124896 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh124986) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh124987));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh125258 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh124896) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh124895));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh125167 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh125257) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh125258));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1137 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh125166) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh125167)) 
            << 9U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh124895) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh124896)) 
                       << 8U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1136)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh125529 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh125167) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh125166));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh125438 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh125528) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh125529));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh125800 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh125438) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh125437));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh125709 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh125799) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh125800));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1138 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh125708) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh125709)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh125437) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh125438)) 
                         << 0xaU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1137)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh126071 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh125709) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh125708));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh125980 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh126070) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh126071));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh126342 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh125980) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh125979));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh126251 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh126341) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh126342));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1139 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh126250) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh126251)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh125979) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh125980)) 
                         << 0xcU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1138)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh126613 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh126251) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh126250));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh126522 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh126612) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh126613));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh126884 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh126522) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh126521));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh126793 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh126883) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh126884));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1140 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh126792) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh126793)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh126521) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh126522)) 
                         << 0xeU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1139)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh127155 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh126793) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh126792));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh127064 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh127154) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh127155));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh127426 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh127064) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh127063));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh127335 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh127425) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh127426));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1141 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh127334) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh127335)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh127063) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh127064)) 
                          << 0x10U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1140)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh127697 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh127335) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh127334));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh127606 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh127696) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh127697));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh127968 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh127606) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh127605));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh127877 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh127967) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh127968));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1142 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh127876) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh127877)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh127605) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh127606)) 
                          << 0x12U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1141));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh128239 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh127877) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh127876));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh128148 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh128238) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh128239));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh128510 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh128148) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh128147));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh128419 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh128509) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh128510));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1143 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh128418) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh128419)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh128147) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh128148)) 
                          << 0x14U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1142));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh128781 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh128419) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh128418));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh128690 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh128780) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh128781));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh129052 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh128690) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh128689));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh128961 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh129051) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh129052));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1144 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh128960) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh128961)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh128689) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh128690)) 
                          << 0x16U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1143));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh129323 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh128961) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh128960));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh129232 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh129322) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh129323));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh129594 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh129232) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh129231));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh129503 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh129593) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh129594));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1145 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh129502) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh129503)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh129231) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh129232)) 
                          << 0x18U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1144));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh129865 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh129503) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh129502));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh129774 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh129864) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh129865));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh130136 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh129774) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh129773));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh130045 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh130135) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh130136));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1146 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh130044) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh130045)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh129773) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh129774)) 
                          << 0x1aU) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1145));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh130407 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh130045) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh130044));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh130316 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh130406) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh130407));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh130678 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh130316) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh130315));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh130587 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh130677) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh130678));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1147 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh130586) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh130587)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh130315) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh130316)) 
                          << 0x1cU) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1146));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh130949 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh130587) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh130586));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh130858 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh130948) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh130949));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh131220 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh130858) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh130857));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh131129 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh131219) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh131220));
    vlTOPp->mkMacUnitTop__DOT__result___05Fh9390 = 
        ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh131128) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh131129)) 
          << 0x1fU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh130857) 
                         ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh130858)) 
                        << 0x1eU) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1147));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
        = ((0x20U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_B___05FETC___05F_d38))
            ? vlTOPp->mkMacUnitTop__DOT__result___05Fh9390
            : vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d972);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh148826 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x1fU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x19U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh148917 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x1eU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x18U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh148555 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x1eU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x18U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh148646 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x1dU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x17U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh148284 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x1dU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x17U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh148375 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x1cU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh148013 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x1cU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh148104 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x1bU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh147742 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x1bU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh147833 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x1aU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh147471 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x1aU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh147562 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x19U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq20 
        = ((1U & vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149)
            ? 1U : 0U);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh147200 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x19U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh147291 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x18U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh146929 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x18U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh147020 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x17U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh146658 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x17U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh146749 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x16U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh146387 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x16U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh146478 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x15U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh146116 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x15U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh146207 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x14U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh145845 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x14U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh145936 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x13U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh145574 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x13U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh145665 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x12U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh145303 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x12U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh145394 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x11U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh145032 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x11U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh145123 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x10U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh144761 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0x10U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh144852 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0xfU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh144490 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0xfU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh144581 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0xeU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh144219 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0xeU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh144310 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0xdU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh143948 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0xdU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh144039 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0xcU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh143677 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0xcU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh143768 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0xbU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh143406 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0xbU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh143497 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0xaU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh143135 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 0xaU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh143226 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 9U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh142864 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 9U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh142955 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 8U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh142592 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 8U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh142683 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 7U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq19 
        = ((1U & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                   >> 6U) & vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163))
            ? 0x80ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh142324 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149 
                                                     >> 7U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1307 
        = ((0x80U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh142324) 
                      ^ (IData)((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq19 
                                 >> 7U))) << 7U)) | 
           ((0x40U & ((0xffffffc0U & vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149) 
                      ^ (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                         << 6U))) | ((0x3eU & vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149) 
                                     | (1U & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq20))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh142684 = ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq19 
                                                          >> 7U)) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh142324));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh142593 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh142683) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh142684));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh142956 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh142593) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh142592));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh142865 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh142955) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh142956));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1308 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh142864) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh142865)) 
            << 9U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh142592) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh142593)) 
                       << 8U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1307)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh143227 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh142865) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh142864));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh143136 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh143226) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh143227));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh143498 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh143136) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh143135));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh143407 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh143497) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh143498));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1309 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh143406) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh143407)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh143135) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh143136)) 
                         << 0xaU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1308)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh143769 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh143407) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh143406));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh143678 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh143768) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh143769));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh144040 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh143678) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh143677));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh143949 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh144039) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh144040));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1310 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh143948) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh143949)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh143677) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh143678)) 
                         << 0xcU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1309)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh144311 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh143949) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh143948));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh144220 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh144310) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh144311));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh144582 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh144220) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh144219));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh144491 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh144581) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh144582));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1311 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh144490) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh144491)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh144219) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh144220)) 
                         << 0xeU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1310)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh144853 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh144491) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh144490));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh144762 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh144852) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh144853));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh145124 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh144762) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh144761));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh145033 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh145123) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh145124));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1312 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh145032) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh145033)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh144761) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh144762)) 
                          << 0x10U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1311)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh145395 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh145033) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh145032));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh145304 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh145394) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh145395));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh145666 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh145304) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh145303));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh145575 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh145665) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh145666));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1313 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh145574) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh145575)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh145303) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh145304)) 
                          << 0x12U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1312));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh145937 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh145575) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh145574));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh145846 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh145936) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh145937));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh146208 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh145846) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh145845));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh146117 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh146207) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh146208));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1314 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh146116) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh146117)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh145845) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh145846)) 
                          << 0x14U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1313));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh146479 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh146117) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh146116));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh146388 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh146478) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh146479));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh146750 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh146388) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh146387));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh146659 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh146749) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh146750));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1315 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh146658) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh146659)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh146387) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh146388)) 
                          << 0x16U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1314));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh147021 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh146659) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh146658));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh146930 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh147020) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh147021));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh147292 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh146930) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh146929));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh147201 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh147291) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh147292));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1316 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh147200) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh147201)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh146929) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh146930)) 
                          << 0x18U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1315));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh147563 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh147201) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh147200));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh147472 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh147562) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh147563));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh147834 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh147472) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh147471));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh147743 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh147833) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh147834));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1317 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh147742) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh147743)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh147471) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh147472)) 
                          << 0x1aU) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1316));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh148105 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh147743) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh147742));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh148014 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh148104) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh148105));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh148376 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh148014) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh148013));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh148285 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh148375) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh148376));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1318 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh148284) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh148285)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh148013) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh148014)) 
                          << 0x1cU) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1317));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh148647 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh148285) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh148284));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh148556 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh148646) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh148647));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh148918 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh148556) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh148555));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh148827 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh148917) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh148918));
    vlTOPp->mkMacUnitTop__DOT__result___05Fh6377 = 
        ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh148826) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh148827)) 
          << 0x1fU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh148555) 
                         ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh148556)) 
                        << 0x1eU) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1318));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
        = ((0x40U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_B___05FETC___05F_d38))
            ? vlTOPp->mkMacUnitTop__DOT__result___05Fh6377
            : vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1149);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh166519 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x1fU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x18U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh166610 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x1eU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x17U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh166248 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x1eU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x17U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh166339 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x1dU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh165977 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x1dU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh166068 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x1cU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh165706 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x1cU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh165797 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x1bU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh165435 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x1bU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh165526 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x1aU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh165164 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x1aU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq22 
        = ((1U & vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320)
            ? 1U : 0U);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh165255 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x19U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh164893 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x19U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh164984 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x18U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh164622 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x18U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh164713 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x17U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh164351 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x17U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh164442 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x16U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh164080 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x16U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh164171 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x15U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh163809 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x15U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh163900 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x14U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh163538 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x14U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh163629 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x13U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh163267 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x13U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh163358 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x12U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh162996 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x12U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh163087 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x11U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh162725 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x11U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh162816 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x10U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh162454 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0x10U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh162545 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0xfU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh162183 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0xfU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh162274 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0xeU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh161912 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0xeU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh162003 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0xdU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh161641 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0xdU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh161732 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0xcU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh161370 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0xcU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh161461 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0xbU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh161099 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0xbU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh161190 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0xaU) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh160828 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 0xaU) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh160919 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 9U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh160556 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 9U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh160647 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 8U) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq21 
        = ((1U & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                   >> 7U) & vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163))
            ? 0x100ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh160288 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320 
                                                     >> 8U) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh160648 = ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq21 
                                                          >> 8U)) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh160288));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh160557 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh160647) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh160648));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1472 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh160556) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh160557)) 
            << 9U) | ((0x100U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh160288) 
                                  ^ (IData)((vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq21 
                                             >> 8U))) 
                                 << 8U)) | ((0x80U 
                                             & ((0xffffff80U 
                                                 & vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320) 
                                                ^ (vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_A_BIT_7_THEN_INV_SEXT_int_Mac_r_ETC___05F_d163 
                                                   << 7U))) 
                                            | ((0x7eU 
                                                & vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320) 
                                               | (1U 
                                                  & vlTOPp->mkMacUnitTop__DOT__IF_IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac___05FETC___05Fq22)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh160920 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh160557) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh160556));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh160829 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh160919) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh160920));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh161191 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh160829) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh160828));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh161100 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh161190) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh161191));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1473 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh161099) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh161100)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh160828) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh160829)) 
                         << 0xaU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1472)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh161462 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh161100) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh161099));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh161371 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh161461) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh161462));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh161733 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh161371) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh161370));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh161642 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh161732) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh161733));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1474 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh161641) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh161642)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh161370) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh161371)) 
                         << 0xcU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1473)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh162004 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh161642) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh161641));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh161913 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh162003) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh162004));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh162275 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh161913) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh161912));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh162184 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh162274) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh162275));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1475 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh162183) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh162184)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh161912) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh161913)) 
                         << 0xeU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1474)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh162546 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh162184) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh162183));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh162455 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh162545) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh162546));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh162817 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh162455) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh162454));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh162726 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh162816) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh162817));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1476 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh162725) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh162726)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh162454) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh162455)) 
                          << 0x10U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1475)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh163088 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh162726) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh162725));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh162997 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh163087) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh163088));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh163359 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh162997) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh162996));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh163268 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh163358) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh163359));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1477 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh163267) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh163268)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh162996) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh162997)) 
                          << 0x12U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1476));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh163630 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh163268) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh163267));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh163539 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh163629) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh163630));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh163901 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh163539) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh163538));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh163810 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh163900) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh163901));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1478 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh163809) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh163810)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh163538) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh163539)) 
                          << 0x14U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1477));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh164172 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh163810) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh163809));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh164081 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh164171) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh164172));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh164443 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh164081) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh164080));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh164352 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh164442) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh164443));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1479 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh164351) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh164352)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh164080) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh164081)) 
                          << 0x16U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1478));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh164714 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh164352) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh164351));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh164623 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh164713) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh164714));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh164985 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh164623) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh164622));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh164894 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh164984) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh164985));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1480 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh164893) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh164894)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh164622) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh164623)) 
                          << 0x18U) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1479));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh165256 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh164894) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh164893));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh165165 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh165255) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh165256));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh165527 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh165165) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh165164));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh165436 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh165526) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh165527));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1481 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh165435) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh165436)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh165164) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh165165)) 
                          << 0x1aU) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1480));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh165798 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh165436) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh165435));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh165707 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh165797) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh165798));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh166069 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh165707) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh165706));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh165978 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh166068) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh166069));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1482 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh165977) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh165978)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh165706) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh165707)) 
                          << 0x1cU) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1481));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh166340 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh165978) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh165977));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh166249 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh166339) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh166340));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh166611 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh166249) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh166248));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh166520 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh166610) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh166611));
    vlTOPp->mkMacUnitTop__DOT__result___05Fh3364 = 
        ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh166519) 
           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh166520)) 
          << 0x1fU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh166248) 
                         ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh166249)) 
                        << 0x1eU) | vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1482));
    vlTOPp->mkMacUnitTop__DOT___theResult___05F___05F_1___05Fh1029 
        = ((0x80U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_B___05FETC___05F_d38))
            ? vlTOPp->mkMacUnitTop__DOT__result___05Fh3364
            : vlTOPp->mkMacUnitTop__DOT__IF_IF_int_Mac_reg_B_BIT_7_THEN_INV_int_Mac_reg_ETC___05F_d1320);
    vlTOPp->mkMacUnitTop__DOT__result___05Fh1085 = 
        ((IData)(1U) + (~ vlTOPp->mkMacUnitTop__DOT___theResult___05F___05F_1___05Fh1029));
    vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
        = (((1U & (~ ((IData)(vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_A) 
                      >> 7U))) == (1U & ((IData)(vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_B) 
                                         >> 7U))) ? vlTOPp->mkMacUnitTop__DOT__result___05Fh1085
            : vlTOPp->mkMacUnitTop__DOT___theResult___05F___05F_1___05Fh1029);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh175078 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x1fU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh175170 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x1eU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh174804 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x1eU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh174896 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x1dU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh174530 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x1dU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh174622 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x1cU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh174256 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x1cU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh174348 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x1bU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh173982 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x1bU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh174074 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x1aU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh173708 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x1aU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh173800 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x19U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh173434 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x19U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh173526 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x18U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh173160 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x18U));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_ETC___05Fq41 
        = ((1U & (vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                  ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C))
            ? 1U : 0U);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh173252 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x17U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh172886 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x17U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh172978 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x16U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh172612 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x16U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh172704 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x15U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh172338 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x15U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh172430 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x14U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh172064 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x14U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh172156 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x13U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh171790 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x13U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh171882 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x12U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh171516 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x12U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh171608 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x11U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh171242 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x11U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh171334 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x10U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh170968 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0x10U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh171060 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0xfU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh170694 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0xfU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh170786 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0xeU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh170420 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0xeU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh170512 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0xdU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh170146 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0xdU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh170238 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0xcU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh169872 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0xcU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh169964 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0xbU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh169598 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0xbU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh169690 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0xaU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh169324 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 0xaU));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh169416 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 9U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh169050 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 9U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh169142 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 8U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh168776 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 8U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh168868 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 7U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh168502 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 7U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh168594 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 6U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh168228 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 6U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh168320 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 5U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh167954 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 5U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh168046 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 4U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh167680 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 4U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh167772 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 3U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh167406 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 3U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh167498 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 2U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh167131 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 2U));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh167223 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 1U));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_ETC___05Fq23 
        = ((1U & (vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                  & vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C))
            ? 2ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh166860 = (1U 
                                                 & ((vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1487 
                                                     ^ vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C) 
                                                    >> 1U));
    vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1711 
        = ((2U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh166860) 
                   ^ (IData)((vlTOPp->mkMacUnitTop__DOT__IF_IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_ETC___05Fq23 
                              >> 1U))) << 1U)) | (1U 
                                                  & vlTOPp->mkMacUnitTop__DOT__IF_IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_ETC___05Fq41));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh167224 = ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_ETC___05Fq23 
                                                          >> 1U)) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh166860));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh167132 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh167223) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh167224));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh167499 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh167132) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh167131));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh167407 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh167498) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh167499));
    vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1712 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh167406) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh167407)) 
            << 3U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh167131) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh167132)) 
                       << 2U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1711)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh167773 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh167407) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh167406));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh167681 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh167772) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh167773));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh168047 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh167681) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh167680));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh167955 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh168046) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh168047));
    vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1713 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh167954) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh167955)) 
            << 5U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh167680) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh167681)) 
                       << 4U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1712)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh168321 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh167955) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh167954));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh168229 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh168320) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh168321));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh168595 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh168229) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh168228));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh168503 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh168594) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh168595));
    vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1714 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh168502) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh168503)) 
            << 7U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh168228) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh168229)) 
                       << 6U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1713)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh168869 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh168503) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh168502));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh168777 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh168868) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh168869));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh169143 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh168777) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh168776));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh169051 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh169142) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh169143));
    vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1715 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh169050) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh169051)) 
            << 9U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh168776) 
                        ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh168777)) 
                       << 8U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1714)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh169417 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh169051) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh169050));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh169325 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh169416) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh169417));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh169691 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh169325) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh169324));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh169599 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh169690) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh169691));
    vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1716 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh169598) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh169599)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh169324) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh169325)) 
                         << 0xaU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1715)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh169965 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh169599) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh169598));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh169873 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh169964) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh169965));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh170239 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh169873) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh169872));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh170147 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh170238) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh170239));
    vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1717 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh170146) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh170147)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh169872) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh169873)) 
                         << 0xcU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1716)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh170513 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh170147) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh170146));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh170421 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh170512) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh170513));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh170787 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh170421) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh170420));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh170695 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh170786) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh170787));
    vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1718 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh170694) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh170695)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh170420) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh170421)) 
                         << 0xeU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1717)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh171061 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh170695) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh170694));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh170969 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh171060) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh171061));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh171335 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh170969) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh170968));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh171243 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh171334) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh171335));
    vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1719 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh171242) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh171243)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh170968) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh170969)) 
                          << 0x10U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1718)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh171609 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh171243) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh171242));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh171517 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh171608) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh171609));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh171883 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh171517) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh171516));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh171791 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh171882) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh171883));
    vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1720 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh171790) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh171791)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh171516) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh171517)) 
                          << 0x12U) | vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1719));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh172157 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh171791) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh171790));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh172065 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh172156) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh172157));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh172431 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh172065) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh172064));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh172339 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh172430) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh172431));
    vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1721 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh172338) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh172339)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh172064) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh172065)) 
                          << 0x14U) | vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1720));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh172705 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh172339) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh172338));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh172613 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh172704) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh172705));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh172979 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh172613) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh172612));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh172887 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh172978) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh172979));
    vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1722 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh172886) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh172887)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh172612) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh172613)) 
                          << 0x16U) | vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1721));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh173253 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh172887) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh172886));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh173161 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh173252) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh173253));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh173527 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh173161) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh173160));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh173435 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh173526) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh173527));
    vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1723 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh173434) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh173435)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh173160) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh173161)) 
                          << 0x18U) | vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1722));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh173801 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh173435) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh173434));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh173709 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh173800) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh173801));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh174075 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh173709) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh173708));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh173983 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh174074) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh174075));
    vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1724 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh173982) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh173983)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh173708) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh173709)) 
                          << 0x1aU) | vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1723));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh174349 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh173983) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh173982));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh174257 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh174348) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh174349));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh174623 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh174257) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh174256));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh174531 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh174622) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh174623));
    vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1725 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh174530) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh174531)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh174256) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh174257)) 
                          << 0x1cU) | vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1724));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh174897 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh174531) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh174530));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh174805 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh174896) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh174897));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh175171 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh174805) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh174804));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh175079 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh175170) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh175171));
    vlTOPp->mkMacUnitTop__DOT__int_Mac_result_D_IN 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh175078) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh175079)) 
            << 0x1fU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh174804) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh174805)) 
                          << 0x1eU) | vlTOPp->mkMacUnitTop__DOT__IF_NOT_int_Mac_reg_A_BIT_7_EQ_int_Mac_reg_B_BI_ETC___05F_d1725));
}

VL_INLINE_OPT void Vtop::_combo__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__5\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkMacUnitTop__DOT__reg_s1_or_s2_EN = vlTOPp->EN_load_s1_or_s2;
    vlTOPp->mkMacUnitTop__DOT__reg_s1_or_s2_D_IN = vlTOPp->load_s1_or_s2_sel;
    vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_C_D_IN 
        = vlTOPp->load_C_c;
    vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C_D_IN = vlTOPp->load_C_c;
    vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B_D_IN 
        = vlTOPp->load_B_b;
    vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_D_IN 
        = vlTOPp->load_A_a;
    vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_B_D_IN = 
        (0xffU & (IData)(vlTOPp->load_B_b));
    vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_A_D_IN = 
        (0xffU & (IData)(vlTOPp->load_A_a));
    vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_EN = 
        ((IData)(vlTOPp->EN_load_A) & (IData)(vlTOPp->mkMacUnitTop__DOT__reg_s1_or_s2));
    vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B_EN = 
        ((IData)(vlTOPp->EN_load_B) & (IData)(vlTOPp->mkMacUnitTop__DOT__reg_s1_or_s2));
    vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_C_EN = 
        ((IData)(vlTOPp->EN_load_C) & (IData)(vlTOPp->mkMacUnitTop__DOT__reg_s1_or_s2));
    vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_A_EN = ((IData)(vlTOPp->EN_load_A) 
                                                   & (~ (IData)(vlTOPp->mkMacUnitTop__DOT__reg_s1_or_s2)));
    vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_B_EN = ((IData)(vlTOPp->EN_load_B) 
                                                   & (~ (IData)(vlTOPp->mkMacUnitTop__DOT__reg_s1_or_s2)));
    vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C_EN = ((IData)(vlTOPp->EN_load_C) 
                                                   & (~ (IData)(vlTOPp->mkMacUnitTop__DOT__reg_s1_or_s2)));
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
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
    if (VL_UNLIKELY((EN_load_A & 0xfeU))) {
        Verilated::overWidthError("EN_load_A");}
    if (VL_UNLIKELY((EN_load_B & 0xfeU))) {
        Verilated::overWidthError("EN_load_B");}
    if (VL_UNLIKELY((EN_load_C & 0xfeU))) {
        Verilated::overWidthError("EN_load_C");}
    if (VL_UNLIKELY((load_s1_or_s2_sel & 0xfeU))) {
        Verilated::overWidthError("load_s1_or_s2_sel");}
    if (VL_UNLIKELY((EN_load_s1_or_s2 & 0xfeU))) {
        Verilated::overWidthError("EN_load_s1_or_s2");}
    if (VL_UNLIKELY((EN_get_MAC & 0xfeU))) {
        Verilated::overWidthError("EN_get_MAC");}
}
#endif  // VL_DEBUG
