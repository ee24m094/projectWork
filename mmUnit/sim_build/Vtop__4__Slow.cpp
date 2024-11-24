// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop::_settle__TOP__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__7\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkMmUnit__DOT__y___05Fh1834477 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1834115) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1834114));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d23069 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2054261) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2054262)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2053990) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2053991)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d23068)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2054624 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2054262) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2054261));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25567 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2274408) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2274409)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2274137) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2274138)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25566)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2274771 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2274409) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2274408));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d28065 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2494555) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2494556)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2494284) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2494285)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d28064)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2494918 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2494556) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2494555));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30563 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2714725) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2714726)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2714454) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2714455)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30562)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2715088 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2714726) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2714725));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d33061 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2934872) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2934873)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2934601) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2934602)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d33060)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2935235 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2934873) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2934872));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35559 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3155019) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3155020)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3154748) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3154749)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35558)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3155382 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3155020) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3155019));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d38057 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3375166) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3375167)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3374895) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3374896)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d38056)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3375529 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3375167) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3375166));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_5_23_ETC___05F_d4667 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh427199) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh427200)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh426928) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh426929)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_5_23_ETC___05F_d4666)));
    vlTOPp->mkMmUnit__DOT__y___05Fh427562 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh427200) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh427199));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_5_72_ETC___05F_d7165 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh647349) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh647350)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh647078) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh647079)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_5_72_ETC___05F_d7164)));
    vlTOPp->mkMmUnit__DOT__y___05Fh647712 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh647350) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh647349));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_5_22_ETC___05F_d9663 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh867499) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh867500)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh867228) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh867229)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_5_22_ETC___05F_d9662)));
    vlTOPp->mkMmUnit__DOT__y___05Fh867862 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh867500) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh867499));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_5_1_ETC___05F_d12161 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1087669) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1087670)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1087398) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1087399)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_5_1_ETC___05F_d12160)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1088032 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1087670) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1087669));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_5_4_ETC___05F_d14659 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1307816) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1307817)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1307545) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1307546)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_5_4_ETC___05F_d14658)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1308179 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1307817) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1307816));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_5_6_ETC___05F_d17157 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1527963) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1527964)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1527692) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1527693)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_5_6_ETC___05F_d17156)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1528326 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1527964) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1527963));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_5_9_ETC___05F_d19655 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1748110) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1748111)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1747839) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1747840)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_5_9_ETC___05F_d19654)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1748473 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1748111) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1748110));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_5_1_ETC___05F_d22153 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1968280) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1968281)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1968009) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1968010)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_5_1_ETC___05F_d22152)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1968643 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1968281) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1968280));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_5_4_ETC___05F_d24651 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2188427) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2188428)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2188156) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2188157)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_5_4_ETC___05F_d24650)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2188790 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2188428) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2188427));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_5_6_ETC___05F_d27149 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2408574) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2408575)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2408303) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2408304)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_5_6_ETC___05F_d27148)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2408937 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2408575) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2408574));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_5_9_ETC___05F_d29647 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2628721) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2628722)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2628450) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2628451)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_5_9_ETC___05F_d29646)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2629084 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2628722) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2628721));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_5_1_ETC___05F_d32145 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2848891) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2848892)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2848620) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2848621)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_5_1_ETC___05F_d32144)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2849254 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2848892) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2848891));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_5_4_ETC___05F_d34643 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3069038) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3069039)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3068767) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3068768)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_5_4_ETC___05F_d34642)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3069401 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3069039) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3069038));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37141 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3289185) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3289186)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3288914) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3288915)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37140)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3289548 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3289186) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3289185));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_5_9_ETC___05F_d39639 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3509332) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3509333)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3509061) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3509062)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_5_9_ETC___05F_d39638)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3509695 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3509333) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3509332));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_5_73_ETC___05F_d2169 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh207045) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh207046)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh206774) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh206775)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_5_73_ETC___05F_d2168)));
    vlTOPp->mkMmUnit__DOT__y___05Fh207408 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh207046) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh207045));
    vlTOPp->mkMmUnit__DOT__y___05Fh73151 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh73241) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh73242));
    vlTOPp->mkMmUnit__DOT__y___05Fh293305 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh293395) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh293396));
    vlTOPp->mkMmUnit__DOT__y___05Fh513455 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh513545) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh513546));
    vlTOPp->mkMmUnit__DOT__y___05Fh733605 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh733695) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh733696));
    vlTOPp->mkMmUnit__DOT__y___05Fh953775 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh953865) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh953866));
    vlTOPp->mkMmUnit__DOT__y___05Fh1173922 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1174012) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1174013));
    vlTOPp->mkMmUnit__DOT__y___05Fh1394069 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1394159) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1394160));
    vlTOPp->mkMmUnit__DOT__y___05Fh1614216 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1614306) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1614307));
    vlTOPp->mkMmUnit__DOT__y___05Fh1834386 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1834476) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1834477));
    vlTOPp->mkMmUnit__DOT__y___05Fh2054533 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2054623) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2054624));
    vlTOPp->mkMmUnit__DOT__y___05Fh2274680 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2274770) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2274771));
    vlTOPp->mkMmUnit__DOT__y___05Fh2494827 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2494917) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2494918));
    vlTOPp->mkMmUnit__DOT__y___05Fh2714997 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2715087) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2715088));
    vlTOPp->mkMmUnit__DOT__y___05Fh2935144 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2935234) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2935235));
    vlTOPp->mkMmUnit__DOT__y___05Fh3155291 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3155381) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3155382));
    vlTOPp->mkMmUnit__DOT__y___05Fh3375438 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3375528) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3375529));
    vlTOPp->mkMmUnit__DOT__y___05Fh427471 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh427561) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh427562));
    vlTOPp->mkMmUnit__DOT__y___05Fh647621 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh647711) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh647712));
    vlTOPp->mkMmUnit__DOT__y___05Fh867771 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh867861) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh867862));
    vlTOPp->mkMmUnit__DOT__y___05Fh1087941 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1088031) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1088032));
    vlTOPp->mkMmUnit__DOT__y___05Fh1308088 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1308178) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1308179));
    vlTOPp->mkMmUnit__DOT__y___05Fh1528235 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1528325) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1528326));
    vlTOPp->mkMmUnit__DOT__y___05Fh1748382 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1748472) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1748473));
    vlTOPp->mkMmUnit__DOT__y___05Fh1968552 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1968642) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1968643));
    vlTOPp->mkMmUnit__DOT__y___05Fh2188699 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2188789) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2188790));
    vlTOPp->mkMmUnit__DOT__y___05Fh2408846 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2408936) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2408937));
    vlTOPp->mkMmUnit__DOT__y___05Fh2628993 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2629083) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2629084));
    vlTOPp->mkMmUnit__DOT__y___05Fh2849163 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2849253) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2849254));
    vlTOPp->mkMmUnit__DOT__y___05Fh3069310 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3069400) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3069401));
    vlTOPp->mkMmUnit__DOT__y___05Fh3289457 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3289547) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3289548));
    vlTOPp->mkMmUnit__DOT__y___05Fh3509604 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3509694) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3509695));
    vlTOPp->mkMmUnit__DOT__y___05Fh207317 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh207407) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh207408));
    vlTOPp->mkMmUnit__DOT__y___05Fh73513 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh73151) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh73150));
    vlTOPp->mkMmUnit__DOT__y___05Fh293667 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh293305) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh293304));
    vlTOPp->mkMmUnit__DOT__y___05Fh513817 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh513455) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh513454));
    vlTOPp->mkMmUnit__DOT__y___05Fh733967 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh733605) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh733604));
    vlTOPp->mkMmUnit__DOT__y___05Fh954137 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh953775) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh953774));
    vlTOPp->mkMmUnit__DOT__y___05Fh1174284 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1173922) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1173921));
    vlTOPp->mkMmUnit__DOT__y___05Fh1394431 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1394069) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1394068));
    vlTOPp->mkMmUnit__DOT__y___05Fh1614578 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1614216) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1614215));
    vlTOPp->mkMmUnit__DOT__y___05Fh1834748 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1834386) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1834385));
    vlTOPp->mkMmUnit__DOT__y___05Fh2054895 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2054533) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2054532));
    vlTOPp->mkMmUnit__DOT__y___05Fh2275042 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2274680) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2274679));
    vlTOPp->mkMmUnit__DOT__y___05Fh2495189 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2494827) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2494826));
    vlTOPp->mkMmUnit__DOT__y___05Fh2715359 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2714997) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2714996));
    vlTOPp->mkMmUnit__DOT__y___05Fh2935506 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2935144) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2935143));
    vlTOPp->mkMmUnit__DOT__y___05Fh3155653 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3155291) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3155290));
    vlTOPp->mkMmUnit__DOT__y___05Fh3375800 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3375438) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3375437));
    vlTOPp->mkMmUnit__DOT__y___05Fh427833 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh427471) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh427470));
    vlTOPp->mkMmUnit__DOT__y___05Fh647983 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh647621) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh647620));
    vlTOPp->mkMmUnit__DOT__y___05Fh868133 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh867771) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh867770));
    vlTOPp->mkMmUnit__DOT__y___05Fh1088303 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1087941) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1087940));
    vlTOPp->mkMmUnit__DOT__y___05Fh1308450 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1308088) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1308087));
    vlTOPp->mkMmUnit__DOT__y___05Fh1528597 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1528235) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1528234));
    vlTOPp->mkMmUnit__DOT__y___05Fh1748744 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1748382) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1748381));
    vlTOPp->mkMmUnit__DOT__y___05Fh1968914 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1968552) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1968551));
    vlTOPp->mkMmUnit__DOT__y___05Fh2189061 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2188699) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2188698));
    vlTOPp->mkMmUnit__DOT__y___05Fh2409208 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2408846) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2408845));
    vlTOPp->mkMmUnit__DOT__y___05Fh2629355 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2628993) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2628992));
    vlTOPp->mkMmUnit__DOT__y___05Fh2849525 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2849163) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2849162));
    vlTOPp->mkMmUnit__DOT__y___05Fh3069672 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3069310) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3069309));
    vlTOPp->mkMmUnit__DOT__y___05Fh3289819 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3289457) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3289456));
    vlTOPp->mkMmUnit__DOT__y___05Fh3509966 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3509604) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3509603));
    vlTOPp->mkMmUnit__DOT__y___05Fh207679 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh207317) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh207316));
    vlTOPp->mkMmUnit__DOT__y___05Fh73422 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh73512) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh73513));
    vlTOPp->mkMmUnit__DOT__y___05Fh293576 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh293666) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh293667));
    vlTOPp->mkMmUnit__DOT__y___05Fh513726 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh513816) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh513817));
    vlTOPp->mkMmUnit__DOT__y___05Fh733876 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh733966) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh733967));
    vlTOPp->mkMmUnit__DOT__y___05Fh954046 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh954136) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh954137));
    vlTOPp->mkMmUnit__DOT__y___05Fh1174193 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1174283) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1174284));
    vlTOPp->mkMmUnit__DOT__y___05Fh1394340 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1394430) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1394431));
    vlTOPp->mkMmUnit__DOT__y___05Fh1614487 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1614577) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1614578));
    vlTOPp->mkMmUnit__DOT__y___05Fh1834657 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1834747) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1834748));
    vlTOPp->mkMmUnit__DOT__y___05Fh2054804 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2054894) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2054895));
    vlTOPp->mkMmUnit__DOT__y___05Fh2274951 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2275041) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2275042));
    vlTOPp->mkMmUnit__DOT__y___05Fh2495098 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2495188) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2495189));
    vlTOPp->mkMmUnit__DOT__y___05Fh2715268 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2715358) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2715359));
    vlTOPp->mkMmUnit__DOT__y___05Fh2935415 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2935505) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2935506));
    vlTOPp->mkMmUnit__DOT__y___05Fh3155562 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3155652) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3155653));
    vlTOPp->mkMmUnit__DOT__y___05Fh3375709 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3375799) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3375800));
    vlTOPp->mkMmUnit__DOT__y___05Fh427742 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh427832) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh427833));
    vlTOPp->mkMmUnit__DOT__y___05Fh647892 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh647982) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh647983));
    vlTOPp->mkMmUnit__DOT__y___05Fh868042 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh868132) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh868133));
    vlTOPp->mkMmUnit__DOT__y___05Fh1088212 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1088302) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1088303));
    vlTOPp->mkMmUnit__DOT__y___05Fh1308359 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1308449) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1308450));
    vlTOPp->mkMmUnit__DOT__y___05Fh1528506 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1528596) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1528597));
    vlTOPp->mkMmUnit__DOT__y___05Fh1748653 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1748743) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1748744));
    vlTOPp->mkMmUnit__DOT__y___05Fh1968823 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1968913) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1968914));
    vlTOPp->mkMmUnit__DOT__y___05Fh2188970 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2189060) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2189061));
    vlTOPp->mkMmUnit__DOT__y___05Fh2409117 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2409207) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2409208));
    vlTOPp->mkMmUnit__DOT__y___05Fh2629264 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2629354) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2629355));
    vlTOPp->mkMmUnit__DOT__y___05Fh2849434 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2849524) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2849525));
    vlTOPp->mkMmUnit__DOT__y___05Fh3069581 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3069671) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3069672));
    vlTOPp->mkMmUnit__DOT__y___05Fh3289728 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3289818) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3289819));
    vlTOPp->mkMmUnit__DOT__y___05Fh3509875 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3509965) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3509966));
    vlTOPp->mkMmUnit__DOT__y___05Fh207588 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh207678) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh207679));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d588 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh73421) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh73422)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh73150) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh73151)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d587)));
    vlTOPp->mkMmUnit__DOT__y___05Fh73784 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh73422) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh73421));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d3086 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh293575) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh293576)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh293304) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh293305)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d3085)));
    vlTOPp->mkMmUnit__DOT__y___05Fh293938 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh293576) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh293575));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5584 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh513725) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh513726)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh513454) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh513455)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5583)));
    vlTOPp->mkMmUnit__DOT__y___05Fh514088 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh513726) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh513725));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d8082 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh733875) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh733876)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh733604) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh733605)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d8081)));
    vlTOPp->mkMmUnit__DOT__y___05Fh734238 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh733876) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh733875));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10580 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh954045) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh954046)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh953774) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh953775)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10579)));
    vlTOPp->mkMmUnit__DOT__y___05Fh954408 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh954046) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh954045));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d13078 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1174192) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1174193)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1173921) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1173922)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d13077)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1174555 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1174193) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1174192));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15576 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1394339) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1394340)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1394068) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1394069)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15575)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1394702 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1394340) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1394339));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d18074 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1614486) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1614487)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1614215) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1614216)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d18073)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1614849 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1614487) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1614486));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20572 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1834656) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1834657)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1834385) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1834386)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20571)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1835019 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1834657) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1834656));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d23070 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2054803) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2054804)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2054532) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2054533)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d23069)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2055166 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2054804) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2054803));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25568 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2274950) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2274951)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2274679) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2274680)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25567)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2275313 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2274951) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2274950));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d28066 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2495097) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2495098)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2494826) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2494827)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d28065)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2495460 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2495098) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2495097));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30564 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2715267) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2715268)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2714996) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2714997)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30563)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2715630 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2715268) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2715267));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d33062 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2935414) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2935415)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2935143) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2935144)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d33061)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2935777 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2935415) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2935414));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35560 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3155561) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3155562)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3155290) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3155291)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35559)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3155924 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3155562) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3155561));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d38058 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3375708) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3375709)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3375437) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3375438)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d38057)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3376071 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3375709) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3375708));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT___05FETC___05F_d4668 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh427741) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh427742)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh427470) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh427471)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_5_23_ETC___05F_d4667)));
    vlTOPp->mkMmUnit__DOT__y___05Fh428104 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh427742) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh427741));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT___05FETC___05F_d7166 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh647891) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh647892)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh647620) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh647621)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_5_72_ETC___05F_d7165)));
    vlTOPp->mkMmUnit__DOT__y___05Fh648254 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh647892) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh647891));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT___05FETC___05F_d9664 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh868041) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh868042)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh867770) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh867771)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_5_22_ETC___05F_d9663)));
    vlTOPp->mkMmUnit__DOT__y___05Fh868404 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh868042) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh868041));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_ETC___05F_d12162 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1088211) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1088212)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1087940) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1087941)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_5_1_ETC___05F_d12161)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1088574 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1088212) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1088211));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_ETC___05F_d14660 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1308358) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1308359)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1308087) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1308088)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_5_4_ETC___05F_d14659)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1308721 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1308359) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1308358));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_ETC___05F_d17158 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1528505) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1528506)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1528234) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1528235)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_5_6_ETC___05F_d17157)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1528868 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1528506) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1528505));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_ETC___05F_d19656 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1748652) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1748653)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1748381) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1748382)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_5_9_ETC___05F_d19655)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1749015 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1748653) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1748652));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_ETC___05F_d22154 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1968822) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1968823)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1968551) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1968552)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_5_1_ETC___05F_d22153)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1969185 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1968823) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1968822));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_ETC___05F_d24652 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2188969) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2188970)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2188698) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2188699)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_5_4_ETC___05F_d24651)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2189332 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2188970) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2188969));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_ETC___05F_d27150 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2409116) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2409117)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2408845) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2408846)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_5_6_ETC___05F_d27149)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2409479 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2409117) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2409116));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_ETC___05F_d29648 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2629263) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2629264)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2628992) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2628993)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_5_9_ETC___05F_d29647)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2629626 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2629264) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2629263));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_ETC___05F_d32146 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2849433) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2849434)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2849162) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2849163)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_5_1_ETC___05F_d32145)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2849796 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2849434) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2849433));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_ETC___05F_d34644 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3069580) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3069581)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3069309) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3069310)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_5_4_ETC___05F_d34643)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3069943 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3069581) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3069580));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_ETC___05F_d37142 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3289727) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3289728)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3289456) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3289457)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37141)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3290090 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3289728) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3289727));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_ETC___05F_d39640 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3509874) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3509875)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3509603) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3509604)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_5_9_ETC___05F_d39639)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3510237 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3509875) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3509874));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT___05FETC___05F_d2170 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh207587) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh207588)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh207316) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh207317)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_5_73_ETC___05F_d2169)));
    vlTOPp->mkMmUnit__DOT__y___05Fh207950 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh207588) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh207587));
    vlTOPp->mkMmUnit__DOT__y___05Fh73693 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh73783) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh73784));
    vlTOPp->mkMmUnit__DOT__y___05Fh293847 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh293937) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh293938));
    vlTOPp->mkMmUnit__DOT__y___05Fh513997 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh514087) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh514088));
    vlTOPp->mkMmUnit__DOT__y___05Fh734147 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh734237) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh734238));
    vlTOPp->mkMmUnit__DOT__y___05Fh954317 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh954407) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh954408));
    vlTOPp->mkMmUnit__DOT__y___05Fh1174464 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1174554) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1174555));
    vlTOPp->mkMmUnit__DOT__y___05Fh1394611 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1394701) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1394702));
    vlTOPp->mkMmUnit__DOT__y___05Fh1614758 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1614848) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1614849));
    vlTOPp->mkMmUnit__DOT__y___05Fh1834928 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1835018) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1835019));
    vlTOPp->mkMmUnit__DOT__y___05Fh2055075 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2055165) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2055166));
    vlTOPp->mkMmUnit__DOT__y___05Fh2275222 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2275312) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2275313));
    vlTOPp->mkMmUnit__DOT__y___05Fh2495369 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2495459) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2495460));
    vlTOPp->mkMmUnit__DOT__y___05Fh2715539 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2715629) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2715630));
    vlTOPp->mkMmUnit__DOT__y___05Fh2935686 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2935776) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2935777));
    vlTOPp->mkMmUnit__DOT__y___05Fh3155833 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3155923) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3155924));
    vlTOPp->mkMmUnit__DOT__y___05Fh3375980 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3376070) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3376071));
    vlTOPp->mkMmUnit__DOT__y___05Fh428013 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_5_23_ETC___05F_d4608) 
                                                    >> 0xdU) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh428104)));
    vlTOPp->mkMmUnit__DOT__y___05Fh648163 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_5_72_ETC___05F_d7106) 
                                                    >> 0xdU) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh648254)));
    vlTOPp->mkMmUnit__DOT__y___05Fh868313 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_5_22_ETC___05F_d9604) 
                                                    >> 0xdU) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh868404)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1088483 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_5_1_ETC___05F_d12102) 
                                                >> 0xdU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1088574)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1308630 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_5_4_ETC___05F_d14600) 
                                                >> 0xdU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1308721)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1528777 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_5_6_ETC___05F_d17098) 
                                                >> 0xdU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1528868)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1748924 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_5_9_ETC___05F_d19596) 
                                                >> 0xdU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1749015)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1969094 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_5_1_ETC___05F_d22094) 
                                                >> 0xdU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1969185)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2189241 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_5_4_ETC___05F_d24592) 
                                                >> 0xdU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2189332)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2409388 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_5_6_ETC___05F_d27090) 
                                                >> 0xdU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2409479)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2629535 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_5_9_ETC___05F_d29588) 
                                                >> 0xdU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2629626)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2849705 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_5_1_ETC___05F_d32086) 
                                                >> 0xdU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2849796)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3069852 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_5_4_ETC___05F_d34584) 
                                                >> 0xdU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3069943)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3289999 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37082) 
                                                >> 0xdU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3290090)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3510146 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_5_9_ETC___05F_d39580) 
                                                >> 0xdU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3510237)));
    vlTOPp->mkMmUnit__DOT__y___05Fh207859 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_5_73_ETC___05F_d2110) 
                                                    >> 0xdU) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh207950)));
    vlTOPp->mkMmUnit__DOT__y___05Fh74055 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh73693) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh73692));
    vlTOPp->mkMmUnit__DOT__y___05Fh294209 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh293847) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh293846));
    vlTOPp->mkMmUnit__DOT__y___05Fh514359 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh513997) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh513996));
    vlTOPp->mkMmUnit__DOT__y___05Fh734509 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh734147) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh734146));
    vlTOPp->mkMmUnit__DOT__y___05Fh954679 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh954317) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh954316));
    vlTOPp->mkMmUnit__DOT__y___05Fh1174826 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1174464) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1174463));
    vlTOPp->mkMmUnit__DOT__y___05Fh1394973 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1394611) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1394610));
    vlTOPp->mkMmUnit__DOT__y___05Fh1615120 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1614758) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1614757));
    vlTOPp->mkMmUnit__DOT__y___05Fh1835290 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1834928) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1834927));
    vlTOPp->mkMmUnit__DOT__y___05Fh2055437 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2055075) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2055074));
    vlTOPp->mkMmUnit__DOT__y___05Fh2275584 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2275222) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2275221));
    vlTOPp->mkMmUnit__DOT__y___05Fh2495731 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2495369) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2495368));
    vlTOPp->mkMmUnit__DOT__y___05Fh2715901 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2715539) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2715538));
    vlTOPp->mkMmUnit__DOT__y___05Fh2936048 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2935686) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2935685));
    vlTOPp->mkMmUnit__DOT__y___05Fh3156195 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3155833) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3155832));
    vlTOPp->mkMmUnit__DOT__y___05Fh3376342 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3375980) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3375979));
    vlTOPp->mkMmUnit__DOT__y___05Fh428284 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh428013) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_5_23_ETC___05F_d4608) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh648434 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh648163) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_5_72_ETC___05F_d7106) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh868584 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh868313) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_5_22_ETC___05F_d9604) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1088754 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1088483) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_5_1_ETC___05F_d12102) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1308901 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1308630) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_5_4_ETC___05F_d14600) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1529048 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1528777) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_5_6_ETC___05F_d17098) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1749195 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1748924) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_5_9_ETC___05F_d19596) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1969365 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1969094) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_5_1_ETC___05F_d22094) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2189512 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2189241) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_5_4_ETC___05F_d24592) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2409659 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2409388) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_5_6_ETC___05F_d27090) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2629806 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2629535) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_5_9_ETC___05F_d29588) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2849976 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2849705) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_5_1_ETC___05F_d32086) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3070123 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3069852) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_5_4_ETC___05F_d34584) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3290270 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3289999) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37082) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3510417 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3510146) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_5_9_ETC___05F_d39580) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh208130 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh207859) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_5_73_ETC___05F_d2110) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh73964 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh74054) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh74055));
    vlTOPp->mkMmUnit__DOT__y___05Fh294118 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh294208) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh294209));
    vlTOPp->mkMmUnit__DOT__y___05Fh514268 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh514358) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh514359));
    vlTOPp->mkMmUnit__DOT__y___05Fh734418 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh734508) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh734509));
    vlTOPp->mkMmUnit__DOT__y___05Fh954588 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh954678) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh954679));
    vlTOPp->mkMmUnit__DOT__y___05Fh1174735 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1174825) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1174826));
    vlTOPp->mkMmUnit__DOT__y___05Fh1394882 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1394972) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1394973));
    vlTOPp->mkMmUnit__DOT__y___05Fh1615029 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1615119) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1615120));
    vlTOPp->mkMmUnit__DOT__y___05Fh1835199 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1835289) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1835290));
    vlTOPp->mkMmUnit__DOT__y___05Fh2055346 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2055436) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2055437));
    vlTOPp->mkMmUnit__DOT__y___05Fh2275493 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2275583) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2275584));
    vlTOPp->mkMmUnit__DOT__y___05Fh2495640 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2495730) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2495731));
    vlTOPp->mkMmUnit__DOT__y___05Fh2715810 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2715900) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2715901));
    vlTOPp->mkMmUnit__DOT__y___05Fh2935957 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2936047) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2936048));
    vlTOPp->mkMmUnit__DOT__y___05Fh3156104 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3156194) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3156195));
    vlTOPp->mkMmUnit__DOT__y___05Fh3376251 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3376341) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3376342));
    vlTOPp->mkMmUnit__DOT__product___05Fh396755 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_5_23_ETC___05F_d4608)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh428284) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_5_23_ETC___05F_d4608)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh428013) 
                                                           << 0xeU))) 
                                                      | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT___05FETC___05F_d4668)));
    vlTOPp->mkMmUnit__DOT__product___05Fh616905 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_5_72_ETC___05F_d7106)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh648434) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_5_72_ETC___05F_d7106)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh648163) 
                                                           << 0xeU))) 
                                                      | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT___05FETC___05F_d7166)));
    vlTOPp->mkMmUnit__DOT__product___05Fh837055 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_5_22_ETC___05F_d9604)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh868584) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_5_22_ETC___05F_d9604)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh868313) 
                                                           << 0xeU))) 
                                                      | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT___05FETC___05F_d9664)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1057225 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_5_1_ETC___05F_d12102)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1088754) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_5_1_ETC___05F_d12102)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1088483) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_ETC___05F_d12162)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1277372 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_5_4_ETC___05F_d14600)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1308901) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_5_4_ETC___05F_d14600)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1308630) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_ETC___05F_d14660)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1497519 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_5_6_ETC___05F_d17098)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1529048) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_5_6_ETC___05F_d17098)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1528777) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_ETC___05F_d17158)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1717666 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_5_9_ETC___05F_d19596)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1749195) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_5_9_ETC___05F_d19596)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1748924) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_ETC___05F_d19656)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1937836 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_5_1_ETC___05F_d22094)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1969365) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_5_1_ETC___05F_d22094)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1969094) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_ETC___05F_d22154)));
    vlTOPp->mkMmUnit__DOT__product___05Fh2157983 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_5_4_ETC___05F_d24592)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2189512) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_5_4_ETC___05F_d24592)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2189241) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_ETC___05F_d24652)));
    vlTOPp->mkMmUnit__DOT__product___05Fh2378130 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_5_6_ETC___05F_d27090)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2409659) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_5_6_ETC___05F_d27090)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2409388) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_ETC___05F_d27150)));
    vlTOPp->mkMmUnit__DOT__product___05Fh2598277 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_5_9_ETC___05F_d29588)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2629806) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_5_9_ETC___05F_d29588)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2629535) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_ETC___05F_d29648)));
    vlTOPp->mkMmUnit__DOT__product___05Fh2818447 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_5_1_ETC___05F_d32086)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2849976) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_5_1_ETC___05F_d32086)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2849705) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_ETC___05F_d32146)));
    vlTOPp->mkMmUnit__DOT__product___05Fh3038594 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_5_4_ETC___05F_d34584)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3070123) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_5_4_ETC___05F_d34584)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3069852) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_ETC___05F_d34644)));
    vlTOPp->mkMmUnit__DOT__product___05Fh3258741 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37082)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3290270) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37082)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3289999) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_ETC___05F_d37142)));
    vlTOPp->mkMmUnit__DOT__product___05Fh3478888 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_5_9_ETC___05F_d39580)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3510417) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_5_9_ETC___05F_d39580)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3510146) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_ETC___05F_d39640)));
    vlTOPp->mkMmUnit__DOT__product___05Fh176601 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_5_73_ETC___05F_d2110)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh208130) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_5_73_ETC___05F_d2110)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh207859) 
                                                           << 0xeU))) 
                                                      | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT___05FETC___05F_d2170)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d589 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh73963) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh73964)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh73692) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh73693)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d588)));
    vlTOPp->mkMmUnit__DOT__y___05Fh74326 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh73964) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh73963));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d3087 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh294117) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh294118)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh293846) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh293847)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d3086)));
    vlTOPp->mkMmUnit__DOT__y___05Fh294480 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh294118) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh294117));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5585 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh514267) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh514268)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh513996) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh513997)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5584)));
    vlTOPp->mkMmUnit__DOT__y___05Fh514630 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh514268) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh514267));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d8083 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh734417) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh734418)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh734146) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh734147)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d8082)));
    vlTOPp->mkMmUnit__DOT__y___05Fh734780 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh734418) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh734417));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10581 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh954587) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh954588)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh954316) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh954317)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10580)));
    vlTOPp->mkMmUnit__DOT__y___05Fh954950 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh954588) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh954587));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d13079 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1174734) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1174735)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1174463) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1174464)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d13078)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1175097 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1174735) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1174734));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15577 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1394881) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1394882)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1394610) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1394611)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15576)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1395244 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1394882) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1394881));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d18075 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1615028) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1615029)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1614757) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1614758)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d18074)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1615391 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1615029) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1615028));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20573 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1835198) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1835199)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1834927) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1834928)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20572)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1835561 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1835199) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1835198));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d23071 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2055345) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2055346)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2055074) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2055075)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d23070)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2055708 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2055346) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2055345));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25569 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2275492) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2275493)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2275221) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2275222)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25568)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2275855 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2275493) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2275492));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d28067 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2495639) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2495640)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2495368) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2495369)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d28066)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2496002 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2495640) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2495639));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30565 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2715809) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2715810)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2715538) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2715539)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30564)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2716172 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2715810) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2715809));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d33063 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2935956) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2935957)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2935685) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2935686)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d33062)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2936319 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2935957) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2935956));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35561 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3156103) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3156104)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3155832) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3155833)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35560)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3156466 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3156104) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3156103));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d38059 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3376250) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3376251)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3375979) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3375980)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d38058)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3376613 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3376251) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3376250));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670 
        = ((0x40U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh396755)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_5_23_ETC___05F_d4608));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168 
        = ((0x40U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh616905)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_5_72_ETC___05F_d7106));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666 
        = ((0x40U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh837055)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_5_22_ETC___05F_d9604));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164 
        = ((0x40U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1057225)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_5_1_ETC___05F_d12102));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662 
        = ((0x40U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1277372)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_5_4_ETC___05F_d14600));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160 
        = ((0x40U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1497519)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_5_6_ETC___05F_d17098));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658 
        = ((0x40U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1717666)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_5_9_ETC___05F_d19596));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156 
        = ((0x40U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1937836)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_5_1_ETC___05F_d22094));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654 
        = ((0x40U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2157983)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_5_4_ETC___05F_d24592));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152 
        = ((0x40U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2378130)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_5_6_ETC___05F_d27090));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650 
        = ((0x40U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2598277)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_5_9_ETC___05F_d29588));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148 
        = ((0x40U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2818447)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_5_1_ETC___05F_d32086));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646 
        = ((0x40U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3038594)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_5_4_ETC___05F_d34584));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144 
        = ((0x40U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3258741)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37082));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642 
        = ((0x40U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3478888)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_5_9_ETC___05F_d39580));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172 
        = ((0x40U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh176601)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_5_73_ETC___05F_d2110));
    vlTOPp->mkMmUnit__DOT__y___05Fh74235 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh74325) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh74326));
    vlTOPp->mkMmUnit__DOT__y___05Fh294389 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh294479) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh294480));
    vlTOPp->mkMmUnit__DOT__y___05Fh514539 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh514629) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh514630));
    vlTOPp->mkMmUnit__DOT__y___05Fh734689 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh734779) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh734780));
    vlTOPp->mkMmUnit__DOT__y___05Fh954859 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh954949) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh954950));
    vlTOPp->mkMmUnit__DOT__y___05Fh1175006 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1175096) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1175097));
    vlTOPp->mkMmUnit__DOT__y___05Fh1395153 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1395243) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1395244));
    vlTOPp->mkMmUnit__DOT__y___05Fh1615300 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1615390) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1615391));
    vlTOPp->mkMmUnit__DOT__y___05Fh1835470 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1835560) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1835561));
    vlTOPp->mkMmUnit__DOT__y___05Fh2055617 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2055707) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2055708));
    vlTOPp->mkMmUnit__DOT__y___05Fh2275764 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2275854) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2275855));
    vlTOPp->mkMmUnit__DOT__y___05Fh2495911 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2496001) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2496002));
    vlTOPp->mkMmUnit__DOT__y___05Fh2716081 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2716171) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2716172));
    vlTOPp->mkMmUnit__DOT__y___05Fh2936228 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2936318) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2936319));
    vlTOPp->mkMmUnit__DOT__y___05Fh3156375 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3156465) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3156466));
    vlTOPp->mkMmUnit__DOT__y___05Fh3376522 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3376612) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3376613));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_ETC___05Fq146 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4720 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670) 
                  >> 7U) ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A)));
    vlTOPp->mkMmUnit__DOT__x___05Fh432111 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670) 
                                                    >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh432202 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670) 
                                                    >> 0xdU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh431840 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670) 
                                                    >> 0xdU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh431931 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670) 
                                                    >> 0xcU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh431569 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670) 
                                                    >> 0xcU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh431660 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670) 
                                                    >> 0xbU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh431298 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670) 
                                                    >> 0xbU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh431389 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670) 
                                                    >> 0xaU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh431027 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670) 
                                                    >> 0xaU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh431118 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670) 
                                                    >> 9U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh430755 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670) 
                                                    >> 9U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh430846 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670) 
                                                    >> 8U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_ETC___05Fq145 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670) 
                   >> 7U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A)))
            ? 0x100U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh430487 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670) 
                                                    >> 8U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_ETC___05Fq182 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7218 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168) 
                  >> 7U) ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A)));
    vlTOPp->mkMmUnit__DOT__x___05Fh652261 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168) 
                                                    >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh652352 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168) 
                                                    >> 0xdU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh651990 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168) 
                                                    >> 0xdU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh652081 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168) 
                                                    >> 0xcU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh651719 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168) 
                                                    >> 0xcU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh651810 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168) 
                                                    >> 0xbU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh651448 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168) 
                                                    >> 0xbU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh651539 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168) 
                                                    >> 0xaU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh651177 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168) 
                                                    >> 0xaU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh651268 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168) 
                                                    >> 9U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh650905 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168) 
                                                    >> 9U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh650996 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168) 
                                                    >> 8U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_ETC___05Fq181 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168) 
                   >> 7U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A)))
            ? 0x100U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh650637 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168) 
                                                    >> 8U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_ETC___05Fq217 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9716 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666) 
                  >> 7U) ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A)));
    vlTOPp->mkMmUnit__DOT__x___05Fh872411 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666) 
                                                    >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh872502 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666) 
                                                    >> 0xdU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh872140 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666) 
                                                    >> 0xdU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh872231 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666) 
                                                    >> 0xcU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh871869 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666) 
                                                    >> 0xcU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh871960 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666) 
                                                    >> 0xbU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh871598 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666) 
                                                    >> 0xbU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh871689 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666) 
                                                    >> 0xaU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh871327 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666) 
                                                    >> 0xaU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh871418 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666) 
                                                    >> 9U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh871055 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666) 
                                                    >> 9U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh871146 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666) 
                                                    >> 8U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_ETC___05Fq216 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666) 
                   >> 7U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A)))
            ? 0x100U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh870787 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666) 
                                                    >> 8U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq252 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12214 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164) 
                  >> 7U) ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1092581 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164) 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1092672 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164) 
                                                >> 0xdU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1092310 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164) 
                                                >> 0xdU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1092401 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164) 
                                                >> 0xcU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1092039 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164) 
                                                >> 0xcU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1092130 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1091768 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1091859 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1091497 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1091588 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1091225 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1091316 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq251 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164) 
                   >> 7U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A)))
            ? 0x100U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1090957 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq287 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14712 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662) 
                  >> 7U) ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1312728 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662) 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1312819 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662) 
                                                >> 0xdU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1312457 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662) 
                                                >> 0xdU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1312548 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662) 
                                                >> 0xcU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1312186 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662) 
                                                >> 0xcU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1312277 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1311915 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1312006 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1311644 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1311735 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1311372 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1311463 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq286 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662) 
                   >> 7U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A)))
            ? 0x100U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1311104 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq322 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17210 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160) 
                  >> 7U) ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1532875 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160) 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1532966 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160) 
                                                >> 0xdU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1532604 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160) 
                                                >> 0xdU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1532695 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160) 
                                                >> 0xcU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1532333 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160) 
                                                >> 0xcU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1532424 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1532062 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1532153 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1531791 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1531882 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1531519 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1531610 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq321 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160) 
                   >> 7U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A)))
            ? 0x100U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1531251 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq357 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19708 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658) 
                  >> 7U) ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1753022 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658) 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1753113 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658) 
                                                >> 0xdU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1752751 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658) 
                                                >> 0xdU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1752842 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658) 
                                                >> 0xcU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1752480 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658) 
                                                >> 0xcU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1752571 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1752209 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1752300 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1751938 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1752029 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1751666 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1751757 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq356 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658) 
                   >> 7U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A)))
            ? 0x100U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1751398 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq392 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22206 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156) 
                  >> 7U) ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1973192 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156) 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1973283 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156) 
                                                >> 0xdU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1972921 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156) 
                                                >> 0xdU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1973012 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156) 
                                                >> 0xcU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1972650 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156) 
                                                >> 0xcU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1972741 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1972379 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1972470 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1972108 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1972199 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1971836 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1971927 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq391 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156) 
                   >> 7U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A)))
            ? 0x100U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1971568 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq427 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24704 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654) 
                  >> 7U) ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2193339 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654) 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2193430 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654) 
                                                >> 0xdU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2193068 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654) 
                                                >> 0xdU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2193159 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654) 
                                                >> 0xcU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2192797 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654) 
                                                >> 0xcU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2192888 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2192526 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2192617 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2192255 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2192346 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2191983 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2192074 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq426 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654) 
                   >> 7U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A)))
            ? 0x100U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2191715 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq462 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27202 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152) 
                  >> 7U) ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2413486 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152) 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2413577 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152) 
                                                >> 0xdU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2413215 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152) 
                                                >> 0xdU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2413306 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152) 
                                                >> 0xcU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2412944 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152) 
                                                >> 0xcU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2413035 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2412673 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2412764 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2412402 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2412493 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2412130 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2412221 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq461 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152) 
                   >> 7U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A)))
            ? 0x100U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2411862 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq497 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29700 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650) 
                  >> 7U) ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2633633 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650) 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2633724 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650) 
                                                >> 0xdU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2633362 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650) 
                                                >> 0xdU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2633453 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650) 
                                                >> 0xcU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2633091 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650) 
                                                >> 0xcU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2633182 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2632820 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2632911 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2632549 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2632640 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2632277 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2632368 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq496 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650) 
                   >> 7U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A)))
            ? 0x100U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2632009 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq532 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32198 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148) 
                  >> 7U) ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2853803 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148) 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2853894 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148) 
                                                >> 0xdU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2853532 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148) 
                                                >> 0xdU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2853623 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148) 
                                                >> 0xcU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2853261 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148) 
                                                >> 0xcU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2853352 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2852990 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2853081 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2852719 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2852810 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2852447 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2852538 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq531 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148) 
                   >> 7U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A)))
            ? 0x100U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2852179 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq567 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34696 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646) 
                  >> 7U) ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3073950 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646) 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3074041 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646) 
                                                >> 0xdU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3073679 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646) 
                                                >> 0xdU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3073770 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646) 
                                                >> 0xcU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3073408 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646) 
                                                >> 0xcU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3073499 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3073137 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3073228 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3072866 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3072957 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3072594 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3072685 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq566 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646) 
                   >> 7U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A)))
            ? 0x100U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3072326 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq602 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37194 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144) 
                  >> 7U) ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3294097 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144) 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3294188 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144) 
                                                >> 0xdU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3293826 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144) 
                                                >> 0xdU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3293917 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144) 
                                                >> 0xcU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3293555 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144) 
                                                >> 0xcU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3293646 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3293284 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3293375 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3293013 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3293104 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3292741 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3292832 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq601 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144) 
                   >> 7U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A)))
            ? 0x100U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3292473 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq637 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39692 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642) 
                  >> 7U) ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3514244 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642) 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3514335 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642) 
                                                >> 0xdU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3513973 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642) 
                                                >> 0xdU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3514064 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642) 
                                                >> 0xcU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3513702 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642) 
                                                >> 0xcU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3513793 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3513431 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3513522 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3513160 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3513251 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3512888 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3512979 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq636 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642) 
                   >> 7U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A)))
            ? 0x100U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3512620 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_ETC___05Fq112 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2222 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172) 
                  >> 7U) ^ (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A)));
    vlTOPp->mkMmUnit__DOT__x___05Fh211957 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172) 
                                                    >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh212048 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172) 
                                                    >> 0xdU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh211686 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172) 
                                                    >> 0xdU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh211777 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172) 
                                                    >> 0xcU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh211415 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172) 
                                                    >> 0xcU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh211506 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172) 
                                                    >> 0xbU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh211144 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172) 
                                                    >> 0xbU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh211235 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172) 
                                                    >> 0xaU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh210873 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172) 
                                                    >> 0xaU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh210964 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172) 
                                                    >> 9U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh210601 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172) 
                                                    >> 9U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh210692 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172) 
                                                    >> 8U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_ETC___05Fq111 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172) 
                   >> 7U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A)))
            ? 0x100U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh210333 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172) 
                                                    >> 8U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh74597 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh74235) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh74234));
    vlTOPp->mkMmUnit__DOT__y___05Fh294751 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh294389) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh294388));
    vlTOPp->mkMmUnit__DOT__y___05Fh514901 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh514539) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh514538));
    vlTOPp->mkMmUnit__DOT__y___05Fh735051 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh734689) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh734688));
    vlTOPp->mkMmUnit__DOT__y___05Fh955221 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh954859) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh954858));
    vlTOPp->mkMmUnit__DOT__y___05Fh1175368 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1175006) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1175005));
    vlTOPp->mkMmUnit__DOT__y___05Fh1395515 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1395153) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1395152));
    vlTOPp->mkMmUnit__DOT__y___05Fh1615662 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1615300) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1615299));
    vlTOPp->mkMmUnit__DOT__y___05Fh1835832 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1835470) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1835469));
    vlTOPp->mkMmUnit__DOT__y___05Fh2055979 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2055617) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2055616));
    vlTOPp->mkMmUnit__DOT__y___05Fh2276126 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2275764) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2275763));
    vlTOPp->mkMmUnit__DOT__y___05Fh2496273 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2495911) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2495910));
    vlTOPp->mkMmUnit__DOT__y___05Fh2716443 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2716081) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2716080));
    vlTOPp->mkMmUnit__DOT__y___05Fh2936590 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2936228) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2936227));
    vlTOPp->mkMmUnit__DOT__y___05Fh3156737 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3156375) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3156374));
    vlTOPp->mkMmUnit__DOT__y___05Fh3376884 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3376522) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3376521));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4718 
        = (1U & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh430487) 
                 ^ (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_ETC___05Fq145 
                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh430847 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_ETC___05Fq145 
                                              >> 8U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh430487));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7216 
        = (1U & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh650637) 
                 ^ (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_ETC___05Fq181 
                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh650997 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_ETC___05Fq181 
                                              >> 8U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh650637));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9714 
        = (1U & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh870787) 
                 ^ (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_ETC___05Fq216 
                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh871147 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_ETC___05Fq216 
                                              >> 8U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh870787));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12212 
        = (1U & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1090957) 
                 ^ (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq251 
                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1091317 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq251 
                                               >> 8U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1090957));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14710 
        = (1U & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1311104) 
                 ^ (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq286 
                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1311464 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq286 
                                               >> 8U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1311104));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17208 
        = (1U & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1531251) 
                 ^ (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq321 
                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1531611 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq321 
                                               >> 8U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1531251));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19706 
        = (1U & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1751398) 
                 ^ (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq356 
                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1751758 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq356 
                                               >> 8U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1751398));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22204 
        = (1U & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1971568) 
                 ^ (vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq391 
                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1971928 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq391 
                                               >> 8U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1971568));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24702 
        = (1U & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2191715) 
                 ^ (vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq426 
                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2192075 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq426 
                                               >> 8U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2191715));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27200 
        = (1U & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2411862) 
                 ^ (vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq461 
                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2412222 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq461 
                                               >> 8U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2411862));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29698 
        = (1U & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2632009) 
                 ^ (vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq496 
                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2632369 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq496 
                                               >> 8U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2632009));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32196 
        = (1U & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2852179) 
                 ^ (vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq531 
                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2852539 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq531 
                                               >> 8U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2852179));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34694 
        = (1U & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3072326) 
                 ^ (vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq566 
                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3072686 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq566 
                                               >> 8U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3072326));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37192 
        = (1U & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3292473) 
                 ^ (vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq601 
                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3292833 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq601 
                                               >> 8U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3292473));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39690 
        = (1U & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3512620) 
                 ^ (vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq636 
                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3512980 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq636 
                                               >> 8U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3512620));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2220 
        = (1U & ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh210333) 
                 ^ (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_ETC___05Fq111 
                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh210693 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_ETC___05Fq111 
                                              >> 8U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh210333));
    vlTOPp->mkMmUnit__DOT__y___05Fh74506 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh74596) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh74597));
    vlTOPp->mkMmUnit__DOT__y___05Fh294660 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh294750) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh294751));
    vlTOPp->mkMmUnit__DOT__y___05Fh514810 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh514900) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh514901));
    vlTOPp->mkMmUnit__DOT__y___05Fh734960 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh735050) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh735051));
    vlTOPp->mkMmUnit__DOT__y___05Fh955130 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh955220) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh955221));
    vlTOPp->mkMmUnit__DOT__y___05Fh1175277 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1175367) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1175368));
    vlTOPp->mkMmUnit__DOT__y___05Fh1395424 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1395514) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1395515));
    vlTOPp->mkMmUnit__DOT__y___05Fh1615571 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1615661) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1615662));
    vlTOPp->mkMmUnit__DOT__y___05Fh1835741 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1835831) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1835832));
    vlTOPp->mkMmUnit__DOT__y___05Fh2055888 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2055978) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2055979));
    vlTOPp->mkMmUnit__DOT__y___05Fh2276035 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2276125) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2276126));
    vlTOPp->mkMmUnit__DOT__y___05Fh2496182 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2496272) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2496273));
    vlTOPp->mkMmUnit__DOT__y___05Fh2716352 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2716442) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2716443));
    vlTOPp->mkMmUnit__DOT__y___05Fh2936499 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2936589) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2936590));
    vlTOPp->mkMmUnit__DOT__y___05Fh3156646 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3156736) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3156737));
    vlTOPp->mkMmUnit__DOT__y___05Fh3376793 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3376883) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3376884));
    vlTOPp->mkMmUnit__DOT__NOT_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT___05FETC___05F_d4721 
        = (((0U != ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670)) 
                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_ETC___05Fq146)))) 
            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4718)) 
           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4720));
    vlTOPp->mkMmUnit__DOT__y___05Fh430756 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh430846) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh430847));
    vlTOPp->mkMmUnit__DOT__NOT_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT___05FETC___05F_d7219 
        = (((0U != ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168)) 
                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_ETC___05Fq182)))) 
            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7216)) 
           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7218));
    vlTOPp->mkMmUnit__DOT__y___05Fh650906 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh650996) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh650997));
    vlTOPp->mkMmUnit__DOT__NOT_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT___05FETC___05F_d9717 
        = (((0U != ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666)) 
                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_ETC___05Fq217)))) 
            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9714)) 
           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9716));
    vlTOPp->mkMmUnit__DOT__y___05Fh871056 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh871146) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh871147));
    vlTOPp->mkMmUnit__DOT__NOT_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_ETC___05F_d12215 
        = (((0U != ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164)) 
                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq252)))) 
            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12212)) 
           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12214));
    vlTOPp->mkMmUnit__DOT__y___05Fh1091226 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1091316) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1091317));
    vlTOPp->mkMmUnit__DOT__NOT_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_ETC___05F_d14713 
        = (((0U != ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662)) 
                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq287)))) 
            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14710)) 
           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14712));
    vlTOPp->mkMmUnit__DOT__y___05Fh1311373 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1311463) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1311464));
    vlTOPp->mkMmUnit__DOT__NOT_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_ETC___05F_d17211 
        = (((0U != ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160)) 
                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq322)))) 
            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17208)) 
           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17210));
    vlTOPp->mkMmUnit__DOT__y___05Fh1531520 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1531610) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1531611));
    vlTOPp->mkMmUnit__DOT__NOT_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_ETC___05F_d19709 
        = (((0U != ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658)) 
                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq357)))) 
            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19706)) 
           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19708));
    vlTOPp->mkMmUnit__DOT__y___05Fh1751667 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1751757) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1751758));
    vlTOPp->mkMmUnit__DOT__NOT_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_ETC___05F_d22207 
        = (((0U != ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156)) 
                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq392)))) 
            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22204)) 
           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22206));
    vlTOPp->mkMmUnit__DOT__y___05Fh1971837 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1971927) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1971928));
    vlTOPp->mkMmUnit__DOT__NOT_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_ETC___05F_d24705 
        = (((0U != ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654)) 
                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq427)))) 
            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24702)) 
           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24704));
    vlTOPp->mkMmUnit__DOT__y___05Fh2191984 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2192074) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2192075));
    vlTOPp->mkMmUnit__DOT__NOT_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_ETC___05F_d27203 
        = (((0U != ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152)) 
                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq462)))) 
            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27200)) 
           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27202));
    vlTOPp->mkMmUnit__DOT__y___05Fh2412131 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2412221) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2412222));
    vlTOPp->mkMmUnit__DOT__NOT_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_ETC___05F_d29701 
        = (((0U != ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650)) 
                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq497)))) 
            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29698)) 
           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29700));
    vlTOPp->mkMmUnit__DOT__y___05Fh2632278 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2632368) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2632369));
    vlTOPp->mkMmUnit__DOT__NOT_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_ETC___05F_d32199 
        = (((0U != ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148)) 
                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq532)))) 
            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32196)) 
           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32198));
    vlTOPp->mkMmUnit__DOT__y___05Fh2852448 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2852538) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2852539));
    vlTOPp->mkMmUnit__DOT__NOT_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_ETC___05F_d34697 
        = (((0U != ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646)) 
                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq567)))) 
            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34694)) 
           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34696));
    vlTOPp->mkMmUnit__DOT__y___05Fh3072595 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3072685) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3072686));
    vlTOPp->mkMmUnit__DOT__NOT_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_ETC___05F_d37195 
        = (((0U != ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144)) 
                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq602)))) 
            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37192)) 
           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37194));
    vlTOPp->mkMmUnit__DOT__y___05Fh3292742 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3292832) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3292833));
    vlTOPp->mkMmUnit__DOT__NOT_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_ETC___05F_d39693 
        = (((0U != ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642)) 
                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq637)))) 
            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39690)) 
           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39692));
    vlTOPp->mkMmUnit__DOT__y___05Fh3512889 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3512979) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3512980));
    vlTOPp->mkMmUnit__DOT__NOT_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT___05FETC___05F_d2223 
        = (((0U != ((0x7eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172)) 
                    | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_ETC___05Fq112)))) 
            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2220)) 
           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2222));
    vlTOPp->mkMmUnit__DOT__y___05Fh210602 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh210692) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh210693));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d590 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh74505) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh74506)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh74234) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh74235)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d589)));
    vlTOPp->mkMmUnit__DOT__y___05Fh74868 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh74506) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh74505));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d3088 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh294659) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh294660)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh294388) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh294389)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d3087)));
    vlTOPp->mkMmUnit__DOT__y___05Fh295022 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh294660) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh294659));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5586 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh514809) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh514810)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh514538) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh514539)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5585)));
    vlTOPp->mkMmUnit__DOT__y___05Fh515172 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh514810) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh514809));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d8084 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh734959) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh734960)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh734688) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh734689)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d8083)));
    vlTOPp->mkMmUnit__DOT__y___05Fh735322 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh734960) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh734959));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10582 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh955129) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh955130)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh954858) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh954859)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10581)));
    vlTOPp->mkMmUnit__DOT__y___05Fh955492 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh955130) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh955129));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d13080 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1175276) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1175277)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1175005) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1175006)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d13079)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1175639 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1175277) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1175276));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15578 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1395423) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1395424)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1395152) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1395153)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15577)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1395786 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1395424) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1395423));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d18076 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1615570) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1615571)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1615299) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1615300)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d18075)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1615933 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1615571) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1615570));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20574 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1835740) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1835741)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1835469) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1835470)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20573)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1836103 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1835741) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1835740));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d23072 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2055887) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2055888)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2055616) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2055617)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d23071)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2056250 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2055888) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2055887));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25570 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2276034) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2276035)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2275763) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2275764)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25569)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2276397 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2276035) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2276034));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d28068 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2496181) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2496182)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2495910) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2495911)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d28067)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2496544 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2496182) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2496181));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30566 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2716351) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2716352)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2716080) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2716081)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30565)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2716714 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2716352) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2716351));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d33064 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2936498) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2936499)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2936227) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2936228)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d33063)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2936861 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2936499) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2936498));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35562 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3156645) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3156646)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3156374) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3156375)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35561)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3157008 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3156646) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3156645));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d38060 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3376792) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3376793)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3376521) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3376522)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d38059)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3377155 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3376793) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3376792));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4727 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh430755) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh430756));
    vlTOPp->mkMmUnit__DOT__y___05Fh431119 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh430756) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh430755));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7225 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh650905) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh650906));
    vlTOPp->mkMmUnit__DOT__y___05Fh651269 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh650906) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh650905));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9723 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh871055) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh871056));
    vlTOPp->mkMmUnit__DOT__y___05Fh871419 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh871056) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh871055));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12221 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1091225) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1091226));
    vlTOPp->mkMmUnit__DOT__y___05Fh1091589 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1091226) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1091225));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14719 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1311372) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1311373));
    vlTOPp->mkMmUnit__DOT__y___05Fh1311736 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1311373) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1311372));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17217 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1531519) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1531520));
    vlTOPp->mkMmUnit__DOT__y___05Fh1531883 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1531520) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1531519));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19715 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1751666) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1751667));
    vlTOPp->mkMmUnit__DOT__y___05Fh1752030 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1751667) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1751666));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22213 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1971836) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1971837));
    vlTOPp->mkMmUnit__DOT__y___05Fh1972200 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1971837) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1971836));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24711 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2191983) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2191984));
    vlTOPp->mkMmUnit__DOT__y___05Fh2192347 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2191984) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2191983));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27209 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2412130) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2412131));
    vlTOPp->mkMmUnit__DOT__y___05Fh2412494 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2412131) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2412130));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29707 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2632277) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2632278));
    vlTOPp->mkMmUnit__DOT__y___05Fh2632641 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2632278) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2632277));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32205 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2852447) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2852448));
    vlTOPp->mkMmUnit__DOT__y___05Fh2852811 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2852448) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2852447));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34703 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3072594) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3072595));
    vlTOPp->mkMmUnit__DOT__y___05Fh3072958 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3072595) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3072594));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37201 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3292741) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3292742));
    vlTOPp->mkMmUnit__DOT__y___05Fh3293105 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3292742) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3292741));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39699 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3512888) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3512889));
    vlTOPp->mkMmUnit__DOT__y___05Fh3513252 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3512889) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3512888));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2229 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh210601) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh210602));
    vlTOPp->mkMmUnit__DOT__y___05Fh210965 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh210602) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh210601));
    vlTOPp->mkMmUnit__DOT__y___05Fh74777 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh74867) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh74868));
    vlTOPp->mkMmUnit__DOT__y___05Fh294931 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh295021) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh295022));
    vlTOPp->mkMmUnit__DOT__y___05Fh515081 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh515171) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh515172));
    vlTOPp->mkMmUnit__DOT__y___05Fh735231 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh735321) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh735322));
    vlTOPp->mkMmUnit__DOT__y___05Fh955401 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh955491) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh955492));
    vlTOPp->mkMmUnit__DOT__y___05Fh1175548 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1175638) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1175639));
    vlTOPp->mkMmUnit__DOT__y___05Fh1395695 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1395785) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1395786));
    vlTOPp->mkMmUnit__DOT__y___05Fh1615842 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1615932) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1615933));
    vlTOPp->mkMmUnit__DOT__y___05Fh1836012 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1836102) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1836103));
    vlTOPp->mkMmUnit__DOT__y___05Fh2056159 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2056249) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2056250));
    vlTOPp->mkMmUnit__DOT__y___05Fh2276306 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2276396) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2276397));
    vlTOPp->mkMmUnit__DOT__y___05Fh2496453 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2496543) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2496544));
    vlTOPp->mkMmUnit__DOT__y___05Fh2716623 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2716713) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2716714));
    vlTOPp->mkMmUnit__DOT__y___05Fh2936770 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2936860) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2936861));
    vlTOPp->mkMmUnit__DOT__y___05Fh3156917 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3157007) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3157008));
    vlTOPp->mkMmUnit__DOT__y___05Fh3377064 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3377154) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3377155));
    vlTOPp->mkMmUnit__DOT__y___05Fh431028 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh431118) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh431119));
    vlTOPp->mkMmUnit__DOT__y___05Fh651178 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh651268) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh651269));
    vlTOPp->mkMmUnit__DOT__y___05Fh871328 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh871418) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh871419));
    vlTOPp->mkMmUnit__DOT__y___05Fh1091498 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1091588) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1091589));
    vlTOPp->mkMmUnit__DOT__y___05Fh1311645 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1311735) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1311736));
    vlTOPp->mkMmUnit__DOT__y___05Fh1531792 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1531882) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1531883));
    vlTOPp->mkMmUnit__DOT__y___05Fh1751939 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1752029) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1752030));
    vlTOPp->mkMmUnit__DOT__y___05Fh1972109 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1972199) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1972200));
    vlTOPp->mkMmUnit__DOT__y___05Fh2192256 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2192346) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2192347));
    vlTOPp->mkMmUnit__DOT__y___05Fh2412403 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2412493) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2412494));
    vlTOPp->mkMmUnit__DOT__y___05Fh2632550 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2632640) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2632641));
    vlTOPp->mkMmUnit__DOT__y___05Fh2852720 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2852810) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2852811));
    vlTOPp->mkMmUnit__DOT__y___05Fh3072867 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3072957) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3072958));
    vlTOPp->mkMmUnit__DOT__y___05Fh3293014 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3293104) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3293105));
    vlTOPp->mkMmUnit__DOT__y___05Fh3513161 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3513251) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3513252));
    vlTOPp->mkMmUnit__DOT__y___05Fh210874 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh210964) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh210965));
    vlTOPp->mkMmUnit__DOT__y___05Fh75139 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh74777) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh74776));
    vlTOPp->mkMmUnit__DOT__y___05Fh295293 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh294931) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh294930));
    vlTOPp->mkMmUnit__DOT__y___05Fh515443 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh515081) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh515080));
    vlTOPp->mkMmUnit__DOT__y___05Fh735593 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh735231) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh735230));
    vlTOPp->mkMmUnit__DOT__y___05Fh955763 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh955401) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh955400));
    vlTOPp->mkMmUnit__DOT__y___05Fh1175910 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1175548) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1175547));
    vlTOPp->mkMmUnit__DOT__y___05Fh1396057 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1395695) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1395694));
    vlTOPp->mkMmUnit__DOT__y___05Fh1616204 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1615842) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1615841));
    vlTOPp->mkMmUnit__DOT__y___05Fh1836374 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1836012) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1836011));
    vlTOPp->mkMmUnit__DOT__y___05Fh2056521 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2056159) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2056158));
    vlTOPp->mkMmUnit__DOT__y___05Fh2276668 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2276306) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2276305));
    vlTOPp->mkMmUnit__DOT__y___05Fh2496815 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2496453) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2496452));
    vlTOPp->mkMmUnit__DOT__y___05Fh2716985 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2716623) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2716622));
    vlTOPp->mkMmUnit__DOT__y___05Fh2937132 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2936770) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2936769));
    vlTOPp->mkMmUnit__DOT__y___05Fh3157279 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3156917) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3156916));
    vlTOPp->mkMmUnit__DOT__y___05Fh3377426 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3377064) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3377063));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4726 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh431027) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh431028));
    vlTOPp->mkMmUnit__DOT__y___05Fh431390 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh431028) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh431027));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7224 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh651177) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh651178));
    vlTOPp->mkMmUnit__DOT__y___05Fh651540 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh651178) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh651177));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9722 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh871327) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh871328));
    vlTOPp->mkMmUnit__DOT__y___05Fh871690 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh871328) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh871327));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12220 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1091497) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1091498));
    vlTOPp->mkMmUnit__DOT__y___05Fh1091860 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1091498) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1091497));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14718 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1311644) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1311645));
    vlTOPp->mkMmUnit__DOT__y___05Fh1312007 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1311645) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1311644));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17216 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1531791) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1531792));
    vlTOPp->mkMmUnit__DOT__y___05Fh1532154 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1531792) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1531791));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19714 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1751938) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1751939));
    vlTOPp->mkMmUnit__DOT__y___05Fh1752301 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1751939) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1751938));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22212 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1972108) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1972109));
    vlTOPp->mkMmUnit__DOT__y___05Fh1972471 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1972109) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1972108));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24710 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2192255) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2192256));
    vlTOPp->mkMmUnit__DOT__y___05Fh2192618 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2192256) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2192255));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27208 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2412402) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2412403));
    vlTOPp->mkMmUnit__DOT__y___05Fh2412765 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2412403) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2412402));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29706 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2632549) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2632550));
    vlTOPp->mkMmUnit__DOT__y___05Fh2632912 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2632550) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2632549));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32204 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2852719) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2852720));
    vlTOPp->mkMmUnit__DOT__y___05Fh2853082 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2852720) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2852719));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34702 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3072866) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3072867));
    vlTOPp->mkMmUnit__DOT__y___05Fh3073229 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3072867) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3072866));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37200 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3293013) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3293014));
    vlTOPp->mkMmUnit__DOT__y___05Fh3293376 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3293014) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3293013));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39698 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3513160) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3513161));
    vlTOPp->mkMmUnit__DOT__y___05Fh3513523 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3513161) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3513160));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2228 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh210873) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh210874));
    vlTOPp->mkMmUnit__DOT__y___05Fh211236 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh210874) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh210873));
    vlTOPp->mkMmUnit__DOT__y___05Fh75048 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh75138) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh75139));
    vlTOPp->mkMmUnit__DOT__y___05Fh295202 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh295292) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh295293));
    vlTOPp->mkMmUnit__DOT__y___05Fh515352 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh515442) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh515443));
    vlTOPp->mkMmUnit__DOT__y___05Fh735502 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh735592) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh735593));
    vlTOPp->mkMmUnit__DOT__y___05Fh955672 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh955762) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh955763));
    vlTOPp->mkMmUnit__DOT__y___05Fh1175819 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1175909) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1175910));
    vlTOPp->mkMmUnit__DOT__y___05Fh1395966 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1396056) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1396057));
    vlTOPp->mkMmUnit__DOT__y___05Fh1616113 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1616203) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1616204));
    vlTOPp->mkMmUnit__DOT__y___05Fh1836283 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1836373) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1836374));
    vlTOPp->mkMmUnit__DOT__y___05Fh2056430 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2056520) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2056521));
    vlTOPp->mkMmUnit__DOT__y___05Fh2276577 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2276667) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2276668));
    vlTOPp->mkMmUnit__DOT__y___05Fh2496724 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2496814) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2496815));
    vlTOPp->mkMmUnit__DOT__y___05Fh2716894 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2716984) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2716985));
    vlTOPp->mkMmUnit__DOT__y___05Fh2937041 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2937131) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2937132));
    vlTOPp->mkMmUnit__DOT__y___05Fh3157188 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3157278) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3157279));
    vlTOPp->mkMmUnit__DOT__y___05Fh3377335 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3377425) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3377426));
    vlTOPp->mkMmUnit__DOT__y___05Fh431299 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh431389) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh431390));
    vlTOPp->mkMmUnit__DOT__y___05Fh651449 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh651539) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh651540));
    vlTOPp->mkMmUnit__DOT__y___05Fh871599 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh871689) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh871690));
    vlTOPp->mkMmUnit__DOT__y___05Fh1091769 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1091859) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1091860));
    vlTOPp->mkMmUnit__DOT__y___05Fh1311916 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1312006) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1312007));
    vlTOPp->mkMmUnit__DOT__y___05Fh1532063 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1532153) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1532154));
    vlTOPp->mkMmUnit__DOT__y___05Fh1752210 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1752300) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1752301));
    vlTOPp->mkMmUnit__DOT__y___05Fh1972380 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1972470) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1972471));
    vlTOPp->mkMmUnit__DOT__y___05Fh2192527 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2192617) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2192618));
    vlTOPp->mkMmUnit__DOT__y___05Fh2412674 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2412764) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2412765));
    vlTOPp->mkMmUnit__DOT__y___05Fh2632821 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2632911) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2632912));
    vlTOPp->mkMmUnit__DOT__y___05Fh2852991 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2853081) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2853082));
    vlTOPp->mkMmUnit__DOT__y___05Fh3073138 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3073228) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3073229));
    vlTOPp->mkMmUnit__DOT__y___05Fh3293285 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3293375) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3293376));
    vlTOPp->mkMmUnit__DOT__y___05Fh3513432 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3513522) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3513523));
    vlTOPp->mkMmUnit__DOT__y___05Fh211145 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh211235) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh211236));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d591 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh75047) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh75048)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh74776) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh74777)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d590));
    vlTOPp->mkMmUnit__DOT__y___05Fh75410 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh75048) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh75047));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d3089 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh295201) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh295202)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh294930) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh294931)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d3088));
    vlTOPp->mkMmUnit__DOT__y___05Fh295564 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh295202) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh295201));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5587 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh515351) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh515352)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh515080) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh515081)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5586));
    vlTOPp->mkMmUnit__DOT__y___05Fh515714 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh515352) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh515351));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d8085 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh735501) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh735502)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh735230) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh735231)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d8084));
    vlTOPp->mkMmUnit__DOT__y___05Fh735864 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh735502) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh735501));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10583 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh955671) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh955672)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh955400) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh955401)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10582));
    vlTOPp->mkMmUnit__DOT__y___05Fh956034 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh955672) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh955671));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d13081 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1175818) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1175819)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1175547) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1175548)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d13080));
    vlTOPp->mkMmUnit__DOT__y___05Fh1176181 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1175819) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1175818));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15579 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1395965) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1395966)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1395694) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1395695)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15578));
    vlTOPp->mkMmUnit__DOT__y___05Fh1396328 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1395966) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1395965));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d18077 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1616112) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1616113)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1615841) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1615842)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d18076));
    vlTOPp->mkMmUnit__DOT__y___05Fh1616475 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1616113) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1616112));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20575 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1836282) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1836283)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1836011) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1836012)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20574));
    vlTOPp->mkMmUnit__DOT__y___05Fh1836645 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1836283) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1836282));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d23073 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2056429) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2056430)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2056158) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2056159)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d23072));
    vlTOPp->mkMmUnit__DOT__y___05Fh2056792 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2056430) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2056429));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25571 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2276576) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2276577)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2276305) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2276306)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25570));
    vlTOPp->mkMmUnit__DOT__y___05Fh2276939 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2276577) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2276576));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d28069 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2496723) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2496724)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2496452) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2496453)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d28068));
    vlTOPp->mkMmUnit__DOT__y___05Fh2497086 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2496724) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2496723));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30567 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2716893) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2716894)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2716622) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2716623)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30566));
    vlTOPp->mkMmUnit__DOT__y___05Fh2717256 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2716894) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2716893));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d33065 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2937040) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2937041)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2936769) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2936770)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d33064));
    vlTOPp->mkMmUnit__DOT__y___05Fh2937403 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2937041) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2937040));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35563 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3157187) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3157188)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3156916) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3156917)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35562));
    vlTOPp->mkMmUnit__DOT__y___05Fh3157550 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3157188) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3157187));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d38061 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3377334) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3377335)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3377063) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3377064)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d38060));
    vlTOPp->mkMmUnit__DOT__y___05Fh3377697 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3377335) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3377334));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4725 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh431298) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh431299));
    vlTOPp->mkMmUnit__DOT__y___05Fh431661 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh431299) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh431298));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7223 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh651448) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh651449));
    vlTOPp->mkMmUnit__DOT__y___05Fh651811 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh651449) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh651448));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9721 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh871598) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh871599));
    vlTOPp->mkMmUnit__DOT__y___05Fh871961 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh871599) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh871598));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12219 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1091768) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1091769));
    vlTOPp->mkMmUnit__DOT__y___05Fh1092131 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1091769) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1091768));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14717 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1311915) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1311916));
    vlTOPp->mkMmUnit__DOT__y___05Fh1312278 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1311916) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1311915));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17215 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1532062) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1532063));
    vlTOPp->mkMmUnit__DOT__y___05Fh1532425 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1532063) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1532062));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19713 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1752209) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1752210));
    vlTOPp->mkMmUnit__DOT__y___05Fh1752572 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1752210) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1752209));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22211 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1972379) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1972380));
    vlTOPp->mkMmUnit__DOT__y___05Fh1972742 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1972380) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1972379));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24709 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2192526) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2192527));
    vlTOPp->mkMmUnit__DOT__y___05Fh2192889 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2192527) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2192526));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27207 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2412673) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2412674));
    vlTOPp->mkMmUnit__DOT__y___05Fh2413036 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2412674) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2412673));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29705 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2632820) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2632821));
    vlTOPp->mkMmUnit__DOT__y___05Fh2633183 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2632821) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2632820));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32203 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2852990) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2852991));
    vlTOPp->mkMmUnit__DOT__y___05Fh2853353 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2852991) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2852990));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34701 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3073137) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3073138));
    vlTOPp->mkMmUnit__DOT__y___05Fh3073500 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3073138) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3073137));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37199 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3293284) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3293285));
    vlTOPp->mkMmUnit__DOT__y___05Fh3293647 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3293285) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3293284));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39697 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3513431) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3513432));
    vlTOPp->mkMmUnit__DOT__y___05Fh3513794 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3513432) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3513431));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2227 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh211144) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh211145));
    vlTOPp->mkMmUnit__DOT__y___05Fh211507 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh211145) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh211144));
    vlTOPp->mkMmUnit__DOT__y___05Fh75319 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh75409) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh75410));
    vlTOPp->mkMmUnit__DOT__y___05Fh295473 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh295563) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh295564));
    vlTOPp->mkMmUnit__DOT__y___05Fh515623 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh515713) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh515714));
    vlTOPp->mkMmUnit__DOT__y___05Fh735773 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh735863) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh735864));
    vlTOPp->mkMmUnit__DOT__y___05Fh955943 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh956033) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh956034));
    vlTOPp->mkMmUnit__DOT__y___05Fh1176090 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1176180) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1176181));
    vlTOPp->mkMmUnit__DOT__y___05Fh1396237 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1396327) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1396328));
    vlTOPp->mkMmUnit__DOT__y___05Fh1616384 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1616474) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1616475));
    vlTOPp->mkMmUnit__DOT__y___05Fh1836554 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1836644) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1836645));
    vlTOPp->mkMmUnit__DOT__y___05Fh2056701 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2056791) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2056792));
    vlTOPp->mkMmUnit__DOT__y___05Fh2276848 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2276938) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2276939));
    vlTOPp->mkMmUnit__DOT__y___05Fh2496995 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2497085) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2497086));
    vlTOPp->mkMmUnit__DOT__y___05Fh2717165 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2717255) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2717256));
    vlTOPp->mkMmUnit__DOT__y___05Fh2937312 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2937402) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2937403));
    vlTOPp->mkMmUnit__DOT__y___05Fh3157459 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3157549) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3157550));
    vlTOPp->mkMmUnit__DOT__y___05Fh3377606 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3377696) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3377697));
    vlTOPp->mkMmUnit__DOT__y___05Fh431570 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh431660) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh431661));
    vlTOPp->mkMmUnit__DOT__y___05Fh651720 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh651810) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh651811));
    vlTOPp->mkMmUnit__DOT__y___05Fh871870 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh871960) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh871961));
    vlTOPp->mkMmUnit__DOT__y___05Fh1092040 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1092130) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1092131));
    vlTOPp->mkMmUnit__DOT__y___05Fh1312187 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1312277) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1312278));
    vlTOPp->mkMmUnit__DOT__y___05Fh1532334 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1532424) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1532425));
    vlTOPp->mkMmUnit__DOT__y___05Fh1752481 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1752571) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1752572));
    vlTOPp->mkMmUnit__DOT__y___05Fh1972651 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1972741) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1972742));
    vlTOPp->mkMmUnit__DOT__y___05Fh2192798 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2192888) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2192889));
    vlTOPp->mkMmUnit__DOT__y___05Fh2412945 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2413035) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2413036));
    vlTOPp->mkMmUnit__DOT__y___05Fh2633092 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2633182) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2633183));
    vlTOPp->mkMmUnit__DOT__y___05Fh2853262 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2853352) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2853353));
    vlTOPp->mkMmUnit__DOT__y___05Fh3073409 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3073499) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3073500));
    vlTOPp->mkMmUnit__DOT__y___05Fh3293556 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3293646) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3293647));
    vlTOPp->mkMmUnit__DOT__y___05Fh3513703 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3513793) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3513794));
    vlTOPp->mkMmUnit__DOT__y___05Fh211416 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh211506) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh211507));
    vlTOPp->mkMmUnit__DOT__y___05Fh75681 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh75319) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh75318));
    vlTOPp->mkMmUnit__DOT__y___05Fh295835 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh295473) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh295472));
    vlTOPp->mkMmUnit__DOT__y___05Fh515985 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh515623) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh515622));
    vlTOPp->mkMmUnit__DOT__y___05Fh736135 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh735773) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh735772));
    vlTOPp->mkMmUnit__DOT__y___05Fh956305 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh955943) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh955942));
    vlTOPp->mkMmUnit__DOT__y___05Fh1176452 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1176090) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1176089));
    vlTOPp->mkMmUnit__DOT__y___05Fh1396599 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1396237) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1396236));
    vlTOPp->mkMmUnit__DOT__y___05Fh1616746 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1616384) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1616383));
    vlTOPp->mkMmUnit__DOT__y___05Fh1836916 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1836554) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1836553));
    vlTOPp->mkMmUnit__DOT__y___05Fh2057063 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2056701) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2056700));
    vlTOPp->mkMmUnit__DOT__y___05Fh2277210 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2276848) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2276847));
    vlTOPp->mkMmUnit__DOT__y___05Fh2497357 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2496995) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2496994));
    vlTOPp->mkMmUnit__DOT__y___05Fh2717527 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2717165) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2717164));
    vlTOPp->mkMmUnit__DOT__y___05Fh2937674 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2937312) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2937311));
    vlTOPp->mkMmUnit__DOT__y___05Fh3157821 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3157459) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3157458));
    vlTOPp->mkMmUnit__DOT__y___05Fh3377968 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3377606) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3377605));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4724 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh431569) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh431570));
    vlTOPp->mkMmUnit__DOT__y___05Fh431932 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh431570) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh431569));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7222 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh651719) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh651720));
    vlTOPp->mkMmUnit__DOT__y___05Fh652082 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh651720) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh651719));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9720 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh871869) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh871870));
    vlTOPp->mkMmUnit__DOT__y___05Fh872232 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh871870) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh871869));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12218 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1092039) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1092040));
    vlTOPp->mkMmUnit__DOT__y___05Fh1092402 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1092040) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1092039));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14716 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1312186) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1312187));
    vlTOPp->mkMmUnit__DOT__y___05Fh1312549 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1312187) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1312186));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17214 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1532333) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1532334));
    vlTOPp->mkMmUnit__DOT__y___05Fh1532696 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1532334) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1532333));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19712 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1752480) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1752481));
    vlTOPp->mkMmUnit__DOT__y___05Fh1752843 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1752481) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1752480));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22210 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1972650) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1972651));
    vlTOPp->mkMmUnit__DOT__y___05Fh1973013 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1972651) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1972650));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24708 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2192797) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2192798));
    vlTOPp->mkMmUnit__DOT__y___05Fh2193160 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2192798) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2192797));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27206 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2412944) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2412945));
    vlTOPp->mkMmUnit__DOT__y___05Fh2413307 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2412945) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2412944));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29704 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2633091) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2633092));
    vlTOPp->mkMmUnit__DOT__y___05Fh2633454 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2633092) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2633091));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32202 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2853261) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2853262));
    vlTOPp->mkMmUnit__DOT__y___05Fh2853624 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2853262) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2853261));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34700 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3073408) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3073409));
    vlTOPp->mkMmUnit__DOT__y___05Fh3073771 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3073409) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3073408));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37198 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3293555) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3293556));
    vlTOPp->mkMmUnit__DOT__y___05Fh3293918 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3293556) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3293555));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39696 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3513702) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3513703));
    vlTOPp->mkMmUnit__DOT__y___05Fh3514065 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3513703) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3513702));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2226 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh211415) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh211416));
    vlTOPp->mkMmUnit__DOT__y___05Fh211778 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh211416) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh211415));
    vlTOPp->mkMmUnit__DOT__y___05Fh75590 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh75680) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh75681));
    vlTOPp->mkMmUnit__DOT__y___05Fh295744 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh295834) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh295835));
    vlTOPp->mkMmUnit__DOT__y___05Fh515894 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh515984) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh515985));
    vlTOPp->mkMmUnit__DOT__y___05Fh736044 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh736134) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh736135));
    vlTOPp->mkMmUnit__DOT__y___05Fh956214 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh956304) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh956305));
    vlTOPp->mkMmUnit__DOT__y___05Fh1176361 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1176451) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1176452));
    vlTOPp->mkMmUnit__DOT__y___05Fh1396508 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1396598) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1396599));
    vlTOPp->mkMmUnit__DOT__y___05Fh1616655 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1616745) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1616746));
    vlTOPp->mkMmUnit__DOT__y___05Fh1836825 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1836915) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1836916));
    vlTOPp->mkMmUnit__DOT__y___05Fh2056972 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2057062) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2057063));
    vlTOPp->mkMmUnit__DOT__y___05Fh2277119 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2277209) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2277210));
    vlTOPp->mkMmUnit__DOT__y___05Fh2497266 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2497356) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2497357));
    vlTOPp->mkMmUnit__DOT__y___05Fh2717436 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2717526) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2717527));
    vlTOPp->mkMmUnit__DOT__y___05Fh2937583 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2937673) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2937674));
    vlTOPp->mkMmUnit__DOT__y___05Fh3157730 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3157820) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3157821));
    vlTOPp->mkMmUnit__DOT__y___05Fh3377877 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3377967) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3377968));
    vlTOPp->mkMmUnit__DOT__y___05Fh431841 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh431931) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh431932));
    vlTOPp->mkMmUnit__DOT__y___05Fh651991 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh652081) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh652082));
    vlTOPp->mkMmUnit__DOT__y___05Fh872141 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh872231) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh872232));
    vlTOPp->mkMmUnit__DOT__y___05Fh1092311 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1092401) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1092402));
    vlTOPp->mkMmUnit__DOT__y___05Fh1312458 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1312548) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1312549));
    vlTOPp->mkMmUnit__DOT__y___05Fh1532605 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1532695) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1532696));
    vlTOPp->mkMmUnit__DOT__y___05Fh1752752 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1752842) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1752843));
    vlTOPp->mkMmUnit__DOT__y___05Fh1972922 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1973012) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1973013));
    vlTOPp->mkMmUnit__DOT__y___05Fh2193069 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2193159) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2193160));
    vlTOPp->mkMmUnit__DOT__y___05Fh2413216 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2413306) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2413307));
    vlTOPp->mkMmUnit__DOT__y___05Fh2633363 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2633453) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2633454));
    vlTOPp->mkMmUnit__DOT__y___05Fh2853533 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2853623) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2853624));
    vlTOPp->mkMmUnit__DOT__y___05Fh3073680 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3073770) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3073771));
    vlTOPp->mkMmUnit__DOT__y___05Fh3293827 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3293917) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3293918));
    vlTOPp->mkMmUnit__DOT__y___05Fh3513974 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3514064) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3514065));
    vlTOPp->mkMmUnit__DOT__y___05Fh211687 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh211777) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh211778));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d592 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh75589) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh75590)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh75318) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh75319)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d591));
    vlTOPp->mkMmUnit__DOT__y___05Fh75952 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh75590) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh75589));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d3090 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh295743) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh295744)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh295472) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh295473)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d3089));
    vlTOPp->mkMmUnit__DOT__y___05Fh296106 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh295744) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh295743));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5588 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh515893) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh515894)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh515622) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh515623)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5587));
    vlTOPp->mkMmUnit__DOT__y___05Fh516256 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh515894) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh515893));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d8086 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh736043) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh736044)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh735772) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh735773)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d8085));
    vlTOPp->mkMmUnit__DOT__y___05Fh736406 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh736044) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh736043));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10584 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh956213) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh956214)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh955942) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh955943)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10583));
    vlTOPp->mkMmUnit__DOT__y___05Fh956576 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh956214) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh956213));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d13082 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1176360) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1176361)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1176089) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1176090)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d13081));
    vlTOPp->mkMmUnit__DOT__y___05Fh1176723 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1176361) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1176360));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15580 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1396507) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1396508)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1396236) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1396237)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15579));
    vlTOPp->mkMmUnit__DOT__y___05Fh1396870 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1396508) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1396507));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d18078 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1616654) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1616655)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1616383) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1616384)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d18077));
    vlTOPp->mkMmUnit__DOT__y___05Fh1617017 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1616655) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1616654));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20576 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1836824) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1836825)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1836553) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1836554)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20575));
    vlTOPp->mkMmUnit__DOT__y___05Fh1837187 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1836825) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1836824));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d23074 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2056971) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2056972)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2056700) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2056701)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d23073));
    vlTOPp->mkMmUnit__DOT__y___05Fh2057334 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2056972) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2056971));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25572 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2277118) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2277119)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2276847) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2276848)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25571));
    vlTOPp->mkMmUnit__DOT__y___05Fh2277481 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2277119) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2277118));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d28070 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2497265) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2497266)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2496994) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2496995)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d28069));
    vlTOPp->mkMmUnit__DOT__y___05Fh2497628 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2497266) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2497265));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30568 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2717435) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2717436)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2717164) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2717165)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30567));
    vlTOPp->mkMmUnit__DOT__y___05Fh2717798 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2717436) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2717435));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d33066 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2937582) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2937583)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2937311) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2937312)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d33065));
    vlTOPp->mkMmUnit__DOT__y___05Fh2937945 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2937583) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2937582));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35564 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3157729) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3157730)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3157458) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3157459)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35563));
    vlTOPp->mkMmUnit__DOT__y___05Fh3158092 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3157730) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3157729));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d38062 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3377876) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3377877)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3377605) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3377606)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d38061));
    vlTOPp->mkMmUnit__DOT__y___05Fh3378239 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3377877) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3377876));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4723 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh431840) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh431841));
    vlTOPp->mkMmUnit__DOT__y___05Fh432203 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh431841) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh431840));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7221 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh651990) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh651991));
    vlTOPp->mkMmUnit__DOT__y___05Fh652353 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh651991) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh651990));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9719 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh872140) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh872141));
    vlTOPp->mkMmUnit__DOT__y___05Fh872503 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh872141) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh872140));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12217 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1092310) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1092311));
    vlTOPp->mkMmUnit__DOT__y___05Fh1092673 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1092311) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1092310));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14715 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1312457) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1312458));
    vlTOPp->mkMmUnit__DOT__y___05Fh1312820 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1312458) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1312457));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17213 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1532604) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1532605));
    vlTOPp->mkMmUnit__DOT__y___05Fh1532967 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1532605) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1532604));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19711 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1752751) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1752752));
    vlTOPp->mkMmUnit__DOT__y___05Fh1753114 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1752752) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1752751));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22209 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1972921) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1972922));
    vlTOPp->mkMmUnit__DOT__y___05Fh1973284 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1972922) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1972921));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24707 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2193068) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2193069));
    vlTOPp->mkMmUnit__DOT__y___05Fh2193431 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2193069) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2193068));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27205 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2413215) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2413216));
    vlTOPp->mkMmUnit__DOT__y___05Fh2413578 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2413216) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2413215));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29703 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2633362) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2633363));
    vlTOPp->mkMmUnit__DOT__y___05Fh2633725 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2633363) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2633362));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32201 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2853532) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2853533));
    vlTOPp->mkMmUnit__DOT__y___05Fh2853895 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2853533) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2853532));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34699 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3073679) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3073680));
    vlTOPp->mkMmUnit__DOT__y___05Fh3074042 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3073680) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3073679));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37197 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3293826) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3293827));
    vlTOPp->mkMmUnit__DOT__y___05Fh3294189 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3293827) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3293826));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39695 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3513973) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3513974));
    vlTOPp->mkMmUnit__DOT__y___05Fh3514336 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3513974) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3513973));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2225 
        = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh211686) 
           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh211687));
    vlTOPp->mkMmUnit__DOT__y___05Fh212049 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh211687) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh211686));
    vlTOPp->mkMmUnit__DOT__y___05Fh75861 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh75951) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh75952));
    vlTOPp->mkMmUnit__DOT__y___05Fh296015 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh296105) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh296106));
    vlTOPp->mkMmUnit__DOT__y___05Fh516165 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh516255) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh516256));
    vlTOPp->mkMmUnit__DOT__y___05Fh736315 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh736405) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh736406));
    vlTOPp->mkMmUnit__DOT__y___05Fh956485 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh956575) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh956576));
    vlTOPp->mkMmUnit__DOT__y___05Fh1176632 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1176722) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1176723));
    vlTOPp->mkMmUnit__DOT__y___05Fh1396779 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1396869) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1396870));
    vlTOPp->mkMmUnit__DOT__y___05Fh1616926 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1617016) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1617017));
    vlTOPp->mkMmUnit__DOT__y___05Fh1837096 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1837186) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1837187));
    vlTOPp->mkMmUnit__DOT__y___05Fh2057243 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2057333) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2057334));
    vlTOPp->mkMmUnit__DOT__y___05Fh2277390 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2277480) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2277481));
    vlTOPp->mkMmUnit__DOT__y___05Fh2497537 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2497627) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2497628));
    vlTOPp->mkMmUnit__DOT__y___05Fh2717707 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2717797) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2717798));
    vlTOPp->mkMmUnit__DOT__y___05Fh2937854 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2937944) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2937945));
    vlTOPp->mkMmUnit__DOT__y___05Fh3158001 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3158091) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3158092));
    vlTOPp->mkMmUnit__DOT__y___05Fh3378148 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3378238) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3378239));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh432835 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4723) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4724) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4725) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4726) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4727) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4718) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4720)))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh432112 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh432202) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh432203));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh652985 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7221) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7222) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7223) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7224) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7225) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7216) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7218)))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh652262 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh652352) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh652353));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh873135 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9719) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9720) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9721) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9722) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9723) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9714) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9716)))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh872412 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh872502) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh872503));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1093305 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12217) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12218) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12219) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12220) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12221) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12212) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12214)))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1092582 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1092672) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1092673));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1313452 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14715) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14716) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14717) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14718) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14719) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14710) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14712)))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1312729 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1312819) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1312820));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1533599 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17213) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17214) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17215) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17216) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17217) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17208) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17210)))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1532876 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1532966) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1532967));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1753746 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19711) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19712) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19713) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19714) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19715) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19706) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19708)))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1753023 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1753113) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1753114));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1973916 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22209) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22210) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22211) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22212) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22213) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22204) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22206)))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1973193 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1973283) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1973284));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2194063 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24707) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24708) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24709) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24710) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24711) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24702) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24704)))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2193340 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2193430) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2193431));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2414210 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27205) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27206) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27207) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27208) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27209) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27200) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27202)))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2413487 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2413577) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2413578));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2634357 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29703) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29704) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29705) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29706) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29707) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29698) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29700)))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2633634 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2633724) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2633725));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2854527 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32201) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32202) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32203) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32204) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32205) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32196) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32198)))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2853804 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2853894) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2853895));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh3074674 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34699) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34700) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34701) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34702) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34703) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34694) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34696)))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3073951 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3074041) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3074042));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh3294821 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37197) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37198) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37199) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37200) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37201) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37192) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37194)))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3294098 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3294188) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3294189));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh3514968 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39695) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39696) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39697) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39698) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39699) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39690) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39692)))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3514245 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3514335) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3514336));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh212681 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2225) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2226) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2227) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2228) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2229) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2220) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2222)))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh211958 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh212048) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh212049));
    vlTOPp->mkMmUnit__DOT__y___05Fh76223 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh75861) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh75860));
    vlTOPp->mkMmUnit__DOT__y___05Fh296377 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh296015) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh296014));
    vlTOPp->mkMmUnit__DOT__y___05Fh516527 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh516165) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh516164));
    vlTOPp->mkMmUnit__DOT__y___05Fh736677 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh736315) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh736314));
    vlTOPp->mkMmUnit__DOT__y___05Fh956847 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh956485) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh956484));
    vlTOPp->mkMmUnit__DOT__y___05Fh1176994 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1176632) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1176631));
    vlTOPp->mkMmUnit__DOT__y___05Fh1397141 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1396779) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1396778));
    vlTOPp->mkMmUnit__DOT__y___05Fh1617288 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1616926) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1616925));
    vlTOPp->mkMmUnit__DOT__y___05Fh1837458 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1837096) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1837095));
    vlTOPp->mkMmUnit__DOT__y___05Fh2057605 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2057243) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2057242));
    vlTOPp->mkMmUnit__DOT__y___05Fh2277752 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2277390) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2277389));
    vlTOPp->mkMmUnit__DOT__y___05Fh2497899 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2497537) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2497536));
    vlTOPp->mkMmUnit__DOT__y___05Fh2718069 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2717707) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2717706));
    vlTOPp->mkMmUnit__DOT__y___05Fh2938216 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2937854) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2937853));
    vlTOPp->mkMmUnit__DOT__y___05Fh3158363 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3158001) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3158000));
    vlTOPp->mkMmUnit__DOT__y___05Fh3378510 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3378148) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3378147));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh432942 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh432835)));
    vlTOPp->mkMmUnit__DOT__y___05Fh432474 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh432112) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh432111));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh432647 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh432111) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh432112)) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4723) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4724) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4725) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4726) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4727) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4718)))))));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh653092 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh652985)));
    vlTOPp->mkMmUnit__DOT__y___05Fh652624 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh652262) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh652261));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh652797 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh652261) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh652262)) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7221) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7222) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7223) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7224) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7225) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7216)))))));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh873242 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh873135)));
    vlTOPp->mkMmUnit__DOT__y___05Fh872774 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh872412) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh872411));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh872947 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh872411) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh872412)) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9719) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9720) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9721) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9722) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9723) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9714)))))));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1093412 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1093305)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1092944 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1092582) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1092581));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1093117 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1092581) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1092582)) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12217) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12218) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12219) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12220) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12221) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12212)))))));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1313559 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1313452)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1313091 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1312729) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1312728));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1313264 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1312728) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1312729)) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14715) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14716) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14717) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14718) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14719) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14710)))))));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1533706 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1533599)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1533238 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1532876) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1532875));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1533411 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1532875) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1532876)) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17213) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17214) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17215) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17216) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17217) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17208)))))));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1753853 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1753746)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1753385 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1753023) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1753022));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1753558 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1753022) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1753023)) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19711) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19712) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19713) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19714) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19715) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19706)))))));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1974023 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1973916)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1973555 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1973193) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1973192));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1973728 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1973192) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1973193)) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22209) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22210) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22211) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22212) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22213) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22204)))))));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2194170 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2194063)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2193702 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2193340) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2193339));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2193875 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2193339) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2193340)) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24707) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24708) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24709) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24710) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24711) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24702)))))));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2414317 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2414210)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2413849 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2413487) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2413486));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2414022 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2413486) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2413487)) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27205) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27206) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27207) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27208) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27209) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27200)))))));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2634464 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2634357)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2633996 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2633634) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2633633));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2634169 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2633633) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2633634)) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29703) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29704) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29705) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29706) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29707) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29698)))))));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2854634 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2854527)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2854166 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2853804) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2853803));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2854339 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2853803) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2853804)) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32201) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32202) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32203) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32204) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32205) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32196)))))));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh3074781 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh3074674)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3074313 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3073951) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3073950));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh3074486 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3073950) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3073951)) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34699) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34700) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34701) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34702) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34703) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34694)))))));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh3294928 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh3294821)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3294460 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3294098) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3294097));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh3294633 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3294097) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3294098)) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37197) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37198) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37199) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37200) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37201) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37192)))))));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh3515075 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh3514968)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3514607 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3514245) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3514244));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh3514780 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3514244) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3514245)) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39695) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39696) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39697) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39698) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39699) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39690)))))));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh212788 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh212681)));
    vlTOPp->mkMmUnit__DOT__y___05Fh212320 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh211958) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh211957));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh212493 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh211957) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh211958)) 
            << 6U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2225) 
                       << 5U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2226) 
                                  << 4U) | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2227) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2228) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2229) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2220)))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh76132 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh76222) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh76223));
    vlTOPp->mkMmUnit__DOT__y___05Fh296286 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh296376) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh296377));
    vlTOPp->mkMmUnit__DOT__y___05Fh516436 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh516526) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh516527));
    vlTOPp->mkMmUnit__DOT__y___05Fh736586 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh736676) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh736677));
    vlTOPp->mkMmUnit__DOT__y___05Fh956756 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh956846) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh956847));
    vlTOPp->mkMmUnit__DOT__y___05Fh1176903 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1176993) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1176994));
    vlTOPp->mkMmUnit__DOT__y___05Fh1397050 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1397140) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1397141));
    vlTOPp->mkMmUnit__DOT__y___05Fh1617197 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1617287) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1617288));
    vlTOPp->mkMmUnit__DOT__y___05Fh1837367 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1837457) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1837458));
    vlTOPp->mkMmUnit__DOT__y___05Fh2057514 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2057604) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2057605));
    vlTOPp->mkMmUnit__DOT__y___05Fh2277661 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2277751) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2277752));
    vlTOPp->mkMmUnit__DOT__y___05Fh2497808 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2497898) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2497899));
    vlTOPp->mkMmUnit__DOT__y___05Fh2717978 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2718068) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2718069));
    vlTOPp->mkMmUnit__DOT__y___05Fh2938125 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2938215) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2938216));
    vlTOPp->mkMmUnit__DOT__y___05Fh3158272 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3158362) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3158363));
    vlTOPp->mkMmUnit__DOT__y___05Fh3378419 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3378509) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3378510));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh432838 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_ETC___05Fq146)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4720)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh432942)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh432835));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh432943 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh432942))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh432648)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh396018));
    vlTOPp->mkMmUnit__DOT__y___05Fh432383 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670) 
                                                    >> 0xeU) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh432474)));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh432755 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh432647)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh652988 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_ETC___05Fq182)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7218)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh653092)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh652985));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh653093 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh653092))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh652798)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh616168));
    vlTOPp->mkMmUnit__DOT__y___05Fh652533 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168) 
                                                    >> 0xeU) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh652624)));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh652905 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh652797)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh873138 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_ETC___05Fq217)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9716)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh873242)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh873135));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh873243 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh873242))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh872948)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh836318));
    vlTOPp->mkMmUnit__DOT__y___05Fh872683 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666) 
                                                    >> 0xeU) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh872774)));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh873055 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh872947)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh1093308 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq252)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12214)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1093412)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1093305));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1093413 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1093412))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh1093118)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1056488));
    vlTOPp->mkMmUnit__DOT__y___05Fh1092853 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164) 
                                                >> 0xeU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1092944)));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1093225 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1093117)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh1313455 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq287)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14712)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1313559)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1313452));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1313560 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1313559))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh1313265)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1276635));
    vlTOPp->mkMmUnit__DOT__y___05Fh1313000 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662) 
                                                >> 0xeU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1313091)));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1313372 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1313264)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh1533602 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq322)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17210)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1533706)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1533599));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1533707 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1533706))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh1533412)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1496782));
    vlTOPp->mkMmUnit__DOT__y___05Fh1533147 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160) 
                                                >> 0xeU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1533238)));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1533519 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1533411)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh1753749 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq357)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19708)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1753853)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1753746));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1753854 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1753853))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh1753559)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1716929));
    vlTOPp->mkMmUnit__DOT__y___05Fh1753294 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658) 
                                                >> 0xeU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1753385)));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1753666 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1753558)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh1973919 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq392)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22206)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1974023)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1973916));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1974024 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1974023))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh1973729)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1937099));
    vlTOPp->mkMmUnit__DOT__y___05Fh1973464 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156) 
                                                >> 0xeU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1973555)));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1973836 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1973728)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh2194066 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq427)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24704)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2194170)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2194063));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2194171 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2194170))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh2193876)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh2157246));
    vlTOPp->mkMmUnit__DOT__y___05Fh2193611 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654) 
                                                >> 0xeU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2193702)));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2193983 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2193875)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh2414213 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq462)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27202)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2414317)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2414210));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2414318 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2414317))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh2414023)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh2377393));
    vlTOPp->mkMmUnit__DOT__y___05Fh2413758 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152) 
                                                >> 0xeU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2413849)));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2414130 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2414022)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh2634360 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq497)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29700)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2634464)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2634357));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2634465 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2634464))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh2634170)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh2597540));
    vlTOPp->mkMmUnit__DOT__y___05Fh2633905 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650) 
                                                >> 0xeU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2633996)));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2634277 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2634169)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh2854530 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq532)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32198)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2854634)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2854527));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2854635 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2854634))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh2854340)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh2817710));
    vlTOPp->mkMmUnit__DOT__y___05Fh2854075 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148) 
                                                >> 0xeU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2854166)));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2854447 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2854339)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh3074677 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq567)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34696)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh3074781)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh3074674));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3074782 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh3074781))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh3074487)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh3037857));
    vlTOPp->mkMmUnit__DOT__y___05Fh3074222 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646) 
                                                >> 0xeU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3074313)));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh3074594 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh3074486)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh3294824 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq602)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37194)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh3294928)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh3294821));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3294929 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh3294928))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh3294634)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh3258004));
    vlTOPp->mkMmUnit__DOT__y___05Fh3294369 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144) 
                                                >> 0xeU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3294460)));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh3294741 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh3294633)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh3514971 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq637)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39692)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh3515075)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh3514968));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3515076 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh3515075))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh3514781)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh3478151));
    vlTOPp->mkMmUnit__DOT__y___05Fh3514516 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642) 
                                                >> 0xeU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3514607)));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh3514888 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh3514780)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh212684 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_ETC___05Fq112)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2222)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh212788)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh212681));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh212789 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh212788))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh212494)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh175864));
    vlTOPp->mkMmUnit__DOT__y___05Fh212229 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172) 
                                                    >> 0xeU) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh212320)));
    vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh212601 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh212493)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d593 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh76131) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh76132)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh75860) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh75861)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d592));
    vlTOPp->mkMmUnit__DOT__y___05Fh76494 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh76132) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh76131));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d3091 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh296285) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh296286)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh296014) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh296015)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d3090));
    vlTOPp->mkMmUnit__DOT__y___05Fh296648 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh296286) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh296285));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5589 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh516435) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh516436)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh516164) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh516165)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5588));
    vlTOPp->mkMmUnit__DOT__y___05Fh516798 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh516436) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh516435));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d8087 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh736585) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh736586)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh736314) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh736315)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d8086));
    vlTOPp->mkMmUnit__DOT__y___05Fh736948 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh736586) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh736585));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10585 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh956755) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh956756)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh956484) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh956485)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10584));
    vlTOPp->mkMmUnit__DOT__y___05Fh957118 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh956756) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh956755));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d13083 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1176902) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1176903)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1176631) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1176632)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d13082));
    vlTOPp->mkMmUnit__DOT__y___05Fh1177265 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1176903) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1176902));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15581 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1397049) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1397050)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1396778) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1396779)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15580));
    vlTOPp->mkMmUnit__DOT__y___05Fh1397412 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1397050) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1397049));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d18079 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1617196) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1617197)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1616925) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1616926)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d18078));
    vlTOPp->mkMmUnit__DOT__y___05Fh1617559 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1617197) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1617196));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20577 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1837366) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1837367)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1837095) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1837096)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20576));
    vlTOPp->mkMmUnit__DOT__y___05Fh1837729 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1837367) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1837366));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d23075 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2057513) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2057514)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2057242) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2057243)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d23074));
    vlTOPp->mkMmUnit__DOT__y___05Fh2057876 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2057514) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2057513));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25573 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2277660) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2277661)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2277389) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2277390)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25572));
    vlTOPp->mkMmUnit__DOT__y___05Fh2278023 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2277661) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2277660));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d28071 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2497807) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2497808)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2497536) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2497537)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d28070));
    vlTOPp->mkMmUnit__DOT__y___05Fh2498170 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2497808) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2497807));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30569 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2717977) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2717978)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2717706) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2717707)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30568));
    vlTOPp->mkMmUnit__DOT__y___05Fh2718340 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2717978) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2717977));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d33067 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2938124) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2938125)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2937853) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2937854)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d33066));
    vlTOPp->mkMmUnit__DOT__y___05Fh2938487 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2938125) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2938124));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35565 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3158271) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3158272)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3158000) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3158001)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35564));
    vlTOPp->mkMmUnit__DOT__y___05Fh3158634 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3158272) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3158271));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d38063 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3378418) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3378419)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3378147) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3378148)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d38062));
    vlTOPp->mkMmUnit__DOT__y___05Fh3378781 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3378419) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3378418));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh432837 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_ETC___05Fq146)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4720)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh432943)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh396018));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4710 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4670) 
                  >> 0xfU) ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh432383)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh432651 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT___05FETC___05F_d4721)
            ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh432755)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh432647));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh432756 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh432755))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh432778)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh432648));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh652987 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_ETC___05Fq182)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7218)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh653093)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh616168));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7208 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7168) 
                  >> 0xfU) ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh652533)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh652801 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT___05FETC___05F_d7219)
            ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh652905)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh652797));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh652906 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh652905))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh652928)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh652798));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh873137 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_ETC___05Fq217)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9716)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh873243)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh836318));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9706 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9666) 
                  >> 0xfU) ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh872683)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh872951 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT___05FETC___05F_d9717)
            ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh873055)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh872947));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh873056 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh873055))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh873078)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh872948));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1093307 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq252)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12214)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1093413)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1056488));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12204 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12164) 
                  >> 0xfU) ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1092853)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh1093121 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_ETC___05F_d12215)
            ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1093225)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1093117));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1093226 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1093225))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh1093248)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh1093118));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1313454 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq287)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14712)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1313560)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1276635));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14702 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14662) 
                  >> 0xfU) ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1313000)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh1313268 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_ETC___05F_d14713)
            ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1313372)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1313264));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1313373 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1313372))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh1313395)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh1313265));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1533601 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq322)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17210)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1533707)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1496782));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17200 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17160) 
                  >> 0xfU) ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1533147)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh1533415 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_ETC___05F_d17211)
            ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1533519)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1533411));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1533520 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1533519))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh1533542)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh1533412));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1753748 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq357)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19708)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1753854)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1716929));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19698 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19658) 
                  >> 0xfU) ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1753294)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh1753562 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_ETC___05F_d19709)
            ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1753666)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1753558));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1753667 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1753666))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh1753689)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh1753559));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1973918 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq392)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22206)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1974024)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh1937099));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22196 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22156) 
                  >> 0xfU) ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1973464)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh1973732 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_ETC___05F_d22207)
            ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1973836)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh1973728));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1973837 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh1973836))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh1973859)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh1973729));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2194065 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq427)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24704)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2194171)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh2157246));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24694 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24654) 
                  >> 0xfU) ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2193611)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh2193879 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_ETC___05F_d24705)
            ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2193983)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2193875));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2193984 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2193983))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh2194006)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh2193876));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2414212 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq462)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27202)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2414318)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh2377393));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27192 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27152) 
                  >> 0xfU) ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2413758)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh2414026 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_ETC___05F_d27203)
            ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2414130)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2414022));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2414131 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2414130))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh2414153)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh2414023));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2634359 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq497)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29700)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2634465)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh2597540));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29690 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29650) 
                  >> 0xfU) ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2633905)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh2634173 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_ETC___05F_d29701)
            ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2634277)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2634169));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2634278 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2634277))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh2634300)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh2634170));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2854529 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq532)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32198)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2854635)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh2817710));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32188 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32148) 
                  >> 0xfU) ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2854075)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh2854343 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_ETC___05F_d32199)
            ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2854447)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh2854339));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2854448 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh2854447))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh2854470)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh2854340));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3074676 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq567)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34696)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3074782)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh3037857));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34686 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34646) 
                  >> 0xfU) ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3074222)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh3074490 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_ETC___05F_d34697)
            ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh3074594)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh3074486));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3074595 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh3074594))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh3074617)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh3074487));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3294823 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq602)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37194)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3294929)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh3258004));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37184 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37144) 
                  >> 0xfU) ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3294369)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh3294637 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_ETC___05F_d37195)
            ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh3294741)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh3294633));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3294742 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh3294741))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh3294764)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh3294634));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3514970 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq637)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39692)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3515076)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh3478151));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39682 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39642) 
                  >> 0xfU) ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3514516)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh3514784 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_ETC___05F_d39693)
            ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh3514888)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh3514780));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3514889 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh3514888))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh3514911)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh3514781));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh212683 
        = ((((0U != ((0x3eU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172)) 
                     | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_ETC___05Fq112)))) 
             | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2222)) 
            & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172) 
               >> 6U)) ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh212789)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05Fh175864));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2212 
        = (1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2172) 
                  >> 0xfU) ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh212229)));
    vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh212497 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT___05FETC___05F_d2223)
            ? (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh212601)
            : (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05Fh212493));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh212602 
        = ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__final_mantissa___05F_1___05Fh212601))
            ? (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_1___05Fh212624)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh212494));
    vlTOPp->mkMmUnit__DOT__y___05Fh76403 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh76493) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh76494));
    vlTOPp->mkMmUnit__DOT__y___05Fh296557 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh296647) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh296648));
    vlTOPp->mkMmUnit__DOT__y___05Fh516707 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh516797) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh516798));
    vlTOPp->mkMmUnit__DOT__y___05Fh736857 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh736947) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh736948));
    vlTOPp->mkMmUnit__DOT__y___05Fh957027 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh957117) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh957118));
    vlTOPp->mkMmUnit__DOT__y___05Fh1177174 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1177264) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1177265));
    vlTOPp->mkMmUnit__DOT__y___05Fh1397321 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1397411) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1397412));
    vlTOPp->mkMmUnit__DOT__y___05Fh1617468 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1617558) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1617559));
    vlTOPp->mkMmUnit__DOT__y___05Fh1837638 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1837728) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1837729));
    vlTOPp->mkMmUnit__DOT__y___05Fh2057785 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2057875) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2057876));
    vlTOPp->mkMmUnit__DOT__y___05Fh2277932 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2278022) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2278023));
    vlTOPp->mkMmUnit__DOT__y___05Fh2498079 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2498169) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2498170));
    vlTOPp->mkMmUnit__DOT__y___05Fh2718249 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2718339) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2718340));
    vlTOPp->mkMmUnit__DOT__y___05Fh2938396 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2938486) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2938487));
    vlTOPp->mkMmUnit__DOT__y___05Fh3158543 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3158633) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3158634));
    vlTOPp->mkMmUnit__DOT__y___05Fh3378690 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3378780) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3378781));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_ETC___05Fq147 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4710)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh432651)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh432838));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh432650 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT___05FETC___05F_d4721)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh432756)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh432648));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_ETC___05Fq183 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7208)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh652801)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh652988));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh652800 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT___05FETC___05F_d7219)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh652906)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh652798));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_ETC___05Fq218 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9706)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh872951)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh873138));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh872950 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT___05FETC___05F_d9717)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh873056)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh872948));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq253 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12204)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh1093121)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh1093308));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1093120 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_ETC___05F_d12215)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1093226)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh1093118));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq288 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14702)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh1313268)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh1313455));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1313267 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_ETC___05F_d14713)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1313373)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh1313265));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq323 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17200)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh1533415)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh1533602));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1533414 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_ETC___05F_d17211)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1533520)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh1533412));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq358 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19698)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh1753562)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh1753749));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1753561 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_ETC___05F_d19709)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1753667)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh1753559));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq393 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22196)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh1973732)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh1973919));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1973731 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_ETC___05F_d22207)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1973837)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh1973729));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq428 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24694)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh2193879)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh2194066));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2193878 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_ETC___05F_d24705)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2193984)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh2193876));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq463 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27192)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh2414026)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh2414213));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2414025 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_ETC___05F_d27203)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2414131)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh2414023));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq498 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29690)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh2634173)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh2634360));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2634172 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_ETC___05F_d29701)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2634278)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh2634170));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq533 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32188)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh2854343)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh2854530));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2854342 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_ETC___05F_d32199)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2854448)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh2854340));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq568 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34686)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh3074490)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh3074677));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3074489 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_ETC___05F_d34697)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3074595)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh3074487));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq603 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37184)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh3294637)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh3294824));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3294636 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_ETC___05F_d37195)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3294742)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh3294634));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq638 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39682)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh3514784)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh3514971));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3514783 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_ETC___05F_d39693)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3514889)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh3514781));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_ETC___05Fq113 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2212)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh212497)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_snd___05Fh212684));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh212496 
        = ((IData)(vlTOPp->mkMmUnit__DOT__NOT_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT___05FETC___05F_d2223)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh212602)
            : (IData)(vlTOPp->mkMmUnit__DOT__exponent_sum___05F_2___05Fh212494));
    vlTOPp->mkMmUnit__DOT__y___05Fh76765 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh76403) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh76402));
    vlTOPp->mkMmUnit__DOT__y___05Fh296919 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh296557) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh296556));
    vlTOPp->mkMmUnit__DOT__y___05Fh517069 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh516707) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh516706));
    vlTOPp->mkMmUnit__DOT__y___05Fh737219 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh736857) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh736856));
    vlTOPp->mkMmUnit__DOT__y___05Fh957389 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh957027) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh957026));
    vlTOPp->mkMmUnit__DOT__y___05Fh1177536 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1177174) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1177173));
    vlTOPp->mkMmUnit__DOT__y___05Fh1397683 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1397321) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1397320));
    vlTOPp->mkMmUnit__DOT__y___05Fh1617830 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1617468) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1617467));
    vlTOPp->mkMmUnit__DOT__y___05Fh1838000 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1837638) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1837637));
    vlTOPp->mkMmUnit__DOT__y___05Fh2058147 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2057785) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2057784));
    vlTOPp->mkMmUnit__DOT__y___05Fh2278294 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2277932) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2277931));
    vlTOPp->mkMmUnit__DOT__y___05Fh2498441 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2498079) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2498078));
    vlTOPp->mkMmUnit__DOT__y___05Fh2718611 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2718249) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2718248));
    vlTOPp->mkMmUnit__DOT__y___05Fh2938758 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2938396) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2938395));
    vlTOPp->mkMmUnit__DOT__y___05Fh3158905 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3158543) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3158542));
    vlTOPp->mkMmUnit__DOT__y___05Fh3379052 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3378690) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3378689));
    vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh396021 
        = (0x7f0000U & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_ETC___05Fq147) 
                        << 0x10U));
    vlTOPp->mkMmUnit__DOT__exponent_A___05Fh395973 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_23_ETC___05F_d4710)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh432650)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh432837));
    vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh616171 
        = (0x7f0000U & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_ETC___05Fq183) 
                        << 0x10U));
    vlTOPp->mkMmUnit__DOT__exponent_A___05Fh616123 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_72_ETC___05F_d7208)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh652800)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh652987));
    vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh836321 
        = (0x7f0000U & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_ETC___05Fq218) 
                        << 0x10U));
    vlTOPp->mkMmUnit__DOT__exponent_A___05Fh836273 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_22_ETC___05F_d9706)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh872950)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh873137));
    vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh1056491 
        = (0x7f0000U & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq253) 
                        << 0x10U));
    vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1056443 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_6_1_ETC___05F_d12204)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1093120)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1093307));
    vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh1276638 
        = (0x7f0000U & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq288) 
                        << 0x10U));
    vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1276590 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_6_4_ETC___05F_d14702)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1313267)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1313454));
    vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh1496785 
        = (0x7f0000U & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq323) 
                        << 0x10U));
    vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1496737 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_6_6_ETC___05F_d17200)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1533414)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1533601));
    vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh1716932 
        = (0x7f0000U & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq358) 
                        << 0x10U));
    vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1716884 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_6_9_ETC___05F_d19698)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1753561)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1753748));
    vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh1937102 
        = (0x7f0000U & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq393) 
                        << 0x10U));
    vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1937054 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_6_1_ETC___05F_d22196)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1973731)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1973918));
    vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh2157249 
        = (0x7f0000U & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq428) 
                        << 0x10U));
    vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2157201 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_6_4_ETC___05F_d24694)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2193878)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2194065));
    vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh2377396 
        = (0x7f0000U & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq463) 
                        << 0x10U));
    vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2377348 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_6_6_ETC___05F_d27192)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2414025)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2414212));
    vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh2597543 
        = (0x7f0000U & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq498) 
                        << 0x10U));
    vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2597495 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_6_9_ETC___05F_d29690)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2634172)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2634359));
    vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh2817713 
        = (0x7f0000U & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq533) 
                        << 0x10U));
    vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2817665 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_6_1_ETC___05F_d32188)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2854342)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2854529));
    vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh3037860 
        = (0x7f0000U & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq568) 
                        << 0x10U));
    vlTOPp->mkMmUnit__DOT__exponent_A___05Fh3037812 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_6_4_ETC___05F_d34686)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3074489)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3074676));
    vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh3258007 
        = (0x7f0000U & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq603) 
                        << 0x10U));
    vlTOPp->mkMmUnit__DOT__exponent_A___05Fh3257959 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_6_6_ETC___05F_d37184)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3294636)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3294823));
    vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh3478154 
        = (0x7f0000U & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq638) 
                        << 0x10U));
    vlTOPp->mkMmUnit__DOT__exponent_A___05Fh3478106 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_6_9_ETC___05F_d39682)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3514783)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3514970));
    vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh175867 
        = (0x7f0000U & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_ETC___05Fq113) 
                        << 0x10U));
    vlTOPp->mkMmUnit__DOT__exponent_A___05Fh175819 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_73_ETC___05F_d2212)
            ? (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh212496)
            : (IData)(vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh212683));
    vlTOPp->mkMmUnit__DOT__y___05Fh76674 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh76764) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh76765));
    vlTOPp->mkMmUnit__DOT__y___05Fh296828 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh296918) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh296919));
    vlTOPp->mkMmUnit__DOT__y___05Fh516978 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh517068) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh517069));
    vlTOPp->mkMmUnit__DOT__y___05Fh737128 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh737218) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh737219));
    vlTOPp->mkMmUnit__DOT__y___05Fh957298 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh957388) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh957389));
    vlTOPp->mkMmUnit__DOT__y___05Fh1177445 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1177535) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1177536));
    vlTOPp->mkMmUnit__DOT__y___05Fh1397592 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1397682) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1397683));
    vlTOPp->mkMmUnit__DOT__y___05Fh1617739 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1617829) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1617830));
    vlTOPp->mkMmUnit__DOT__y___05Fh1837909 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1837999) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1838000));
    vlTOPp->mkMmUnit__DOT__y___05Fh2058056 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2058146) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2058147));
    vlTOPp->mkMmUnit__DOT__y___05Fh2278203 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2278293) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2278294));
    vlTOPp->mkMmUnit__DOT__y___05Fh2498350 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2498440) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2498441));
    vlTOPp->mkMmUnit__DOT__y___05Fh2718520 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2718610) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2718611));
    vlTOPp->mkMmUnit__DOT__y___05Fh2938667 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2938757) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2938758));
    vlTOPp->mkMmUnit__DOT__y___05Fh3158814 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3158904) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3158905));
    vlTOPp->mkMmUnit__DOT__y___05Fh3378961 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3379051) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3379052));
    vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh395971 
        = (0x800000U | vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh396021);
    vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_C_758_BITS_30_TO___05FETC___05F_d4769 
        = (0xffU & ((vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_C 
                     >> 0x17U) - (IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh395973)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_ETC___05F_d4760 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh395973) 
                    - (vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_C 
                       >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh616121 
        = (0x800000U | vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh616171);
    vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_C_256_BITS_30_TO___05FETC___05F_d7267 
        = (0xffU & ((vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_C 
                     >> 0x17U) - (IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh616123)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_ETC___05F_d7258 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh616123) 
                    - (vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_C 
                       >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh836271 
        = (0x800000U | vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh836321);
    vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_C_754_BITS_30_TO___05FETC___05F_d9765 
        = (0xffU & ((vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_C 
                     >> 0x17U) - (IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh836273)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_ETC___05F_d9756 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh836273) 
                    - (vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_C 
                       >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1056441 
        = (0x800000U | vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh1056491);
    vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_C_2252_BITS_30_TO_ETC___05F_d12263 
        = (0xffU & ((vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_C 
                     >> 0x17U) - (IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1056443)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05F_d12254 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1056443) 
                    - (vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_C 
                       >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1276588 
        = (0x800000U | vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh1276638);
    vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_C_4750_BITS_30_TO_ETC___05F_d14761 
        = (0xffU & ((vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_C 
                     >> 0x17U) - (IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1276590)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05F_d14752 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1276590) 
                    - (vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_C 
                       >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1496735 
        = (0x800000U | vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh1496785);
    vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_C_7248_BITS_30_TO_ETC___05F_d17259 
        = (0xffU & ((vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_C 
                     >> 0x17U) - (IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1496737)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05F_d17250 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1496737) 
                    - (vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_C 
                       >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1716882 
        = (0x800000U | vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh1716932);
    vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_C_9746_BITS_30_TO_ETC___05F_d19757 
        = (0xffU & ((vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_C 
                     >> 0x17U) - (IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1716884)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05F_d19748 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1716884) 
                    - (vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_C 
                       >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1937052 
        = (0x800000U | vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh1937102);
    vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_C_2244_BITS_30_TO_ETC___05F_d22255 
        = (0xffU & ((vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_C 
                     >> 0x17U) - (IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1937054)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05F_d22246 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1937054) 
                    - (vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_C 
                       >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh2157199 
        = (0x800000U | vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh2157249);
    vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_C_4742_BITS_30_TO_ETC___05F_d24753 
        = (0xffU & ((vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_C 
                     >> 0x17U) - (IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2157201)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05F_d24744 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2157201) 
                    - (vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_C 
                       >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh2377346 
        = (0x800000U | vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh2377396);
    vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_C_7240_BITS_30_TO_ETC___05F_d27251 
        = (0xffU & ((vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_C 
                     >> 0x17U) - (IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2377348)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05F_d27242 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2377348) 
                    - (vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_C 
                       >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh2597493 
        = (0x800000U | vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh2597543);
    vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_C_9738_BITS_30_TO_ETC___05F_d29749 
        = (0xffU & ((vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_C 
                     >> 0x17U) - (IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2597495)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05F_d29740 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2597495) 
                    - (vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_C 
                       >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh2817663 
        = (0x800000U | vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh2817713);
    vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_C_2236_BITS_30_TO_ETC___05F_d32247 
        = (0xffU & ((vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_C 
                     >> 0x17U) - (IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2817665)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05F_d32238 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2817665) 
                    - (vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_C 
                       >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh3037810 
        = (0x800000U | vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh3037860);
    vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_C_4734_BITS_30_TO_ETC___05F_d34745 
        = (0xffU & ((vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_C 
                     >> 0x17U) - (IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh3037812)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05F_d34736 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh3037812) 
                    - (vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_C 
                       >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh3257957 
        = (0x800000U | vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh3258007);
    vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_C_7232_BITS_30_TO_ETC___05F_d37243 
        = (0xffU & ((vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_C 
                     >> 0x17U) - (IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh3257959)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05F_d37234 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh3257959) 
                    - (vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_C 
                       >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh3478104 
        = (0x800000U | vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh3478154);
    vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_C_9730_BITS_30_TO_ETC___05F_d39741 
        = (0xffU & ((vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_C 
                     >> 0x17U) - (IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh3478106)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05F_d39732 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh3478106) 
                    - (vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_C 
                       >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh175817 
        = (0x800000U | vlTOPp->mkMmUnit__DOT__mantissa_rounded___05Fh175867);
    vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_C_260_BITS_30_TO___05FETC___05F_d2271 
        = (0xffU & ((vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_C 
                     >> 0x17U) - (IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh175819)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_ETC___05F_d2262 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh175819) 
                    - (vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_C 
                       >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d594 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh76673) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh76674)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh76402) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh76403)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d593));
    vlTOPp->mkMmUnit__DOT__y___05Fh77036 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh76674) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh76673));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d3092 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh296827) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh296828)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh296556) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh296557)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d3091));
    vlTOPp->mkMmUnit__DOT__y___05Fh297190 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh296828) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh296827));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5590 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh516977) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh516978)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh516706) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh516707)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5589));
    vlTOPp->mkMmUnit__DOT__y___05Fh517340 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh516978) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh516977));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d8088 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh737127) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh737128)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh736856) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh736857)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d8087));
    vlTOPp->mkMmUnit__DOT__y___05Fh737490 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh737128) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh737127));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10586 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh957297) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh957298)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh957026) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh957027)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10585));
    vlTOPp->mkMmUnit__DOT__y___05Fh957660 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh957298) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh957297));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d13084 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1177444) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1177445)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1177173) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1177174)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d13083));
    vlTOPp->mkMmUnit__DOT__y___05Fh1177807 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1177445) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1177444));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15582 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1397591) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1397592)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1397320) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1397321)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15581));
    vlTOPp->mkMmUnit__DOT__y___05Fh1397954 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1397592) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1397591));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d18080 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1617738) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1617739)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1617467) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1617468)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d18079));
    vlTOPp->mkMmUnit__DOT__y___05Fh1618101 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1617739) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1617738));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20578 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1837908) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1837909)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1837637) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1837638)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20577));
    vlTOPp->mkMmUnit__DOT__y___05Fh1838271 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1837909) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1837908));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d23076 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2058055) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2058056)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2057784) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2057785)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d23075));
    vlTOPp->mkMmUnit__DOT__y___05Fh2058418 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2058056) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2058055));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25574 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2278202) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2278203)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2277931) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2277932)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25573));
    vlTOPp->mkMmUnit__DOT__y___05Fh2278565 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2278203) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2278202));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d28072 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2498349) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2498350)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2498078) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2498079)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d28071));
    vlTOPp->mkMmUnit__DOT__y___05Fh2498712 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2498350) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2498349));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30570 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2718519) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2718520)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2718248) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2718249)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30569));
    vlTOPp->mkMmUnit__DOT__y___05Fh2718882 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2718520) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2718519));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d33068 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2938666) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2938667)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2938395) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2938396)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d33067));
    vlTOPp->mkMmUnit__DOT__y___05Fh2939029 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2938667) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2938666));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35566 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3158813) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3158814)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3158542) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3158543)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35565));
    vlTOPp->mkMmUnit__DOT__y___05Fh3159176 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3158814) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3158813));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d38064 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3378960) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3378961)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3378689) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3378690)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d38063));
    vlTOPp->mkMmUnit__DOT__y___05Fh3379323 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3378961) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3378960));
    vlTOPp->mkMmUnit__DOT__x___05Fh440449 = (0xffU 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_C_758_BITS_30_TO___05FETC___05F_d4769) 
                                                - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh433705 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh395973) 
                    + (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_C_758_BITS_30_TO___05FETC___05F_d4769)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh433704 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_C_758_BITS_30_TO___05FETC___05F_d4769))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh395971 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_C_758_BITS_30_TO___05FETC___05F_d4769)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh440416 = (0xffU 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_ETC___05F_d4760) 
                                                - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh433766 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_ETC___05F_d4760))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh395972 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_ETC___05F_d4760)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_ETC___05F_d4761 
        = (0x80U >= (0x80U ^ (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_ETC___05F_d4760)));
    vlTOPp->mkMmUnit__DOT__x___05Fh660599 = (0xffU 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_C_256_BITS_30_TO___05FETC___05F_d7267) 
                                                - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh653855 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh616123) 
                    + (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_C_256_BITS_30_TO___05FETC___05F_d7267)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh653854 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_C_256_BITS_30_TO___05FETC___05F_d7267))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh616121 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_C_256_BITS_30_TO___05FETC___05F_d7267)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh660566 = (0xffU 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_ETC___05F_d7258) 
                                                - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh653916 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_ETC___05F_d7258))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh616122 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_ETC___05F_d7258)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_ETC___05F_d7259 
        = (0x80U >= (0x80U ^ (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_ETC___05F_d7258)));
    vlTOPp->mkMmUnit__DOT__x___05Fh880749 = (0xffU 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_C_754_BITS_30_TO___05FETC___05F_d9765) 
                                                - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh874005 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh836273) 
                    + (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_C_754_BITS_30_TO___05FETC___05F_d9765)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh874004 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_C_754_BITS_30_TO___05FETC___05F_d9765))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh836271 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_C_754_BITS_30_TO___05FETC___05F_d9765)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh880716 = (0xffU 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_ETC___05F_d9756) 
                                                - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh874066 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_ETC___05F_d9756))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh836272 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_ETC___05F_d9756)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_ETC___05F_d9757 
        = (0x80U >= (0x80U ^ (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_ETC___05F_d9756)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1100919 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_C_2252_BITS_30_TO_ETC___05F_d12263) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh1094175 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1056443) 
                    + (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_C_2252_BITS_30_TO_ETC___05F_d12263)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh1094174 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_C_2252_BITS_30_TO_ETC___05F_d12263))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1056441 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_C_2252_BITS_30_TO_ETC___05F_d12263)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1100886 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05F_d12254) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh1094236 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05F_d12254))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh1056442 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05F_d12254)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05F_d12255 
        = (0x80U >= (0x80U ^ (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05F_d12254)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1321066 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_C_4750_BITS_30_TO_ETC___05F_d14761) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh1314322 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1276590) 
                    + (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_C_4750_BITS_30_TO_ETC___05F_d14761)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh1314321 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_C_4750_BITS_30_TO_ETC___05F_d14761))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1276588 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_C_4750_BITS_30_TO_ETC___05F_d14761)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1321033 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05F_d14752) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh1314383 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05F_d14752))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh1276589 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05F_d14752)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05F_d14753 
        = (0x80U >= (0x80U ^ (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05F_d14752)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1541213 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_C_7248_BITS_30_TO_ETC___05F_d17259) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh1534469 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1496737) 
                    + (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_C_7248_BITS_30_TO_ETC___05F_d17259)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh1534468 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_C_7248_BITS_30_TO_ETC___05F_d17259))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1496735 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_C_7248_BITS_30_TO_ETC___05F_d17259)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1541180 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05F_d17250) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh1534530 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05F_d17250))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh1496736 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05F_d17250)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05F_d17251 
        = (0x80U >= (0x80U ^ (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05F_d17250)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1761360 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_C_9746_BITS_30_TO_ETC___05F_d19757) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh1754616 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1716884) 
                    + (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_C_9746_BITS_30_TO_ETC___05F_d19757)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh1754615 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_C_9746_BITS_30_TO_ETC___05F_d19757))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1716882 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_C_9746_BITS_30_TO_ETC___05F_d19757)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1761327 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05F_d19748) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh1754677 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05F_d19748))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh1716883 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05F_d19748)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05F_d19749 
        = (0x80U >= (0x80U ^ (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05F_d19748)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1981530 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_C_2244_BITS_30_TO_ETC___05F_d22255) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh1974786 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1937054) 
                    + (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_C_2244_BITS_30_TO_ETC___05F_d22255)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh1974785 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_C_2244_BITS_30_TO_ETC___05F_d22255))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1937052 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_C_2244_BITS_30_TO_ETC___05F_d22255)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1981497 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05F_d22246) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh1974847 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05F_d22246))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh1937053 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05F_d22246)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05F_d22247 
        = (0x80U >= (0x80U ^ (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05F_d22246)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2201677 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_C_4742_BITS_30_TO_ETC___05F_d24753) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh2194933 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2157201) 
                    + (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_C_4742_BITS_30_TO_ETC___05F_d24753)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh2194932 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_C_4742_BITS_30_TO_ETC___05F_d24753))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh2157199 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_C_4742_BITS_30_TO_ETC___05F_d24753)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2201644 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05F_d24744) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh2194994 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05F_d24744))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh2157200 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05F_d24744)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05F_d24745 
        = (0x80U >= (0x80U ^ (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05F_d24744)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2421824 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_C_7240_BITS_30_TO_ETC___05F_d27251) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh2415080 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2377348) 
                    + (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_C_7240_BITS_30_TO_ETC___05F_d27251)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh2415079 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_C_7240_BITS_30_TO_ETC___05F_d27251))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh2377346 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_C_7240_BITS_30_TO_ETC___05F_d27251)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2421791 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05F_d27242) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh2415141 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05F_d27242))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh2377347 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05F_d27242)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05F_d27243 
        = (0x80U >= (0x80U ^ (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05F_d27242)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2641971 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_C_9738_BITS_30_TO_ETC___05F_d29749) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh2635227 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2597495) 
                    + (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_C_9738_BITS_30_TO_ETC___05F_d29749)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh2635226 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_C_9738_BITS_30_TO_ETC___05F_d29749))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh2597493 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_C_9738_BITS_30_TO_ETC___05F_d29749)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2641938 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05F_d29740) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh2635288 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05F_d29740))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh2597494 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05F_d29740)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05F_d29741 
        = (0x80U >= (0x80U ^ (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05F_d29740)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2862141 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_C_2236_BITS_30_TO_ETC___05F_d32247) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh2855397 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2817665) 
                    + (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_C_2236_BITS_30_TO_ETC___05F_d32247)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh2855396 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_C_2236_BITS_30_TO_ETC___05F_d32247))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh2817663 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_C_2236_BITS_30_TO_ETC___05F_d32247)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2862108 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05F_d32238) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh2855458 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05F_d32238))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh2817664 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05F_d32238)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05F_d32239 
        = (0x80U >= (0x80U ^ (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05F_d32238)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3082288 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_C_4734_BITS_30_TO_ETC___05F_d34745) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh3075544 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh3037812) 
                    + (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_C_4734_BITS_30_TO_ETC___05F_d34745)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh3075543 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_C_4734_BITS_30_TO_ETC___05F_d34745))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh3037810 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_C_4734_BITS_30_TO_ETC___05F_d34745)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3082255 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05F_d34736) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh3075605 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05F_d34736))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh3037811 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05F_d34736)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05F_d34737 
        = (0x80U >= (0x80U ^ (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05F_d34736)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3302435 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_C_7232_BITS_30_TO_ETC___05F_d37243) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh3295691 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh3257959) 
                    + (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_C_7232_BITS_30_TO_ETC___05F_d37243)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh3295690 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_C_7232_BITS_30_TO_ETC___05F_d37243))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh3257957 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_C_7232_BITS_30_TO_ETC___05F_d37243)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3302402 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05F_d37234) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh3295752 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05F_d37234))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh3257958 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05F_d37234)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05F_d37235 
        = (0x80U >= (0x80U ^ (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05F_d37234)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3522582 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_C_9730_BITS_30_TO_ETC___05F_d39741) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh3515838 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh3478106) 
                    + (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_C_9730_BITS_30_TO_ETC___05F_d39741)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh3515837 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_C_9730_BITS_30_TO_ETC___05F_d39741))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh3478104 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_C_9730_BITS_30_TO_ETC___05F_d39741)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3522549 = (0xffU 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05F_d39732) 
                                                 - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh3515899 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05F_d39732))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh3478105 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05F_d39732)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05F_d39733 
        = (0x80U >= (0x80U ^ (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05F_d39732)));
    vlTOPp->mkMmUnit__DOT__x___05Fh220295 = (0xffU 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_C_260_BITS_30_TO___05FETC___05F_d2271) 
                                                - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh213551 
        = (0xffU & ((IData)(vlTOPp->mkMmUnit__DOT__exponent_A___05Fh175819) 
                    + (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_C_260_BITS_30_TO___05FETC___05F_d2271)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh213550 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_C_260_BITS_30_TO___05FETC___05F_d2271))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh175817 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_C_260_BITS_30_TO___05FETC___05F_d2271)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh220262 = (0xffU 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_ETC___05F_d2262) 
                                                - (IData)(1U)));
    vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh213612 
        = ((0x17U >= (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_ETC___05F_d2262))
            ? (0xffffffU & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh175818 
                            >> (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_ETC___05F_d2262)))
            : 0U);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_ETC___05F_d2263 
        = (0x80U >= (0x80U ^ (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_ETC___05F_d2262)));
    vlTOPp->mkMmUnit__DOT__y___05Fh76945 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh77035) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh77036));
    vlTOPp->mkMmUnit__DOT__y___05Fh297099 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh297189) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh297190));
    vlTOPp->mkMmUnit__DOT__y___05Fh517249 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh517339) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh517340));
    vlTOPp->mkMmUnit__DOT__y___05Fh737399 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh737489) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh737490));
    vlTOPp->mkMmUnit__DOT__y___05Fh957569 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh957659) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh957660));
    vlTOPp->mkMmUnit__DOT__y___05Fh1177716 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1177806) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1177807));
    vlTOPp->mkMmUnit__DOT__y___05Fh1397863 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1397953) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1397954));
    vlTOPp->mkMmUnit__DOT__y___05Fh1618010 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1618100) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1618101));
    vlTOPp->mkMmUnit__DOT__y___05Fh1838180 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1838270) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1838271));
    vlTOPp->mkMmUnit__DOT__y___05Fh2058327 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2058417) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2058418));
    vlTOPp->mkMmUnit__DOT__y___05Fh2278474 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2278564) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2278565));
    vlTOPp->mkMmUnit__DOT__y___05Fh2498621 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2498711) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2498712));
    vlTOPp->mkMmUnit__DOT__y___05Fh2718791 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2718881) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2718882));
    vlTOPp->mkMmUnit__DOT__y___05Fh2938938 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2939028) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2939029));
    vlTOPp->mkMmUnit__DOT__y___05Fh3159085 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3159175) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3159176));
    vlTOPp->mkMmUnit__DOT__y___05Fh3379232 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3379322) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3379323));
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh433700 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_ETC___05F_d4760) 
            >> 7U) & ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh440449))) 
                      & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh395971 
                         >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh440449)))));
    if ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_ETC___05F_d4760))) {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh433702 
            = vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh433705;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh433703 
            = vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh433704;
    } else {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh433702 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh395973;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh433703 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh395971;
    }
    vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh433767 
        = ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh440416))) 
           & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh395972 
              >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh440416))));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_ETC___05F_d4761)
            ? vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh395972
            : vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh433766);
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh653850 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_ETC___05F_d7258) 
            >> 7U) & ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh660599))) 
                      & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh616121 
                         >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh660599)))));
    if ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_ETC___05F_d7258))) {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh653852 
            = vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh653855;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh653853 
            = vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh653854;
    } else {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh653852 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh616123;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh653853 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh616121;
    }
    vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh653917 
        = ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh660566))) 
           & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh616122 
              >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh660566))));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_ETC___05F_d7259)
            ? vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh616122
            : vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh653916);
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh874000 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_ETC___05F_d9756) 
            >> 7U) & ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh880749))) 
                      & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh836271 
                         >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh880749)))));
    if ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_ETC___05F_d9756))) {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh874002 
            = vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh874005;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh874003 
            = vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh874004;
    } else {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh874002 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh836273;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh874003 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh836271;
    }
    vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh874067 
        = ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh880716))) 
           & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh836272 
              >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh880716))));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_ETC___05F_d9757)
            ? vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh836272
            : vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh874066);
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1094170 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05F_d12254) 
            >> 7U) & ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1100919))) 
                      & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1056441 
                         >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1100919)))));
    if ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05F_d12254))) {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh1094172 
            = vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh1094175;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh1094173 
            = vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh1094174;
    } else {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh1094172 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1056443;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh1094173 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1056441;
    }
    vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh1094237 
        = ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1100886))) 
           & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh1056442 
              >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1100886))));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05F_d12255)
            ? vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh1056442
            : vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh1094236);
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1314317 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05F_d14752) 
            >> 7U) & ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1321066))) 
                      & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1276588 
                         >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1321066)))));
    if ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05F_d14752))) {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh1314319 
            = vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh1314322;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh1314320 
            = vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh1314321;
    } else {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh1314319 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1276590;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh1314320 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1276588;
    }
    vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh1314384 
        = ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1321033))) 
           & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh1276589 
              >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1321033))));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05F_d14753)
            ? vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh1276589
            : vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh1314383);
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1534464 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05F_d17250) 
            >> 7U) & ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1541213))) 
                      & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1496735 
                         >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1541213)))));
    if ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05F_d17250))) {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh1534466 
            = vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh1534469;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh1534467 
            = vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh1534468;
    } else {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh1534466 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1496737;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh1534467 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1496735;
    }
    vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh1534531 
        = ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1541180))) 
           & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh1496736 
              >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1541180))));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05F_d17251)
            ? vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh1496736
            : vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh1534530);
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1754611 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05F_d19748) 
            >> 7U) & ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1761360))) 
                      & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1716882 
                         >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1761360)))));
    if ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05F_d19748))) {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh1754613 
            = vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh1754616;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh1754614 
            = vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh1754615;
    } else {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh1754613 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1716884;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh1754614 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1716882;
    }
    vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh1754678 
        = ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1761327))) 
           & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh1716883 
              >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1761327))));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05F_d19749)
            ? vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh1716883
            : vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh1754677);
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1974781 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05F_d22246) 
            >> 7U) & ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1981530))) 
                      & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1937052 
                         >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1981530)))));
    if ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05F_d22246))) {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh1974783 
            = vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh1974786;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh1974784 
            = vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh1974785;
    } else {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh1974783 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1937054;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh1974784 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1937052;
    }
    vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh1974848 
        = ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1981497))) 
           & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh1937053 
              >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1981497))));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05F_d22247)
            ? vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh1937053
            : vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh1974847);
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2194928 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05F_d24744) 
            >> 7U) & ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2201677))) 
                      & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh2157199 
                         >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2201677)))));
    if ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05F_d24744))) {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh2194930 
            = vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh2194933;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh2194931 
            = vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh2194932;
    } else {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh2194930 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2157201;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh2194931 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh2157199;
    }
    vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh2194995 
        = ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2201644))) 
           & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh2157200 
              >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2201644))));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05F_d24745)
            ? vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh2157200
            : vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh2194994);
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2415075 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05F_d27242) 
            >> 7U) & ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2421824))) 
                      & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh2377346 
                         >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2421824)))));
    if ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05F_d27242))) {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh2415077 
            = vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh2415080;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh2415078 
            = vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh2415079;
    } else {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh2415077 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2377348;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh2415078 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh2377346;
    }
    vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh2415142 
        = ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2421791))) 
           & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh2377347 
              >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2421791))));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05F_d27243)
            ? vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh2377347
            : vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh2415141);
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2635222 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05F_d29740) 
            >> 7U) & ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2641971))) 
                      & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh2597493 
                         >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2641971)))));
    if ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05F_d29740))) {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh2635224 
            = vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh2635227;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh2635225 
            = vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh2635226;
    } else {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh2635224 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2597495;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh2635225 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh2597493;
    }
    vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh2635289 
        = ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2641938))) 
           & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh2597494 
              >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2641938))));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_B_ETC___05F_d29760 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05F_d29741)
            ? vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh2597494
            : vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh2635288);
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2855392 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05F_d32238) 
            >> 7U) & ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2862141))) 
                      & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh2817663 
                         >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2862141)))));
    if ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05F_d32238))) {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh2855394 
            = vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh2855397;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh2855395 
            = vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh2855396;
    } else {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh2855394 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2817665;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh2855395 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh2817663;
    }
    vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh2855459 
        = ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2862108))) 
           & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh2817664 
              >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2862108))));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_B_ETC___05F_d32258 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05F_d32239)
            ? vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh2817664
            : vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh2855458);
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3075539 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05F_d34736) 
            >> 7U) & ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3082288))) 
                      & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh3037810 
                         >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3082288)))));
    if ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05F_d34736))) {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh3075541 
            = vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh3075544;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh3075542 
            = vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh3075543;
    } else {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh3075541 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh3037812;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh3075542 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh3037810;
    }
    vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh3075606 
        = ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3082255))) 
           & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh3037811 
              >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3082255))));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_B_ETC___05F_d34756 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05F_d34737)
            ? vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh3037811
            : vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh3075605);
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3295686 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05F_d37234) 
            >> 7U) & ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3302435))) 
                      & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh3257957 
                         >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3302435)))));
    if ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05F_d37234))) {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh3295688 
            = vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh3295691;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh3295689 
            = vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh3295690;
    } else {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh3295688 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh3257959;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh3295689 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh3257957;
    }
    vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh3295753 
        = ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3302402))) 
           & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh3257958 
              >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3302402))));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_B_ETC___05F_d37254 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05F_d37235)
            ? vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh3257958
            : vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh3295752);
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3515833 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05F_d39732) 
            >> 7U) & ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3522582))) 
                      & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh3478104 
                         >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3522582)))));
    if ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05F_d39732))) {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh3515835 
            = vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh3515838;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh3515836 
            = vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh3515837;
    } else {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh3515835 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh3478106;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh3515836 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh3478104;
    }
    vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh3515900 
        = ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3522549))) 
           & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh3478105 
              >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3522549))));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_B_ETC___05F_d39752 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05F_d39733)
            ? vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh3478105
            : vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh3515899);
    vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh213546 
        = (((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_ETC___05F_d2262) 
            >> 7U) & ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh220295))) 
                      & (vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh175817 
                         >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh220295)))));
    if ((0x80U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_ETC___05F_d2262))) {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh213548 
            = vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh213551;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh213549 
            = vlTOPp->mkMmUnit__DOT__aligned_mantissa_A___05F_1___05Fh213550;
    } else {
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh213548 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh175819;
        vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh213549 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh175817;
    }
    vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh213613 
        = ((0x17U >= (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh220262))) 
           & (vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh175818 
              >> (0x1fU & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh220262))));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BI_ETC___05F_d2282 
        = ((IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_ETC___05F_d2263)
            ? vlTOPp->mkMmUnit__DOT__mantissa_b___05Fh175818
            : vlTOPp->mkMmUnit__DOT__aligned_mantissa_B___05F_1___05Fh213612);
    vlTOPp->mkMmUnit__DOT__y___05Fh77307 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh76945) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh76944));
    vlTOPp->mkMmUnit__DOT__y___05Fh297461 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh297099) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh297098));
    vlTOPp->mkMmUnit__DOT__y___05Fh517611 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh517249) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh517248));
    vlTOPp->mkMmUnit__DOT__y___05Fh737761 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh737399) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh737398));
    vlTOPp->mkMmUnit__DOT__y___05Fh957931 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh957569) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh957568));
    vlTOPp->mkMmUnit__DOT__y___05Fh1178078 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1177716) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1177715));
    vlTOPp->mkMmUnit__DOT__y___05Fh1398225 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1397863) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1397862));
    vlTOPp->mkMmUnit__DOT__y___05Fh1618372 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1618010) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1618009));
    vlTOPp->mkMmUnit__DOT__y___05Fh1838542 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1838180) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1838179));
    vlTOPp->mkMmUnit__DOT__y___05Fh2058689 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2058327) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2058326));
    vlTOPp->mkMmUnit__DOT__y___05Fh2278836 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2278474) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2278473));
    vlTOPp->mkMmUnit__DOT__y___05Fh2498983 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2498621) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2498620));
    vlTOPp->mkMmUnit__DOT__y___05Fh2719153 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2718791) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2718790));
    vlTOPp->mkMmUnit__DOT__y___05Fh2939300 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2938938) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2938937));
    vlTOPp->mkMmUnit__DOT__y___05Fh3159447 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3159085) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3159084));
    vlTOPp->mkMmUnit__DOT__y___05Fh3379594 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3379232) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3379231));
    if (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_6_ETC___05F_d4761) {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh395980 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh433702;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh433703;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh433668 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh433700;
    } else {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh395980 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh395973;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh395971;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh433668 
            = vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh433767;
    }
    if (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_6_ETC___05F_d7259) {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh616130 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh653852;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh653853;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh653818 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh653850;
    } else {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh616130 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh616123;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh616121;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh653818 
            = vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh653917;
    }
    if (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_6_ETC___05F_d9757) {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh836280 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh874002;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh874003;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh873968 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh874000;
    } else {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh836280 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh836273;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh836271;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh873968 
            = vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh874067;
    }
    if (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05F_d12255) {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh1056450 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh1094172;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh1094173;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1094138 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1094170;
    } else {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh1056450 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1056443;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1056441;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1094138 
            = vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh1094237;
    }
    if (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05F_d14753) {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh1276597 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh1314319;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh1314320;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1314285 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1314317;
    } else {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh1276597 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1276590;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1276588;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1314285 
            = vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh1314384;
    }
    if (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05F_d17251) {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh1496744 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh1534466;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh1534467;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1534432 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1534464;
    } else {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh1496744 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1496737;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1496735;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1534432 
            = vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh1534531;
    }
    if (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05F_d19749) {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh1716891 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh1754613;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh1754614;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1754579 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1754611;
    } else {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh1716891 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1716884;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1716882;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1754579 
            = vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh1754678;
    }
    if (vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05F_d22247) {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh1937061 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh1974783;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh1974784;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1974749 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1974781;
    } else {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh1937061 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh1937054;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh1937052;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh1974749 
            = vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh1974848;
    }
    if (vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05F_d24745) {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh2157208 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh2194930;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh2194931;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2194896 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2194928;
    } else {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh2157208 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2157201;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh2157199;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2194896 
            = vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh2194995;
    }
    if (vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05F_d27243) {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh2377355 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh2415077;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh2415078;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2415043 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2415075;
    } else {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh2377355 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2377348;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh2377346;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2415043 
            = vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh2415142;
    }
    if (vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05F_d29741) {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh2597502 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh2635224;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_B_ETC___05F_d29754 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh2635225;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2635190 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2635222;
    } else {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh2597502 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2597495;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_B_ETC___05F_d29754 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh2597493;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2635190 
            = vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh2635289;
    }
    if (vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05F_d32239) {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh2817672 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh2855394;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_B_ETC___05F_d32252 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh2855395;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2855360 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2855392;
    } else {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh2817672 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh2817665;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_B_ETC___05F_d32252 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh2817663;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh2855360 
            = vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh2855459;
    }
    if (vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05F_d34737) {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh3037819 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh3075541;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_B_ETC___05F_d34750 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh3075542;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3075507 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3075539;
    } else {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh3037819 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh3037812;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_B_ETC___05F_d34750 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh3037810;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3075507 
            = vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh3075606;
    }
    if (vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05F_d37235) {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh3257966 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh3295688;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_B_ETC___05F_d37248 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh3295689;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3295654 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3295686;
    } else {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh3257966 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh3257959;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_B_ETC___05F_d37248 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh3257957;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3295654 
            = vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh3295753;
    }
    if (vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05F_d39733) {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh3478113 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh3515835;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_B_ETC___05F_d39746 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh3515836;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3515801 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3515833;
    } else {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh3478113 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh3478106;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_B_ETC___05F_d39746 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh3478104;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh3515801 
            = vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh3515900;
    }
    if (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_6_ETC___05F_d2263) {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh175826 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_fst___05Fh213548;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BI_ETC___05F_d2276 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_snd_snd___05Fh213549;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh213514 
            = vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh213546;
    } else {
        vlTOPp->mkMmUnit__DOT__result_exponent___05Fh175826 
            = vlTOPp->mkMmUnit__DOT__exponent_A___05Fh175819;
        vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BI_ETC___05F_d2276 
            = vlTOPp->mkMmUnit__DOT__mantissa_a___05Fh175817;
        vlTOPp->mkMmUnit__DOT___theResult___05F_fst___05Fh213514 
            = vlTOPp->mkMmUnit__DOT__round_flag___05F_1___05Fh213613;
    }
    vlTOPp->mkMmUnit__DOT__y___05Fh77216 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh77306) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh77307));
    vlTOPp->mkMmUnit__DOT__y___05Fh297370 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh297460) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh297461));
    vlTOPp->mkMmUnit__DOT__y___05Fh517520 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh517610) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh517611));
    vlTOPp->mkMmUnit__DOT__y___05Fh737670 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh737760) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh737761));
    vlTOPp->mkMmUnit__DOT__y___05Fh957840 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh957930) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh957931));
    vlTOPp->mkMmUnit__DOT__y___05Fh1177987 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1178077) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1178078));
    vlTOPp->mkMmUnit__DOT__y___05Fh1398134 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1398224) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1398225));
    vlTOPp->mkMmUnit__DOT__y___05Fh1618281 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1618371) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1618372));
    vlTOPp->mkMmUnit__DOT__y___05Fh1838451 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1838541) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1838542));
    vlTOPp->mkMmUnit__DOT__y___05Fh2058598 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2058688) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2058689));
    vlTOPp->mkMmUnit__DOT__y___05Fh2278745 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2278835) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2278836));
    vlTOPp->mkMmUnit__DOT__y___05Fh2498892 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2498982) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2498983));
    vlTOPp->mkMmUnit__DOT__y___05Fh2719062 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2719152) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2719153));
    vlTOPp->mkMmUnit__DOT__y___05Fh2939209 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2939299) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2939300));
    vlTOPp->mkMmUnit__DOT__y___05Fh3159356 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3159446) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3159447));
    vlTOPp->mkMmUnit__DOT__y___05Fh3379503 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3379593) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3379594));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh437469 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__result_exponent___05Fh395980)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_ETC___05Fq149 
        = ((1U & (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                  ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh437317 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0x17U));
    vlTOPp->mkMmUnit__DOT__y___05Fh437365 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0x17U));
    vlTOPp->mkMmUnit__DOT__x___05Fh437163 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh437211 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0x16U));
    vlTOPp->mkMmUnit__DOT__x___05Fh437009 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh437057 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0x15U));
    vlTOPp->mkMmUnit__DOT__x___05Fh436855 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh436903 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0x14U));
    vlTOPp->mkMmUnit__DOT__x___05Fh436701 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0x13U));
    vlTOPp->mkMmUnit__DOT__y___05Fh436749 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0x13U));
    vlTOPp->mkMmUnit__DOT__x___05Fh436547 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh436595 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0x12U));
    vlTOPp->mkMmUnit__DOT__x___05Fh436393 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh436441 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0x11U));
    vlTOPp->mkMmUnit__DOT__x___05Fh436239 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh436287 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0x10U));
    vlTOPp->mkMmUnit__DOT__x___05Fh436085 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0xfU));
    vlTOPp->mkMmUnit__DOT__y___05Fh436133 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh435931 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh435979 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0xeU));
    vlTOPp->mkMmUnit__DOT__x___05Fh435777 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh435825 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0xdU));
    vlTOPp->mkMmUnit__DOT__x___05Fh435623 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh435671 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0xcU));
    vlTOPp->mkMmUnit__DOT__x___05Fh435469 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh435517 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0xbU));
    vlTOPp->mkMmUnit__DOT__x___05Fh435315 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh435363 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 0xaU));
    vlTOPp->mkMmUnit__DOT__x___05Fh435161 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh435209 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 9U));
    vlTOPp->mkMmUnit__DOT__x___05Fh435007 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh435055 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 8U));
    vlTOPp->mkMmUnit__DOT__x___05Fh434853 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 7U));
    vlTOPp->mkMmUnit__DOT__y___05Fh434901 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 7U));
    vlTOPp->mkMmUnit__DOT__x___05Fh434699 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh434747 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 6U));
    vlTOPp->mkMmUnit__DOT__x___05Fh434545 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh434593 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 5U));
    vlTOPp->mkMmUnit__DOT__x___05Fh434391 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh434439 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 4U));
    vlTOPp->mkMmUnit__DOT__x___05Fh434237 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 3U));
    vlTOPp->mkMmUnit__DOT__y___05Fh434285 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 3U));
    vlTOPp->mkMmUnit__DOT__x___05Fh434083 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh434131 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 2U));
    vlTOPp->mkMmUnit__DOT__x___05Fh433928 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 1U));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_ETC___05Fq148 
        = ((1U & (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                  & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780))
            ? 2U : 0U);
    vlTOPp->mkMmUnit__DOT__y___05Fh433976 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4774 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BI_ETC___05F_d4780) 
                                                   >> 1U));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh657619 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__result_exponent___05Fh616130)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_ETC___05Fq185 
        = ((1U & (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                  ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh657467 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0x17U));
    vlTOPp->mkMmUnit__DOT__y___05Fh657515 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0x17U));
    vlTOPp->mkMmUnit__DOT__x___05Fh657313 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh657361 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0x16U));
    vlTOPp->mkMmUnit__DOT__x___05Fh657159 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh657207 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0x15U));
    vlTOPp->mkMmUnit__DOT__x___05Fh657005 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh657053 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0x14U));
    vlTOPp->mkMmUnit__DOT__x___05Fh656851 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0x13U));
    vlTOPp->mkMmUnit__DOT__y___05Fh656899 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0x13U));
    vlTOPp->mkMmUnit__DOT__x___05Fh656697 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh656745 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0x12U));
    vlTOPp->mkMmUnit__DOT__x___05Fh656543 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh656591 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0x11U));
    vlTOPp->mkMmUnit__DOT__x___05Fh656389 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh656437 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0x10U));
    vlTOPp->mkMmUnit__DOT__x___05Fh656235 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0xfU));
    vlTOPp->mkMmUnit__DOT__y___05Fh656283 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh656081 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh656129 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0xeU));
    vlTOPp->mkMmUnit__DOT__x___05Fh655927 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh655975 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0xdU));
    vlTOPp->mkMmUnit__DOT__x___05Fh655773 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh655821 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0xcU));
    vlTOPp->mkMmUnit__DOT__x___05Fh655619 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh655667 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0xbU));
    vlTOPp->mkMmUnit__DOT__x___05Fh655465 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh655513 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 0xaU));
    vlTOPp->mkMmUnit__DOT__x___05Fh655311 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh655359 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 9U));
    vlTOPp->mkMmUnit__DOT__x___05Fh655157 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh655205 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 8U));
    vlTOPp->mkMmUnit__DOT__x___05Fh655003 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 7U));
    vlTOPp->mkMmUnit__DOT__y___05Fh655051 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 7U));
    vlTOPp->mkMmUnit__DOT__x___05Fh654849 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh654897 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 6U));
    vlTOPp->mkMmUnit__DOT__x___05Fh654695 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh654743 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 5U));
    vlTOPp->mkMmUnit__DOT__x___05Fh654541 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh654589 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 4U));
    vlTOPp->mkMmUnit__DOT__x___05Fh654387 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 3U));
    vlTOPp->mkMmUnit__DOT__y___05Fh654435 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 3U));
    vlTOPp->mkMmUnit__DOT__x___05Fh654233 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh654281 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 2U));
    vlTOPp->mkMmUnit__DOT__x___05Fh654078 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 1U));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_ETC___05Fq184 
        = ((1U & (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                  & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278))
            ? 2U : 0U);
    vlTOPp->mkMmUnit__DOT__y___05Fh654126 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7272 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BI_ETC___05F_d7278) 
                                                   >> 1U));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh877769 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__result_exponent___05Fh836280)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_ETC___05Fq220 
        = ((1U & (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                  ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh877617 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0x17U));
    vlTOPp->mkMmUnit__DOT__y___05Fh877665 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0x17U));
    vlTOPp->mkMmUnit__DOT__x___05Fh877463 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh877511 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0x16U));
    vlTOPp->mkMmUnit__DOT__x___05Fh877309 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh877357 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0x15U));
    vlTOPp->mkMmUnit__DOT__x___05Fh877155 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh877203 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0x14U));
    vlTOPp->mkMmUnit__DOT__x___05Fh877001 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0x13U));
    vlTOPp->mkMmUnit__DOT__y___05Fh877049 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0x13U));
    vlTOPp->mkMmUnit__DOT__x___05Fh876847 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh876895 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0x12U));
    vlTOPp->mkMmUnit__DOT__x___05Fh876693 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh876741 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0x11U));
    vlTOPp->mkMmUnit__DOT__x___05Fh876539 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh876587 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0x10U));
    vlTOPp->mkMmUnit__DOT__x___05Fh876385 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0xfU));
    vlTOPp->mkMmUnit__DOT__y___05Fh876433 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh876231 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh876279 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0xeU));
    vlTOPp->mkMmUnit__DOT__x___05Fh876077 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh876125 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0xdU));
    vlTOPp->mkMmUnit__DOT__x___05Fh875923 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh875971 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0xcU));
    vlTOPp->mkMmUnit__DOT__x___05Fh875769 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh875817 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0xbU));
    vlTOPp->mkMmUnit__DOT__x___05Fh875615 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh875663 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 0xaU));
    vlTOPp->mkMmUnit__DOT__x___05Fh875461 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh875509 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 9U));
    vlTOPp->mkMmUnit__DOT__x___05Fh875307 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh875355 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 8U));
    vlTOPp->mkMmUnit__DOT__x___05Fh875153 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 7U));
    vlTOPp->mkMmUnit__DOT__y___05Fh875201 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 7U));
    vlTOPp->mkMmUnit__DOT__x___05Fh874999 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh875047 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 6U));
    vlTOPp->mkMmUnit__DOT__x___05Fh874845 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh874893 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 5U));
    vlTOPp->mkMmUnit__DOT__x___05Fh874691 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh874739 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 4U));
    vlTOPp->mkMmUnit__DOT__x___05Fh874537 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 3U));
    vlTOPp->mkMmUnit__DOT__y___05Fh874585 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 3U));
    vlTOPp->mkMmUnit__DOT__x___05Fh874383 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh874431 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 2U));
    vlTOPp->mkMmUnit__DOT__x___05Fh874228 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 1U));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_ETC___05Fq219 
        = ((1U & (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                  & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776))
            ? 2U : 0U);
    vlTOPp->mkMmUnit__DOT__y___05Fh874276 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9770 
                                                    ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BI_ETC___05F_d9776) 
                                                   >> 1U));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh1097939 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__result_exponent___05Fh1056450)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_172_ETC___05Fq255 
        = ((1U & (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                  ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1097787 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0x17U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1097835 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0x17U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1097633 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1097681 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0x16U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1097479 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1097527 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0x15U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1097325 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1097373 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0x14U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1097171 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0x13U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1097219 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0x13U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1097017 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1097065 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0x12U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1096863 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1096911 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0x11U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1096709 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1096757 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0x10U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1096555 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0xfU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1096603 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1096401 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1096449 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0xeU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1096247 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1096295 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0xdU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1096093 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1096141 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0xcU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1095939 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1095987 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0xbU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1095785 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1095833 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 0xaU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1095631 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1095679 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 9U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1095477 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1095525 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 8U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1095323 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 7U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1095371 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 7U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1095169 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1095217 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 6U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1095015 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1095063 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 5U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1094861 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1094909 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 4U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1094707 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 3U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1094755 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 3U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1094553 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1094601 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 2U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1094398 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 1U));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_172_ETC___05Fq254 
        = ((1U & (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                  & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274))
            ? 2U : 0U);
    vlTOPp->mkMmUnit__DOT__y___05Fh1094446 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12268 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_B_ETC___05F_d12274) 
                                               >> 1U));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh1318086 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__result_exponent___05Fh1276597)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_421_ETC___05Fq290 
        = ((1U & (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                  ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1317934 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0x17U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1317982 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0x17U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1317780 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1317828 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0x16U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1317626 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1317674 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0x15U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1317472 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1317520 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0x14U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1317318 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0x13U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1317366 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0x13U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1317164 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1317212 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0x12U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1317010 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1317058 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0x11U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1316856 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1316904 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0x10U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1316702 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0xfU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1316750 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1316548 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1316596 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0xeU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1316394 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1316442 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0xdU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1316240 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1316288 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0xcU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1316086 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1316134 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0xbU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1315932 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1315980 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 0xaU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1315778 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1315826 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 9U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1315624 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1315672 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 8U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1315470 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 7U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1315518 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 7U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1315316 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1315364 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 6U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1315162 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1315210 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 5U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1315008 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1315056 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 4U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1314854 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 3U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1314902 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 3U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1314700 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1314748 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 2U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1314545 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 1U));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_421_ETC___05Fq289 
        = ((1U & (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                  & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772))
            ? 2U : 0U);
    vlTOPp->mkMmUnit__DOT__y___05Fh1314593 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14766 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_B_ETC___05F_d14772) 
                                               >> 1U));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh1538233 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__result_exponent___05Fh1496744)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_671_ETC___05Fq325 
        = ((1U & (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                  ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1538081 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0x17U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1538129 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0x17U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1537927 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1537975 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0x16U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1537773 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1537821 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0x15U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1537619 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1537667 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0x14U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1537465 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0x13U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1537513 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0x13U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1537311 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1537359 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0x12U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1537157 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1537205 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0x11U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1537003 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1537051 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0x10U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1536849 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0xfU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1536897 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1536695 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1536743 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0xeU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1536541 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1536589 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0xdU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1536387 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1536435 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0xcU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1536233 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1536281 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0xbU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1536079 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1536127 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 0xaU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1535925 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1535973 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 9U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1535771 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1535819 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 8U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1535617 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 7U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1535665 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 7U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1535463 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1535511 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 6U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1535309 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1535357 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 5U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1535155 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1535203 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 4U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1535001 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 3U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1535049 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 3U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1534847 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1534895 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 2U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1534692 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 1U));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_671_ETC___05Fq324 
        = ((1U & (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                  & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270))
            ? 2U : 0U);
    vlTOPp->mkMmUnit__DOT__y___05Fh1534740 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17264 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_B_ETC___05F_d17270) 
                                               >> 1U));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh1758380 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__result_exponent___05Fh1716891)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_921_ETC___05Fq360 
        = ((1U & (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                  ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1758228 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0x17U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1758276 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0x17U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1758074 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1758122 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0x16U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1757920 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1757968 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0x15U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1757766 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1757814 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0x14U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1757612 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0x13U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1757660 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0x13U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1757458 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1757506 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0x12U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1757304 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1757352 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0x11U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1757150 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1757198 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0x10U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1756996 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0xfU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1757044 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1756842 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1756890 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0xeU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1756688 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1756736 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0xdU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1756534 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1756582 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0xcU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1756380 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1756428 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0xbU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1756226 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1756274 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 0xaU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1756072 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1756120 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 9U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1755918 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1755966 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 8U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1755764 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 7U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1755812 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 7U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1755610 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1755658 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 6U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1755456 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1755504 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 5U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1755302 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1755350 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 4U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1755148 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 3U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1755196 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 3U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1754994 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1755042 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 2U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1754839 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 1U));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_921_ETC___05Fq359 
        = ((1U & (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                  & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768))
            ? 2U : 0U);
    vlTOPp->mkMmUnit__DOT__y___05Fh1754887 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19762 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_B_ETC___05F_d19768) 
                                               >> 1U));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh1978550 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__result_exponent___05Fh1937061)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_171_ETC___05Fq395 
        = ((1U & (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                  ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1978398 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0x17U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1978446 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0x17U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1978244 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1978292 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0x16U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1978090 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1978138 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0x15U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1977936 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1977984 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0x14U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1977782 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0x13U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1977830 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0x13U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1977628 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1977676 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0x12U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1977474 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1977522 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0x11U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1977320 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1977368 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0x10U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1977166 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0xfU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1977214 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1977012 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1977060 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0xeU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1976858 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1976906 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0xdU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1976704 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1976752 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0xcU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1976550 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1976598 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0xbU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1976396 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1976444 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 0xaU));
    vlTOPp->mkMmUnit__DOT__x___05Fh1976242 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1976290 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 9U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1976088 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1976136 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 8U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1975934 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 7U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1975982 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 7U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1975780 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1975828 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 6U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1975626 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1975674 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 5U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1975472 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1975520 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 4U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1975318 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 3U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1975366 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 3U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1975164 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh1975212 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 2U));
    vlTOPp->mkMmUnit__DOT__x___05Fh1975009 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 1U));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_171_ETC___05Fq394 
        = ((1U & (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                  & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266))
            ? 2U : 0U);
    vlTOPp->mkMmUnit__DOT__y___05Fh1975057 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22260 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_B_ETC___05F_d22266) 
                                               >> 1U));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh2198697 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__result_exponent___05Fh2157208)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_421_ETC___05Fq430 
        = ((1U & (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                  ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2198545 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0x17U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2198593 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0x17U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2198391 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2198439 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0x16U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2198237 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2198285 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0x15U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2198083 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2198131 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0x14U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2197929 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0x13U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2197977 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0x13U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2197775 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2197823 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0x12U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2197621 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2197669 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0x11U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2197467 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2197515 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0x10U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2197313 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0xfU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2197361 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh2197159 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2197207 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0xeU));
    vlTOPp->mkMmUnit__DOT__x___05Fh2197005 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2197053 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0xdU));
    vlTOPp->mkMmUnit__DOT__x___05Fh2196851 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2196899 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0xcU));
    vlTOPp->mkMmUnit__DOT__x___05Fh2196697 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2196745 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0xbU));
    vlTOPp->mkMmUnit__DOT__x___05Fh2196543 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2196591 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 0xaU));
    vlTOPp->mkMmUnit__DOT__x___05Fh2196389 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2196437 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 9U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2196235 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2196283 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 8U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2196081 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 7U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2196129 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 7U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2195927 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2195975 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 6U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2195773 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2195821 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 5U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2195619 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2195667 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 4U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2195465 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 3U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2195513 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 3U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2195311 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2195359 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 2U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2195156 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 1U));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_421_ETC___05Fq429 
        = ((1U & (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                  & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764))
            ? 2U : 0U);
    vlTOPp->mkMmUnit__DOT__y___05Fh2195204 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24758 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_B_ETC___05F_d24764) 
                                               >> 1U));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh2418844 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__result_exponent___05Fh2377355)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_670_ETC___05Fq465 
        = ((1U & (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                  ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2418692 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0x17U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2418740 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0x17U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2418538 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2418586 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0x16U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2418384 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2418432 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0x15U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2418230 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0x14U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2418278 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0x14U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2418076 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0x13U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2418124 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0x13U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2417922 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0x12U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2417970 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0x12U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2417768 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0x11U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2417816 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0x11U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2417614 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0x10U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2417662 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0x10U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2417460 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0xfU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2417508 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0xfU));
    vlTOPp->mkMmUnit__DOT__x___05Fh2417306 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2417354 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0xeU));
    vlTOPp->mkMmUnit__DOT__x___05Fh2417152 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2417200 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0xdU));
    vlTOPp->mkMmUnit__DOT__x___05Fh2416998 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2417046 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0xcU));
    vlTOPp->mkMmUnit__DOT__x___05Fh2416844 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2416892 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0xbU));
    vlTOPp->mkMmUnit__DOT__x___05Fh2416690 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2416738 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 0xaU));
    vlTOPp->mkMmUnit__DOT__x___05Fh2416536 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 9U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2416584 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 9U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2416382 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 8U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2416430 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 8U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2416228 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 7U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2416276 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 7U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2416074 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 6U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2416122 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 6U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2415920 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 5U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2415968 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 5U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2415766 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 4U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2415814 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 4U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2415612 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 3U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2415660 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 3U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2415458 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 2U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2415506 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 2U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2415303 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 1U));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_670_ETC___05Fq464 
        = ((1U & (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                  & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262))
            ? 2U : 0U);
    vlTOPp->mkMmUnit__DOT__y___05Fh2415351 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27256 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_B_ETC___05F_d27262) 
                                               >> 1U));
    vlTOPp->mkMmUnit__DOT__result_exponent___05F_1___05Fh2638991 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->mkMmUnit__DOT__result_exponent___05Fh2597502)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_920_ETC___05Fq500 
        = ((1U & (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_B_ETC___05F_d29754 
                  ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_B_ETC___05F_d29760))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2638839 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_B_ETC___05F_d29754 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_B_ETC___05F_d29760) 
                                               >> 0x17U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2638887 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_B_ETC___05F_d29754 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_B_ETC___05F_d29760) 
                                               >> 0x17U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2638685 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_B_ETC___05F_d29754 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_B_ETC___05F_d29760) 
                                               >> 0x16U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2638733 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_B_ETC___05F_d29754 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_B_ETC___05F_d29760) 
                                               >> 0x16U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2638531 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_B_ETC___05F_d29754 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_B_ETC___05F_d29760) 
                                               >> 0x15U));
    vlTOPp->mkMmUnit__DOT__y___05Fh2638579 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_B_ETC___05F_d29754 
                                                ^ vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_B_ETC___05F_d29760) 
                                               >> 0x15U));
    vlTOPp->mkMmUnit__DOT__x___05Fh2638377 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_B_ETC___05F_d29754 
                                                & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_B_ETC___05F_d29760) 
                                               >> 0x14U));
}
