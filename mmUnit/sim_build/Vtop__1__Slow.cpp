// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop::_settle__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkMmUnit__DOT__x___05Fh2391586 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808) 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2391677 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2391315 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2391406 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2391044 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2391135 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2390773 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2390864 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2390502 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2390593 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2390230 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2390321 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq451 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808) 
                   >> 2U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A)))
            ? 8U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2389962 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq487 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2611733 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2611824 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2611462 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2611553 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2611191 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2611282 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2610920 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2611011 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2610649 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2610740 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2610377 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2610468 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq486 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                   >> 2U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A)))
            ? 8U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2610109 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq522 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2831903 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2831994 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2831632 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2831723 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2831361 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2831452 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2831090 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2831181 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2830819 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2830910 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2830547 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2830638 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq521 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                   >> 2U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A)))
            ? 8U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2830279 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq557 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3052050 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3052141 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3051779 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3051870 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3051508 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3051599 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3051237 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3051328 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3050966 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3051057 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3050694 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3050785 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq556 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                   >> 2U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A)))
            ? 8U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3050426 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq592 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3272197 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3272288 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3271926 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3272017 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3271655 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3271746 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3271384 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3271475 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3271113 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3271204 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3270841 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3270932 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq591 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                   >> 2U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A)))
            ? 8U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3270573 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq627 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3492344 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3492435 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3492073 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3492164 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3491802 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3491893 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3491531 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3491622 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3491260 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3491351 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3490988 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3491079 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq626 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                   >> 2U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A)))
            ? 8U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3490720 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_ETC___05Fq102 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh190057 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                    >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh190148 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                    >> 8U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh189786 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                    >> 8U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh189877 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                    >> 7U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh189515 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                    >> 7U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh189606 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                    >> 6U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh189244 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh189335 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                    >> 5U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh188973 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                    >> 5U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh189064 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                    >> 4U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh188701 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                    >> 4U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh188792 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                    >> 3U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_ETC___05Fq101 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                   >> 2U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A)))
            ? 8U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh188433 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                    >> 3U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh32935 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh32664) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 0x18U));
    vlTOPp->mkMmUnit__DOT__y___05Fh253090 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh252819) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 0x18U));
    vlTOPp->mkMmUnit__DOT__y___05Fh473240 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh472969) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 0x18U));
    vlTOPp->mkMmUnit__DOT__y___05Fh693390 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh693119) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 0x18U));
    vlTOPp->mkMmUnit__DOT__y___05Fh913560 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh913289) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 0x18U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1133707 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1133436) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 0x18U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1353854 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1353583) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 0x18U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1574001 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1573730) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 0x18U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1794171 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1793900) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 0x18U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2014318 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2014047) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 0x18U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2234465 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2234194) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 0x18U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2454612 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2454341) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 0x18U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2674782 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2674511) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 0x18U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2894929 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2894658) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 0x18U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3115076 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3114805) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 0x18U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3335223 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3334952) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 0x18U));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4395 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh408587) 
                   << 3U) ^ (0xfffffff8U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_ETC___05Fq135))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                        << 2U))) | ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326)) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_ETC___05Fq136)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh408947 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_ETC___05Fq135 
                                              >> 3U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh408587));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6893 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh628737) 
                   << 3U) ^ (0xfffffff8U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_ETC___05Fq171))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                        << 2U))) | ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824)) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_ETC___05Fq172)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh629097 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_ETC___05Fq171 
                                              >> 3U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh628737));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9391 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh848887) 
                   << 3U) ^ (0xfffffff8U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_ETC___05Fq206))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                        << 2U))) | ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322)) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_ETC___05Fq207)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh849247 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_ETC___05Fq206 
                                              >> 3U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh848887));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11889 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1069057) 
                   << 3U) ^ (0xfffffff8U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq241))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                        << 2U))) | ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820)) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq242)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1069417 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq241 
                                               >> 3U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1069057));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14387 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1289204) 
                   << 3U) ^ (0xfffffff8U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq276))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                        << 2U))) | ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318)) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq277)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1289564 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq276 
                                               >> 3U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1289204));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16885 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1509351) 
                   << 3U) ^ (0xfffffff8U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq311))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                        << 2U))) | ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816)) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq312)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1509711 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq311 
                                               >> 3U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1509351));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19383 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1729498) 
                   << 3U) ^ (0xfffffff8U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq346))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                        << 2U))) | ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314)) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq347)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1729858 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq346 
                                               >> 3U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1729498));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21881 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1949668) 
                   << 3U) ^ (0xfffffff8U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq381))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                        << 2U))) | ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812)) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq382)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1950028 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq381 
                                               >> 3U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1949668));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24379 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2169815) 
                   << 3U) ^ (0xfffffff8U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq416))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                        << 2U))) | ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310)) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq417)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2170175 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq416 
                                               >> 3U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2169815));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26877 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2389962) 
                   << 3U) ^ (0xfffffff8U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq451))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                        << 2U))) | ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808)) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq452)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2390322 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq451 
                                               >> 3U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2389962));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29375 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2610109) 
                   << 3U) ^ (0xfffffff8U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq486))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                        << 2U))) | ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306)) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq487)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2610469 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq486 
                                               >> 3U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2610109));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31873 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2830279) 
                   << 3U) ^ (0xfffffff8U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq521))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                        << 2U))) | ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804)) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq522)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2830639 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq521 
                                               >> 3U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2830279));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34371 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3050426) 
                   << 3U) ^ (0xfffffff8U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq556))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                        << 2U))) | ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302)) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq557)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3050786 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq556 
                                               >> 3U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3050426));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36869 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3270573) 
                   << 3U) ^ (0xfffffff8U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq591))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                        << 2U))) | ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800)) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq592)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3270933 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq591 
                                               >> 3U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3270573));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39367 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3490720) 
                   << 3U) ^ (0xfffffff8U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq626))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                        << 2U))) | ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298)) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq627)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3491080 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq626 
                                               >> 3U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3490720));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1897 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh188433) 
                   << 3U) ^ (0xfffffff8U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_ETC___05Fq101))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                        << 2U))) | ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828)) 
                                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_ETC___05Fq102)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh188793 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_ETC___05Fq101 
                                              >> 3U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh188433));
    vlTOPp->mkMmUnit__DOT__y___05Fh33206 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh32935) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 0x19U));
    vlTOPp->mkMmUnit__DOT__y___05Fh253361 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh253090) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 0x19U));
    vlTOPp->mkMmUnit__DOT__y___05Fh473511 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh473240) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 0x19U));
    vlTOPp->mkMmUnit__DOT__y___05Fh693661 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh693390) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 0x19U));
    vlTOPp->mkMmUnit__DOT__y___05Fh913831 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh913560) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 0x19U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1133978 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1133707) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 0x19U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1354125 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1353854) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 0x19U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1574272 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1574001) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 0x19U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1794442 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1794171) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 0x19U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2014589 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2014318) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 0x19U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2234736 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2234465) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 0x19U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2454883 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2454612) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 0x19U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2675053 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2674782) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 0x19U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2895200 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2894929) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 0x19U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3115347 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3115076) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 0x19U));
    vlTOPp->mkMmUnit__DOT__y___05Fh3335494 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3335223) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 0x19U));
    vlTOPp->mkMmUnit__DOT__y___05Fh408856 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh408946) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh408947));
    vlTOPp->mkMmUnit__DOT__y___05Fh629006 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh629096) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh629097));
    vlTOPp->mkMmUnit__DOT__y___05Fh849156 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh849246) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh849247));
    vlTOPp->mkMmUnit__DOT__y___05Fh1069326 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1069416) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1069417));
    vlTOPp->mkMmUnit__DOT__y___05Fh1289473 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1289563) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1289564));
    vlTOPp->mkMmUnit__DOT__y___05Fh1509620 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1509710) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1509711));
    vlTOPp->mkMmUnit__DOT__y___05Fh1729767 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1729857) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1729858));
    vlTOPp->mkMmUnit__DOT__y___05Fh1949937 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1950027) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1950028));
    vlTOPp->mkMmUnit__DOT__y___05Fh2170084 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2170174) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2170175));
    vlTOPp->mkMmUnit__DOT__y___05Fh2390231 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2390321) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2390322));
    vlTOPp->mkMmUnit__DOT__y___05Fh2610378 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2610468) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2610469));
    vlTOPp->mkMmUnit__DOT__y___05Fh2830548 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2830638) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2830639));
    vlTOPp->mkMmUnit__DOT__y___05Fh3050695 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3050785) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3050786));
    vlTOPp->mkMmUnit__DOT__y___05Fh3270842 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3270932) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3270933));
    vlTOPp->mkMmUnit__DOT__y___05Fh3490989 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3491079) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3491080));
    vlTOPp->mkMmUnit__DOT__y___05Fh188702 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh188792) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh188793));
    vlTOPp->mkMmUnit__DOT__y___05Fh33477 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh33206) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 0x1aU));
    vlTOPp->mkMmUnit__DOT__y___05Fh253632 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh253361) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 0x1aU));
    vlTOPp->mkMmUnit__DOT__y___05Fh473782 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh473511) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 0x1aU));
    vlTOPp->mkMmUnit__DOT__y___05Fh693932 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh693661) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 0x1aU));
    vlTOPp->mkMmUnit__DOT__y___05Fh914102 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh913831) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 0x1aU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1134249 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1133978) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 0x1aU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1354396 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1354125) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 0x1aU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1574543 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1574272) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 0x1aU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1794713 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1794442) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 0x1aU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2014860 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2014589) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 0x1aU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2235007 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2234736) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 0x1aU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2455154 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2454883) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 0x1aU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2675324 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2675053) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 0x1aU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2895471 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2895200) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 0x1aU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3115618 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3115347) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 0x1aU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3335765 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3335494) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 0x1aU));
    vlTOPp->mkMmUnit__DOT__y___05Fh409219 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh408856) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh408855));
    vlTOPp->mkMmUnit__DOT__y___05Fh629369 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh629006) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh629005));
    vlTOPp->mkMmUnit__DOT__y___05Fh849519 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh849156) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh849155));
    vlTOPp->mkMmUnit__DOT__y___05Fh1069689 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1069326) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1069325));
    vlTOPp->mkMmUnit__DOT__y___05Fh1289836 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1289473) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1289472));
    vlTOPp->mkMmUnit__DOT__y___05Fh1509983 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1509620) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1509619));
    vlTOPp->mkMmUnit__DOT__y___05Fh1730130 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1729767) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1729766));
    vlTOPp->mkMmUnit__DOT__y___05Fh1950300 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1949937) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1949936));
    vlTOPp->mkMmUnit__DOT__y___05Fh2170447 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2170084) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2170083));
    vlTOPp->mkMmUnit__DOT__y___05Fh2390594 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2390231) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2390230));
    vlTOPp->mkMmUnit__DOT__y___05Fh2610741 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2610378) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2610377));
    vlTOPp->mkMmUnit__DOT__y___05Fh2830911 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2830548) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2830547));
    vlTOPp->mkMmUnit__DOT__y___05Fh3051058 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3050695) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3050694));
    vlTOPp->mkMmUnit__DOT__y___05Fh3271205 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3270842) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3270841));
    vlTOPp->mkMmUnit__DOT__y___05Fh3491352 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3490989) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3490988));
    vlTOPp->mkMmUnit__DOT__y___05Fh189065 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh188702) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh188701));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_0_macunit_int_Mac_reg_A___05F7_8_BI_ETC___05F_d160 
        = ((0x8000000U & ((0xf8000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh33477) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh33206) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh32935) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                                                      ^ 
                                                      ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh32664) 
                                                       << 0x18U))) 
                                                  | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_0_macunit_int_Mac_reg_A___05F7_8_BI_ETC___05F_d158))));
    vlTOPp->mkMmUnit__DOT__y___05Fh33748 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh33477) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 0x1bU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_1_macunit_int_Mac_reg_A_499_545_ETC___05F_d2658 
        = ((0x8000000U & ((0xf8000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh253632) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh253361) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh253090) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                                                      ^ 
                                                      ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh252819) 
                                                       << 0x18U))) 
                                                  | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_1_macunit_int_Mac_reg_A_499_545_ETC___05F_d2656))));
    vlTOPp->mkMmUnit__DOT__y___05Fh253903 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh253632) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 0x1bU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_2_macunit_int_Mac_reg_A_997_043_ETC___05F_d5156 
        = ((0x8000000U & ((0xf8000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh473782) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh473511) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh473240) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                                                      ^ 
                                                      ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh472969) 
                                                       << 0x18U))) 
                                                  | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_2_macunit_int_Mac_reg_A_997_043_ETC___05F_d5154))));
    vlTOPp->mkMmUnit__DOT__y___05Fh474053 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh473782) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 0x1bU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_3_macunit_int_Mac_reg_A_495_541_ETC___05F_d7654 
        = ((0x8000000U & ((0xf8000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh693932) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh693661) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh693390) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                                                      ^ 
                                                      ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh693119) 
                                                       << 0x18U))) 
                                                  | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_3_macunit_int_Mac_reg_A_495_541_ETC___05F_d7652))));
    vlTOPp->mkMmUnit__DOT__y___05Fh694203 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh693932) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 0x1bU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_0_macunit_int_Mac_reg_A_993_003_ETC___05F_d10152 
        = ((0x8000000U & ((0xf8000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh914102) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh913831) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh913560) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                                                      ^ 
                                                      ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh913289) 
                                                       << 0x18U))) 
                                                  | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_0_macunit_int_Mac_reg_A_993_003_ETC___05F_d10150))));
    vlTOPp->mkMmUnit__DOT__y___05Fh914373 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh914102) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 0x1bU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_1_macunit_int_Mac_reg_A_2491_25_ETC___05F_d12650 
        = ((0x8000000U & ((0xf8000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1134249) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1133978) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1133707) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                                                      ^ 
                                                      ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1133436) 
                                                       << 0x18U))) 
                                                  | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_1_macunit_int_Mac_reg_A_2491_25_ETC___05F_d12648))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1134520 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1134249) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 0x1bU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_2_macunit_int_Mac_reg_A_4989_50_ETC___05F_d15148 
        = ((0x8000000U & ((0xf8000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1354396) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1354125) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1353854) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                                                      ^ 
                                                      ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1353583) 
                                                       << 0x18U))) 
                                                  | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_2_macunit_int_Mac_reg_A_4989_50_ETC___05F_d15146))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1354667 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1354396) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 0x1bU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_3_macunit_int_Mac_reg_A_7487_75_ETC___05F_d17646 
        = ((0x8000000U & ((0xf8000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1574543) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1574272) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1574001) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                                                      ^ 
                                                      ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1573730) 
                                                       << 0x18U))) 
                                                  | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_3_macunit_int_Mac_reg_A_7487_75_ETC___05F_d17644))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1574814 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1574543) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 0x1bU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_0_macunit_int_Mac_reg_A_9985_00_ETC___05F_d20144 
        = ((0x8000000U & ((0xf8000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1794713) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1794442) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1794171) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                                                      ^ 
                                                      ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1793900) 
                                                       << 0x18U))) 
                                                  | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_0_macunit_int_Mac_reg_A_9985_00_ETC___05F_d20142))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1794984 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1794713) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 0x1bU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_1_macunit_int_Mac_reg_A_2483_25_ETC___05F_d22642 
        = ((0x8000000U & ((0xf8000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2014860) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2014589) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2014318) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                                                      ^ 
                                                      ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2014047) 
                                                       << 0x18U))) 
                                                  | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_1_macunit_int_Mac_reg_A_2483_25_ETC___05F_d22640))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2015131 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2014860) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 0x1bU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_2_macunit_int_Mac_reg_A_4981_50_ETC___05F_d25140 
        = ((0x8000000U & ((0xf8000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2235007) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2234736) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2234465) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                                                      ^ 
                                                      ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2234194) 
                                                       << 0x18U))) 
                                                  | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_2_macunit_int_Mac_reg_A_4981_50_ETC___05F_d25138))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2235278 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2235007) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 0x1bU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_3_macunit_int_Mac_reg_A_7479_75_ETC___05F_d27638 
        = ((0x8000000U & ((0xf8000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2455154) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2454883) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2454612) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                                                      ^ 
                                                      ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2454341) 
                                                       << 0x18U))) 
                                                  | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_3_macunit_int_Mac_reg_A_7479_75_ETC___05F_d27636))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2455425 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2455154) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 0x1bU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_0_macunit_int_Mac_reg_A_9977_00_ETC___05F_d30136 
        = ((0x8000000U & ((0xf8000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2675324) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2675053) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2674782) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                                                      ^ 
                                                      ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2674511) 
                                                       << 0x18U))) 
                                                  | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_0_macunit_int_Mac_reg_A_9977_00_ETC___05F_d30134))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2675595 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2675324) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 0x1bU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_1_macunit_int_Mac_reg_A_2475_25_ETC___05F_d32634 
        = ((0x8000000U & ((0xf8000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2895471) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2895200) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2894929) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                                                      ^ 
                                                      ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2894658) 
                                                       << 0x18U))) 
                                                  | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_1_macunit_int_Mac_reg_A_2475_25_ETC___05F_d32632))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2895742 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2895471) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 0x1bU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_2_macunit_int_Mac_reg_A_4973_50_ETC___05F_d35132 
        = ((0x8000000U & ((0xf8000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3115618) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3115347) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3115076) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                                                      ^ 
                                                      ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3114805) 
                                                       << 0x18U))) 
                                                  | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_2_macunit_int_Mac_reg_A_4973_50_ETC___05F_d35130))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3115889 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3115618) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 0x1bU));
    vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_3_macunit_int_Mac_reg_A_7471_75_ETC___05F_d37630 
        = ((0x8000000U & ((0xf8000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3335765) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3335494) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3335223) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                                                      ^ 
                                                      ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3334952) 
                                                       << 0x18U))) 
                                                  | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_3_macunit_int_Mac_reg_A_7471_75_ETC___05F_d37628))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3336036 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3335765) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 0x1bU));
    vlTOPp->mkMmUnit__DOT__y___05Fh409128 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh409218) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh409219));
    vlTOPp->mkMmUnit__DOT__y___05Fh629278 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh629368) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh629369));
    vlTOPp->mkMmUnit__DOT__y___05Fh849428 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh849518) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh849519));
    vlTOPp->mkMmUnit__DOT__y___05Fh1069598 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1069688) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1069689));
    vlTOPp->mkMmUnit__DOT__y___05Fh1289745 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1289835) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1289836));
    vlTOPp->mkMmUnit__DOT__y___05Fh1509892 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1509982) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1509983));
    vlTOPp->mkMmUnit__DOT__y___05Fh1730039 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1730129) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1730130));
    vlTOPp->mkMmUnit__DOT__y___05Fh1950209 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1950299) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1950300));
    vlTOPp->mkMmUnit__DOT__y___05Fh2170356 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2170446) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2170447));
    vlTOPp->mkMmUnit__DOT__y___05Fh2390503 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2390593) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2390594));
    vlTOPp->mkMmUnit__DOT__y___05Fh2610650 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2610740) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2610741));
    vlTOPp->mkMmUnit__DOT__y___05Fh2830820 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2830910) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2830911));
    vlTOPp->mkMmUnit__DOT__y___05Fh3050967 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3051057) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3051058));
    vlTOPp->mkMmUnit__DOT__y___05Fh3271114 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3271204) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3271205));
    vlTOPp->mkMmUnit__DOT__y___05Fh3491261 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3491351) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3491352));
    vlTOPp->mkMmUnit__DOT__y___05Fh188974 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh189064) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh189065));
    vlTOPp->mkMmUnit__DOT__y___05Fh34019 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh33748) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 0x1cU));
    vlTOPp->mkMmUnit__DOT__y___05Fh254174 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh253903) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 0x1cU));
    vlTOPp->mkMmUnit__DOT__y___05Fh474324 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh474053) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 0x1cU));
    vlTOPp->mkMmUnit__DOT__y___05Fh694474 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh694203) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 0x1cU));
    vlTOPp->mkMmUnit__DOT__y___05Fh914644 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh914373) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 0x1cU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1134791 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1134520) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 0x1cU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1354938 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1354667) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 0x1cU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1575085 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1574814) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 0x1cU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1795255 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1794984) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 0x1cU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2015402 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2015131) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 0x1cU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2235549 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2235278) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 0x1cU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2455696 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2455425) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 0x1cU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2675866 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2675595) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 0x1cU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2896013 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2895742) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 0x1cU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3116160 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3115889) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 0x1cU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3336307 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3336036) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 0x1cU));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4396 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh409127) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh409128)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh408855) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh408856)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4395)));
    vlTOPp->mkMmUnit__DOT__y___05Fh409490 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh409128) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh409127));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6894 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh629277) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh629278)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh629005) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh629006)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6893)));
    vlTOPp->mkMmUnit__DOT__y___05Fh629640 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh629278) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh629277));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9392 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh849427) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh849428)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh849155) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh849156)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9391)));
    vlTOPp->mkMmUnit__DOT__y___05Fh849790 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh849428) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh849427));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11890 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1069597) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1069598)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1069325) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1069326)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11889)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1069960 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1069598) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1069597));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14388 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1289744) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1289745)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1289472) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1289473)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14387)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1290107 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1289745) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1289744));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16886 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1509891) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1509892)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1509619) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1509620)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16885)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1510254 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1509892) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1509891));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19384 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1730038) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1730039)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1729766) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1729767)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19383)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1730401 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1730039) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1730038));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21882 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1950208) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1950209)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1949936) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1949937)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21881)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1950571 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1950209) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1950208));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24380 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2170355) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2170356)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2170083) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2170084)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24379)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2170718 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2170356) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2170355));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26878 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2390502) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2390503)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2390230) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2390231)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26877)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2390865 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2390503) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2390502));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29376 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2610649) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2610650)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2610377) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2610378)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29375)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2611012 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2610650) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2610649));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31874 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2830819) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2830820)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2830547) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2830548)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31873)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2831182 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2830820) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2830819));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34372 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3050966) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3050967)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3050694) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3050695)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34371)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3051329 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3050967) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3050966));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36870 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3271113) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3271114)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3270841) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3270842)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36869)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3271476 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3271114) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3271113));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39368 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3491260) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3491261)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3490988) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3490989)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39367)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3491623 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3491261) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3491260));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1898 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh188973) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh188974)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh188701) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh188702)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1897)));
    vlTOPp->mkMmUnit__DOT__y___05Fh189336 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh188974) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh188973));
    vlTOPp->mkMmUnit__DOT__y___05Fh34290 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh34019) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 0x1dU));
    vlTOPp->mkMmUnit__DOT__y___05Fh254445 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh254174) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 0x1dU));
    vlTOPp->mkMmUnit__DOT__y___05Fh474595 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh474324) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 0x1dU));
    vlTOPp->mkMmUnit__DOT__y___05Fh694745 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh694474) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 0x1dU));
    vlTOPp->mkMmUnit__DOT__y___05Fh914915 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh914644) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 0x1dU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1135062 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1134791) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 0x1dU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1355209 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1354938) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 0x1dU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1575356 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1575085) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 0x1dU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1795526 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1795255) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 0x1dU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2015673 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2015402) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 0x1dU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2235820 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2235549) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 0x1dU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2455967 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2455696) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 0x1dU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2676137 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2675866) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 0x1dU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2896284 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2896013) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 0x1dU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3116431 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3116160) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 0x1dU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3336578 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3336307) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 0x1dU));
    vlTOPp->mkMmUnit__DOT__y___05Fh409399 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh409489) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh409490));
    vlTOPp->mkMmUnit__DOT__y___05Fh629549 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh629639) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh629640));
    vlTOPp->mkMmUnit__DOT__y___05Fh849699 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh849789) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh849790));
    vlTOPp->mkMmUnit__DOT__y___05Fh1069869 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1069959) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1069960));
    vlTOPp->mkMmUnit__DOT__y___05Fh1290016 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1290106) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1290107));
    vlTOPp->mkMmUnit__DOT__y___05Fh1510163 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1510253) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1510254));
    vlTOPp->mkMmUnit__DOT__y___05Fh1730310 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1730400) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1730401));
    vlTOPp->mkMmUnit__DOT__y___05Fh1950480 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1950570) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1950571));
    vlTOPp->mkMmUnit__DOT__y___05Fh2170627 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2170717) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2170718));
    vlTOPp->mkMmUnit__DOT__y___05Fh2390774 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2390864) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2390865));
    vlTOPp->mkMmUnit__DOT__y___05Fh2610921 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2611011) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2611012));
    vlTOPp->mkMmUnit__DOT__y___05Fh2831091 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2831181) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2831182));
    vlTOPp->mkMmUnit__DOT__y___05Fh3051238 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3051328) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3051329));
    vlTOPp->mkMmUnit__DOT__y___05Fh3271385 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3271475) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3271476));
    vlTOPp->mkMmUnit__DOT__y___05Fh3491532 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3491622) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3491623));
    vlTOPp->mkMmUnit__DOT__y___05Fh189245 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh189335) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh189336));
    vlTOPp->mkMmUnit__DOT__y___05Fh34561 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh34290) 
                                            & (vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19 
                                               >> 0x1eU));
    vlTOPp->mkMmUnit__DOT__y___05Fh254716 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh254445) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23 
                                                >> 0x1eU));
    vlTOPp->mkMmUnit__DOT__y___05Fh474866 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh474595) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27 
                                                >> 0x1eU));
    vlTOPp->mkMmUnit__DOT__y___05Fh695016 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh694745) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31 
                                                >> 0x1eU));
    vlTOPp->mkMmUnit__DOT__y___05Fh915186 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh914915) 
                                             & (vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35 
                                                >> 0x1eU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1135333 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1135062) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39 
                                                 >> 0x1eU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1355480 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1355209) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43 
                                                 >> 0x1eU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1575627 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1575356) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47 
                                                 >> 0x1eU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1795797 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1795526) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51 
                                                 >> 0x1eU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2015944 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2015673) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55 
                                                 >> 0x1eU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2236091 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2235820) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59 
                                                 >> 0x1eU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2456238 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2455967) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63 
                                                 >> 0x1eU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2676408 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2676137) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67 
                                                 >> 0x1eU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2896555 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2896284) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71 
                                                 >> 0x1eU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3116702 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3116431) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75 
                                                 >> 0x1eU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3336849 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3336578) 
                                              & (vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79 
                                                 >> 0x1eU));
    vlTOPp->mkMmUnit__DOT__y___05Fh409761 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh409399) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh409398));
    vlTOPp->mkMmUnit__DOT__y___05Fh629911 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh629549) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh629548));
    vlTOPp->mkMmUnit__DOT__y___05Fh850061 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh849699) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh849698));
    vlTOPp->mkMmUnit__DOT__y___05Fh1070231 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1069869) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1069868));
    vlTOPp->mkMmUnit__DOT__y___05Fh1290378 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1290016) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1290015));
    vlTOPp->mkMmUnit__DOT__y___05Fh1510525 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1510163) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1510162));
    vlTOPp->mkMmUnit__DOT__y___05Fh1730672 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1730310) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1730309));
    vlTOPp->mkMmUnit__DOT__y___05Fh1950842 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1950480) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1950479));
    vlTOPp->mkMmUnit__DOT__y___05Fh2170989 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2170627) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2170626));
    vlTOPp->mkMmUnit__DOT__y___05Fh2391136 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2390774) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2390773));
    vlTOPp->mkMmUnit__DOT__y___05Fh2611283 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2610921) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2610920));
    vlTOPp->mkMmUnit__DOT__y___05Fh2831453 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2831091) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2831090));
    vlTOPp->mkMmUnit__DOT__y___05Fh3051600 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3051238) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3051237));
    vlTOPp->mkMmUnit__DOT__y___05Fh3271747 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3271385) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3271384));
    vlTOPp->mkMmUnit__DOT__y___05Fh3491894 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3491532) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3491531));
    vlTOPp->mkMmUnit__DOT__y___05Fh189607 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh189245) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh189244));
    vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh25559 
        = ((0x80000000U & ((0x80000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh34561) 
                              << 0x1fU))) | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh34290) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh34019) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlTOPp->mkMmUnit__DOT__INV_temp_a321___05Fq19) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh33748) 
                                                        << 0x1cU))) 
                                                   | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_0_macunit_int_Mac_reg_A___05F7_8_BI_ETC___05F_d160))));
    vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh245714 
        = ((0x80000000U & ((0x80000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh254716) 
                              << 0x1fU))) | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh254445) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh254174) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlTOPp->mkMmUnit__DOT__INV_temp_a21479___05Fq23) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh253903) 
                                                        << 0x1cU))) 
                                                   | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_1_macunit_int_Mac_reg_A_499_545_ETC___05F_d2658))));
    vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh465864 
        = ((0x80000000U & ((0x80000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh474866) 
                              << 0x1fU))) | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh474595) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh474324) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlTOPp->mkMmUnit__DOT__INV_temp_a41629___05Fq27) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh474053) 
                                                        << 0x1cU))) 
                                                   | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_2_macunit_int_Mac_reg_A_997_043_ETC___05F_d5156))));
    vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh686014 
        = ((0x80000000U & ((0x80000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh695016) 
                              << 0x1fU))) | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh694745) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh694474) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlTOPp->mkMmUnit__DOT__INV_temp_a61779___05Fq31) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh694203) 
                                                        << 0x1cU))) 
                                                   | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_0_3_macunit_int_Mac_reg_A_495_541_ETC___05F_d7654))));
    vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh906184 
        = ((0x80000000U & ((0x80000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh915186) 
                              << 0x1fU))) | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh914915) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh914644) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlTOPp->mkMmUnit__DOT__INV_temp_a81949___05Fq35) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh914373) 
                                                        << 0x1cU))) 
                                                   | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_0_macunit_int_Mac_reg_A_993_003_ETC___05F_d10152))));
    vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh1126331 
        = ((0x80000000U & ((0x80000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1135333) 
                              << 0x1fU))) | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1135062) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1134791) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlTOPp->mkMmUnit__DOT__INV_temp_a102096___05Fq39) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1134520) 
                                                        << 0x1cU))) 
                                                   | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_1_macunit_int_Mac_reg_A_2491_25_ETC___05F_d12650))));
    vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh1346478 
        = ((0x80000000U & ((0x80000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1355480) 
                              << 0x1fU))) | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1355209) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1354938) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlTOPp->mkMmUnit__DOT__INV_temp_a322243___05Fq43) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1354667) 
                                                        << 0x1cU))) 
                                                   | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_2_macunit_int_Mac_reg_A_4989_50_ETC___05F_d15148))));
    vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh1566625 
        = ((0x80000000U & ((0x80000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1575627) 
                              << 0x1fU))) | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1575356) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1575085) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlTOPp->mkMmUnit__DOT__INV_temp_a542390___05Fq47) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1574814) 
                                                        << 0x1cU))) 
                                                   | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_1_3_macunit_int_Mac_reg_A_7487_75_ETC___05F_d17646))));
    vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh1786795 
        = ((0x80000000U & ((0x80000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1795797) 
                              << 0x1fU))) | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1795526) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1795255) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlTOPp->mkMmUnit__DOT__INV_temp_a762560___05Fq51) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1794984) 
                                                        << 0x1cU))) 
                                                   | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_0_macunit_int_Mac_reg_A_9985_00_ETC___05F_d20144))));
    vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh2006942 
        = ((0x80000000U & ((0x80000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2015944) 
                              << 0x1fU))) | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2015673) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2015402) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlTOPp->mkMmUnit__DOT__INV_temp_a982707___05Fq55) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2015131) 
                                                        << 0x1cU))) 
                                                   | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_1_macunit_int_Mac_reg_A_2483_25_ETC___05F_d22642))));
    vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh2227089 
        = ((0x80000000U & ((0x80000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2236091) 
                              << 0x1fU))) | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2235820) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2235549) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlTOPp->mkMmUnit__DOT__INV_temp_a202854___05Fq59) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2235278) 
                                                        << 0x1cU))) 
                                                   | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_2_macunit_int_Mac_reg_A_4981_50_ETC___05F_d25140))));
    vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh2447236 
        = ((0x80000000U & ((0x80000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2456238) 
                              << 0x1fU))) | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2455967) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2455696) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlTOPp->mkMmUnit__DOT__INV_temp_a423001___05Fq63) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2455425) 
                                                        << 0x1cU))) 
                                                   | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_2_3_macunit_int_Mac_reg_A_7479_75_ETC___05F_d27638))));
    vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh2667406 
        = ((0x80000000U & ((0x80000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2676408) 
                              << 0x1fU))) | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2676137) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2675866) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlTOPp->mkMmUnit__DOT__INV_temp_a643171___05Fq67) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2675595) 
                                                        << 0x1cU))) 
                                                   | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_0_macunit_int_Mac_reg_A_9977_00_ETC___05F_d30136))));
    vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh2887553 
        = ((0x80000000U & ((0x80000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2896555) 
                              << 0x1fU))) | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2896284) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2896013) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlTOPp->mkMmUnit__DOT__INV_temp_a863318___05Fq71) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2895742) 
                                                        << 0x1cU))) 
                                                   | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_1_macunit_int_Mac_reg_A_2475_25_ETC___05F_d32634))));
    vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh3107700 
        = ((0x80000000U & ((0x80000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3116702) 
                              << 0x1fU))) | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3116431) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3116160) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlTOPp->mkMmUnit__DOT__INV_temp_a083465___05Fq75) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3115889) 
                                                        << 0x1cU))) 
                                                   | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_2_macunit_int_Mac_reg_A_4973_50_ETC___05F_d35132))));
    vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh3327847 
        = ((0x80000000U & ((0x80000000U & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3336849) 
                              << 0x1fU))) | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3336578) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3336307) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlTOPp->mkMmUnit__DOT__INV_temp_a303612___05Fq79) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3336036) 
                                                        << 0x1cU))) 
                                                   | vlTOPp->mkMmUnit__DOT__INV_SEXT_pes_3_3_macunit_int_Mac_reg_A_7471_75_ETC___05F_d37630))));
    vlTOPp->mkMmUnit__DOT__y___05Fh409670 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh409760) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh409761));
    vlTOPp->mkMmUnit__DOT__y___05Fh629820 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh629910) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh629911));
    vlTOPp->mkMmUnit__DOT__y___05Fh849970 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh850060) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh850061));
    vlTOPp->mkMmUnit__DOT__y___05Fh1070140 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1070230) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1070231));
    vlTOPp->mkMmUnit__DOT__y___05Fh1290287 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1290377) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1290378));
    vlTOPp->mkMmUnit__DOT__y___05Fh1510434 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1510524) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1510525));
    vlTOPp->mkMmUnit__DOT__y___05Fh1730581 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1730671) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1730672));
    vlTOPp->mkMmUnit__DOT__y___05Fh1950751 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1950841) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1950842));
    vlTOPp->mkMmUnit__DOT__y___05Fh2170898 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2170988) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2170989));
    vlTOPp->mkMmUnit__DOT__y___05Fh2391045 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2391135) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2391136));
    vlTOPp->mkMmUnit__DOT__y___05Fh2611192 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2611282) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2611283));
    vlTOPp->mkMmUnit__DOT__y___05Fh2831362 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2831452) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2831453));
    vlTOPp->mkMmUnit__DOT__y___05Fh3051509 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3051599) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3051600));
    vlTOPp->mkMmUnit__DOT__y___05Fh3271656 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3271746) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3271747));
    vlTOPp->mkMmUnit__DOT__y___05Fh3491803 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3491893) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3491894));
    vlTOPp->mkMmUnit__DOT__y___05Fh189516 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh189606) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh189607));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_int_Mac_reg_A))
            ? vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh25559
            : vlTOPp->mkMmUnit__DOT__temp_a___05Fh1321);
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_int_Mac_reg_A))
            ? vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh245714
            : vlTOPp->mkMmUnit__DOT__temp_a___05Fh221479);
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_int_Mac_reg_A))
            ? vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh465864
            : vlTOPp->mkMmUnit__DOT__temp_a___05Fh441629);
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_int_Mac_reg_A))
            ? vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh686014
            : vlTOPp->mkMmUnit__DOT__temp_a___05Fh661779);
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_int_Mac_reg_A))
            ? vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh906184
            : vlTOPp->mkMmUnit__DOT__temp_a___05Fh881949);
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_int_Mac_reg_A))
            ? vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh1126331
            : vlTOPp->mkMmUnit__DOT__temp_a___05Fh1102096);
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_int_Mac_reg_A))
            ? vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh1346478
            : vlTOPp->mkMmUnit__DOT__temp_a___05Fh1322243);
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_int_Mac_reg_A))
            ? vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh1566625
            : vlTOPp->mkMmUnit__DOT__temp_a___05Fh1542390);
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_int_Mac_reg_A))
            ? vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh1786795
            : vlTOPp->mkMmUnit__DOT__temp_a___05Fh1762560);
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_int_Mac_reg_A))
            ? vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh2006942
            : vlTOPp->mkMmUnit__DOT__temp_a___05Fh1982707);
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_int_Mac_reg_A))
            ? vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh2227089
            : vlTOPp->mkMmUnit__DOT__temp_a___05Fh2202854);
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_int_Mac_reg_A))
            ? vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh2447236
            : vlTOPp->mkMmUnit__DOT__temp_a___05Fh2423001);
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_int_Mac_reg_A))
            ? vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh2667406
            : vlTOPp->mkMmUnit__DOT__temp_a___05Fh2643171);
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_int_Mac_reg_A))
            ? vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh2887553
            : vlTOPp->mkMmUnit__DOT__temp_a___05Fh2863318);
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_int_Mac_reg_A))
            ? vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh3107700
            : vlTOPp->mkMmUnit__DOT__temp_a___05Fh3083465);
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_int_Mac_reg_A))
            ? vlTOPp->mkMmUnit__DOT__temp_a___05F_1___05Fh3327847
            : vlTOPp->mkMmUnit__DOT__temp_a___05Fh3303612);
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4397 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh409669) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh409670)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh409398) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh409399)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4396)));
    vlTOPp->mkMmUnit__DOT__y___05Fh410032 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh409670) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh409669));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6895 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh629819) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh629820)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh629548) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh629549)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6894)));
    vlTOPp->mkMmUnit__DOT__y___05Fh630182 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh629820) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh629819));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9393 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh849969) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh849970)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh849698) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh849699)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9392)));
    vlTOPp->mkMmUnit__DOT__y___05Fh850332 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh849970) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh849969));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11891 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1070139) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1070140)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1069868) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1069869)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11890)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1070502 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1070140) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1070139));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14389 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1290286) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1290287)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1290015) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1290016)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14388)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1290649 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1290287) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1290286));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16887 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1510433) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1510434)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1510162) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1510163)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16886)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1510796 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1510434) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1510433));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19385 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1730580) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1730581)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1730309) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1730310)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19384)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1730943 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1730581) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1730580));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21883 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1950750) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1950751)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1950479) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1950480)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21882)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1951113 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1950751) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1950750));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24381 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2170897) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2170898)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2170626) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2170627)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24380)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2171260 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2170898) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2170897));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26879 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2391044) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2391045)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2390773) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2390774)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26878)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2391407 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2391045) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2391044));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29377 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2611191) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2611192)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2610920) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2610921)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29376)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2611554 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2611192) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2611191));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31875 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2831361) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2831362)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2831090) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2831091)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31874)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2831724 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2831362) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2831361));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34373 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3051508) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3051509)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3051237) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3051238)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34372)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3051871 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3051509) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3051508));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36871 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3271655) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3271656)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3271384) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3271385)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36870)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3272018 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3271656) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3271655));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39369 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3491802) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3491803)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3491531) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3491532)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39368)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3492165 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3491803) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3491802));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1899 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh189515) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh189516)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh189244) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh189245)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1898)));
    vlTOPp->mkMmUnit__DOT__y___05Fh189878 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh189516) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh189515));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_ETC___05Fq83 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7___05FETC___05Fq117 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7___05FETC___05Fq153 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7___05FETC___05Fq188 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7___05FETC___05Fq223 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_ETC___05Fq258 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_ETC___05Fq293 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_ETC___05Fq328 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_ETC___05Fq363 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_ETC___05Fq398 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_ETC___05Fq433 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_ETC___05Fq468 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_ETC___05Fq503 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_ETC___05Fq538 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_ETC___05Fq573 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_ETC___05Fq608 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__y___05Fh409941 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh410031) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh410032));
    vlTOPp->mkMmUnit__DOT__y___05Fh630091 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh630181) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh630182));
    vlTOPp->mkMmUnit__DOT__y___05Fh850241 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh850331) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh850332));
    vlTOPp->mkMmUnit__DOT__y___05Fh1070411 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1070501) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1070502));
    vlTOPp->mkMmUnit__DOT__y___05Fh1290558 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1290648) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1290649));
    vlTOPp->mkMmUnit__DOT__y___05Fh1510705 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1510795) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1510796));
    vlTOPp->mkMmUnit__DOT__y___05Fh1730852 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1730942) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1730943));
    vlTOPp->mkMmUnit__DOT__y___05Fh1951022 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1951112) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1951113));
    vlTOPp->mkMmUnit__DOT__y___05Fh2171169 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2171259) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2171260));
    vlTOPp->mkMmUnit__DOT__y___05Fh2391316 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2391406) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2391407));
    vlTOPp->mkMmUnit__DOT__y___05Fh2611463 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2611553) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2611554));
    vlTOPp->mkMmUnit__DOT__y___05Fh2831633 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2831723) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2831724));
    vlTOPp->mkMmUnit__DOT__y___05Fh3051780 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3051870) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3051871));
    vlTOPp->mkMmUnit__DOT__y___05Fh3271927 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3272017) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3272018));
    vlTOPp->mkMmUnit__DOT__y___05Fh3492074 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3492164) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3492165));
    vlTOPp->mkMmUnit__DOT__y___05Fh189787 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh189877) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh189878));
    vlTOPp->mkMmUnit__DOT__result___05Fh24750 = ((0xfffffffeU 
                                                  & vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163) 
                                                 | (1U 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_ETC___05Fq83));
    vlTOPp->mkMmUnit__DOT__result___05Fh244905 = ((0xfffffffeU 
                                                   & vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661) 
                                                  | (1U 
                                                     & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7___05FETC___05Fq117));
    vlTOPp->mkMmUnit__DOT__result___05Fh465055 = ((0xfffffffeU 
                                                   & vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159) 
                                                  | (1U 
                                                     & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7___05FETC___05Fq153));
    vlTOPp->mkMmUnit__DOT__result___05Fh685205 = ((0xfffffffeU 
                                                   & vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657) 
                                                  | (1U 
                                                     & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7___05FETC___05Fq188));
    vlTOPp->mkMmUnit__DOT__result___05Fh905375 = ((0xfffffffeU 
                                                   & vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155) 
                                                  | (1U 
                                                     & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7___05FETC___05Fq223));
    vlTOPp->mkMmUnit__DOT__result___05Fh1125522 = (
                                                   (0xfffffffeU 
                                                    & vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653) 
                                                   | (1U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_ETC___05Fq258));
    vlTOPp->mkMmUnit__DOT__result___05Fh1345669 = (
                                                   (0xfffffffeU 
                                                    & vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151) 
                                                   | (1U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_ETC___05Fq293));
    vlTOPp->mkMmUnit__DOT__result___05Fh1565816 = (
                                                   (0xfffffffeU 
                                                    & vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649) 
                                                   | (1U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_ETC___05Fq328));
    vlTOPp->mkMmUnit__DOT__result___05Fh1785986 = (
                                                   (0xfffffffeU 
                                                    & vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147) 
                                                   | (1U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_ETC___05Fq363));
    vlTOPp->mkMmUnit__DOT__result___05Fh2006133 = (
                                                   (0xfffffffeU 
                                                    & vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645) 
                                                   | (1U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_ETC___05Fq398));
    vlTOPp->mkMmUnit__DOT__result___05Fh2226280 = (
                                                   (0xfffffffeU 
                                                    & vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143) 
                                                   | (1U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_ETC___05Fq433));
    vlTOPp->mkMmUnit__DOT__result___05Fh2446427 = (
                                                   (0xfffffffeU 
                                                    & vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641) 
                                                   | (1U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_ETC___05Fq468));
    vlTOPp->mkMmUnit__DOT__result___05Fh2666597 = (
                                                   (0xfffffffeU 
                                                    & vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139) 
                                                   | (1U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_ETC___05Fq503));
    vlTOPp->mkMmUnit__DOT__result___05Fh2886744 = (
                                                   (0xfffffffeU 
                                                    & vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637) 
                                                   | (1U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_ETC___05Fq538));
    vlTOPp->mkMmUnit__DOT__result___05Fh3106891 = (
                                                   (0xfffffffeU 
                                                    & vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135) 
                                                   | (1U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_ETC___05Fq573));
    vlTOPp->mkMmUnit__DOT__result___05Fh3327038 = (
                                                   (0xfffffffeU 
                                                    & vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633) 
                                                   | (1U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_ETC___05Fq608));
    vlTOPp->mkMmUnit__DOT__y___05Fh410303 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh409941) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh409940));
    vlTOPp->mkMmUnit__DOT__y___05Fh630453 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh630091) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh630090));
    vlTOPp->mkMmUnit__DOT__y___05Fh850603 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh850241) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh850240));
    vlTOPp->mkMmUnit__DOT__y___05Fh1070773 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1070411) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1070410));
    vlTOPp->mkMmUnit__DOT__y___05Fh1290920 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1290558) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1290557));
    vlTOPp->mkMmUnit__DOT__y___05Fh1511067 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1510705) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1510704));
    vlTOPp->mkMmUnit__DOT__y___05Fh1731214 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1730852) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1730851));
    vlTOPp->mkMmUnit__DOT__y___05Fh1951384 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1951022) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1951021));
    vlTOPp->mkMmUnit__DOT__y___05Fh2171531 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2171169) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2171168));
    vlTOPp->mkMmUnit__DOT__y___05Fh2391678 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2391316) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2391315));
    vlTOPp->mkMmUnit__DOT__y___05Fh2611825 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2611463) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2611462));
    vlTOPp->mkMmUnit__DOT__y___05Fh2831995 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2831633) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2831632));
    vlTOPp->mkMmUnit__DOT__y___05Fh3052142 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3051780) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3051779));
    vlTOPp->mkMmUnit__DOT__y___05Fh3272289 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3271927) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3271926));
    vlTOPp->mkMmUnit__DOT__y___05Fh3492436 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3492074) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3492073));
    vlTOPp->mkMmUnit__DOT__y___05Fh190149 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh189787) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh189786));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_IN_ETC___05F_d38))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh24750
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7_503_ETC___05F_d2536))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh244905
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7_001_ETC___05F_d5034))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh465055
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7_499_ETC___05F_d7532))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh685205
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7_997_ETC___05F_d10030))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh905375
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_24_ETC___05F_d12528))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh1125522
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_49_ETC___05F_d15026))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh1345669
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_74_ETC___05F_d17524))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh1565816
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_99_ETC___05F_d20022))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh1785986
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_24_ETC___05F_d22520))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh2006133
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_49_ETC___05F_d25018))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh2226280
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_74_ETC___05F_d27516))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh2446427
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_99_ETC___05F_d30014))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh2666597
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_24_ETC___05F_d32512))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh2886744
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_49_ETC___05F_d35010))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh3106891
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_74_ETC___05F_d37508))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh3327038
            : 0U);
    vlTOPp->mkMmUnit__DOT__y___05Fh410212 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh410302) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh410303));
    vlTOPp->mkMmUnit__DOT__y___05Fh630362 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh630452) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh630453));
    vlTOPp->mkMmUnit__DOT__y___05Fh850512 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh850602) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh850603));
    vlTOPp->mkMmUnit__DOT__y___05Fh1070682 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1070772) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1070773));
    vlTOPp->mkMmUnit__DOT__y___05Fh1290829 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1290919) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1290920));
    vlTOPp->mkMmUnit__DOT__y___05Fh1510976 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1511066) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1511067));
    vlTOPp->mkMmUnit__DOT__y___05Fh1731123 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1731213) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1731214));
    vlTOPp->mkMmUnit__DOT__y___05Fh1951293 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1951383) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1951384));
    vlTOPp->mkMmUnit__DOT__y___05Fh2171440 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2171530) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2171531));
    vlTOPp->mkMmUnit__DOT__y___05Fh2391587 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2391677) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2391678));
    vlTOPp->mkMmUnit__DOT__y___05Fh2611734 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2611824) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2611825));
    vlTOPp->mkMmUnit__DOT__y___05Fh2831904 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2831994) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2831995));
    vlTOPp->mkMmUnit__DOT__y___05Fh3052051 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3052141) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3052142));
    vlTOPp->mkMmUnit__DOT__y___05Fh3272198 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3272288) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3272289));
    vlTOPp->mkMmUnit__DOT__y___05Fh3492345 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3492435) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3492436));
    vlTOPp->mkMmUnit__DOT__y___05Fh190058 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh190148) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh190149));
    vlTOPp->mkMmUnit__DOT__x___05Fh60581 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x1fU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x1eU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh60672 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x1eU) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh60310 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x1eU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh60401 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x1dU) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh60039 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x1dU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh60130 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x1cU) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh59768 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x1cU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh59859 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x1bU) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh59497 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x1bU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh59588 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x1aU) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh59226 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x1aU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh59317 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x19U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh58955 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x19U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh59046 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x18U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_T_ETC___05Fq85 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh58684 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x18U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh58775 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x17U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh58413 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x17U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh58504 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x16U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh58142 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x16U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh58233 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x15U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh57871 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x15U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh57962 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x14U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh57600 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x14U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh57691 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x13U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh57329 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x13U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh57420 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x12U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh57058 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x12U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh57149 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x11U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh56787 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x11U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh56878 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x10U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh56516 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0x10U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh56607 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0xfU) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh56245 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0xfU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh56336 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0xeU) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh55974 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0xeU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh56065 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0xdU) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh55703 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0xdU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh55794 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0xcU) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh55432 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0xcU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh55523 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0xbU) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh55161 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0xbU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh55252 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0xaU) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh54890 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 0xaU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh54981 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 9U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh54619 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 9U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh54710 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 8U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh54348 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 8U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh54439 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 7U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh54077 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 7U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh54168 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 6U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh53806 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 6U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh53897 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 5U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh53535 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 5U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh53626 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 4U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh53264 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 4U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh53355 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 3U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh52992 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 3U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh53083 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 2U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_T_ETC___05Fq84 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                   >> 1U) & vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163))
            ? 4ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh52724 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169 
                                                   >> 2U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh280735 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x1fU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x1eU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh280826 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x1eU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh280464 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x1eU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh280555 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x1dU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh280193 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x1dU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh280284 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x1cU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh279922 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x1cU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh280013 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x1bU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh279651 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x1bU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh279742 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x1aU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh279380 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x1aU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh279471 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x19U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh279109 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x19U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh279200 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x18U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_ETC___05Fq119 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh278838 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x18U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh278929 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x17U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh278567 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x17U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh278658 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x16U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh278296 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x16U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh278387 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x15U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh278025 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x15U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh278116 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x14U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh277754 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x14U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh277845 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x13U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh277483 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x13U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh277574 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x12U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh277212 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x12U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh277303 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x11U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh276941 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x11U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh277032 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x10U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh276670 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0x10U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh276761 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0xfU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh276399 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0xfU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh276490 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0xeU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh276128 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0xeU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh276219 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0xdU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh275857 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0xdU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh275948 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0xcU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh275586 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0xcU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh275677 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0xbU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh275315 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0xbU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh275406 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0xaU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh275044 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 0xaU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh275135 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 9U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh274773 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 9U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh274864 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 8U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh274502 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 8U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh274593 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 7U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh274231 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 7U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh274322 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 6U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh273960 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 6U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh274051 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 5U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh273689 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh273780 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 4U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh273418 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 4U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh273509 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 3U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh273146 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 3U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh273237 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 2U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_ETC___05Fq118 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                   >> 1U) & vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661))
            ? 4ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh272878 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667 
                                                    >> 2U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh500885 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x1fU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x1eU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh500976 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x1eU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh500614 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x1eU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh500705 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x1dU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh500343 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x1dU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh500434 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x1cU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh500072 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x1cU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh500163 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x1bU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh499801 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x1bU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh499892 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x1aU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh499530 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x1aU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh499621 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x19U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh499259 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x19U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh499350 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x18U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_ETC___05Fq155 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh498988 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x18U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh499079 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x17U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh498717 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x17U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh498808 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x16U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh498446 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x16U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh498537 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x15U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh498175 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x15U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh498266 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x14U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh497904 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x14U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh497995 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x13U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh497633 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x13U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh497724 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x12U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh497362 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x12U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh497453 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x11U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh497091 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x11U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh497182 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x10U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh496820 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0x10U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh496911 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0xfU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh496549 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0xfU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh496640 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0xeU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh496278 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0xeU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh496369 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0xdU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh496007 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0xdU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh496098 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0xcU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh495736 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0xcU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh495827 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0xbU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh495465 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0xbU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh495556 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0xaU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh495194 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 0xaU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh495285 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 9U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh494923 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 9U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh495014 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 8U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh494652 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 8U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh494743 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 7U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh494381 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 7U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh494472 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 6U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh494110 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 6U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh494201 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 5U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh493839 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh493930 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 4U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh493568 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 4U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh493659 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 3U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh493296 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 3U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh493387 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 2U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_ETC___05Fq154 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                   >> 1U) & vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159))
            ? 4ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh493028 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165 
                                                    >> 2U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh721035 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x1fU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x1eU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh721126 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x1eU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh720764 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x1eU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh720855 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x1dU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh720493 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x1dU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh720584 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x1cU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh720222 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x1cU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh720313 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x1bU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh719951 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x1bU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh720042 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x1aU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh719680 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x1aU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh719771 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x19U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh719409 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x19U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh719500 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x18U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_ETC___05Fq190 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh719138 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x18U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh719229 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x17U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh718867 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x17U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh718958 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x16U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh718596 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x16U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh718687 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x15U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh718325 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x15U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh718416 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x14U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh718054 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x14U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh718145 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x13U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh717783 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x13U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh717874 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x12U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh717512 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x12U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh717603 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x11U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh717241 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x11U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh717332 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x10U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh716970 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0x10U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh717061 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0xfU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh716699 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0xfU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh716790 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0xeU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh716428 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0xeU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh716519 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0xdU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh716157 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0xdU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh716248 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0xcU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh715886 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0xcU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh715977 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0xbU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh715615 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0xbU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh715706 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0xaU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh715344 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 0xaU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh715435 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 9U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh715073 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 9U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh715164 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 8U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh714802 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 8U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh714893 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 7U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh714531 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 7U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh714622 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 6U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh714260 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 6U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh714351 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 5U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh713989 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh714080 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 4U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh713718 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 4U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh713809 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 3U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh713446 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 3U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh713537 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 2U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_ETC___05Fq189 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                   >> 1U) & vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657))
            ? 4ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh713178 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663 
                                                    >> 2U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh941205 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x1fU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x1eU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh941296 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x1eU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh940934 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x1eU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh941025 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x1dU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh940663 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x1dU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh940754 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x1cU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh940392 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x1cU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh940483 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x1bU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh940121 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x1bU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh940212 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x1aU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh939850 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x1aU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh939941 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x19U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh939579 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x19U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh939670 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x18U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_ETC___05Fq225 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh939308 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x18U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh939399 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x17U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh939037 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x17U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh939128 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x16U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh938766 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x16U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh938857 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x15U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh938495 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x15U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh938586 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x14U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh938224 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x14U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh938315 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x13U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh937953 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x13U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh938044 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x12U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh937682 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x12U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh937773 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x11U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh937411 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x11U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh937502 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x10U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh937140 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0x10U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh937231 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0xfU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh936869 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0xfU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh936960 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0xeU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh936598 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0xeU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh936689 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0xdU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh936327 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0xdU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh936418 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0xcU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh936056 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0xcU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh936147 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0xbU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh935785 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0xbU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh935876 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0xaU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh935514 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 0xaU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh935605 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 9U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh935243 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 9U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh935334 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 8U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh934972 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 8U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh935063 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 7U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh934701 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 7U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh934792 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 6U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh934430 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 6U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh934521 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 5U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh934159 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh934250 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 4U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh933888 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 4U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh933979 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 3U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh933616 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 3U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh933707 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 2U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_ETC___05Fq224 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                   >> 1U) & vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155))
            ? 4ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh933348 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161 
                                                    >> 2U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1161352 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x1fU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x1eU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1161443 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x1eU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1161081 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x1eU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1161172 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x1dU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1160810 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x1dU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1160901 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x1cU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1160539 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x1cU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1160630 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x1bU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1160268 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x1bU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1160359 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x1aU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1159997 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x1aU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1160088 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x19U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1159726 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x19U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1159817 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x18U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BI_ETC___05Fq260 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1159455 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x18U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1159546 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x17U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1159184 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x17U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1159275 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x16U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1158913 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x16U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1159004 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x15U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1158642 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x15U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1158733 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x14U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1158371 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x14U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1158462 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x13U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1158100 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x13U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1158191 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x12U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1157829 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x12U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1157920 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x11U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1157558 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x11U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1157649 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x10U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1157287 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0x10U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1157378 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0xfU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1157016 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0xfU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1157107 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0xeU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1156745 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0xeU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1156836 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0xdU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1156474 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0xdU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1156565 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0xcU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1156203 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0xcU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1156294 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0xbU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1155932 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0xbU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1156023 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0xaU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1155661 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 0xaU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1155752 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 9U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1155390 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 9U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1155481 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 8U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1155119 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 8U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1155210 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 7U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1154848 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 7U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1154939 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 6U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1154577 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 6U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1154668 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 5U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1154306 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 5U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1154397 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 4U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1154035 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 4U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1154126 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 3U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1153763 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 3U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1153854 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 2U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BI_ETC___05Fq259 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                   >> 1U) & vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653))
            ? 4ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh1153495 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659 
                                                >> 2U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1381499 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x1fU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x1eU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1381590 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x1eU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1381228 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x1eU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1381319 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x1dU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1380957 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x1dU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1381048 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x1cU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1380686 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x1cU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1380777 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x1bU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1380415 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x1bU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1380506 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x1aU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1380144 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x1aU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1380235 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x19U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1379873 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x19U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1379964 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x18U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BI_ETC___05Fq295 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1379602 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x18U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1379693 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x17U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1379331 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x17U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1379422 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x16U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1379060 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x16U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1379151 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x15U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1378789 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x15U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1378880 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x14U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1378518 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x14U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1378609 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x13U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1378247 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x13U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1378338 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x12U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1377976 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x12U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1378067 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x11U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1377705 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x11U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1377796 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x10U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1377434 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0x10U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1377525 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0xfU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1377163 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0xfU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1377254 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0xeU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1376892 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0xeU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1376983 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0xdU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1376621 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0xdU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1376712 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0xcU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1376350 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0xcU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1376441 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0xbU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1376079 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0xbU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1376170 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0xaU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1375808 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 0xaU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1375899 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 9U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1375537 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 9U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1375628 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 8U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1375266 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 8U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1375357 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 7U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1374995 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 7U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1375086 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 6U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1374724 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 6U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1374815 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 5U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1374453 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 5U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1374544 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 4U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1374182 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 4U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1374273 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 3U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1373910 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 3U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1374001 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 2U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BI_ETC___05Fq294 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                   >> 1U) & vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151))
            ? 4ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh1373642 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157 
                                                >> 2U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1601646 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x1fU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x1eU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1601737 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x1eU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1601375 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x1eU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1601466 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x1dU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1601104 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x1dU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1601195 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x1cU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1600833 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x1cU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1600924 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x1bU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1600562 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x1bU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1600653 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x1aU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1600291 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x1aU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1600382 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x19U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1600020 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x19U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1600111 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x18U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BI_ETC___05Fq330 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1599749 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x18U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1599840 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x17U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1599478 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x17U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1599569 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x16U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1599207 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x16U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1599298 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x15U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1598936 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x15U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1599027 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x14U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1598665 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x14U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1598756 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x13U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1598394 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x13U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1598485 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x12U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1598123 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x12U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1598214 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x11U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1597852 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x11U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1597943 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x10U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1597581 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0x10U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1597672 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0xfU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1597310 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0xfU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1597401 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0xeU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1597039 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0xeU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1597130 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0xdU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1596768 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0xdU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1596859 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0xcU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1596497 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0xcU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1596588 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0xbU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1596226 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0xbU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1596317 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0xaU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1595955 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 0xaU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1596046 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 9U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1595684 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 9U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1595775 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 8U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1595413 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 8U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1595504 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 7U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1595142 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 7U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1595233 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 6U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1594871 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 6U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1594962 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 5U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1594600 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 5U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1594691 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 4U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1594329 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 4U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1594420 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 3U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1594057 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 3U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1594148 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 2U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BI_ETC___05Fq329 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                   >> 1U) & vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649))
            ? 4ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh1593789 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655 
                                                >> 2U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1821816 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x1fU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x1eU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1821907 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x1eU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1821545 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x1eU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1821636 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x1dU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1821274 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x1dU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1821365 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x1cU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1821003 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x1cU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1821094 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x1bU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1820732 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x1bU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1820823 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x1aU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1820461 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x1aU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1820552 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x19U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1820190 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x19U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1820281 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x18U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BI_ETC___05Fq365 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1819919 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x18U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1820010 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x17U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1819648 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x17U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1819739 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x16U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1819377 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x16U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1819468 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x15U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1819106 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x15U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1819197 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x14U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1818835 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x14U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1818926 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x13U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1818564 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x13U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1818655 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x12U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1818293 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x12U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1818384 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x11U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1818022 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x11U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1818113 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x10U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1817751 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0x10U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1817842 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0xfU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1817480 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0xfU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1817571 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0xeU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1817209 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0xeU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1817300 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0xdU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1816938 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0xdU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1817029 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0xcU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1816667 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0xcU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1816758 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0xbU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1816396 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0xbU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1816487 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0xaU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1816125 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 0xaU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1816216 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 9U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1815854 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 9U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1815945 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 8U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1815583 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 8U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1815674 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 7U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1815312 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 7U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1815403 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 6U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1815041 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 6U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1815132 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 5U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1814770 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 5U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1814861 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 4U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1814499 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 4U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1814590 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 3U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1814227 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 3U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1814318 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 2U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BI_ETC___05Fq364 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                   >> 1U) & vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147))
            ? 4ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh1813959 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153 
                                                >> 2U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2041963 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x1fU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x1eU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2042054 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x1eU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2041692 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x1eU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2041783 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x1dU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2041421 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x1dU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2041512 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x1cU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2041150 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x1cU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2041241 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x1bU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2040879 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x1bU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2040970 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x1aU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2040608 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x1aU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2040699 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x19U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2040337 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x19U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2040428 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x18U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BI_ETC___05Fq400 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2040066 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x18U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2040157 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x17U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2039795 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x17U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2039886 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x16U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2039524 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x16U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2039615 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x15U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2039253 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x15U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2039344 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x14U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2038982 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x14U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2039073 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x13U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2038711 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x13U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2038802 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x12U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2038440 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x12U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2038531 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x11U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2038169 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x11U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2038260 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x10U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2037898 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0x10U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2037989 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0xfU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2037627 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0xfU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2037718 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0xeU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2037356 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0xeU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2037447 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0xdU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2037085 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0xdU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2037176 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0xcU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2036814 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0xcU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2036905 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0xbU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2036543 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0xbU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2036634 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0xaU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2036272 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 0xaU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2036363 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 9U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2036001 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 9U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2036092 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 8U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2035730 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 8U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2035821 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 7U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2035459 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 7U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2035550 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 6U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2035188 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 6U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2035279 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 5U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2034917 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 5U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2035008 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 4U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2034646 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 4U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2034737 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 3U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2034374 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 3U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2034465 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 2U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BI_ETC___05Fq399 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                   >> 1U) & vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645))
            ? 4ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh2034106 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651 
                                                >> 2U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2262110 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x1fU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x1eU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2262201 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x1eU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2261839 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x1eU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2261930 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x1dU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2261568 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x1dU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2261659 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x1cU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2261297 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x1cU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2261388 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x1bU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2261026 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x1bU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2261117 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x1aU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2260755 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x1aU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2260846 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x19U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2260484 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x19U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2260575 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x18U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BI_ETC___05Fq435 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2260213 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x18U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2260304 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x17U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2259942 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x17U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2260033 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x16U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2259671 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x16U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2259762 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x15U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2259400 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x15U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2259491 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x14U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2259129 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x14U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2259220 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x13U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2258858 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x13U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2258949 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x12U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2258587 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x12U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2258678 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x11U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2258316 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x11U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2258407 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x10U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2258045 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0x10U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2258136 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0xfU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2257774 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0xfU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2257865 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0xeU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2257503 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0xeU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2257594 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0xdU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2257232 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0xdU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2257323 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0xcU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2256961 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0xcU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2257052 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0xbU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2256690 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0xbU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2256781 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0xaU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2256419 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 0xaU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2256510 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 9U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2256148 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 9U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2256239 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 8U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2255877 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 8U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2255968 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 7U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2255606 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 7U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2255697 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 6U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2255335 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 6U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2255426 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 5U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2255064 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 5U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2255155 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 4U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2254793 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 4U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2254884 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 3U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2254521 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 3U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2254612 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 2U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BI_ETC___05Fq434 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                   >> 1U) & vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143))
            ? 4ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh2254253 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149 
                                                >> 2U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2482257 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x1fU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x1eU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2482348 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x1eU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2481986 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x1eU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2482077 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x1dU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2481715 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x1dU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2481806 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x1cU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2481444 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x1cU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2481535 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x1bU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2481173 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x1bU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2481264 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x1aU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2480902 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x1aU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2480993 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x19U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2480631 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x19U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2480722 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x18U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BI_ETC___05Fq470 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2480360 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x18U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2480451 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x17U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2480089 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x17U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2480180 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x16U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2479818 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x16U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2479909 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x15U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2479547 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x15U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2479638 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x14U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2479276 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x14U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2479367 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x13U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2479005 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x13U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2479096 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x12U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2478734 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x12U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2478825 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x11U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2478463 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x11U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2478554 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x10U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2478192 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0x10U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2478283 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0xfU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2477921 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0xfU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2478012 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0xeU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2477650 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0xeU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2477741 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0xdU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2477379 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0xdU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2477470 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0xcU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2477108 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0xcU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2477199 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0xbU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2476837 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0xbU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2476928 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0xaU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2476566 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 0xaU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2476657 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 9U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2476295 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 9U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2476386 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 8U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2476024 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 8U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2476115 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 7U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2475753 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 7U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2475844 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 6U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2475482 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 6U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2475573 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 5U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2475211 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 5U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2475302 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 4U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2474940 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 4U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2475031 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 3U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2474668 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 3U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2474759 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 2U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BI_ETC___05Fq469 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                   >> 1U) & vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641))
            ? 4ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh2474400 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647 
                                                >> 2U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2702427 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x1fU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x1eU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2702518 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x1eU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2702156 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x1eU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2702247 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x1dU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2701885 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x1dU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2701976 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x1cU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2701614 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x1cU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2701705 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x1bU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2701343 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x1bU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2701434 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x1aU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2701072 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x1aU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2701163 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x19U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2700801 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x19U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2700892 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x18U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BI_ETC___05Fq505 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2700530 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x18U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2700621 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x17U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2700259 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x17U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2700350 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x16U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2699988 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x16U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2700079 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x15U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2699717 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x15U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2699808 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x14U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2699446 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x14U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2699537 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x13U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2699175 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x13U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2699266 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x12U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2698904 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x12U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2698995 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x11U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2698633 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x11U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2698724 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x10U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2698362 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0x10U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2698453 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0xfU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2698091 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0xfU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2698182 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0xeU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2697820 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0xeU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2697911 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0xdU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2697549 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0xdU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2697640 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0xcU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2697278 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0xcU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2697369 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0xbU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2697007 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0xbU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2697098 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0xaU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2696736 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 0xaU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2696827 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 9U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2696465 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 9U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2696556 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 8U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2696194 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 8U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2696285 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 7U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2695923 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 7U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2696014 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 6U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2695652 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 6U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2695743 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 5U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2695381 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 5U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2695472 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 4U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2695110 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 4U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2695201 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 3U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2694838 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 3U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2694929 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 2U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BI_ETC___05Fq504 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                   >> 1U) & vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139))
            ? 4ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh2694570 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145 
                                                >> 2U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2922574 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x1fU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x1eU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2922665 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x1eU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2922303 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x1eU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2922394 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x1dU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2922032 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x1dU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2922123 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x1cU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2921761 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x1cU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2921852 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x1bU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2921490 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x1bU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2921581 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x1aU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2921219 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x1aU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2921310 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x19U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2920948 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x19U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2921039 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x18U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BI_ETC___05Fq540 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2920677 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x18U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2920768 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x17U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2920406 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x17U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2920497 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x16U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2920135 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x16U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2920226 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x15U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2919864 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x15U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2919955 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x14U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2919593 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x14U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2919684 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x13U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2919322 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x13U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2919413 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x12U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2919051 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x12U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2919142 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x11U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2918780 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x11U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2918871 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x10U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2918509 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0x10U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2918600 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0xfU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2918238 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0xfU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2918329 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0xeU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2917967 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0xeU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2918058 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0xdU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2917696 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0xdU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2917787 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0xcU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2917425 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0xcU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2917516 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0xbU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2917154 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0xbU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2917245 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0xaU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2916883 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 0xaU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2916974 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 9U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2916612 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 9U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2916703 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 8U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2916341 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 8U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2916432 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 7U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2916070 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 7U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2916161 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 6U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2915799 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 6U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2915890 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 5U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2915528 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 5U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2915619 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 4U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2915257 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 4U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2915348 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 3U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2914985 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 3U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2915076 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 2U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BI_ETC___05Fq539 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                   >> 1U) & vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637))
            ? 4ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh2914717 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643 
                                                >> 2U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3142721 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x1fU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x1eU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3142812 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x1eU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3142450 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x1eU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3142541 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x1dU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3142179 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x1dU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3142270 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x1cU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3141908 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x1cU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3141999 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x1bU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3141637 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x1bU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3141728 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x1aU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3141366 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x1aU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3141457 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x19U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3141095 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x19U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3141186 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x18U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BI_ETC___05Fq575 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3140824 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x18U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3140915 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x17U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3140553 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x17U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3140644 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x16U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3140282 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x16U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3140373 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x15U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3140011 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x15U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3140102 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x14U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3139740 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x14U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3139831 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x13U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3139469 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x13U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3139560 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x12U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3139198 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x12U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3139289 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x11U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3138927 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x11U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3139018 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x10U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3138656 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0x10U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3138747 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0xfU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3138385 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0xfU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3138476 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0xeU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3138114 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0xeU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3138205 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0xdU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3137843 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0xdU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3137934 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0xcU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3137572 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0xcU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3137663 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0xbU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3137301 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0xbU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3137392 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0xaU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3137030 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 0xaU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3137121 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 9U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3136759 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 9U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3136850 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 8U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3136488 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 8U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3136579 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 7U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3136217 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 7U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3136308 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 6U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3135946 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 6U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3136037 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 5U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3135675 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 5U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3135766 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 4U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3135404 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 4U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3135495 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 3U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3135132 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 3U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3135223 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 2U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BI_ETC___05Fq574 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                   >> 1U) & vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135))
            ? 4ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh3134864 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141 
                                                >> 2U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3362868 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x1fU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x1eU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3362959 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x1eU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3362597 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x1eU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3362688 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x1dU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3362326 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x1dU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3362417 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x1cU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3362055 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x1cU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3362146 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x1bU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3361784 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x1bU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3361875 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x1aU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3361513 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x1aU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3361604 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x19U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3361242 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x19U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3361333 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x18U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BI_ETC___05Fq610 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3360971 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x18U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3361062 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x17U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3360700 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x17U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3360791 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x16U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3360429 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x16U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3360520 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x15U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3360158 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x15U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3360249 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x14U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3359887 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x14U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3359978 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x13U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3359616 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x13U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3359707 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x12U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3359345 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x12U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3359436 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x11U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3359074 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x11U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3359165 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x10U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3358803 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0x10U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3358894 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0xfU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3358532 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0xfU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3358623 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0xeU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3358261 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0xeU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3358352 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0xdU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3357990 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0xdU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3358081 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0xcU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3357719 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0xcU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3357810 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0xbU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3357448 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0xbU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3357539 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0xaU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3357177 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 0xaU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3357268 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 9U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3356906 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 9U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3356997 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 8U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3356635 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 8U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3356726 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 7U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3356364 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 7U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3356455 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 6U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3356093 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 6U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3356184 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 5U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3355822 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 5U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3355913 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 4U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3355551 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 4U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3355642 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 3U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3355279 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 3U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3355370 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 2U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BI_ETC___05Fq609 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                   >> 1U) & vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633))
            ? 4ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh3355011 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639 
                                                >> 2U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT___05FETC___05F_d4398 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh410211) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh410212)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh409940) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh409941)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4397)));
    vlTOPp->mkMmUnit__DOT__y___05Fh410574 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh410212) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh410211));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT___05FETC___05F_d6896 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh630361) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh630362)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh630090) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh630091)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6895)));
    vlTOPp->mkMmUnit__DOT__y___05Fh630724 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh630362) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh630361));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT___05FETC___05F_d9394 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh850511) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh850512)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh850240) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh850241)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9393)));
    vlTOPp->mkMmUnit__DOT__y___05Fh850874 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh850512) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh850511));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_ETC___05F_d11892 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1070681) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1070682)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1070410) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1070411)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11891)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1071044 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1070682) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1070681));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_ETC___05F_d14390 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1290828) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1290829)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1290557) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1290558)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14389)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1291191 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1290829) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1290828));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_ETC___05F_d16888 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1510975) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1510976)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1510704) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1510705)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16887)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1511338 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1510976) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1510975));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_ETC___05F_d19386 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1731122) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1731123)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1730851) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1730852)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19385)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1731485 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1731123) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1731122));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_ETC___05F_d21884 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1951292) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1951293)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1951021) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1951022)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21883)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1951655 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1951293) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1951292));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_ETC___05F_d24382 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2171439) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2171440)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2171168) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2171169)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24381)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2171802 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2171440) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2171439));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_ETC___05F_d26880 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2391586) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2391587)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2391315) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2391316)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26879)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2391949 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2391587) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2391586));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_ETC___05F_d29378 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2611733) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2611734)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2611462) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2611463)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29377)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2612096 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2611734) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2611733));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_ETC___05F_d31876 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2831903) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2831904)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2831632) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2831633)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31875)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2832266 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2831904) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2831903));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_ETC___05F_d34374 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3052050) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3052051)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3051779) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3051780)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34373)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3052413 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3052051) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3052050));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_ETC___05F_d36872 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3272197) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3272198)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3271926) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3271927)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36871)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3272560 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3272198) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3272197));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_ETC___05F_d39370 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3492344) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3492345)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3492073) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3492074)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39369)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3492707 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3492345) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3492344));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT___05FETC___05F_d1900 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh190057) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh190058)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh189786) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh189787)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1899)));
    vlTOPp->mkMmUnit__DOT__y___05Fh190420 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh190058) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh190057));
    vlTOPp->mkMmUnit__DOT__y___05Fh53084 = ((IData)(
                                                    (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_T_ETC___05Fq84 
                                                     >> 2U)) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh52724));
    vlTOPp->mkMmUnit__DOT__y___05Fh273238 = ((IData)(
                                                     (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_ETC___05Fq118 
                                                      >> 2U)) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh272878));
    vlTOPp->mkMmUnit__DOT__y___05Fh493388 = ((IData)(
                                                     (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_ETC___05Fq154 
                                                      >> 2U)) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh493028));
    vlTOPp->mkMmUnit__DOT__y___05Fh713538 = ((IData)(
                                                     (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_ETC___05Fq189 
                                                      >> 2U)) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh713178));
    vlTOPp->mkMmUnit__DOT__y___05Fh933708 = ((IData)(
                                                     (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_ETC___05Fq224 
                                                      >> 2U)) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh933348));
    vlTOPp->mkMmUnit__DOT__y___05Fh1153855 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BI_ETC___05Fq259 
                                                       >> 2U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1153495));
    vlTOPp->mkMmUnit__DOT__y___05Fh1374002 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BI_ETC___05Fq294 
                                                       >> 2U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1373642));
    vlTOPp->mkMmUnit__DOT__y___05Fh1594149 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BI_ETC___05Fq329 
                                                       >> 2U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1593789));
    vlTOPp->mkMmUnit__DOT__y___05Fh1814319 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BI_ETC___05Fq364 
                                                       >> 2U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1813959));
    vlTOPp->mkMmUnit__DOT__y___05Fh2034466 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BI_ETC___05Fq399 
                                                       >> 2U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2034106));
    vlTOPp->mkMmUnit__DOT__y___05Fh2254613 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BI_ETC___05Fq434 
                                                       >> 2U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2254253));
    vlTOPp->mkMmUnit__DOT__y___05Fh2474760 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BI_ETC___05Fq469 
                                                       >> 2U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2474400));
    vlTOPp->mkMmUnit__DOT__y___05Fh2694930 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BI_ETC___05Fq504 
                                                       >> 2U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2694570));
    vlTOPp->mkMmUnit__DOT__y___05Fh2915077 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BI_ETC___05Fq539 
                                                       >> 2U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2914717));
    vlTOPp->mkMmUnit__DOT__y___05Fh3135224 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BI_ETC___05Fq574 
                                                       >> 2U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3134864));
    vlTOPp->mkMmUnit__DOT__y___05Fh3355371 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BI_ETC___05Fq609 
                                                       >> 2U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3355011));
    vlTOPp->mkMmUnit__DOT__y___05Fh410483 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                    >> 9U) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh410574)));
    vlTOPp->mkMmUnit__DOT__y___05Fh630633 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
                                                    >> 9U) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh630724)));
    vlTOPp->mkMmUnit__DOT__y___05Fh850783 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                    >> 9U) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh850874)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1070953 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                >> 9U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1071044)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1291100 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                >> 9U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1291191)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1511247 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816) 
                                                >> 9U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1511338)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1731394 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314) 
                                                >> 9U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1731485)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1951564 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812) 
                                                >> 9U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1951655)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2171711 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310) 
                                                >> 9U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2171802)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2391858 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808) 
                                                >> 9U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2391949)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2612005 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                >> 9U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2612096)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2832175 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                >> 9U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2832266)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3052322 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                >> 9U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3052413)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3272469 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                >> 9U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3272560)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3492616 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                >> 9U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3492707)));
    vlTOPp->mkMmUnit__DOT__y___05Fh190329 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                    >> 9U) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh190420)));
    vlTOPp->mkMmUnit__DOT__y___05Fh52993 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh53083) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh53084));
    vlTOPp->mkMmUnit__DOT__y___05Fh273147 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh273237) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh273238));
    vlTOPp->mkMmUnit__DOT__y___05Fh493297 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh493387) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh493388));
    vlTOPp->mkMmUnit__DOT__y___05Fh713447 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh713537) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh713538));
    vlTOPp->mkMmUnit__DOT__y___05Fh933617 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh933707) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh933708));
    vlTOPp->mkMmUnit__DOT__y___05Fh1153764 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1153854) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1153855));
    vlTOPp->mkMmUnit__DOT__y___05Fh1373911 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1374001) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1374002));
    vlTOPp->mkMmUnit__DOT__y___05Fh1594058 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1594148) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1594149));
    vlTOPp->mkMmUnit__DOT__y___05Fh1814228 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1814318) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1814319));
    vlTOPp->mkMmUnit__DOT__y___05Fh2034375 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2034465) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2034466));
    vlTOPp->mkMmUnit__DOT__y___05Fh2254522 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2254612) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2254613));
    vlTOPp->mkMmUnit__DOT__y___05Fh2474669 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2474759) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2474760));
    vlTOPp->mkMmUnit__DOT__y___05Fh2694839 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2694929) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2694930));
    vlTOPp->mkMmUnit__DOT__y___05Fh2914986 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2915076) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2915077));
    vlTOPp->mkMmUnit__DOT__y___05Fh3135133 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3135223) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3135224));
    vlTOPp->mkMmUnit__DOT__y___05Fh3355280 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3355370) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3355371));
    vlTOPp->mkMmUnit__DOT__y___05Fh410754 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh410483) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh630904 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh630633) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
                                                >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh851054 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh850783) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1071224 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1070953) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1291371 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1291100) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1511518 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1511247) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1731665 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1731394) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1951835 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1951564) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2171982 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2171711) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2392129 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2391858) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2612276 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2612005) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2832446 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2832175) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3052593 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3052322) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3272740 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3272469) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3492887 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3492616) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh190600 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh190329) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                >> 0xaU));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d386 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh52992) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh52993)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh52724) 
                              ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_T_ETC___05Fq84 
                                         >> 2U))) << 2U)) 
                      | ((2U & ((0xfffffffeU & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169) 
                                ^ (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                   << 1U))) | (1U & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_T_ETC___05Fq85))));
    vlTOPp->mkMmUnit__DOT__y___05Fh53356 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh52993) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh52992));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2884 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh273146) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh273147)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh272878) 
                              ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_ETC___05Fq118 
                                         >> 2U))) << 2U)) 
                      | ((2U & ((0xfffffffeU & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667) 
                                ^ (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                   << 1U))) | (1U & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_ETC___05Fq119))));
    vlTOPp->mkMmUnit__DOT__y___05Fh273510 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh273147) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh273146));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5382 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh493296) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh493297)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh493028) 
                              ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_ETC___05Fq154 
                                         >> 2U))) << 2U)) 
                      | ((2U & ((0xfffffffeU & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165) 
                                ^ (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                   << 1U))) | (1U & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_ETC___05Fq155))));
    vlTOPp->mkMmUnit__DOT__y___05Fh493660 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh493297) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh493296));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7880 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh713446) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh713447)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh713178) 
                              ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_ETC___05Fq189 
                                         >> 2U))) << 2U)) 
                      | ((2U & ((0xfffffffeU & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663) 
                                ^ (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                   << 1U))) | (1U & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_ETC___05Fq190))));
    vlTOPp->mkMmUnit__DOT__y___05Fh713810 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh713447) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh713446));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10378 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh933616) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh933617)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh933348) 
                              ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_ETC___05Fq224 
                                         >> 2U))) << 2U)) 
                      | ((2U & ((0xfffffffeU & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161) 
                                ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                   << 1U))) | (1U & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_ETC___05Fq225))));
    vlTOPp->mkMmUnit__DOT__y___05Fh933980 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh933617) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh933616));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12876 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1153763) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1153764)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1153495) 
                              ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BI_ETC___05Fq259 
                                         >> 2U))) << 2U)) 
                      | ((2U & ((0xfffffffeU & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659) 
                                ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                   << 1U))) | (1U & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BI_ETC___05Fq260))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1154127 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1153764) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1153763));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15374 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1373910) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1373911)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1373642) 
                              ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BI_ETC___05Fq294 
                                         >> 2U))) << 2U)) 
                      | ((2U & ((0xfffffffeU & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157) 
                                ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                   << 1U))) | (1U & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BI_ETC___05Fq295))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1374274 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1373911) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1373910));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17872 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1594057) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1594058)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1593789) 
                              ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BI_ETC___05Fq329 
                                         >> 2U))) << 2U)) 
                      | ((2U & ((0xfffffffeU & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655) 
                                ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                   << 1U))) | (1U & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BI_ETC___05Fq330))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1594421 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1594058) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1594057));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20370 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1814227) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1814228)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1813959) 
                              ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BI_ETC___05Fq364 
                                         >> 2U))) << 2U)) 
                      | ((2U & ((0xfffffffeU & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153) 
                                ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                   << 1U))) | (1U & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BI_ETC___05Fq365))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1814591 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1814228) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1814227));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22868 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2034374) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2034375)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2034106) 
                              ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BI_ETC___05Fq399 
                                         >> 2U))) << 2U)) 
                      | ((2U & ((0xfffffffeU & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651) 
                                ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                   << 1U))) | (1U & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BI_ETC___05Fq400))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2034738 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2034375) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2034374));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25366 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2254521) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2254522)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2254253) 
                              ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BI_ETC___05Fq434 
                                         >> 2U))) << 2U)) 
                      | ((2U & ((0xfffffffeU & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149) 
                                ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                   << 1U))) | (1U & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BI_ETC___05Fq435))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2254885 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2254522) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2254521));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27864 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2474668) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2474669)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2474400) 
                              ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BI_ETC___05Fq469 
                                         >> 2U))) << 2U)) 
                      | ((2U & ((0xfffffffeU & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647) 
                                ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                   << 1U))) | (1U & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BI_ETC___05Fq470))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2475032 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2474669) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2474668));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30362 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2694838) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2694839)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2694570) 
                              ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BI_ETC___05Fq504 
                                         >> 2U))) << 2U)) 
                      | ((2U & ((0xfffffffeU & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145) 
                                ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                   << 1U))) | (1U & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BI_ETC___05Fq505))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2695202 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2694839) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2694838));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32860 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2914985) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2914986)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2914717) 
                              ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BI_ETC___05Fq539 
                                         >> 2U))) << 2U)) 
                      | ((2U & ((0xfffffffeU & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643) 
                                ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                   << 1U))) | (1U & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BI_ETC___05Fq540))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2915349 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2914986) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2914985));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35358 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3135132) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3135133)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3134864) 
                              ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BI_ETC___05Fq574 
                                         >> 2U))) << 2U)) 
                      | ((2U & ((0xfffffffeU & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141) 
                                ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                   << 1U))) | (1U & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BI_ETC___05Fq575))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3135496 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3135133) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3135132));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37856 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3355279) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3355280)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3355011) 
                              ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BI_ETC___05Fq609 
                                         >> 2U))) << 2U)) 
                      | ((2U & ((0xfffffffeU & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639) 
                                ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                   << 1U))) | (1U & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BI_ETC___05Fq610))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3355643 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3355280) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3355279));
    vlTOPp->mkMmUnit__DOT__y___05Fh411025 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh410754) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh631175 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh630904) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
                                                >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh851325 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh851054) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1071495 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1071224) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1291642 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1291371) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1511789 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1511518) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1731936 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1731665) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1952106 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1951835) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2172253 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2171982) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2392400 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2392129) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2612547 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2612276) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2832717 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2832446) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3052864 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3052593) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3273011 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3272740) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3493158 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3492887) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh190871 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh190600) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh53265 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh53355) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh53356));
    vlTOPp->mkMmUnit__DOT__y___05Fh273419 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh273509) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh273510));
    vlTOPp->mkMmUnit__DOT__y___05Fh493569 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh493659) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh493660));
    vlTOPp->mkMmUnit__DOT__y___05Fh713719 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh713809) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh713810));
    vlTOPp->mkMmUnit__DOT__y___05Fh933889 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh933979) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh933980));
    vlTOPp->mkMmUnit__DOT__y___05Fh1154036 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1154126) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1154127));
    vlTOPp->mkMmUnit__DOT__y___05Fh1374183 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1374273) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1374274));
    vlTOPp->mkMmUnit__DOT__y___05Fh1594330 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1594420) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1594421));
    vlTOPp->mkMmUnit__DOT__y___05Fh1814500 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1814590) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1814591));
    vlTOPp->mkMmUnit__DOT__y___05Fh2034647 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2034737) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2034738));
    vlTOPp->mkMmUnit__DOT__y___05Fh2254794 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2254884) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2254885));
    vlTOPp->mkMmUnit__DOT__y___05Fh2474941 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2475031) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2475032));
    vlTOPp->mkMmUnit__DOT__y___05Fh2695111 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2695201) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2695202));
    vlTOPp->mkMmUnit__DOT__y___05Fh2915258 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2915348) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2915349));
    vlTOPp->mkMmUnit__DOT__y___05Fh3135405 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3135495) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3135496));
    vlTOPp->mkMmUnit__DOT__y___05Fh3355552 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3355642) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3355643));
    vlTOPp->mkMmUnit__DOT__y___05Fh411296 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh411025) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh631446 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh631175) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
                                                >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh851596 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh851325) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1071766 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1071495) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1291913 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1291642) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1512060 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1511789) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1732207 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1731936) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1952377 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1952106) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2172524 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2172253) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2392671 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2392400) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2612818 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2612547) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2832988 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2832717) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3053135 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3052864) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3273282 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3273011) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3493429 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3493158) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh191142 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh190871) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh53627 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh53265) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh53264));
    vlTOPp->mkMmUnit__DOT__y___05Fh273781 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh273419) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh273418));
    vlTOPp->mkMmUnit__DOT__y___05Fh493931 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh493569) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh493568));
    vlTOPp->mkMmUnit__DOT__y___05Fh714081 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh713719) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh713718));
    vlTOPp->mkMmUnit__DOT__y___05Fh934251 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh933889) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh933888));
    vlTOPp->mkMmUnit__DOT__y___05Fh1154398 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1154036) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1154035));
    vlTOPp->mkMmUnit__DOT__y___05Fh1374545 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1374183) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1374182));
    vlTOPp->mkMmUnit__DOT__y___05Fh1594692 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1594330) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1594329));
    vlTOPp->mkMmUnit__DOT__y___05Fh1814862 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1814500) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1814499));
    vlTOPp->mkMmUnit__DOT__y___05Fh2035009 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2034647) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2034646));
    vlTOPp->mkMmUnit__DOT__y___05Fh2255156 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2254794) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2254793));
    vlTOPp->mkMmUnit__DOT__y___05Fh2475303 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2474941) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2474940));
    vlTOPp->mkMmUnit__DOT__y___05Fh2695473 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2695111) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2695110));
    vlTOPp->mkMmUnit__DOT__y___05Fh2915620 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2915258) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2915257));
    vlTOPp->mkMmUnit__DOT__y___05Fh3135767 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3135405) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3135404));
    vlTOPp->mkMmUnit__DOT__y___05Fh3355914 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3355552) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3355551));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4400 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh411296) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh411025) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh410754) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh410483) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT___05FETC___05F_d4398)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh411567 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh411296) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6898 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh631446) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh631175) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh630904) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh630633) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT___05FETC___05F_d6896)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh631717 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh631446) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9396 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh851596) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh851325) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh851054) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh850783) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT___05FETC___05F_d9394)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh851867 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh851596) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11894 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1071766) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1071495) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1071224) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1070953) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_ETC___05F_d11892)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1072037 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1071766) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14392 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1291913) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1291642) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1291371) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1291100) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_ETC___05F_d14390)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1292184 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1291913) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16890 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1512060) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1511789) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1511518) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1511247) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_ETC___05F_d16888)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1512331 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1512060) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19388 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1732207) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1731936) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1731665) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1731394) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_ETC___05F_d19386)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1732478 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1732207) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21886 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1952377) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1952106) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1951835) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1951564) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_ETC___05F_d21884)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1952648 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1952377) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24384 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2172524) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2172253) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2171982) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2171711) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_ETC___05F_d24382)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2172795 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2172524) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26882 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2392671) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2392400) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2392129) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2391858) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_ETC___05F_d26880)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2392942 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2392671) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29380 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2612818) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2612547) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2612276) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2612005) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_ETC___05F_d29378)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2613089 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2612818) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31878 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2832988) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2832717) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2832446) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2832175) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_ETC___05F_d31876)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2833259 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2832988) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34376 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3053135) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3052864) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3052593) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3052322) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_ETC___05F_d34374)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3053406 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3053135) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36874 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3273282) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3273011) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3272740) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3272469) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_ETC___05F_d36872)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3273553 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3273282) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39372 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3493429) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3493158) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3492887) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3492616) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_ETC___05F_d39370)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3493700 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3493429) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1902 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh191142) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828)) 
                                          ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh190871) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828)) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh190600) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh190329) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT___05FETC___05F_d1900)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh191413 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh191142) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh53536 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh53626) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh53627));
    vlTOPp->mkMmUnit__DOT__y___05Fh273690 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh273780) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh273781));
    vlTOPp->mkMmUnit__DOT__y___05Fh493840 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh493930) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh493931));
    vlTOPp->mkMmUnit__DOT__y___05Fh713990 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh714080) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh714081));
    vlTOPp->mkMmUnit__DOT__y___05Fh934160 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh934250) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh934251));
    vlTOPp->mkMmUnit__DOT__y___05Fh1154307 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1154397) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1154398));
    vlTOPp->mkMmUnit__DOT__y___05Fh1374454 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1374544) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1374545));
    vlTOPp->mkMmUnit__DOT__y___05Fh1594601 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1594691) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1594692));
    vlTOPp->mkMmUnit__DOT__y___05Fh1814771 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1814861) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1814862));
    vlTOPp->mkMmUnit__DOT__y___05Fh2034918 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2035008) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2035009));
    vlTOPp->mkMmUnit__DOT__y___05Fh2255065 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2255155) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2255156));
    vlTOPp->mkMmUnit__DOT__y___05Fh2475212 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2475302) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2475303));
    vlTOPp->mkMmUnit__DOT__y___05Fh2695382 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2695472) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2695473));
    vlTOPp->mkMmUnit__DOT__y___05Fh2915529 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2915619) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2915620));
    vlTOPp->mkMmUnit__DOT__y___05Fh3135676 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3135766) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3135767));
    vlTOPp->mkMmUnit__DOT__y___05Fh3355823 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3355913) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3355914));
    vlTOPp->mkMmUnit__DOT__y___05Fh411838 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh411567) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh631988 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh631717) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh852138 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh851867) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1072308 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1072037) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1292455 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1292184) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1512602 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1512331) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1732749 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1732478) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1952919 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1952648) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2173066 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2172795) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2393213 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2392942) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2613360 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2613089) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2833530 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2833259) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3053677 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3053406) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3273824 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3273553) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3493971 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3493700) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh191684 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh191413) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d387 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh53535) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh53536)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh53264) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh53265)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d386)));
    vlTOPp->mkMmUnit__DOT__y___05Fh53898 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh53536) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh53535));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2885 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh273689) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh273690)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh273418) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh273419)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2884)));
    vlTOPp->mkMmUnit__DOT__y___05Fh274052 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh273690) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh273689));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5383 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh493839) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh493840)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh493568) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh493569)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5382)));
    vlTOPp->mkMmUnit__DOT__y___05Fh494202 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh493840) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh493839));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7881 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh713989) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh713990)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh713718) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh713719)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7880)));
    vlTOPp->mkMmUnit__DOT__y___05Fh714352 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh713990) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh713989));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10379 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh934159) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh934160)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh933888) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh933889)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10378)));
    vlTOPp->mkMmUnit__DOT__y___05Fh934522 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh934160) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh934159));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12877 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1154306) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1154307)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1154035) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1154036)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12876)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1154669 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1154307) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1154306));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15375 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1374453) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1374454)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1374182) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1374183)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15374)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1374816 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1374454) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1374453));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17873 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1594600) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1594601)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1594329) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1594330)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17872)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1594963 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1594601) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1594600));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20371 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1814770) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1814771)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1814499) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1814500)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20370)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1815133 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1814771) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1814770));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22869 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2034917) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2034918)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2034646) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2034647)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22868)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2035280 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2034918) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2034917));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25367 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2255064) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2255065)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2254793) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2254794)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25366)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2255427 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2255065) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2255064));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27865 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2475211) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2475212)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2474940) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2474941)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27864)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2475574 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2475212) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2475211));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30363 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2695381) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2695382)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2695110) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2695111)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30362)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2695744 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2695382) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2695381));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32861 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2915528) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2915529)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2915257) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2915258)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32860)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2915891 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2915529) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2915528));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35359 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3135675) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3135676)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3135404) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3135405)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35358)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3136038 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3135676) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3135675));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37857 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3355822) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3355823)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3355551) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3355552)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37856)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3356185 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3355823) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3355822));
    vlTOPp->mkMmUnit__DOT__product___05Fh398527 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh411838) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh411567) 
                                                           << 0xeU))) 
                                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4400)));
    vlTOPp->mkMmUnit__DOT__product___05Fh618677 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh631988) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh631717) 
                                                           << 0xeU))) 
                                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6898)));
    vlTOPp->mkMmUnit__DOT__product___05Fh838827 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh852138) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh851867) 
                                                           << 0xeU))) 
                                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9396)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1058997 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1072308) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1072037) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11894)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1279144 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1292455) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1292184) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14392)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1499291 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1512602) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1512331) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16890)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1719438 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1732749) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1732478) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19388)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1939608 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1952919) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1952648) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21886)));
    vlTOPp->mkMmUnit__DOT__product___05Fh2159755 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2173066) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2172795) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24384)));
    vlTOPp->mkMmUnit__DOT__product___05Fh2379902 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2393213) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2392942) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26882)));
    vlTOPp->mkMmUnit__DOT__product___05Fh2600049 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2613360) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2613089) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29380)));
    vlTOPp->mkMmUnit__DOT__product___05Fh2820219 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2833530) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2833259) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31878)));
    vlTOPp->mkMmUnit__DOT__product___05Fh3040366 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3053677) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3053406) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34376)));
    vlTOPp->mkMmUnit__DOT__product___05Fh3260513 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3273824) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3273553) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36874)));
    vlTOPp->mkMmUnit__DOT__product___05Fh3480660 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3493971) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3493700) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39372)));
    vlTOPp->mkMmUnit__DOT__product___05Fh178373 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh191684) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh191413) 
                                                           << 0xeU))) 
                                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1902)));
    vlTOPp->mkMmUnit__DOT__y___05Fh53807 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh53897) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh53898));
    vlTOPp->mkMmUnit__DOT__y___05Fh273961 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh274051) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh274052));
    vlTOPp->mkMmUnit__DOT__y___05Fh494111 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh494201) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh494202));
    vlTOPp->mkMmUnit__DOT__y___05Fh714261 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh714351) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh714352));
    vlTOPp->mkMmUnit__DOT__y___05Fh934431 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh934521) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh934522));
    vlTOPp->mkMmUnit__DOT__y___05Fh1154578 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1154668) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1154669));
    vlTOPp->mkMmUnit__DOT__y___05Fh1374725 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1374815) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1374816));
    vlTOPp->mkMmUnit__DOT__y___05Fh1594872 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1594962) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1594963));
    vlTOPp->mkMmUnit__DOT__y___05Fh1815042 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1815132) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1815133));
    vlTOPp->mkMmUnit__DOT__y___05Fh2035189 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2035279) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2035280));
    vlTOPp->mkMmUnit__DOT__y___05Fh2255336 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2255426) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2255427));
    vlTOPp->mkMmUnit__DOT__y___05Fh2475483 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2475573) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2475574));
    vlTOPp->mkMmUnit__DOT__y___05Fh2695653 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2695743) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2695744));
    vlTOPp->mkMmUnit__DOT__y___05Fh2915800 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2915890) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2915891));
    vlTOPp->mkMmUnit__DOT__y___05Fh3135947 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3136037) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3136038));
    vlTOPp->mkMmUnit__DOT__y___05Fh3356094 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3356184) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3356185));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh398527)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh618677)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh838827)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1058997)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1279144)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1499291)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_1_6_ETC___05F_d16816));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1719438)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_1_9_ETC___05F_d19314));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1939608)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_1_1_ETC___05F_d21812));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2159755)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_1_4_ETC___05F_d24310));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2379902)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_1_6_ETC___05F_d26808));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2600049)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2820219)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3040366)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3260513)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3480660)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh178373)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828));
    vlTOPp->mkMmUnit__DOT__y___05Fh54169 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh53807) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh53806));
    vlTOPp->mkMmUnit__DOT__y___05Fh274323 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh273961) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh273960));
    vlTOPp->mkMmUnit__DOT__y___05Fh494473 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh494111) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh494110));
    vlTOPp->mkMmUnit__DOT__y___05Fh714623 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh714261) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh714260));
    vlTOPp->mkMmUnit__DOT__y___05Fh934793 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh934431) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh934430));
    vlTOPp->mkMmUnit__DOT__y___05Fh1154940 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1154578) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1154577));
    vlTOPp->mkMmUnit__DOT__y___05Fh1375087 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1374725) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1374724));
    vlTOPp->mkMmUnit__DOT__y___05Fh1595234 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1594872) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1594871));
    vlTOPp->mkMmUnit__DOT__y___05Fh1815404 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1815042) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1815041));
    vlTOPp->mkMmUnit__DOT__y___05Fh2035551 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2035189) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2035188));
    vlTOPp->mkMmUnit__DOT__y___05Fh2255698 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2255336) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2255335));
    vlTOPp->mkMmUnit__DOT__y___05Fh2475845 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2475483) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2475482));
    vlTOPp->mkMmUnit__DOT__y___05Fh2696015 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2695653) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2695652));
    vlTOPp->mkMmUnit__DOT__y___05Fh2916162 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2915800) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2915799));
    vlTOPp->mkMmUnit__DOT__y___05Fh3136309 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3135947) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3135946));
    vlTOPp->mkMmUnit__DOT__y___05Fh3356456 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3356094) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3356093));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_ETC___05Fq138 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh414601 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402) 
                                                    >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh414692 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402) 
                                                    >> 9U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh414330 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402) 
                                                    >> 9U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh414421 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402) 
                                                    >> 8U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh414059 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402) 
                                                    >> 8U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh414150 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402) 
                                                    >> 7U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh413788 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402) 
                                                    >> 7U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh413879 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402) 
                                                    >> 6U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh413517 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh413608 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402) 
                                                    >> 5U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh413245 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402) 
                                                    >> 5U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh413336 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402) 
                                                    >> 4U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_ETC___05Fq137 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402) 
                   >> 3U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A)))
            ? 0x10U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh412977 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402) 
                                                    >> 4U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_ETC___05Fq174 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh634751 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900) 
                                                    >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh634842 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900) 
                                                    >> 9U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh634480 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900) 
                                                    >> 9U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh634571 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900) 
                                                    >> 8U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh634209 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900) 
                                                    >> 8U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh634300 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900) 
                                                    >> 7U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh633938 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900) 
                                                    >> 7U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh634029 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900) 
                                                    >> 6U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh633667 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh633758 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900) 
                                                    >> 5U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh633395 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900) 
                                                    >> 5U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh633486 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900) 
                                                    >> 4U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_ETC___05Fq173 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900) 
                   >> 3U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A)))
            ? 0x10U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh633127 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900) 
                                                    >> 4U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_ETC___05Fq209 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh854901 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398) 
                                                    >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh854992 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398) 
                                                    >> 9U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh854630 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398) 
                                                    >> 9U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh854721 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398) 
                                                    >> 8U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh854359 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398) 
                                                    >> 8U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh854450 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398) 
                                                    >> 7U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh854088 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398) 
                                                    >> 7U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh854179 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398) 
                                                    >> 6U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh853817 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh853908 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398) 
                                                    >> 5U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh853545 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398) 
                                                    >> 5U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh853636 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398) 
                                                    >> 4U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_ETC___05Fq208 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398) 
                   >> 3U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A)))
            ? 0x10U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh853277 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398) 
                                                    >> 4U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq244 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1075071 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896) 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1075162 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
}
