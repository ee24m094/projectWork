// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop::_sequent__TOP__17(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__17\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkMmUnit__DOT__y___05Fh59318 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh58956) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh58955));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10389 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh939579) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh939580)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh939308) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh939309)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10388));
    vlTOPp->mkMmUnit__DOT__y___05Fh939942 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh939580) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh939579));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2895 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh279109) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh279110)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh278838) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh278839)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2894));
    vlTOPp->mkMmUnit__DOT__y___05Fh279472 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh279110) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh279109));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5393 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh499259) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh499260)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh498988) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh498989)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5392));
    vlTOPp->mkMmUnit__DOT__y___05Fh499622 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh499260) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh499259));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12887 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1159726) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1159727)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1159455) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1159456)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12886));
    vlTOPp->mkMmUnit__DOT__y___05Fh1160089 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1159727) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1159726));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15385 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1379873) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1379874)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1379602) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1379603)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15384));
    vlTOPp->mkMmUnit__DOT__y___05Fh1380236 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1379874) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1379873));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17883 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1600020) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1600021)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1599749) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1599750)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17882));
    vlTOPp->mkMmUnit__DOT__y___05Fh1600383 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1600021) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1600020));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20381 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1820190) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1820191)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1819919) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1819920)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20380));
    vlTOPp->mkMmUnit__DOT__y___05Fh1820553 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1820191) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1820190));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22879 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2040337) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2040338)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2040066) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2040067)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22878));
    vlTOPp->mkMmUnit__DOT__y___05Fh2040700 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2040338) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2040337));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25377 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2260484) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2260485)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2260213) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2260214)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25376));
    vlTOPp->mkMmUnit__DOT__y___05Fh2260847 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2260485) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2260484));
    vlTOPp->mkMmUnit__DOT__y___05Fh3282057 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3281786) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3061910 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3061639) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2841763 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2841492) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2621593 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2621322) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh860371 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh860100) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh420071 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh419800) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1080541 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1080270) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3502204 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3501933) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh199917 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh199646) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1300688 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1300417) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh640221 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh639950) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1520835 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1520564) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1740982 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1740711) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1961152 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1960881) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2181299 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2181028) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2401446 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2401175) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3141367 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3141457) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3141458));
    vlTOPp->mkMmUnit__DOT__y___05Fh2921220 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2921310) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2921311));
    vlTOPp->mkMmUnit__DOT__y___05Fh2701073 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2701163) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2701164));
    vlTOPp->mkMmUnit__DOT__y___05Fh2480903 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2480993) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2480994));
    vlTOPp->mkMmUnit__DOT__y___05Fh719681 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh719771) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh719772));
    vlTOPp->mkMmUnit__DOT__y___05Fh3361514 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3361604) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3361605));
    vlTOPp->mkMmUnit__DOT__y___05Fh59227 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh59317) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh59318));
    vlTOPp->mkMmUnit__DOT__y___05Fh939851 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh939941) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh939942));
    vlTOPp->mkMmUnit__DOT__y___05Fh279381 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh279471) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh279472));
    vlTOPp->mkMmUnit__DOT__y___05Fh499531 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh499621) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh499622));
    vlTOPp->mkMmUnit__DOT__y___05Fh1159998 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1160088) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1160089));
    vlTOPp->mkMmUnit__DOT__y___05Fh1380145 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1380235) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1380236));
    vlTOPp->mkMmUnit__DOT__y___05Fh1600292 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1600382) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1600383));
    vlTOPp->mkMmUnit__DOT__y___05Fh1820462 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1820552) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1820553));
    vlTOPp->mkMmUnit__DOT__y___05Fh2040609 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2040699) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2040700));
    vlTOPp->mkMmUnit__DOT__y___05Fh2260756 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2260846) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2260847));
    vlTOPp->mkMmUnit__DOT__product___05Fh3259627 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3282057) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3281786) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3281515) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3281244) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_ETC___05F_d37014)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh3039480 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3061910) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3061639) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3061368) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3061097) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_ETC___05F_d34516)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh2819333 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2841763) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2841492) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2841221) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2840950) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_ETC___05F_d32018)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh2599163 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2621593) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2621322) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2621051) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2620780) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_ETC___05F_d29520)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh837941 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh860371) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh860100) 
                                                           << 0xeU))) 
                                                      | ((0x2000U 
                                                          & ((0xffffe000U 
                                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470)) 
                                                             ^ 
                                                             ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh859829) 
                                                              << 0xdU))) 
                                                         | ((0x1000U 
                                                             & ((0xfffff000U 
                                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470)) 
                                                                ^ 
                                                                ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh859558) 
                                                                 << 0xcU))) 
                                                            | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT___05FETC___05F_d9536)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh397641 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh420071) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh419800) 
                                                           << 0xeU))) 
                                                      | ((0x2000U 
                                                          & ((0xffffe000U 
                                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474)) 
                                                             ^ 
                                                             ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh419529) 
                                                              << 0xdU))) 
                                                         | ((0x1000U 
                                                             & ((0xfffff000U 
                                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474)) 
                                                                ^ 
                                                                ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh419258) 
                                                                 << 0xcU))) 
                                                            | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT___05FETC___05F_d4540)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh1058111 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1080541) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1080270) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1079999) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1079728) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_ETC___05F_d12034)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh3479774 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3502204) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3501933) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3501662) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3501391) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_ETC___05F_d39512)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh177487 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh199917) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh199646) 
                                                           << 0xeU))) 
                                                      | ((0x2000U 
                                                          & ((0xffffe000U 
                                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976)) 
                                                             ^ 
                                                             ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh199375) 
                                                              << 0xdU))) 
                                                         | ((0x1000U 
                                                             & ((0xfffff000U 
                                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976)) 
                                                                ^ 
                                                                ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh199104) 
                                                                 << 0xcU))) 
                                                            | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT___05FETC___05F_d2042)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh1278258 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1300688) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1300417) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1300146) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1299875) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_ETC___05F_d14532)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh617791 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh640221) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh639950) 
                                                           << 0xeU))) 
                                                      | ((0x2000U 
                                                          & ((0xffffe000U 
                                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972)) 
                                                             ^ 
                                                             ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh639679) 
                                                              << 0xdU))) 
                                                         | ((0x1000U 
                                                             & ((0xfffff000U 
                                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972)) 
                                                                ^ 
                                                                ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh639408) 
                                                                 << 0xcU))) 
                                                            | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT___05FETC___05F_d7038)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh1498405 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1520835) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1520564) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1520293) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1520022) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_ETC___05F_d17030)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh1718552 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1740982) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1740711) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1740440) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1740169) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_ETC___05F_d19528)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh1938722 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1961152) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1960881) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1960610) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1960339) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_ETC___05F_d22026)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh2158869 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2181299) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2181028) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2180757) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2180486) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_ETC___05F_d24524)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh2379016 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2401446) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2401175) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2400904) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2400633) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_ETC___05F_d27022)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3141729 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3141367) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3141366));
    vlTOPp->mkMmUnit__DOT__y___05Fh2921582 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2921220) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2921219));
    vlTOPp->mkMmUnit__DOT__y___05Fh2701435 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2701073) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2701072));
    vlTOPp->mkMmUnit__DOT__y___05Fh2481265 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2480903) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2480902));
    vlTOPp->mkMmUnit__DOT__y___05Fh720043 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh719681) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh719680));
    vlTOPp->mkMmUnit__DOT__y___05Fh3361876 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3361514) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3361513));
    vlTOPp->mkMmUnit__DOT__y___05Fh59589 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh59227) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh59226));
    vlTOPp->mkMmUnit__DOT__y___05Fh940213 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh939851) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh939850));
    vlTOPp->mkMmUnit__DOT__y___05Fh279743 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh279381) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh279380));
    vlTOPp->mkMmUnit__DOT__y___05Fh499893 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh499531) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh499530));
    vlTOPp->mkMmUnit__DOT__y___05Fh1160360 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1159998) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1159997));
    vlTOPp->mkMmUnit__DOT__y___05Fh1380507 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1380145) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1380144));
    vlTOPp->mkMmUnit__DOT__y___05Fh1600654 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1600292) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1600291));
    vlTOPp->mkMmUnit__DOT__y___05Fh1820824 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1820462) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1820461));
    vlTOPp->mkMmUnit__DOT__y___05Fh2040971 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2040609) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2040608));
    vlTOPp->mkMmUnit__DOT__y___05Fh2261118 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2260756) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2260755));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017 
        = ((0x10U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3259627)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519 
        = ((0x10U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3039480)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021 
        = ((0x10U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2819333)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523 
        = ((0x10U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2599163)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539 
        = ((0x10U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh837941)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543 
        = ((0x10U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh397641)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037 
        = ((0x10U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1058111)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515 
        = ((0x10U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3479774)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045 
        = ((0x10U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh177487)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535 
        = ((0x10U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1278258)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041 
        = ((0x10U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh617791)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033 
        = ((0x10U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1498405)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531 
        = ((0x10U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1718552)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029 
        = ((0x10U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1938722)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527 
        = ((0x10U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2158869)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025 
        = ((0x10U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2379016)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956));
    vlTOPp->mkMmUnit__DOT__y___05Fh3141638 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3141728) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3141729));
    vlTOPp->mkMmUnit__DOT__y___05Fh2921491 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2921581) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2921582));
    vlTOPp->mkMmUnit__DOT__y___05Fh2701344 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2701434) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2701435));
    vlTOPp->mkMmUnit__DOT__y___05Fh2481174 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2481264) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2481265));
    vlTOPp->mkMmUnit__DOT__y___05Fh719952 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh720042) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh720043));
    vlTOPp->mkMmUnit__DOT__y___05Fh3361785 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3361875) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3361876));
    vlTOPp->mkMmUnit__DOT__y___05Fh59498 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh59588) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh59589));
    vlTOPp->mkMmUnit__DOT__y___05Fh940122 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh940212) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh940213));
    vlTOPp->mkMmUnit__DOT__y___05Fh279652 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh279742) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh279743));
    vlTOPp->mkMmUnit__DOT__y___05Fh499802 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh499892) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh499893));
    vlTOPp->mkMmUnit__DOT__y___05Fh1160269 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1160359) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1160360));
    vlTOPp->mkMmUnit__DOT__y___05Fh1380416 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1380506) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1380507));
    vlTOPp->mkMmUnit__DOT__y___05Fh1600563 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1600653) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1600654));
    vlTOPp->mkMmUnit__DOT__y___05Fh1820733 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1820823) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1820824));
    vlTOPp->mkMmUnit__DOT__y___05Fh2040880 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2040970) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2040971));
    vlTOPp->mkMmUnit__DOT__y___05Fh2261027 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2261117) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2261118));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq598 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3285352 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017) 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3285443 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3285081 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3285172 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3284810 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3284901 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3284539 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3284630 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3284268 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3284359 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3283996 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3284087 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq597 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017) 
                   >> 5U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A)))
            ? 0x40U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3283728 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq563 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3065205 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519) 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3065296 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3064934 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3065025 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3064663 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3064754 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3064392 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3064483 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3064121 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3064212 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3063849 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3063940 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq562 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519) 
                   >> 5U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A)))
            ? 0x40U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3063581 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq528 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2845058 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021) 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2845149 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2844787 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2844878 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2844516 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2844607 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2844245 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2844336 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2843974 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2844065 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2843702 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2843793 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq527 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021) 
                   >> 5U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A)))
            ? 0x40U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2843434 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq493 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2624888 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523) 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2624979 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2624617 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2624708 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2624346 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2624437 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2624075 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2624166 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2623804 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2623895 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2623532 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2623623 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq492 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523) 
                   >> 5U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A)))
            ? 0x40U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2623264 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_ETC___05Fq213 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh863666 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539) 
                                                    >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh863757 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539) 
                                                    >> 0xbU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh863395 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539) 
                                                    >> 0xbU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh863486 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539) 
                                                    >> 0xaU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh863124 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539) 
                                                    >> 0xaU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh863215 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539) 
                                                    >> 9U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh862853 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539) 
                                                    >> 9U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh862944 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539) 
                                                    >> 8U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh862582 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539) 
                                                    >> 8U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh862673 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539) 
                                                    >> 7U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh862310 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539) 
                                                    >> 7U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh862401 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539) 
                                                    >> 6U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_ETC___05Fq212 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539) 
                   >> 5U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A)))
            ? 0x40U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh862042 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_ETC___05Fq142 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh423366 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543) 
                                                    >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh423457 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543) 
                                                    >> 0xbU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh423095 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543) 
                                                    >> 0xbU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh423186 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543) 
                                                    >> 0xaU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh422824 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543) 
                                                    >> 0xaU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh422915 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543) 
                                                    >> 9U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh422553 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543) 
                                                    >> 9U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh422644 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543) 
                                                    >> 8U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh422282 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543) 
                                                    >> 8U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh422373 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543) 
                                                    >> 7U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh422010 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543) 
                                                    >> 7U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh422101 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543) 
                                                    >> 6U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_ETC___05Fq141 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543) 
                   >> 5U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A)))
            ? 0x40U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh421742 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq248 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1083836 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037) 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1083927 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1083565 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1083656 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1083294 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1083385 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1083023 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1083114 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1082752 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1082843 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1082480 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1082571 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq247 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037) 
                   >> 5U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A)))
            ? 0x40U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1082212 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq633 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3505499 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515) 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3505590 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3505228 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3505319 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3504957 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3505048 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3504686 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3504777 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3504415 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3504506 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3504143 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3504234 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq632 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515) 
                   >> 5U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A)))
            ? 0x40U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3503875 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_ETC___05Fq108 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh203212 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045) 
                                                    >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh203303 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045) 
                                                    >> 0xbU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh202941 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045) 
                                                    >> 0xbU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh203032 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045) 
                                                    >> 0xaU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh202670 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045) 
                                                    >> 0xaU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh202761 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045) 
                                                    >> 9U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh202399 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045) 
                                                    >> 9U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh202490 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045) 
                                                    >> 8U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh202128 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045) 
                                                    >> 8U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh202219 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045) 
                                                    >> 7U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh201856 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045) 
                                                    >> 7U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh201947 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045) 
                                                    >> 6U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_ETC___05Fq107 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045) 
                   >> 5U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A)))
            ? 0x40U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh201588 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq283 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1303983 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535) 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1304074 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1303712 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1303803 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1303441 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1303532 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1303170 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1303261 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1302899 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1302990 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1302627 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1302718 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq282 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535) 
                   >> 5U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A)))
            ? 0x40U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1302359 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_ETC___05Fq178 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh643516 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041) 
                                                    >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh643607 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041) 
                                                    >> 0xbU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh643245 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041) 
                                                    >> 0xbU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh643336 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041) 
                                                    >> 0xaU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh642974 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041) 
                                                    >> 0xaU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh643065 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041) 
                                                    >> 9U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh642703 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041) 
                                                    >> 9U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh642794 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041) 
                                                    >> 8U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh642432 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041) 
                                                    >> 8U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh642523 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041) 
                                                    >> 7U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh642160 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041) 
                                                    >> 7U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh642251 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041) 
                                                    >> 6U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_ETC___05Fq177 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041) 
                   >> 5U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A)))
            ? 0x40U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh641892 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq318 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1524130 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033) 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1524221 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1523859 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1523950 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1523588 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1523679 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1523317 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1523408 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1523046 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1523137 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1522774 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1522865 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq317 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033) 
                   >> 5U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A)))
            ? 0x40U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1522506 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq353 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1744277 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531) 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1744368 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1744006 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1744097 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1743735 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1743826 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1743464 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1743555 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1743193 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1743284 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1742921 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1743012 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq352 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531) 
                   >> 5U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A)))
            ? 0x40U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1742653 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq388 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1964447 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029) 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1964538 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1964176 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1964267 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1963905 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1963996 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1963634 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1963725 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1963363 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1963454 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1963091 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1963182 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq387 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029) 
                   >> 5U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A)))
            ? 0x40U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1962823 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq423 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2184594 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527) 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2184685 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2184323 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2184414 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2184052 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2184143 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2183781 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2183872 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2183510 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2183601 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2183238 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2183329 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq422 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527) 
                   >> 5U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A)))
            ? 0x40U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2182970 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq458 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2404741 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025) 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2404832 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2404470 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2404561 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2404199 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2404290 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2403928 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2404019 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2403657 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2403748 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2403385 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2403476 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq457 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025) 
                   >> 5U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A)))
            ? 0x40U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2403117 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35370 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3141637) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3141638)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3141366) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3141367)) 
                          << 0x1aU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35369));
    vlTOPp->mkMmUnit__DOT__y___05Fh3142000 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3141638) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3141637));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32872 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2921490) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2921491)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2921219) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2921220)) 
                          << 0x1aU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32871));
    vlTOPp->mkMmUnit__DOT__y___05Fh2921853 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2921491) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2921490));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30374 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2701343) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2701344)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2701072) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2701073)) 
                          << 0x1aU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30373));
    vlTOPp->mkMmUnit__DOT__y___05Fh2701706 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2701344) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2701343));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27876 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2481173) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2481174)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2480902) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2480903)) 
                          << 0x1aU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27875));
    vlTOPp->mkMmUnit__DOT__y___05Fh2481536 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2481174) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2481173));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7892 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh719951) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh719952)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh719680) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh719681)) 
                          << 0x1aU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7891));
    vlTOPp->mkMmUnit__DOT__y___05Fh720314 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh719952) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh719951));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37868 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3361784) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3361785)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3361513) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3361514)) 
                          << 0x1aU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37867));
    vlTOPp->mkMmUnit__DOT__y___05Fh3362147 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3361785) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3361784));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d398 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh59497) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh59498)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh59226) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh59227)) 
                          << 0x1aU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d397));
    vlTOPp->mkMmUnit__DOT__y___05Fh59860 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh59498) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh59497));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10390 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh940121) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh940122)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh939850) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh939851)) 
                          << 0x1aU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10389));
    vlTOPp->mkMmUnit__DOT__y___05Fh940484 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh940122) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh940121));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2896 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh279651) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh279652)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh279380) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh279381)) 
                          << 0x1aU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2895));
    vlTOPp->mkMmUnit__DOT__y___05Fh280014 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh279652) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh279651));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5394 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh499801) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh499802)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh499530) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh499531)) 
                          << 0x1aU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5393));
    vlTOPp->mkMmUnit__DOT__y___05Fh500164 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh499802) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh499801));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12888 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1160268) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1160269)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1159997) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1159998)) 
                          << 0x1aU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12887));
    vlTOPp->mkMmUnit__DOT__y___05Fh1160631 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1160269) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1160268));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15386 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1380415) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1380416)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1380144) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1380145)) 
                          << 0x1aU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15385));
    vlTOPp->mkMmUnit__DOT__y___05Fh1380778 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1380416) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1380415));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17884 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1600562) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1600563)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1600291) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1600292)) 
                          << 0x1aU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17883));
    vlTOPp->mkMmUnit__DOT__y___05Fh1600925 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1600563) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1600562));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20382 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1820732) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1820733)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1820461) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1820462)) 
                          << 0x1aU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20381));
    vlTOPp->mkMmUnit__DOT__y___05Fh1821095 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1820733) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1820732));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22880 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2040879) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2040880)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2040608) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2040609)) 
                          << 0x1aU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22879));
    vlTOPp->mkMmUnit__DOT__y___05Fh2041242 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2040880) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2040879));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25378 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2261026) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2261027)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2260755) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2260756)) 
                          << 0x1aU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25377));
    vlTOPp->mkMmUnit__DOT__y___05Fh2261389 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2261027) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2261026));
    vlTOPp->mkMmUnit__DOT__y___05Fh3284088 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq597 
                                               >> 6U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3283728));
    vlTOPp->mkMmUnit__DOT__y___05Fh3063941 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq562 
                                               >> 6U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3063581));
    vlTOPp->mkMmUnit__DOT__y___05Fh2843794 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq527 
                                               >> 6U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2843434));
    vlTOPp->mkMmUnit__DOT__y___05Fh2623624 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq492 
                                               >> 6U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2623264));
    vlTOPp->mkMmUnit__DOT__y___05Fh862402 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_ETC___05Fq212 
                                              >> 6U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh862042));
    vlTOPp->mkMmUnit__DOT__y___05Fh422102 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_ETC___05Fq141 
                                              >> 6U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh421742));
    vlTOPp->mkMmUnit__DOT__y___05Fh1082572 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq247 
                                               >> 6U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1082212));
    vlTOPp->mkMmUnit__DOT__y___05Fh3504235 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq632 
                                               >> 6U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3503875));
    vlTOPp->mkMmUnit__DOT__y___05Fh201948 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_ETC___05Fq107 
                                              >> 6U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh201588));
    vlTOPp->mkMmUnit__DOT__y___05Fh1302719 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq282 
                                               >> 6U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1302359));
    vlTOPp->mkMmUnit__DOT__y___05Fh642252 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_ETC___05Fq177 
                                              >> 6U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh641892));
    vlTOPp->mkMmUnit__DOT__y___05Fh1522866 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq317 
                                               >> 6U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1522506));
    vlTOPp->mkMmUnit__DOT__y___05Fh1743013 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq352 
                                               >> 6U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1742653));
    vlTOPp->mkMmUnit__DOT__y___05Fh1963183 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq387 
                                               >> 6U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1962823));
    vlTOPp->mkMmUnit__DOT__y___05Fh2183330 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq422 
                                               >> 6U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2182970));
    vlTOPp->mkMmUnit__DOT__y___05Fh2403477 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq457 
                                               >> 6U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2403117));
    vlTOPp->mkMmUnit__DOT__y___05Fh3141909 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3141999) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3142000));
    vlTOPp->mkMmUnit__DOT__y___05Fh2921762 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2921852) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2921853));
    vlTOPp->mkMmUnit__DOT__y___05Fh2701615 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2701705) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2701706));
    vlTOPp->mkMmUnit__DOT__y___05Fh2481445 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2481535) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2481536));
    vlTOPp->mkMmUnit__DOT__y___05Fh720223 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh720313) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh720314));
    vlTOPp->mkMmUnit__DOT__y___05Fh3362056 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3362146) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3362147));
    vlTOPp->mkMmUnit__DOT__y___05Fh59769 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh59859) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh59860));
    vlTOPp->mkMmUnit__DOT__y___05Fh940393 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh940483) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh940484));
    vlTOPp->mkMmUnit__DOT__y___05Fh279923 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh280013) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh280014));
    vlTOPp->mkMmUnit__DOT__y___05Fh500073 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh500163) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh500164));
    vlTOPp->mkMmUnit__DOT__y___05Fh1160540 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1160630) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1160631));
    vlTOPp->mkMmUnit__DOT__y___05Fh1380687 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1380777) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1380778));
    vlTOPp->mkMmUnit__DOT__y___05Fh1600834 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1600924) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1600925));
    vlTOPp->mkMmUnit__DOT__y___05Fh1821004 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1821094) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1821095));
    vlTOPp->mkMmUnit__DOT__y___05Fh2041151 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2041241) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2041242));
    vlTOPp->mkMmUnit__DOT__y___05Fh2261298 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2261388) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2261389));
    vlTOPp->mkMmUnit__DOT__y___05Fh3283997 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3284087) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3284088));
    vlTOPp->mkMmUnit__DOT__y___05Fh3063850 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3063940) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3063941));
    vlTOPp->mkMmUnit__DOT__y___05Fh2843703 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2843793) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2843794));
    vlTOPp->mkMmUnit__DOT__y___05Fh2623533 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2623623) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2623624));
    vlTOPp->mkMmUnit__DOT__y___05Fh862311 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh862401) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh862402));
    vlTOPp->mkMmUnit__DOT__y___05Fh422011 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh422101) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh422102));
    vlTOPp->mkMmUnit__DOT__y___05Fh1082481 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1082571) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1082572));
    vlTOPp->mkMmUnit__DOT__y___05Fh3504144 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3504234) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3504235));
    vlTOPp->mkMmUnit__DOT__y___05Fh201857 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh201947) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh201948));
    vlTOPp->mkMmUnit__DOT__y___05Fh1302628 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1302718) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1302719));
    vlTOPp->mkMmUnit__DOT__y___05Fh642161 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh642251) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh642252));
    vlTOPp->mkMmUnit__DOT__y___05Fh1522775 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1522865) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1522866));
    vlTOPp->mkMmUnit__DOT__y___05Fh1742922 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1743012) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1743013));
    vlTOPp->mkMmUnit__DOT__y___05Fh1963092 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1963182) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1963183));
    vlTOPp->mkMmUnit__DOT__y___05Fh2183239 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2183329) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2183330));
    vlTOPp->mkMmUnit__DOT__y___05Fh2403386 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2403476) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2403477));
    vlTOPp->mkMmUnit__DOT__y___05Fh3142271 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3141909) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3141908));
    vlTOPp->mkMmUnit__DOT__y___05Fh2922124 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2921762) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2921761));
    vlTOPp->mkMmUnit__DOT__y___05Fh2701977 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2701615) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2701614));
    vlTOPp->mkMmUnit__DOT__y___05Fh2481807 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2481445) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2481444));
    vlTOPp->mkMmUnit__DOT__y___05Fh720585 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh720223) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh720222));
    vlTOPp->mkMmUnit__DOT__y___05Fh3362418 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3362056) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3362055));
    vlTOPp->mkMmUnit__DOT__y___05Fh60131 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh59769) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh59768));
    vlTOPp->mkMmUnit__DOT__y___05Fh940755 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh940393) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh940392));
    vlTOPp->mkMmUnit__DOT__y___05Fh280285 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh279923) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh279922));
    vlTOPp->mkMmUnit__DOT__y___05Fh500435 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh500073) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh500072));
    vlTOPp->mkMmUnit__DOT__y___05Fh1160902 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1160540) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1160539));
    vlTOPp->mkMmUnit__DOT__y___05Fh1381049 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1380687) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1380686));
    vlTOPp->mkMmUnit__DOT__y___05Fh1601196 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1600834) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1600833));
    vlTOPp->mkMmUnit__DOT__y___05Fh1821366 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1821004) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1821003));
    vlTOPp->mkMmUnit__DOT__y___05Fh2041513 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2041151) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2041150));
    vlTOPp->mkMmUnit__DOT__y___05Fh2261660 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2261298) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2261297));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37077 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3283996) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3283997)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3283728) 
                                 << 6U) ^ (0xffffffc0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq597))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017)) 
                                   ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq598))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3284360 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3283997) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3283996));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34579 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3063849) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3063850)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3063581) 
                                 << 6U) ^ (0xffffffc0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq562))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519)) 
                                   ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq563))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3064213 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3063850) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3063849));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32081 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2843702) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2843703)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2843434) 
                                 << 6U) ^ (0xffffffc0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq527))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021)) 
                                   ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq528))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2844066 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2843703) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2843702));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29583 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2623532) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2623533)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2623264) 
                                 << 6U) ^ (0xffffffc0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq492))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523)) 
                                   ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq493))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2623896 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2623533) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2623532));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9599 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh862310) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh862311)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh862042) 
                                 << 6U) ^ (0xffffffc0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_ETC___05Fq212))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539)) 
                                   ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_ETC___05Fq213))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh862674 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh862311) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh862310));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4603 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh422010) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh422011)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh421742) 
                                 << 6U) ^ (0xffffffc0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_ETC___05Fq141))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543)) 
                                   ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_ETC___05Fq142))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh422374 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh422011) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh422010));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12097 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1082480) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1082481)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1082212) 
                                 << 6U) ^ (0xffffffc0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq247))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037)) 
                                   ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq248))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1082844 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1082481) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1082480));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39575 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3504143) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3504144)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3503875) 
                                 << 6U) ^ (0xffffffc0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq632))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515)) 
                                   ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq633))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3504507 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3504144) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3504143));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2105 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh201856) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh201857)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh201588) 
                                 << 6U) ^ (0xffffffc0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_ETC___05Fq107))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045)) 
                                   ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_ETC___05Fq108))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh202220 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh201857) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh201856));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14595 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1302627) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1302628)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1302359) 
                                 << 6U) ^ (0xffffffc0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq282))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535)) 
                                   ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq283))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1302991 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1302628) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1302627));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7101 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh642160) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh642161)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh641892) 
                                 << 6U) ^ (0xffffffc0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_ETC___05Fq177))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041)) 
                                   ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_ETC___05Fq178))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh642524 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh642161) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh642160));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17093 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1522774) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1522775)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1522506) 
                                 << 6U) ^ (0xffffffc0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq317))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033)) 
                                   ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq318))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1523138 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1522775) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1522774));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19591 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1742921) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1742922)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1742653) 
                                 << 6U) ^ (0xffffffc0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq352))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531)) 
                                   ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq353))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1743285 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1742922) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1742921));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22089 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1963091) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1963092)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1962823) 
                                 << 6U) ^ (0xffffffc0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq387))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029)) 
                                   ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq388))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1963455 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1963092) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1963091));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24587 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2183238) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2183239)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2182970) 
                                 << 6U) ^ (0xffffffc0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq422))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527)) 
                                   ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq423))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2183602 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2183239) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2183238));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27085 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2403385) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2403386)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2403117) 
                                 << 6U) ^ (0xffffffc0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq457))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025)) 
                                   ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq458))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2403749 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2403386) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2403385));
    vlTOPp->mkMmUnit__DOT__y___05Fh3142180 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3142270) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3142271));
    vlTOPp->mkMmUnit__DOT__y___05Fh2922033 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2922123) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2922124));
    vlTOPp->mkMmUnit__DOT__y___05Fh2701886 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2701976) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2701977));
    vlTOPp->mkMmUnit__DOT__y___05Fh2481716 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2481806) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2481807));
    vlTOPp->mkMmUnit__DOT__y___05Fh720494 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh720584) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh720585));
    vlTOPp->mkMmUnit__DOT__y___05Fh3362327 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3362417) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3362418));
    vlTOPp->mkMmUnit__DOT__y___05Fh60040 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh60130) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh60131));
    vlTOPp->mkMmUnit__DOT__y___05Fh940664 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh940754) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh940755));
    vlTOPp->mkMmUnit__DOT__y___05Fh280194 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh280284) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh280285));
    vlTOPp->mkMmUnit__DOT__y___05Fh500344 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh500434) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh500435));
    vlTOPp->mkMmUnit__DOT__y___05Fh1160811 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1160901) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1160902));
    vlTOPp->mkMmUnit__DOT__y___05Fh1380958 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1381048) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1381049));
    vlTOPp->mkMmUnit__DOT__y___05Fh1601105 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1601195) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1601196));
    vlTOPp->mkMmUnit__DOT__y___05Fh1821275 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1821365) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1821366));
    vlTOPp->mkMmUnit__DOT__y___05Fh2041422 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2041512) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2041513));
    vlTOPp->mkMmUnit__DOT__y___05Fh2261569 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2261659) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2261660));
    vlTOPp->mkMmUnit__DOT__y___05Fh3284269 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3284359) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3284360));
    vlTOPp->mkMmUnit__DOT__y___05Fh3064122 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3064212) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3064213));
    vlTOPp->mkMmUnit__DOT__y___05Fh2843975 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2844065) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2844066));
    vlTOPp->mkMmUnit__DOT__y___05Fh2623805 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2623895) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2623896));
    vlTOPp->mkMmUnit__DOT__y___05Fh862583 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh862673) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh862674));
    vlTOPp->mkMmUnit__DOT__y___05Fh422283 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh422373) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh422374));
    vlTOPp->mkMmUnit__DOT__y___05Fh1082753 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1082843) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1082844));
    vlTOPp->mkMmUnit__DOT__y___05Fh3504416 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3504506) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3504507));
    vlTOPp->mkMmUnit__DOT__y___05Fh202129 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh202219) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh202220));
    vlTOPp->mkMmUnit__DOT__y___05Fh1302900 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1302990) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1302991));
    vlTOPp->mkMmUnit__DOT__y___05Fh642433 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh642523) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh642524));
    vlTOPp->mkMmUnit__DOT__y___05Fh1523047 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1523137) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1523138));
    vlTOPp->mkMmUnit__DOT__y___05Fh1743194 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1743284) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1743285));
    vlTOPp->mkMmUnit__DOT__y___05Fh1963364 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1963454) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1963455));
    vlTOPp->mkMmUnit__DOT__y___05Fh2183511 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2183601) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2183602));
    vlTOPp->mkMmUnit__DOT__y___05Fh2403658 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2403748) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2403749));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35371 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3142179) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3142180)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3141908) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3141909)) 
                          << 0x1cU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35370));
    vlTOPp->mkMmUnit__DOT__y___05Fh3142542 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3142180) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3142179));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32873 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2922032) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2922033)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2921761) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2921762)) 
                          << 0x1cU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32872));
    vlTOPp->mkMmUnit__DOT__y___05Fh2922395 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2922033) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2922032));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30375 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2701885) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2701886)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2701614) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2701615)) 
                          << 0x1cU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30374));
    vlTOPp->mkMmUnit__DOT__y___05Fh2702248 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2701886) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2701885));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27877 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2481715) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2481716)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2481444) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2481445)) 
                          << 0x1cU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27876));
    vlTOPp->mkMmUnit__DOT__y___05Fh2482078 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2481716) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2481715));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7893 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh720493) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh720494)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh720222) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh720223)) 
                          << 0x1cU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7892));
    vlTOPp->mkMmUnit__DOT__y___05Fh720856 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh720494) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh720493));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37869 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3362326) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3362327)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3362055) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3362056)) 
                          << 0x1cU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37868));
    vlTOPp->mkMmUnit__DOT__y___05Fh3362689 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3362327) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3362326));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d399 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh60039) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh60040)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh59768) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh59769)) 
                          << 0x1cU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d398));
    vlTOPp->mkMmUnit__DOT__y___05Fh60402 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh60040) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh60039));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10391 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh940663) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh940664)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh940392) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh940393)) 
                          << 0x1cU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10390));
    vlTOPp->mkMmUnit__DOT__y___05Fh941026 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh940664) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh940663));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2897 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh280193) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh280194)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh279922) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh279923)) 
                          << 0x1cU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2896));
    vlTOPp->mkMmUnit__DOT__y___05Fh280556 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh280194) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh280193));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5395 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh500343) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh500344)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh500072) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh500073)) 
                          << 0x1cU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5394));
    vlTOPp->mkMmUnit__DOT__y___05Fh500706 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh500344) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh500343));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12889 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1160810) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1160811)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1160539) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1160540)) 
                          << 0x1cU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12888));
    vlTOPp->mkMmUnit__DOT__y___05Fh1161173 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1160811) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1160810));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15387 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1380957) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1380958)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1380686) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1380687)) 
                          << 0x1cU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15386));
    vlTOPp->mkMmUnit__DOT__y___05Fh1381320 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1380958) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1380957));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17885 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1601104) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1601105)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1600833) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1600834)) 
                          << 0x1cU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17884));
    vlTOPp->mkMmUnit__DOT__y___05Fh1601467 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1601105) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1601104));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20383 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1821274) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1821275)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1821003) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1821004)) 
                          << 0x1cU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20382));
    vlTOPp->mkMmUnit__DOT__y___05Fh1821637 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1821275) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1821274));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22881 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2041421) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2041422)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2041150) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2041151)) 
                          << 0x1cU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22880));
    vlTOPp->mkMmUnit__DOT__y___05Fh2041784 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2041422) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2041421));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25379 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2261568) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2261569)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2261297) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2261298)) 
                          << 0x1cU) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25378));
    vlTOPp->mkMmUnit__DOT__y___05Fh2261931 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2261569) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2261568));
    vlTOPp->mkMmUnit__DOT__y___05Fh3284631 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3284269) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3284268));
    vlTOPp->mkMmUnit__DOT__y___05Fh3064484 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3064122) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3064121));
    vlTOPp->mkMmUnit__DOT__y___05Fh2844337 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2843975) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2843974));
    vlTOPp->mkMmUnit__DOT__y___05Fh2624167 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2623805) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2623804));
    vlTOPp->mkMmUnit__DOT__y___05Fh862945 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh862583) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh862582));
    vlTOPp->mkMmUnit__DOT__y___05Fh422645 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh422283) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh422282));
    vlTOPp->mkMmUnit__DOT__y___05Fh1083115 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1082753) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1082752));
    vlTOPp->mkMmUnit__DOT__y___05Fh3504778 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3504416) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3504415));
    vlTOPp->mkMmUnit__DOT__y___05Fh202491 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh202129) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh202128));
    vlTOPp->mkMmUnit__DOT__y___05Fh1303262 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1302900) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1302899));
    vlTOPp->mkMmUnit__DOT__y___05Fh642795 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh642433) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh642432));
    vlTOPp->mkMmUnit__DOT__y___05Fh1523409 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1523047) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1523046));
    vlTOPp->mkMmUnit__DOT__y___05Fh1743556 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1743194) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1743193));
    vlTOPp->mkMmUnit__DOT__y___05Fh1963726 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1963364) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1963363));
    vlTOPp->mkMmUnit__DOT__y___05Fh2183873 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2183511) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2183510));
    vlTOPp->mkMmUnit__DOT__y___05Fh2404020 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2403658) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2403657));
    vlTOPp->mkMmUnit__DOT__y___05Fh3142451 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3142541) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3142542));
    vlTOPp->mkMmUnit__DOT__y___05Fh2922304 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2922394) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2922395));
    vlTOPp->mkMmUnit__DOT__y___05Fh2702157 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2702247) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2702248));
    vlTOPp->mkMmUnit__DOT__y___05Fh2481987 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2482077) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2482078));
    vlTOPp->mkMmUnit__DOT__y___05Fh720765 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh720855) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh720856));
    vlTOPp->mkMmUnit__DOT__y___05Fh3362598 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3362688) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3362689));
    vlTOPp->mkMmUnit__DOT__y___05Fh60311 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh60401) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh60402));
    vlTOPp->mkMmUnit__DOT__y___05Fh940935 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh941025) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh941026));
    vlTOPp->mkMmUnit__DOT__y___05Fh280465 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh280555) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh280556));
    vlTOPp->mkMmUnit__DOT__y___05Fh500615 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh500705) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh500706));
    vlTOPp->mkMmUnit__DOT__y___05Fh1161082 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1161172) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1161173));
    vlTOPp->mkMmUnit__DOT__y___05Fh1381229 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1381319) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1381320));
    vlTOPp->mkMmUnit__DOT__y___05Fh1601376 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1601466) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1601467));
    vlTOPp->mkMmUnit__DOT__y___05Fh1821546 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1821636) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1821637));
    vlTOPp->mkMmUnit__DOT__y___05Fh2041693 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2041783) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2041784));
    vlTOPp->mkMmUnit__DOT__y___05Fh2261840 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2261930) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2261931));
    vlTOPp->mkMmUnit__DOT__y___05Fh3284540 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3284630) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3284631));
    vlTOPp->mkMmUnit__DOT__y___05Fh3064393 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3064483) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3064484));
    vlTOPp->mkMmUnit__DOT__y___05Fh2844246 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2844336) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2844337));
    vlTOPp->mkMmUnit__DOT__y___05Fh2624076 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2624166) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2624167));
    vlTOPp->mkMmUnit__DOT__y___05Fh862854 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh862944) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh862945));
    vlTOPp->mkMmUnit__DOT__y___05Fh422554 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh422644) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh422645));
    vlTOPp->mkMmUnit__DOT__y___05Fh1083024 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1083114) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1083115));
    vlTOPp->mkMmUnit__DOT__y___05Fh3504687 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3504777) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3504778));
    vlTOPp->mkMmUnit__DOT__y___05Fh202400 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh202490) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh202491));
    vlTOPp->mkMmUnit__DOT__y___05Fh1303171 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1303261) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1303262));
    vlTOPp->mkMmUnit__DOT__y___05Fh642704 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh642794) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh642795));
    vlTOPp->mkMmUnit__DOT__y___05Fh1523318 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1523408) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1523409));
    vlTOPp->mkMmUnit__DOT__y___05Fh1743465 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1743555) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1743556));
    vlTOPp->mkMmUnit__DOT__y___05Fh1963635 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1963725) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1963726));
    vlTOPp->mkMmUnit__DOT__y___05Fh2183782 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2183872) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2183873));
    vlTOPp->mkMmUnit__DOT__y___05Fh2403929 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2404019) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2404020));
    vlTOPp->mkMmUnit__DOT__y___05Fh3142813 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3142451) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3142450));
    vlTOPp->mkMmUnit__DOT__y___05Fh2922666 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2922304) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2922303));
    vlTOPp->mkMmUnit__DOT__y___05Fh2702519 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2702157) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2702156));
    vlTOPp->mkMmUnit__DOT__y___05Fh2482349 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2481987) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2481986));
    vlTOPp->mkMmUnit__DOT__y___05Fh721127 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh720765) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh720764));
    vlTOPp->mkMmUnit__DOT__y___05Fh3362960 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3362598) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3362597));
    vlTOPp->mkMmUnit__DOT__y___05Fh60673 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh60311) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh60310));
    vlTOPp->mkMmUnit__DOT__y___05Fh941297 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh940935) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh940934));
    vlTOPp->mkMmUnit__DOT__y___05Fh280827 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh280465) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh280464));
    vlTOPp->mkMmUnit__DOT__y___05Fh500977 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh500615) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh500614));
    vlTOPp->mkMmUnit__DOT__y___05Fh1161444 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1161082) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1161081));
    vlTOPp->mkMmUnit__DOT__y___05Fh1381591 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1381229) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1381228));
    vlTOPp->mkMmUnit__DOT__y___05Fh1601738 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1601376) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1601375));
    vlTOPp->mkMmUnit__DOT__y___05Fh1821908 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1821546) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1821545));
    vlTOPp->mkMmUnit__DOT__y___05Fh2042055 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2041693) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2041692));
    vlTOPp->mkMmUnit__DOT__y___05Fh2262202 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2261840) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2261839));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37078 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3284539) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3284540)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3284268) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3284269)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37077)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3284902 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3284540) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3284539));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34580 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3064392) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3064393)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3064121) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3064122)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34579)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3064755 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3064393) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3064392));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32082 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2844245) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2844246)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2843974) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2843975)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32081)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2844608 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2844246) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2844245));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29584 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2624075) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2624076)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2623804) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2623805)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29583)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2624438 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2624076) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2624075));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9600 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh862853) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh862854)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh862582) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh862583)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9599)));
    vlTOPp->mkMmUnit__DOT__y___05Fh863216 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh862854) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh862853));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4604 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh422553) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh422554)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh422282) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh422283)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4603)));
    vlTOPp->mkMmUnit__DOT__y___05Fh422916 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh422554) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh422553));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12098 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1083023) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1083024)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1082752) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1082753)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12097)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1083386 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1083024) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1083023));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39576 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3504686) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3504687)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3504415) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3504416)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39575)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3505049 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3504687) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3504686));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2106 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh202399) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh202400)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh202128) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh202129)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2105)));
    vlTOPp->mkMmUnit__DOT__y___05Fh202762 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh202400) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh202399));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14596 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1303170) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1303171)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1302899) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1302900)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14595)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1303533 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1303171) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1303170));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7102 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh642703) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh642704)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh642432) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh642433)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7101)));
    vlTOPp->mkMmUnit__DOT__y___05Fh643066 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh642704) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh642703));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17094 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1523317) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1523318)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1523046) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1523047)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17093)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1523680 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1523318) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1523317));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19592 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1743464) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1743465)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1743193) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1743194)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19591)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1743827 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1743465) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1743464));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22090 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1963634) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1963635)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1963363) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1963364)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22089)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1963997 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1963635) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1963634));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24588 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2183781) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2183782)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2183510) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2183511)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24587)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2184144 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2183782) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2183781));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27086 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2403928) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2403929)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2403657) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2403658)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27085)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2404291 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2403929) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2403928));
    vlTOPp->mkMmUnit__DOT__y___05Fh3142722 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3142812) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3142813));
    vlTOPp->mkMmUnit__DOT__y___05Fh2922575 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2922665) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2922666));
    vlTOPp->mkMmUnit__DOT__y___05Fh2702428 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2702518) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2702519));
    vlTOPp->mkMmUnit__DOT__y___05Fh2482258 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2482348) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2482349));
    vlTOPp->mkMmUnit__DOT__y___05Fh721036 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh721126) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh721127));
    vlTOPp->mkMmUnit__DOT__y___05Fh3362869 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3362959) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3362960));
    vlTOPp->mkMmUnit__DOT__y___05Fh60582 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh60672) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh60673));
    vlTOPp->mkMmUnit__DOT__y___05Fh941206 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh941296) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh941297));
    vlTOPp->mkMmUnit__DOT__y___05Fh280736 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh280826) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh280827));
    vlTOPp->mkMmUnit__DOT__y___05Fh500886 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh500976) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh500977));
    vlTOPp->mkMmUnit__DOT__y___05Fh1161353 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1161443) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1161444));
    vlTOPp->mkMmUnit__DOT__y___05Fh1381500 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1381590) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1381591));
    vlTOPp->mkMmUnit__DOT__y___05Fh1601647 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1601737) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1601738));
    vlTOPp->mkMmUnit__DOT__y___05Fh1821817 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1821907) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1821908));
    vlTOPp->mkMmUnit__DOT__y___05Fh2041964 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2042054) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2042055));
    vlTOPp->mkMmUnit__DOT__y___05Fh2262111 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2262201) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2262202));
    vlTOPp->mkMmUnit__DOT__y___05Fh3284811 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3284901) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3284902));
    vlTOPp->mkMmUnit__DOT__y___05Fh3064664 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3064754) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3064755));
    vlTOPp->mkMmUnit__DOT__y___05Fh2844517 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2844607) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2844608));
    vlTOPp->mkMmUnit__DOT__y___05Fh2624347 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2624437) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2624438));
    vlTOPp->mkMmUnit__DOT__y___05Fh863125 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh863215) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh863216));
    vlTOPp->mkMmUnit__DOT__y___05Fh422825 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh422915) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh422916));
    vlTOPp->mkMmUnit__DOT__y___05Fh1083295 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1083385) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1083386));
    vlTOPp->mkMmUnit__DOT__y___05Fh3504958 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3505048) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3505049));
    vlTOPp->mkMmUnit__DOT__y___05Fh202671 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh202761) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh202762));
    vlTOPp->mkMmUnit__DOT__y___05Fh1303442 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1303532) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1303533));
    vlTOPp->mkMmUnit__DOT__y___05Fh642975 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh643065) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh643066));
    vlTOPp->mkMmUnit__DOT__y___05Fh1523589 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1523679) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1523680));
    vlTOPp->mkMmUnit__DOT__y___05Fh1743736 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1743826) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1743827));
    vlTOPp->mkMmUnit__DOT__y___05Fh1963906 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1963996) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1963997));
    vlTOPp->mkMmUnit__DOT__y___05Fh2184053 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2184143) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2184144));
    vlTOPp->mkMmUnit__DOT__y___05Fh2404200 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2404290) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2404291));
    vlTOPp->mkMmUnit__DOT__result___05Fh3103878 = (
                                                   (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3142721) 
                                                     ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3142722)) 
                                                    << 0x1fU) 
                                                   | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3142450) 
                                                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3142451)) 
                                                       << 0x1eU) 
                                                      | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35371));
    vlTOPp->mkMmUnit__DOT__result___05Fh2883731 = (
                                                   (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2922574) 
                                                     ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2922575)) 
                                                    << 0x1fU) 
                                                   | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2922303) 
                                                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2922304)) 
                                                       << 0x1eU) 
                                                      | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32873));
    vlTOPp->mkMmUnit__DOT__result___05Fh2663584 = (
                                                   (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2702427) 
                                                     ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2702428)) 
                                                    << 0x1fU) 
                                                   | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2702156) 
                                                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2702157)) 
                                                       << 0x1eU) 
                                                      | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30375));
    vlTOPp->mkMmUnit__DOT__result___05Fh2443414 = (
                                                   (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2482257) 
                                                     ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2482258)) 
                                                    << 0x1fU) 
                                                   | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2481986) 
                                                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2481987)) 
                                                       << 0x1eU) 
                                                      | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27877));
    vlTOPp->mkMmUnit__DOT__result___05Fh682192 = ((
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh721035) 
                                                    ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh721036)) 
                                                   << 0x1fU) 
                                                  | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh720764) 
                                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh720765)) 
                                                      << 0x1eU) 
                                                     | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7893));
    vlTOPp->mkMmUnit__DOT__result___05Fh3324025 = (
                                                   (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3362868) 
                                                     ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3362869)) 
                                                    << 0x1fU) 
                                                   | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3362597) 
                                                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3362598)) 
                                                       << 0x1eU) 
                                                      | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37869));
    vlTOPp->mkMmUnit__DOT__result___05Fh21737 = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh60581) 
                                                   ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh60582)) 
                                                  << 0x1fU) 
                                                 | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh60310) 
                                                      ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh60311)) 
                                                     << 0x1eU) 
                                                    | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d399));
    vlTOPp->mkMmUnit__DOT__result___05Fh902362 = ((
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh941205) 
                                                    ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh941206)) 
                                                   << 0x1fU) 
                                                  | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh940934) 
                                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh940935)) 
                                                      << 0x1eU) 
                                                     | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10391));
    vlTOPp->mkMmUnit__DOT__result___05Fh241892 = ((
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh280735) 
                                                    ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh280736)) 
                                                   << 0x1fU) 
                                                  | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh280464) 
                                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh280465)) 
                                                      << 0x1eU) 
                                                     | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2897));
    vlTOPp->mkMmUnit__DOT__result___05Fh462042 = ((
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh500885) 
                                                    ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh500886)) 
                                                   << 0x1fU) 
                                                  | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh500614) 
                                                       ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh500615)) 
                                                      << 0x1eU) 
                                                     | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5395));
    vlTOPp->mkMmUnit__DOT__result___05Fh1122509 = (
                                                   (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1161352) 
                                                     ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1161353)) 
                                                    << 0x1fU) 
                                                   | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1161081) 
                                                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1161082)) 
                                                       << 0x1eU) 
                                                      | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12889));
    vlTOPp->mkMmUnit__DOT__result___05Fh1342656 = (
                                                   (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1381499) 
                                                     ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1381500)) 
                                                    << 0x1fU) 
                                                   | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1381228) 
                                                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1381229)) 
                                                       << 0x1eU) 
                                                      | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15387));
    vlTOPp->mkMmUnit__DOT__result___05Fh1562803 = (
                                                   (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1601646) 
                                                     ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1601647)) 
                                                    << 0x1fU) 
                                                   | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1601375) 
                                                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1601376)) 
                                                       << 0x1eU) 
                                                      | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17885));
    vlTOPp->mkMmUnit__DOT__result___05Fh1782973 = (
                                                   (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1821816) 
                                                     ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1821817)) 
                                                    << 0x1fU) 
                                                   | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1821545) 
                                                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1821546)) 
                                                       << 0x1eU) 
                                                      | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20383));
    vlTOPp->mkMmUnit__DOT__result___05Fh2003120 = (
                                                   (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2041963) 
                                                     ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2041964)) 
                                                    << 0x1fU) 
                                                   | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2041692) 
                                                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2041693)) 
                                                       << 0x1eU) 
                                                      | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22881));
    vlTOPp->mkMmUnit__DOT__result___05Fh2223267 = (
                                                   (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2262110) 
                                                     ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2262111)) 
                                                    << 0x1fU) 
                                                   | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2261839) 
                                                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2261840)) 
                                                       << 0x1eU) 
                                                      | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25379));
    vlTOPp->mkMmUnit__DOT__y___05Fh3285173 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3284811) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3284810));
    vlTOPp->mkMmUnit__DOT__y___05Fh3065026 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3064664) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3064663));
    vlTOPp->mkMmUnit__DOT__y___05Fh2844879 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2844517) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2844516));
    vlTOPp->mkMmUnit__DOT__y___05Fh2624709 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2624347) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2624346));
    vlTOPp->mkMmUnit__DOT__y___05Fh863487 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh863125) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh863124));
    vlTOPp->mkMmUnit__DOT__y___05Fh423187 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh422825) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh422824));
    vlTOPp->mkMmUnit__DOT__y___05Fh1083657 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1083295) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1083294));
    vlTOPp->mkMmUnit__DOT__y___05Fh3505320 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3504958) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3504957));
    vlTOPp->mkMmUnit__DOT__y___05Fh203033 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh202671) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh202670));
    vlTOPp->mkMmUnit__DOT__y___05Fh1303804 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1303442) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1303441));
    vlTOPp->mkMmUnit__DOT__y___05Fh643337 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh642975) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh642974));
    vlTOPp->mkMmUnit__DOT__y___05Fh1523951 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1523589) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1523588));
    vlTOPp->mkMmUnit__DOT__y___05Fh1744098 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1743736) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1743735));
    vlTOPp->mkMmUnit__DOT__y___05Fh1964268 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1963906) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1963905));
    vlTOPp->mkMmUnit__DOT__y___05Fh2184415 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2184053) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2184052));
    vlTOPp->mkMmUnit__DOT__y___05Fh2404562 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2404200) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2404199));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_49_ETC___05F_d35010))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh3103878
            : vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35141);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_24_ETC___05F_d32512))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh2883731
            : vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32643);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_99_ETC___05F_d30014))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh2663584
            : vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30145);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_74_ETC___05F_d27516))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh2443414
            : vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27647);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7_499_ETC___05F_d7532))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh682192
            : vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7663);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_74_ETC___05F_d37508))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh3324025
            : vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37639);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_IN_ETC___05F_d38))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh21737
            : vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d169);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7_997_ETC___05F_d10030))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh902362
            : vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10161);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7_503_ETC___05F_d2536))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh241892
            : vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2667);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7_001_ETC___05F_d5034))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh462042
            : vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5165);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_24_ETC___05F_d12528))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh1122509
            : vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12659);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_49_ETC___05F_d15026))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh1342656
            : vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15157);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_74_ETC___05F_d17524))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh1562803
            : vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17655);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_99_ETC___05F_d20022))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh1782973
            : vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20153);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_24_ETC___05F_d22520))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh2003120
            : vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22651);
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
        = ((2U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_49_ETC___05F_d25018))
            ? vlTOPp->mkMmUnit__DOT__result___05Fh2223267
            : vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25149);
    vlTOPp->mkMmUnit__DOT__y___05Fh3285082 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3285172) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3285173));
    vlTOPp->mkMmUnit__DOT__y___05Fh3064935 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3065025) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3065026));
    vlTOPp->mkMmUnit__DOT__y___05Fh2844788 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2844878) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2844879));
    vlTOPp->mkMmUnit__DOT__y___05Fh2624618 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2624708) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2624709));
    vlTOPp->mkMmUnit__DOT__y___05Fh863396 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh863486) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh863487));
    vlTOPp->mkMmUnit__DOT__y___05Fh423096 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh423186) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh423187));
    vlTOPp->mkMmUnit__DOT__y___05Fh1083566 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1083656) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1083657));
    vlTOPp->mkMmUnit__DOT__y___05Fh3505229 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3505319) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3505320));
    vlTOPp->mkMmUnit__DOT__y___05Fh202942 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh203032) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh203033));
    vlTOPp->mkMmUnit__DOT__y___05Fh1303713 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1303803) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1303804));
    vlTOPp->mkMmUnit__DOT__y___05Fh643246 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh643336) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh643337));
    vlTOPp->mkMmUnit__DOT__y___05Fh1523860 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1523950) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1523951));
    vlTOPp->mkMmUnit__DOT__y___05Fh1744007 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1744097) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1744098));
    vlTOPp->mkMmUnit__DOT__y___05Fh1964177 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1964267) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1964268));
    vlTOPp->mkMmUnit__DOT__y___05Fh2184324 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2184414) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2184415));
    vlTOPp->mkMmUnit__DOT__y___05Fh2404471 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2404561) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2404562));
    vlTOPp->mkMmUnit__DOT__x___05Fh3160439 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x1fU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3160530 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x1eU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3160168 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x1eU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3160259 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x1dU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3159897 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x1dU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3159988 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x1cU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3159626 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x1cU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3159717 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x1bU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3159355 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x1bU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3159446 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x1aU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3159084 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x1aU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3159175 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x19U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3158813 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x19U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3158904 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x18U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BI_ETC___05Fq577 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3158542 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x18U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3158633 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x17U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3158271 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x17U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3158362 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x16U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3158000 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x16U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3158091 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x15U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3157729 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x15U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3157820 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x14U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3157458 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x14U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3157549 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x13U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3157187 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x13U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3157278 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x12U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3156916 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x12U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3157007 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x11U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3156645 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x11U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3156736 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x10U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3156374 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0x10U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3156465 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0xfU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3156103 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0xfU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3156194 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0xeU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3155832 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0xeU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3155923 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0xdU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3155561 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0xdU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3155652 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0xcU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3155290 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0xcU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3155381 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0xbU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3155019 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0xbU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3155110 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0xaU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3154748 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 0xaU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3154839 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 9U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3154477 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 9U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3154568 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 8U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3154206 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 8U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3154297 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 7U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3153935 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 7U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3154026 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 6U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3153664 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 6U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3153755 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 5U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3153393 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 5U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3153484 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 4U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3153121 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 4U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3153212 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 3U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BI_ETC___05Fq576 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                   >> 2U) & vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135))
            ? 8ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh3152853 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373 
                                                >> 3U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2940292 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x1fU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2940383 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x1eU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2940021 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x1eU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2940112 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x1dU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2939750 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x1dU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2939841 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x1cU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2939479 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x1cU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2939570 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x1bU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2939208 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x1bU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2939299 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x1aU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2938937 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x1aU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2939028 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x19U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2938666 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x19U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2938757 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x18U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BI_ETC___05Fq542 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2938395 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x18U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2938486 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x17U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2938124 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x17U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2938215 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x16U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2937853 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x16U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2937944 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x15U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2937582 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x15U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2937673 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x14U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2937311 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x14U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2937402 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x13U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2937040 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x13U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2937131 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x12U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2936769 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x12U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2936860 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x11U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2936498 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x11U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2936589 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x10U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2936227 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0x10U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2936318 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0xfU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2935956 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0xfU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2936047 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0xeU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2935685 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0xeU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2935776 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0xdU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2935414 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0xdU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2935505 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0xcU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2935143 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0xcU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2935234 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0xbU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2934872 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0xbU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2934963 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0xaU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2934601 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 0xaU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2934692 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 9U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2934330 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 9U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2934421 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 8U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2934059 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 8U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2934150 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 7U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2933788 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 7U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2933879 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 6U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2933517 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 6U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2933608 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 5U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2933246 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 5U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2933337 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 4U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2932974 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 4U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2933065 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 3U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BI_ETC___05Fq541 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                   >> 2U) & vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637))
            ? 8ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh2932706 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875 
                                                >> 3U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2720145 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x1fU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2720236 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x1eU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2719874 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x1eU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2719965 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x1dU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2719603 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x1dU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2719694 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x1cU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2719332 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x1cU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2719423 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x1bU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2719061 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x1bU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2719152 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x1aU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2718790 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x1aU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2718881 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x19U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2718519 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x19U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2718610 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x18U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BI_ETC___05Fq507 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2718248 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x18U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2718339 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x17U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2717977 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x17U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2718068 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x16U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2717706 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x16U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2717797 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x15U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2717435 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x15U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2717526 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x14U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2717164 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x14U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2717255 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x13U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2716893 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x13U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2716984 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x12U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2716622 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x12U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2716713 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x11U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2716351 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x11U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2716442 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x10U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2716080 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0x10U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2716171 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0xfU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2715809 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0xfU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2715900 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0xeU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2715538 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0xeU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2715629 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0xdU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2715267 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0xdU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2715358 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0xcU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2714996 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0xcU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2715087 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0xbU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2714725 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0xbU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2714816 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0xaU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2714454 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 0xaU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2714545 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 9U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2714183 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 9U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2714274 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 8U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2713912 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 8U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2714003 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 7U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2713641 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 7U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2713732 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 6U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2713370 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 6U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2713461 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 5U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2713099 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 5U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2713190 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 4U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2712827 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 4U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2712918 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 3U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BI_ETC___05Fq506 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                   >> 2U) & vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139))
            ? 8ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh2712559 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377 
                                                >> 3U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2499975 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x1fU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2500066 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x1eU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2499704 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x1eU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2499795 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x1dU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2499433 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x1dU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2499524 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x1cU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2499162 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x1cU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2499253 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x1bU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2498891 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x1bU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2498982 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x1aU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2498620 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x1aU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2498711 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x19U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2498349 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x19U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2498440 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x18U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BI_ETC___05Fq472 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2498078 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x18U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2498169 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x17U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2497807 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x17U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2497898 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x16U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2497536 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x16U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2497627 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x15U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2497265 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x15U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2497356 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x14U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2496994 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x14U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2497085 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x13U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2496723 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x13U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2496814 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x12U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2496452 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x12U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2496543 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x11U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2496181 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x11U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2496272 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x10U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2495910 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0x10U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2496001 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0xfU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2495639 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0xfU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2495730 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0xeU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2495368 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0xeU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2495459 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0xdU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2495097 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0xdU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2495188 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0xcU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2494826 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0xcU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2494917 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0xbU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2494555 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0xbU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2494646 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0xaU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2494284 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 0xaU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2494375 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 9U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2494013 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 9U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2494104 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 8U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2493742 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 8U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2493833 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 7U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2493471 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 7U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2493562 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 6U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2493200 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 6U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2493291 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 5U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2492929 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 5U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2493020 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 4U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2492657 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 4U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2492748 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 3U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BI_ETC___05Fq471 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                   >> 2U) & vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641))
            ? 8ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh2492389 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879 
                                                >> 3U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh738753 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x1fU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh738844 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x1eU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh738482 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x1eU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh738573 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x1dU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh738211 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x1dU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh738302 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x1cU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh737940 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x1cU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh738031 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x1bU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh737669 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x1bU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh737760 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x1aU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh737398 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x1aU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh737489 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x19U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh737127 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x19U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh737218 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x18U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_ETC___05Fq192 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh736856 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x18U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh736947 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x17U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh736585 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x17U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh736676 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x16U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh736314 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x16U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh736405 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x15U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh736043 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x15U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh736134 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x14U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh735772 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x14U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh735863 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x13U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh735501 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x13U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh735592 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x12U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh735230 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x12U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh735321 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x11U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh734959 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x11U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh735050 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x10U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh734688 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0x10U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh734779 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0xfU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh734417 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0xfU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh734508 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0xeU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh734146 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0xeU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh734237 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0xdU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh733875 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0xdU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh733966 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0xcU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh733604 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0xcU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh733695 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0xbU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh733333 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0xbU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh733424 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0xaU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh733062 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 0xaU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh733153 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 9U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh732791 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 9U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh732882 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 8U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh732520 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 8U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh732611 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 7U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh732249 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 7U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh732340 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 6U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh731978 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 6U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh732069 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 5U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh731707 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh731798 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 4U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh731435 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 4U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh731526 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 3U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_ETC___05Fq191 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                   >> 2U) & vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657))
            ? 8ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh731167 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895 
                                                    >> 3U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3380586 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x1fU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3380677 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x1eU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3380315 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x1eU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3380406 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x1dU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3380044 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x1dU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3380135 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x1cU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3379773 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x1cU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3379864 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x1bU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3379502 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x1bU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3379593 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x1aU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3379231 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x1aU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3379322 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x19U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3378960 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x19U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3379051 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x18U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BI_ETC___05Fq612 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3378689 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x18U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3378780 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x17U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3378418 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x17U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3378509 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x16U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3378147 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x16U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3378238 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x15U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3377876 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x15U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3377967 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x14U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3377605 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x14U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3377696 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x13U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3377334 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x13U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3377425 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x12U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3377063 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x12U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3377154 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x11U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3376792 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x11U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3376883 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x10U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3376521 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0x10U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3376612 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0xfU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3376250 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0xfU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3376341 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0xeU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3375979 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0xeU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3376070 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0xdU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3375708 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0xdU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3375799 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0xcU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3375437 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0xcU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3375528 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0xbU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3375166 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0xbU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3375257 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0xaU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3374895 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 0xaU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3374986 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 9U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3374624 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 9U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3374715 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 8U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3374353 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 8U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3374444 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 7U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3374082 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 7U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3374173 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 6U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3373811 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 6U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3373902 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 5U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3373540 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 5U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3373631 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 4U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3373268 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 4U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3373359 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 3U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BI_ETC___05Fq611 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                   >> 2U) & vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633))
            ? 8ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh3373000 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871 
                                                >> 3U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh78299 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x1fU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh78390 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x1eU) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh78028 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x1eU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh78119 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x1dU) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh77757 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x1dU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh77848 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x1cU) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh77486 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x1cU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh77577 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x1bU) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh77215 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x1bU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh77306 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x1aU) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh76944 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x1aU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh77035 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x19U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh76673 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x19U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh76764 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x18U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_T_ETC___05Fq87 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh76402 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x18U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh76493 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x17U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh76131 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x17U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh76222 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x16U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh75860 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x16U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh75951 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x15U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh75589 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x15U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh75680 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x14U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh75318 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x14U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh75409 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x13U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh75047 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x13U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh75138 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x12U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh74776 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x12U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh74867 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x11U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh74505 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x11U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh74596 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x10U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh74234 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0x10U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh74325 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0xfU) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh73963 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0xfU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh74054 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0xeU) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh73692 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0xeU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh73783 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0xdU) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh73421 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0xdU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh73512 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0xcU) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh73150 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0xcU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh73241 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0xbU) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh72879 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0xbU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh72970 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0xaU) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh72608 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 0xaU) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh72699 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 9U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh72337 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 9U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh72428 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 8U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh72066 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 8U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh72157 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 7U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh71795 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 7U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh71886 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 6U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh71524 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 6U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh71615 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 5U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh71253 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 5U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh71344 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 4U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh70981 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 4U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh71072 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 3U) 
                                                  & (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                     >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_T_ETC___05Fq86 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                   >> 2U) & vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163))
            ? 8ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh70713 = (1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401 
                                                   >> 3U) 
                                                  ^ 
                                                  (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                   >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh958923 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x1fU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh959014 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x1eU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh958652 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x1eU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh958743 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x1dU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh958381 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x1dU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh958472 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x1cU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh958110 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x1cU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh958201 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x1bU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh957839 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x1bU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh957930 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x1aU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh957568 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x1aU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh957659 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x19U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh957297 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x19U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh957388 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x18U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_ETC___05Fq227 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh957026 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x18U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh957117 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x17U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh956755 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x17U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh956846 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x16U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh956484 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x16U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh956575 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x15U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh956213 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x15U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh956304 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x14U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh955942 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x14U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh956033 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x13U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh955671 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x13U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh955762 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x12U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh955400 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x12U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh955491 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x11U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh955129 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x11U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh955220 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x10U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh954858 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0x10U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh954949 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0xfU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh954587 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0xfU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh954678 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0xeU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh954316 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0xeU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh954407 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0xdU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh954045 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0xdU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh954136 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0xcU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh953774 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0xcU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh953865 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0xbU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh953503 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0xbU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh953594 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0xaU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh953232 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 0xaU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh953323 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 9U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh952961 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 9U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh953052 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 8U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh952690 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 8U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh952781 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 7U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh952419 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 7U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh952510 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 6U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh952148 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 6U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh952239 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 5U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh951877 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh951968 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 4U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh951605 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 4U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh951696 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 3U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_ETC___05Fq226 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                   >> 2U) & vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155))
            ? 8ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh951337 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393 
                                                    >> 3U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh298453 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x1fU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh298544 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x1eU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh298182 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x1eU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh298273 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x1dU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh297911 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x1dU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh298002 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x1cU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh297640 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x1cU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh297731 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x1bU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh297369 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x1bU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh297460 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x1aU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh297098 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x1aU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh297189 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x19U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh296827 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x19U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh296918 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x18U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_ETC___05Fq121 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh296556 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x18U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh296647 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x17U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh296285 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x17U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh296376 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x16U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh296014 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x16U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh296105 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x15U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh295743 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x15U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh295834 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x14U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh295472 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x14U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh295563 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x13U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh295201 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x13U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh295292 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x12U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh294930 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x12U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh295021 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x11U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh294659 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x11U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh294750 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x10U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh294388 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0x10U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh294479 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0xfU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh294117 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0xfU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh294208 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0xeU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh293846 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0xeU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh293937 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0xdU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh293575 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0xdU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh293666 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0xcU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh293304 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0xcU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh293395 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0xbU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh293033 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0xbU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh293124 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0xaU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh292762 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 0xaU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh292853 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 9U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh292491 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 9U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh292582 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 8U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh292220 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 8U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh292311 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 7U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh291949 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 7U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh292040 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 6U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh291678 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 6U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh291769 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 5U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh291407 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh291498 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 4U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh291135 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 4U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh291226 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 3U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_ETC___05Fq120 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                   >> 2U) & vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661))
            ? 8ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh290867 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899 
                                                    >> 3U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh518603 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x1fU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh518694 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x1eU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh518332 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x1eU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh518423 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x1dU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh518061 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x1dU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh518152 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x1cU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh517790 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x1cU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh517881 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x1bU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh517519 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x1bU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh517610 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x1aU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh517248 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x1aU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh517339 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x19U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh516977 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x19U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh517068 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x18U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_ETC___05Fq157 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh516706 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x18U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh516797 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x17U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh516435 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x17U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh516526 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x16U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh516164 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x16U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh516255 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x15U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh515893 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x15U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh515984 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x14U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh515622 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x14U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh515713 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x13U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh515351 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x13U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh515442 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x12U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh515080 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x12U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh515171 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x11U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh514809 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x11U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh514900 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x10U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh514538 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0x10U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh514629 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0xfU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh514267 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0xfU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh514358 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0xeU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh513996 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0xeU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh514087 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0xdU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh513725 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0xdU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh513816 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0xcU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh513454 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0xcU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh513545 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0xbU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh513183 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0xbU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh513274 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0xaU) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh512912 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 0xaU) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh513003 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 9U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh512641 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 9U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh512732 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 8U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh512370 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 8U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh512461 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 7U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh512099 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 7U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh512190 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 6U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh511828 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 6U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh511919 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 5U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh511557 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh511648 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 4U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh511285 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 4U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh511376 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 3U) 
                                                   & (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_ETC___05Fq156 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                   >> 2U) & vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159))
            ? 8ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh511017 = (1U & (
                                                   (vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397 
                                                    >> 3U) 
                                                   ^ 
                                                   (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1179070 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x1fU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1179161 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x1eU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1178799 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x1eU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1178890 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x1dU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1178528 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x1dU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1178619 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x1cU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1178257 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x1cU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1178348 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x1bU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1177986 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x1bU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1178077 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x1aU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1177715 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x1aU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1177806 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x19U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1177444 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x19U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1177535 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x18U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BI_ETC___05Fq262 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1177173 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x18U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1177264 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x17U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1176902 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x17U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1176993 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x16U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1176631 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x16U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1176722 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x15U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1176360 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x15U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1176451 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x14U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1176089 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x14U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1176180 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x13U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1175818 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x13U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1175909 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x12U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1175547 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x12U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1175638 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x11U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1175276 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x11U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1175367 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x10U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1175005 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0x10U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1175096 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0xfU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1174734 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0xfU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1174825 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0xeU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1174463 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0xeU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1174554 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0xdU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1174192 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0xdU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1174283 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0xcU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1173921 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0xcU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1174012 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0xbU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1173650 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0xbU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1173741 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0xaU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1173379 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 0xaU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1173470 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 9U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1173108 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 9U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1173199 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 8U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1172837 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 8U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1172928 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 7U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1172566 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 7U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1172657 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 6U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1172295 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 6U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1172386 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 5U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1172024 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 5U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1172115 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 4U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1171752 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 4U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1171843 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 3U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BI_ETC___05Fq261 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                   >> 2U) & vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653))
            ? 8ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh1171484 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891 
                                                >> 3U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1399217 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x1fU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1399308 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x1eU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1398946 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x1eU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1399037 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x1dU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1398675 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x1dU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1398766 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x1cU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1398404 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x1cU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1398495 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x1bU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1398133 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x1bU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1398224 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x1aU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1397862 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x1aU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1397953 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x19U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1397591 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x19U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1397682 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x18U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BI_ETC___05Fq297 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1397320 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x18U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1397411 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x17U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1397049 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x17U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1397140 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x16U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1396778 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x16U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1396869 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x15U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1396507 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x15U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1396598 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x14U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1396236 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x14U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1396327 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x13U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1395965 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x13U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1396056 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x12U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1395694 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x12U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1395785 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x11U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1395423 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x11U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1395514 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x10U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1395152 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0x10U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1395243 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0xfU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1394881 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0xfU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1394972 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0xeU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1394610 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0xeU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1394701 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0xdU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1394339 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0xdU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1394430 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0xcU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1394068 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0xcU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1394159 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0xbU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1393797 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0xbU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1393888 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0xaU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1393526 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 0xaU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1393617 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 9U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1393255 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 9U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1393346 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 8U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1392984 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 8U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1393075 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 7U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1392713 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 7U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1392804 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 6U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1392442 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 6U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1392533 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 5U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1392171 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 5U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1392262 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 4U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1391899 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 4U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1391990 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 3U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BI_ETC___05Fq296 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                   >> 2U) & vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151))
            ? 8ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh1391631 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389 
                                                >> 3U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1619364 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x1fU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1619455 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x1eU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1619093 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x1eU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1619184 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x1dU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1618822 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x1dU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1618913 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x1cU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1618551 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x1cU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1618642 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x1bU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1618280 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x1bU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1618371 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x1aU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1618009 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x1aU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1618100 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x19U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1617738 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x19U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1617829 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x18U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BI_ETC___05Fq332 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1617467 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x18U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1617558 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x17U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1617196 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x17U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1617287 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x16U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1616925 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x16U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1617016 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x15U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1616654 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x15U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1616745 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x14U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1616383 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x14U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1616474 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x13U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1616112 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x13U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1616203 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x12U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1615841 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x12U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1615932 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x11U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1615570 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x11U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1615661 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x10U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1615299 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0x10U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1615390 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0xfU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1615028 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0xfU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1615119 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0xeU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1614757 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0xeU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1614848 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0xdU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1614486 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0xdU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1614577 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0xcU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1614215 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0xcU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1614306 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0xbU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1613944 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0xbU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1614035 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0xaU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1613673 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 0xaU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1613764 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 9U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1613402 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 9U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1613493 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 8U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1613131 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 8U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1613222 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 7U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1612860 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 7U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1612951 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 6U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1612589 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 6U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1612680 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 5U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1612318 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 5U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1612409 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 4U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1612046 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 4U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1612137 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 3U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BI_ETC___05Fq331 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                   >> 2U) & vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649))
            ? 8ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh1611778 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887 
                                                >> 3U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1839534 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x1fU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1839625 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x1eU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1839263 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x1eU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1839354 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x1dU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1838992 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x1dU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1839083 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x1cU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1838721 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x1cU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1838812 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x1bU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1838450 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x1bU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1838541 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x1aU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1838179 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x1aU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1838270 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x19U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1837908 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x19U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1837999 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x18U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BI_ETC___05Fq367 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1837637 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x18U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1837728 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x17U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1837366 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x17U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1837457 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x16U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1837095 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x16U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1837186 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x15U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1836824 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x15U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1836915 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x14U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1836553 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x14U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1836644 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x13U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1836282 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x13U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1836373 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x12U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1836011 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x12U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1836102 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x11U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1835740 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x11U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1835831 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x10U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1835469 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0x10U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1835560 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0xfU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1835198 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0xfU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1835289 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0xeU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1834927 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0xeU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1835018 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0xdU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1834656 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0xdU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1834747 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0xcU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1834385 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0xcU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1834476 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0xbU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1834114 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0xbU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1834205 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0xaU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1833843 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 0xaU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1833934 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 9U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1833572 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 9U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1833663 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 8U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1833301 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 8U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1833392 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 7U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1833030 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 7U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1833121 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 6U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1832759 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 6U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1832850 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 5U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1832488 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 5U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1832579 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 4U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1832216 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 4U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1832307 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 3U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BI_ETC___05Fq366 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                   >> 2U) & vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147))
            ? 8ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh1831948 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385 
                                                >> 3U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2059681 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x1fU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2059772 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x1eU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2059410 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x1eU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2059501 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x1dU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2059139 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x1dU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2059230 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x1cU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2058868 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x1cU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2058959 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x1bU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2058597 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x1bU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2058688 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x1aU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2058326 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x1aU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2058417 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x19U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2058055 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x19U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2058146 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x18U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BI_ETC___05Fq402 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2057784 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x18U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2057875 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x17U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2057513 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x17U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2057604 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x16U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2057242 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x16U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2057333 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x15U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2056971 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x15U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2057062 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x14U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2056700 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x14U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2056791 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x13U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2056429 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x13U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2056520 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x12U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2056158 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x12U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2056249 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x11U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2055887 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x11U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2055978 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x10U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2055616 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0x10U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2055707 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0xfU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2055345 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0xfU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2055436 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0xeU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2055074 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0xeU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2055165 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0xdU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2054803 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0xdU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2054894 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0xcU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2054532 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0xcU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2054623 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0xbU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2054261 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0xbU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2054352 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0xaU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2053990 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 0xaU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2054081 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 9U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2053719 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 9U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2053810 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 8U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2053448 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 8U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2053539 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 7U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2053177 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 7U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2053268 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 6U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2052906 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 6U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2052997 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 5U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2052635 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 5U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2052726 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 4U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2052363 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 4U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2052454 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 3U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BI_ETC___05Fq401 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                   >> 2U) & vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645))
            ? 8ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh2052095 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883 
                                                >> 3U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2279828 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x1fU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x1dU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2279919 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x1eU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2279557 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x1eU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x1cU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2279648 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x1dU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2279286 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x1dU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x1bU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2279377 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x1cU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2279015 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x1cU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x1aU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2279106 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x1bU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2278744 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x1bU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x19U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2278835 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x1aU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2278473 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x1aU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x18U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2278564 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x19U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2278202 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x19U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x17U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2278293 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x18U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BI_ETC___05Fq437 
        = ((1U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381)
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2277931 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x18U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x16U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2278022 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x17U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2277660 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x17U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x15U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2277751 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x16U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2277389 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x16U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x14U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2277480 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x15U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2277118 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x15U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x13U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2277209 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x14U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2276847 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x14U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x12U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2276938 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x13U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2276576 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x13U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x11U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2276667 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x12U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2276305 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x12U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0x10U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2276396 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x11U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2276034 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x11U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xfU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2276125 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x10U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2275763 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0x10U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xeU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2275854 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0xfU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2275492 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0xfU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2275583 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0xeU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2275221 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0xeU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xcU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2275312 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0xdU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2274950 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0xdU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2275041 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0xcU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2274679 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0xcU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2274770 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0xbU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2274408 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0xbU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 9U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2274499 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0xaU) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2274137 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 0xaU) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 8U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2274228 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 9U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2273866 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 9U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 7U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2273957 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 8U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2273595 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 8U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2273686 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 7U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2273324 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 7U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2273415 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 6U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2273053 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 6U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2273144 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 5U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2272782 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 5U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2272873 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 4U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2272510 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 4U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2272601 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 3U) 
                                               & (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BI_ETC___05Fq436 
        = ((1U & ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                   >> 2U) & vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143))
            ? 8ULL : 0ULL);
    vlTOPp->mkMmUnit__DOT__x___05Fh2272242 = (1U & 
                                              ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381 
                                                >> 3U) 
                                               ^ (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37079 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3285081) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3285082)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3284810) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3284811)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37078)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3285444 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3285082) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3285081));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34581 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3064934) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3064935)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3064663) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3064664)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34580)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3065297 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3064935) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3064934));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32083 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2844787) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2844788)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2844516) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2844517)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32082)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2845150 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2844788) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2844787));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29585 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2624617) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2624618)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2624346) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2624347)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29584)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2624980 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2624618) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2624617));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9601 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh863395) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh863396)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh863124) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh863125)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9600)));
    vlTOPp->mkMmUnit__DOT__y___05Fh863758 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh863396) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh863395));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4605 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh423095) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh423096)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh422824) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh422825)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4604)));
    vlTOPp->mkMmUnit__DOT__y___05Fh423458 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh423096) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh423095));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12099 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1083565) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1083566)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1083294) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1083295)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12098)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1083928 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1083566) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1083565));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39577 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3505228) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3505229)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3504957) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3504958)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39576)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3505591 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3505229) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3505228));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2107 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh202941) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh202942)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh202670) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh202671)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2106)));
    vlTOPp->mkMmUnit__DOT__y___05Fh203304 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh202942) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh202941));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14597 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1303712) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1303713)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1303441) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1303442)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14596)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1304075 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1303713) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1303712));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7103 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh643245) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh643246)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh642974) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh642975)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7102)));
    vlTOPp->mkMmUnit__DOT__y___05Fh643608 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh643246) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh643245));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17095 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1523859) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1523860)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1523588) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1523589)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17094)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1524222 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1523860) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1523859));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19593 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1744006) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1744007)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1743735) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1743736)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19592)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1744369 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1744007) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1744006));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22091 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1964176) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1964177)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1963905) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1963906)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22090)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1964539 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1964177) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1964176));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24589 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2184323) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2184324)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2184052) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2184053)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24588)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2184686 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2184324) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2184323));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27087 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2404470) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2404471)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2404199) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2404200)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27086)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2404833 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2404471) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2404470));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35555 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3152853) 
                   ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BI_ETC___05Fq576 
                              >> 3U))) << 3U)) | ((4U 
                                                   & ((0xfffffffcU 
                                                       & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373) 
                                                      ^ 
                                                      (vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_int_Mac_reg_A_4973_BIT_7_49_ETC___05F_d35135 
                                                       << 2U))) 
                                                  | ((2U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35373) 
                                                     | (1U 
                                                        & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BI_ETC___05Fq577))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3153213 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BI_ETC___05Fq576 
                                                       >> 3U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3152853));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d33057 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2932706) 
                   ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BI_ETC___05Fq541 
                              >> 3U))) << 3U)) | ((4U 
                                                   & ((0xfffffffcU 
                                                       & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875) 
                                                      ^ 
                                                      (vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_int_Mac_reg_A_2475_BIT_7_24_ETC___05F_d32637 
                                                       << 2U))) 
                                                  | ((2U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32875) 
                                                     | (1U 
                                                        & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BI_ETC___05Fq542))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2933066 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BI_ETC___05Fq541 
                                                       >> 3U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2932706));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30559 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2712559) 
                   ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BI_ETC___05Fq506 
                              >> 3U))) << 3U)) | ((4U 
                                                   & ((0xfffffffcU 
                                                       & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377) 
                                                      ^ 
                                                      (vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_int_Mac_reg_A_9977_BIT_7_99_ETC___05F_d30139 
                                                       << 2U))) 
                                                  | ((2U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30377) 
                                                     | (1U 
                                                        & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BI_ETC___05Fq507))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2712919 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BI_ETC___05Fq506 
                                                       >> 3U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2712559));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d28061 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2492389) 
                   ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BI_ETC___05Fq471 
                              >> 3U))) << 3U)) | ((4U 
                                                   & ((0xfffffffcU 
                                                       & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879) 
                                                      ^ 
                                                      (vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_int_Mac_reg_A_7479_BIT_7_74_ETC___05F_d27641 
                                                       << 2U))) 
                                                  | ((2U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27879) 
                                                     | (1U 
                                                        & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BI_ETC___05Fq472))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2492749 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BI_ETC___05Fq471 
                                                       >> 3U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2492389));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d8077 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh731167) 
                   ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_ETC___05Fq191 
                              >> 3U))) << 3U)) | ((4U 
                                                   & ((0xfffffffcU 
                                                       & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895) 
                                                      ^ 
                                                      (vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_int_Mac_reg_A_495_BIT_7_496_ETC___05F_d7657 
                                                       << 2U))) 
                                                  | ((2U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7895) 
                                                     | (1U 
                                                        & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_ETC___05Fq192))));
    vlTOPp->mkMmUnit__DOT__y___05Fh731527 = ((IData)(
                                                     (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_ETC___05Fq191 
                                                      >> 3U)) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh731167));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d38053 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3373000) 
                   ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BI_ETC___05Fq611 
                              >> 3U))) << 3U)) | ((4U 
                                                   & ((0xfffffffcU 
                                                       & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871) 
                                                      ^ 
                                                      (vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_int_Mac_reg_A_7471_BIT_7_74_ETC___05F_d37633 
                                                       << 2U))) 
                                                  | ((2U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37871) 
                                                     | (1U 
                                                        & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BI_ETC___05Fq612))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3373360 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BI_ETC___05Fq611 
                                                       >> 3U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3373000));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d583 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh70713) 
                   ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_T_ETC___05Fq86 
                              >> 3U))) << 3U)) | ((4U 
                                                   & ((0xfffffffcU 
                                                       & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401) 
                                                      ^ 
                                                      (vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_int_Mac_reg_A_BIT_7_THEN_IN_ETC___05F_d163 
                                                       << 2U))) 
                                                  | ((2U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d401) 
                                                     | (1U 
                                                        & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_T_ETC___05Fq87))));
    vlTOPp->mkMmUnit__DOT__y___05Fh71073 = ((IData)(
                                                    (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_T_ETC___05Fq86 
                                                     >> 3U)) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh70713));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10575 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh951337) 
                   ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_ETC___05Fq226 
                              >> 3U))) << 3U)) | ((4U 
                                                   & ((0xfffffffcU 
                                                       & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393) 
                                                      ^ 
                                                      (vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_int_Mac_reg_A_993_BIT_7_994_ETC___05F_d10155 
                                                       << 2U))) 
                                                  | ((2U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10393) 
                                                     | (1U 
                                                        & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_ETC___05Fq227))));
    vlTOPp->mkMmUnit__DOT__y___05Fh951697 = ((IData)(
                                                     (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_ETC___05Fq226 
                                                      >> 3U)) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh951337));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d3081 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh290867) 
                   ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_ETC___05Fq120 
                              >> 3U))) << 3U)) | ((4U 
                                                   & ((0xfffffffcU 
                                                       & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899) 
                                                      ^ 
                                                      (vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_int_Mac_reg_A_499_BIT_7_500_ETC___05F_d2661 
                                                       << 2U))) 
                                                  | ((2U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2899) 
                                                     | (1U 
                                                        & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_ETC___05Fq121))));
    vlTOPp->mkMmUnit__DOT__y___05Fh291227 = ((IData)(
                                                     (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_ETC___05Fq120 
                                                      >> 3U)) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh290867));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5579 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh511017) 
                   ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_ETC___05Fq156 
                              >> 3U))) << 3U)) | ((4U 
                                                   & ((0xfffffffcU 
                                                       & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397) 
                                                      ^ 
                                                      (vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_int_Mac_reg_A_997_BIT_7_998_ETC___05F_d5159 
                                                       << 2U))) 
                                                  | ((2U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5397) 
                                                     | (1U 
                                                        & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_ETC___05Fq157))));
    vlTOPp->mkMmUnit__DOT__y___05Fh511377 = ((IData)(
                                                     (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_ETC___05Fq156 
                                                      >> 3U)) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh511017));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d13073 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1171484) 
                   ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BI_ETC___05Fq261 
                              >> 3U))) << 3U)) | ((4U 
                                                   & ((0xfffffffcU 
                                                       & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891) 
                                                      ^ 
                                                      (vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_int_Mac_reg_A_2491_BIT_7_24_ETC___05F_d12653 
                                                       << 2U))) 
                                                  | ((2U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12891) 
                                                     | (1U 
                                                        & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BI_ETC___05Fq262))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1171844 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BI_ETC___05Fq261 
                                                       >> 3U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1171484));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15571 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1391631) 
                   ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BI_ETC___05Fq296 
                              >> 3U))) << 3U)) | ((4U 
                                                   & ((0xfffffffcU 
                                                       & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389) 
                                                      ^ 
                                                      (vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_int_Mac_reg_A_4989_BIT_7_49_ETC___05F_d15151 
                                                       << 2U))) 
                                                  | ((2U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15389) 
                                                     | (1U 
                                                        & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BI_ETC___05Fq297))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1391991 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BI_ETC___05Fq296 
                                                       >> 3U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1391631));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d18069 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1611778) 
                   ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BI_ETC___05Fq331 
                              >> 3U))) << 3U)) | ((4U 
                                                   & ((0xfffffffcU 
                                                       & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887) 
                                                      ^ 
                                                      (vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_int_Mac_reg_A_7487_BIT_7_74_ETC___05F_d17649 
                                                       << 2U))) 
                                                  | ((2U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17887) 
                                                     | (1U 
                                                        & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BI_ETC___05Fq332))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1612138 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BI_ETC___05Fq331 
                                                       >> 3U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1611778));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20567 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1831948) 
                   ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BI_ETC___05Fq366 
                              >> 3U))) << 3U)) | ((4U 
                                                   & ((0xfffffffcU 
                                                       & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385) 
                                                      ^ 
                                                      (vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_int_Mac_reg_A_9985_BIT_7_99_ETC___05F_d20147 
                                                       << 2U))) 
                                                  | ((2U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20385) 
                                                     | (1U 
                                                        & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BI_ETC___05Fq367))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1832308 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BI_ETC___05Fq366 
                                                       >> 3U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1831948));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d23065 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2052095) 
                   ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BI_ETC___05Fq401 
                              >> 3U))) << 3U)) | ((4U 
                                                   & ((0xfffffffcU 
                                                       & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883) 
                                                      ^ 
                                                      (vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_int_Mac_reg_A_2483_BIT_7_24_ETC___05F_d22645 
                                                       << 2U))) 
                                                  | ((2U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22883) 
                                                     | (1U 
                                                        & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BI_ETC___05Fq402))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2052455 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BI_ETC___05Fq401 
                                                       >> 3U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2052095));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25563 
        = ((8U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2272242) 
                   ^ (IData)((vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BI_ETC___05Fq436 
                              >> 3U))) << 3U)) | ((4U 
                                                   & ((0xfffffffcU 
                                                       & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381) 
                                                      ^ 
                                                      (vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_int_Mac_reg_A_4981_BIT_7_49_ETC___05F_d25143 
                                                       << 2U))) 
                                                  | ((2U 
                                                      & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25381) 
                                                     | (1U 
                                                        & vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BI_ETC___05Fq437))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2272602 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BI_ETC___05Fq436 
                                                       >> 3U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2272242));
    vlTOPp->mkMmUnit__DOT__y___05Fh3285353 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3285443) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3285444));
    vlTOPp->mkMmUnit__DOT__y___05Fh3065206 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3065296) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3065297));
    vlTOPp->mkMmUnit__DOT__y___05Fh2845059 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2845149) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2845150));
    vlTOPp->mkMmUnit__DOT__y___05Fh2624889 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2624979) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2624980));
    vlTOPp->mkMmUnit__DOT__y___05Fh863667 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh863757) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh863758));
    vlTOPp->mkMmUnit__DOT__y___05Fh423367 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh423457) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh423458));
    vlTOPp->mkMmUnit__DOT__y___05Fh1083837 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1083927) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1083928));
    vlTOPp->mkMmUnit__DOT__y___05Fh3505500 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3505590) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3505591));
    vlTOPp->mkMmUnit__DOT__y___05Fh203213 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh203303) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh203304));
    vlTOPp->mkMmUnit__DOT__y___05Fh1303984 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1304074) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1304075));
    vlTOPp->mkMmUnit__DOT__y___05Fh643517 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh643607) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh643608));
    vlTOPp->mkMmUnit__DOT__y___05Fh1524131 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1524221) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1524222));
    vlTOPp->mkMmUnit__DOT__y___05Fh1744278 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1744368) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1744369));
    vlTOPp->mkMmUnit__DOT__y___05Fh1964448 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1964538) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1964539));
    vlTOPp->mkMmUnit__DOT__y___05Fh2184595 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2184685) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2184686));
    vlTOPp->mkMmUnit__DOT__y___05Fh2404742 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2404832) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2404833));
    vlTOPp->mkMmUnit__DOT__y___05Fh3153122 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3153212) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3153213));
    vlTOPp->mkMmUnit__DOT__y___05Fh2932975 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2933065) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2933066));
    vlTOPp->mkMmUnit__DOT__y___05Fh2712828 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2712918) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2712919));
    vlTOPp->mkMmUnit__DOT__y___05Fh2492658 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2492748) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2492749));
    vlTOPp->mkMmUnit__DOT__y___05Fh731436 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh731526) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh731527));
    vlTOPp->mkMmUnit__DOT__y___05Fh3373269 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3373359) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3373360));
    vlTOPp->mkMmUnit__DOT__y___05Fh70982 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh71072) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh71073));
    vlTOPp->mkMmUnit__DOT__y___05Fh951606 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh951696) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh951697));
    vlTOPp->mkMmUnit__DOT__y___05Fh291136 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh291226) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh291227));
    vlTOPp->mkMmUnit__DOT__y___05Fh511286 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh511376) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh511377));
    vlTOPp->mkMmUnit__DOT__y___05Fh1171753 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1171843) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1171844));
    vlTOPp->mkMmUnit__DOT__y___05Fh1391900 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1391990) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1391991));
    vlTOPp->mkMmUnit__DOT__y___05Fh1612047 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1612137) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1612138));
    vlTOPp->mkMmUnit__DOT__y___05Fh1832217 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1832307) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1832308));
    vlTOPp->mkMmUnit__DOT__y___05Fh2052364 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2052454) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2052455));
    vlTOPp->mkMmUnit__DOT__y___05Fh2272511 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2272601) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2272602));
    vlTOPp->mkMmUnit__DOT__y___05Fh3285715 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3285353) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3285352));
    vlTOPp->mkMmUnit__DOT__y___05Fh3065568 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3065206) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3065205));
    vlTOPp->mkMmUnit__DOT__y___05Fh2845421 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2845059) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2845058));
    vlTOPp->mkMmUnit__DOT__y___05Fh2625251 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2624889) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2624888));
    vlTOPp->mkMmUnit__DOT__y___05Fh864029 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh863667) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh863666));
    vlTOPp->mkMmUnit__DOT__y___05Fh423729 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh423367) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh423366));
    vlTOPp->mkMmUnit__DOT__y___05Fh1084199 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1083837) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1083836));
    vlTOPp->mkMmUnit__DOT__y___05Fh3505862 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3505500) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3505499));
    vlTOPp->mkMmUnit__DOT__y___05Fh203575 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh203213) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh203212));
    vlTOPp->mkMmUnit__DOT__y___05Fh1304346 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1303984) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1303983));
    vlTOPp->mkMmUnit__DOT__y___05Fh643879 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh643517) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh643516));
    vlTOPp->mkMmUnit__DOT__y___05Fh1524493 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1524131) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1524130));
    vlTOPp->mkMmUnit__DOT__y___05Fh1744640 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1744278) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1744277));
    vlTOPp->mkMmUnit__DOT__y___05Fh1964810 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1964448) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1964447));
    vlTOPp->mkMmUnit__DOT__y___05Fh2184957 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2184595) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2184594));
    vlTOPp->mkMmUnit__DOT__y___05Fh2405104 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2404742) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2404741));
    vlTOPp->mkMmUnit__DOT__y___05Fh3153485 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3153122) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3153121));
    vlTOPp->mkMmUnit__DOT__y___05Fh2933338 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2932975) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2932974));
    vlTOPp->mkMmUnit__DOT__y___05Fh2713191 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2712828) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2712827));
    vlTOPp->mkMmUnit__DOT__y___05Fh2493021 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2492658) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2492657));
    vlTOPp->mkMmUnit__DOT__y___05Fh731799 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh731436) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh731435));
    vlTOPp->mkMmUnit__DOT__y___05Fh3373632 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3373269) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3373268));
    vlTOPp->mkMmUnit__DOT__y___05Fh71345 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh70982) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh70981));
    vlTOPp->mkMmUnit__DOT__y___05Fh951969 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh951606) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh951605));
    vlTOPp->mkMmUnit__DOT__y___05Fh291499 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh291136) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh291135));
    vlTOPp->mkMmUnit__DOT__y___05Fh511649 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh511286) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh511285));
    vlTOPp->mkMmUnit__DOT__y___05Fh1172116 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1171753) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1171752));
    vlTOPp->mkMmUnit__DOT__y___05Fh1392263 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1391900) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1391899));
    vlTOPp->mkMmUnit__DOT__y___05Fh1612410 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1612047) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1612046));
    vlTOPp->mkMmUnit__DOT__y___05Fh1832580 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1832217) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1832216));
    vlTOPp->mkMmUnit__DOT__y___05Fh2052727 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2052364) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2052363));
    vlTOPp->mkMmUnit__DOT__y___05Fh2272874 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2272511) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2272510));
    vlTOPp->mkMmUnit__DOT__y___05Fh3285624 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017) 
                                                >> 0xcU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3285715)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3065477 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519) 
                                                >> 0xcU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3065568)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2845330 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021) 
                                                >> 0xcU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2845421)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2625160 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523) 
                                                >> 0xcU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2625251)));
    vlTOPp->mkMmUnit__DOT__y___05Fh863938 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539) 
                                                    >> 0xcU) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh864029)));
    vlTOPp->mkMmUnit__DOT__y___05Fh423638 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543) 
                                                    >> 0xcU) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh423729)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1084108 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037) 
                                                >> 0xcU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1084199)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3505771 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515) 
                                                >> 0xcU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3505862)));
    vlTOPp->mkMmUnit__DOT__y___05Fh203484 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045) 
                                                    >> 0xcU) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh203575)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1304255 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535) 
                                                >> 0xcU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1304346)));
    vlTOPp->mkMmUnit__DOT__y___05Fh643788 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041) 
                                                    >> 0xcU) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh643879)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1524402 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033) 
                                                >> 0xcU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1524493)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1744549 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531) 
                                                >> 0xcU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1744640)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1964719 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029) 
                                                >> 0xcU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1964810)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2184866 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527) 
                                                >> 0xcU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2184957)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2405013 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025) 
                                                >> 0xcU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2405104)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3153394 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3153484) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3153485));
    vlTOPp->mkMmUnit__DOT__y___05Fh2933247 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2933337) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2933338));
    vlTOPp->mkMmUnit__DOT__y___05Fh2713100 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2713190) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2713191));
    vlTOPp->mkMmUnit__DOT__y___05Fh2492930 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2493020) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2493021));
    vlTOPp->mkMmUnit__DOT__y___05Fh731708 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh731798) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh731799));
    vlTOPp->mkMmUnit__DOT__y___05Fh3373541 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3373631) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3373632));
    vlTOPp->mkMmUnit__DOT__y___05Fh71254 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh71344) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh71345));
    vlTOPp->mkMmUnit__DOT__y___05Fh951878 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh951968) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh951969));
    vlTOPp->mkMmUnit__DOT__y___05Fh291408 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh291498) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh291499));
    vlTOPp->mkMmUnit__DOT__y___05Fh511558 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh511648) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh511649));
    vlTOPp->mkMmUnit__DOT__y___05Fh1172025 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1172115) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1172116));
    vlTOPp->mkMmUnit__DOT__y___05Fh1392172 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1392262) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1392263));
    vlTOPp->mkMmUnit__DOT__y___05Fh1612319 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1612409) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1612410));
    vlTOPp->mkMmUnit__DOT__y___05Fh1832489 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1832579) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1832580));
    vlTOPp->mkMmUnit__DOT__y___05Fh2052636 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2052726) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2052727));
    vlTOPp->mkMmUnit__DOT__y___05Fh2272783 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2272873) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2272874));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37080 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3285624) 
                          << 0xdU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3285352) 
                                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3285353)) 
                                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37079)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3285895 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3285624) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34582 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3065477) 
                          << 0xdU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3065205) 
                                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3065206)) 
                                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34581)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3065748 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3065477) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32084 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2845330) 
                          << 0xdU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2845058) 
                                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2845059)) 
                                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32083)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2845601 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2845330) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29586 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2625160) 
                          << 0xdU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2624888) 
                                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2624889)) 
                                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29585)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2625431 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2625160) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9602 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh863938) 
                          << 0xdU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh863666) 
                                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh863667)) 
                                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9601)));
    vlTOPp->mkMmUnit__DOT__y___05Fh864209 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh863938) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539) 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4606 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh423638) 
                          << 0xdU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh423366) 
                                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh423367)) 
                                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4605)));
    vlTOPp->mkMmUnit__DOT__y___05Fh423909 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh423638) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543) 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12100 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1084108) 
                          << 0xdU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1083836) 
                                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1083837)) 
                                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12099)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1084379 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1084108) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39578 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3505771) 
                          << 0xdU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3505499) 
                                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3505500)) 
                                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39577)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3506042 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3505771) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2108 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh203484) 
                          << 0xdU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh203212) 
                                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh203213)) 
                                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2107)));
    vlTOPp->mkMmUnit__DOT__y___05Fh203755 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh203484) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045) 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14598 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1304255) 
                          << 0xdU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1303983) 
                                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1303984)) 
                                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14597)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1304526 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1304255) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7104 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh643788) 
                          << 0xdU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh643516) 
                                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh643517)) 
                                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7103)));
    vlTOPp->mkMmUnit__DOT__y___05Fh644059 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh643788) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041) 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17096 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1524402) 
                          << 0xdU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1524130) 
                                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1524131)) 
                                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17095)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1524673 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1524402) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19594 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1744549) 
                          << 0xdU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1744277) 
                                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1744278)) 
                                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19593)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1744820 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1744549) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22092 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1964719) 
                          << 0xdU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1964447) 
                                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1964448)) 
                                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22091)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1964990 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1964719) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24590 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2184866) 
                          << 0xdU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2184594) 
                                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2184595)) 
                                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24589)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2185137 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2184866) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27088 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025)) 
                       ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2405013) 
                          << 0xdU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2404741) 
                                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2404742)) 
                                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27087)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2405284 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2405013) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35556 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3153393) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3153394)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3153121) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3153122)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35555)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3153756 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3153394) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3153393));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d33058 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2933246) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2933247)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2932974) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2932975)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d33057)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2933609 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2933247) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2933246));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30560 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2713099) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2713100)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2712827) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2712828)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30559)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2713462 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2713100) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2713099));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d28062 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2492929) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2492930)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2492657) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2492658)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d28061)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2493292 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2492930) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2492929));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d8078 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh731707) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh731708)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh731435) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh731436)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d8077)));
    vlTOPp->mkMmUnit__DOT__y___05Fh732070 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh731708) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh731707));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d38054 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3373540) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3373541)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3373268) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3373269)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d38053)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3373903 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3373541) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3373540));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d584 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh71253) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh71254)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh70981) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh70982)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d583)));
    vlTOPp->mkMmUnit__DOT__y___05Fh71616 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh71254) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh71253));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10576 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh951877) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh951878)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh951605) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh951606)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10575)));
    vlTOPp->mkMmUnit__DOT__y___05Fh952240 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh951878) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh951877));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d3082 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh291407) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh291408)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh291135) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh291136)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d3081)));
    vlTOPp->mkMmUnit__DOT__y___05Fh291770 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh291408) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh291407));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5580 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh511557) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh511558)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh511285) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh511286)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5579)));
    vlTOPp->mkMmUnit__DOT__y___05Fh511920 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh511558) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh511557));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d13074 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1172024) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1172025)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1171752) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1171753)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d13073)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1172387 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1172025) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1172024));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15572 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1392171) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1392172)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1391899) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1391900)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15571)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1392534 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1392172) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1392171));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d18070 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1612318) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1612319)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1612046) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1612047)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d18069)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1612681 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1612319) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1612318));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20568 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1832488) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1832489)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1832216) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1832217)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20567)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1832851 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1832489) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1832488));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d23066 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2052635) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2052636)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2052363) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2052364)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d23065)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2052998 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2052636) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2052635));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25564 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2272782) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2272783)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2272510) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2272511)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25563)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2273145 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2272783) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2272782));
    vlTOPp->mkMmUnit__DOT__y___05Fh3286166 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3285895) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3066019 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3065748) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2845872 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2845601) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2625702 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2625431) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh864480 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh864209) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh424180 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh423909) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1084650 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1084379) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3506313 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3506042) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh204026 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh203755) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1304797 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1304526) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh644330 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh644059) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1524944 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1524673) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1745091 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1744820) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1965261 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1964990) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2185408 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2185137) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2405555 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2405284) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3153665 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3153755) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3153756));
    vlTOPp->mkMmUnit__DOT__y___05Fh2933518 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2933608) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2933609));
    vlTOPp->mkMmUnit__DOT__y___05Fh2713371 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2713461) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2713462));
    vlTOPp->mkMmUnit__DOT__y___05Fh2493201 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2493291) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2493292));
    vlTOPp->mkMmUnit__DOT__y___05Fh731979 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh732069) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh732070));
    vlTOPp->mkMmUnit__DOT__y___05Fh3373812 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3373902) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3373903));
    vlTOPp->mkMmUnit__DOT__y___05Fh71525 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh71615) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh71616));
    vlTOPp->mkMmUnit__DOT__y___05Fh952149 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh952239) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh952240));
    vlTOPp->mkMmUnit__DOT__y___05Fh291679 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh291769) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh291770));
    vlTOPp->mkMmUnit__DOT__y___05Fh511829 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh511919) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh511920));
    vlTOPp->mkMmUnit__DOT__y___05Fh1172296 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1172386) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1172387));
    vlTOPp->mkMmUnit__DOT__y___05Fh1392443 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1392533) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1392534));
    vlTOPp->mkMmUnit__DOT__y___05Fh1612590 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1612680) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1612681));
    vlTOPp->mkMmUnit__DOT__y___05Fh1832760 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1832850) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1832851));
    vlTOPp->mkMmUnit__DOT__y___05Fh2052907 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2052997) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2052998));
    vlTOPp->mkMmUnit__DOT__y___05Fh2273054 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2273144) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2273145));
    vlTOPp->mkMmUnit__DOT__product___05Fh3259184 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3286166) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3285895) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37080)));
    vlTOPp->mkMmUnit__DOT__product___05Fh3039037 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3066019) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3065748) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34582)));
    vlTOPp->mkMmUnit__DOT__product___05Fh2818890 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2845872) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2845601) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32084)));
    vlTOPp->mkMmUnit__DOT__product___05Fh2598720 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2625702) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2625431) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29586)));
    vlTOPp->mkMmUnit__DOT__product___05Fh837498 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh864480) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh864209) 
                                                           << 0xeU))) 
                                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9602)));
    vlTOPp->mkMmUnit__DOT__product___05Fh397198 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh424180) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh423909) 
                                                           << 0xeU))) 
                                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4606)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1057668 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1084650) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1084379) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12100)));
    vlTOPp->mkMmUnit__DOT__product___05Fh3479331 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3506313) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3506042) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39578)));
    vlTOPp->mkMmUnit__DOT__product___05Fh177044 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh204026) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh203755) 
                                                           << 0xeU))) 
                                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2108)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1277815 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1304797) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1304526) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14598)));
    vlTOPp->mkMmUnit__DOT__product___05Fh617348 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh644330) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh644059) 
                                                           << 0xeU))) 
                                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7104)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1497962 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1524944) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1524673) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17096)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1718109 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1745091) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1744820) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19594)));
    vlTOPp->mkMmUnit__DOT__product___05Fh1938279 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1965261) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1964990) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22092)));
    vlTOPp->mkMmUnit__DOT__product___05Fh2158426 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2185408) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2185137) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24590)));
    vlTOPp->mkMmUnit__DOT__product___05Fh2378573 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2405555) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2405284) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27088)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3154027 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3153665) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3153664));
    vlTOPp->mkMmUnit__DOT__y___05Fh2933880 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2933518) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2933517));
    vlTOPp->mkMmUnit__DOT__y___05Fh2713733 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2713371) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2713370));
    vlTOPp->mkMmUnit__DOT__y___05Fh2493563 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2493201) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2493200));
    vlTOPp->mkMmUnit__DOT__y___05Fh732341 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh731979) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh731978));
    vlTOPp->mkMmUnit__DOT__y___05Fh3374174 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3373812) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3373811));
    vlTOPp->mkMmUnit__DOT__y___05Fh71887 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh71525) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh71524));
    vlTOPp->mkMmUnit__DOT__y___05Fh952511 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh952149) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh952148));
    vlTOPp->mkMmUnit__DOT__y___05Fh292041 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh291679) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh291678));
    vlTOPp->mkMmUnit__DOT__y___05Fh512191 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh511829) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh511828));
    vlTOPp->mkMmUnit__DOT__y___05Fh1172658 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1172296) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1172295));
    vlTOPp->mkMmUnit__DOT__y___05Fh1392805 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1392443) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1392442));
    vlTOPp->mkMmUnit__DOT__y___05Fh1612952 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1612590) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1612589));
    vlTOPp->mkMmUnit__DOT__y___05Fh1833122 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1832760) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1832759));
    vlTOPp->mkMmUnit__DOT__y___05Fh2053269 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2052907) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2052906));
    vlTOPp->mkMmUnit__DOT__y___05Fh2273416 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2273054) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2273053));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37082 
        = ((0x20U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3259184)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_4_6_ETC___05F_d37017));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_5_4_ETC___05F_d34584 
        = ((0x20U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3039037)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_4_4_ETC___05F_d34519));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_5_1_ETC___05F_d32086 
        = ((0x20U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2818890)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_4_1_ETC___05F_d32021));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_5_9_ETC___05F_d29588 
        = ((0x20U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2598720)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_4_9_ETC___05F_d29523));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_5_22_ETC___05F_d9604 
        = ((0x20U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh837498)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_4_22_ETC___05F_d9539));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_5_23_ETC___05F_d4608 
        = ((0x20U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh397198)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_4_23_ETC___05F_d4543));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_5_1_ETC___05F_d12102 
        = ((0x20U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1057668)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_4_1_ETC___05F_d12037));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_5_9_ETC___05F_d39580 
        = ((0x20U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3479331)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_4_9_ETC___05F_d39515));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_5_73_ETC___05F_d2110 
        = ((0x20U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh177044)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_4_73_ETC___05F_d2045));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_5_4_ETC___05F_d14600 
        = ((0x20U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1277815)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_4_4_ETC___05F_d14535));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_5_72_ETC___05F_d7106 
        = ((0x20U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh617348)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_4_73_ETC___05F_d7041));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_5_6_ETC___05F_d17098 
        = ((0x20U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1497962)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_4_6_ETC___05F_d17033));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_5_9_ETC___05F_d19596 
        = ((0x20U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1718109)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_4_9_ETC___05F_d19531));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_5_1_ETC___05F_d22094 
        = ((0x20U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1938279)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_4_1_ETC___05F_d22029));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_5_4_ETC___05F_d24592 
        = ((0x20U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2158426)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_4_4_ETC___05F_d24527));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_5_6_ETC___05F_d27090 
        = ((0x20U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2378573)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_4_6_ETC___05F_d27025));
    vlTOPp->mkMmUnit__DOT__y___05Fh3153936 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3154026) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3154027));
    vlTOPp->mkMmUnit__DOT__y___05Fh2933789 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2933879) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2933880));
    vlTOPp->mkMmUnit__DOT__y___05Fh2713642 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2713732) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2713733));
    vlTOPp->mkMmUnit__DOT__y___05Fh2493472 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2493562) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2493563));
    vlTOPp->mkMmUnit__DOT__y___05Fh732250 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh732340) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh732341));
    vlTOPp->mkMmUnit__DOT__y___05Fh3374083 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3374173) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3374174));
    vlTOPp->mkMmUnit__DOT__y___05Fh71796 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh71886) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh71887));
    vlTOPp->mkMmUnit__DOT__y___05Fh952420 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh952510) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh952511));
    vlTOPp->mkMmUnit__DOT__y___05Fh291950 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh292040) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh292041));
    vlTOPp->mkMmUnit__DOT__y___05Fh512100 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh512190) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh512191));
    vlTOPp->mkMmUnit__DOT__y___05Fh1172567 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1172657) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1172658));
    vlTOPp->mkMmUnit__DOT__y___05Fh1392714 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1392804) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1392805));
    vlTOPp->mkMmUnit__DOT__y___05Fh1612861 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1612951) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1612952));
    vlTOPp->mkMmUnit__DOT__y___05Fh1833031 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1833121) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1833122));
    vlTOPp->mkMmUnit__DOT__y___05Fh2053178 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2053268) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2053269));
    vlTOPp->mkMmUnit__DOT__y___05Fh2273325 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2273415) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2273416));
    vlTOPp->mkMmUnit__DOT__x___05Fh3289727 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37082) 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq600 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37082))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3289818 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37082) 
                                                >> 0xcU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3289456 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37082) 
                                                >> 0xcU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3289547 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37082) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3289185 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37082) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3289276 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37082) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3288914 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37082) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3289005 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37082) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3288643 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37082) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3288734 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37082) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3288371 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37082) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3288462 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37082) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq599 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37082) 
                   >> 6U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A)))
            ? 0x80U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3288103 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_5_6_ETC___05F_d37082) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3069580 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_5_4_ETC___05F_d34584) 
                                                  >> 0xdU)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq565 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_5_4_ETC___05F_d34584))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3069671 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_5_4_ETC___05F_d34584) 
                                                >> 0xcU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3069309 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_5_4_ETC___05F_d34584) 
                                                >> 0xcU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3069400 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_5_4_ETC___05F_d34584) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3069038 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_5_4_ETC___05F_d34584) 
                                                >> 0xbU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3069129 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_5_4_ETC___05F_d34584) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3068767 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_5_4_ETC___05F_d34584) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3068858 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_5_4_ETC___05F_d34584) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
}
